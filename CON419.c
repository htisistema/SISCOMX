/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON419.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON419.PRG /q /oC:\hti\SISCOM\CON419.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:07 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON419.PRG"

HB_FUNC( CON419 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON419 )
{ "CON419", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON419 )}, NULL },
{ "MCOD_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "CONS_DUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "X", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON419 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON419
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON419 = hb_vm_SymbolInit_CON419;
   #pragma data_seg()
#endif

HB_FUNC( CON419 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 24, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '1', '9', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_DOC */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_DET 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MDOC_APAG 0*/
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MDOC_REC 0*/
/* 00040 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 10,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_FOR */
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_CONTA */
	HB_P_PUSHSYMNEAR, 3,	/* PAG */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 6,	/* MARQ */
	HB_P_PUSHSYMNEAR, 8,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 9,	/* CONS_CLI */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 9, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 6, 0,	/* MARQ */
	HB_P_POPVARIABLE, 5, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 00097 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'P', 'A', 'G', 'A', 'R', ' ', 'X', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00173) */
/* 00168 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00173 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00202) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00202 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00231) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00231 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00260) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00260 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00287) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00287 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00316) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00316 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 15,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00336 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 16,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 4,
/* 00349 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00389 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00429 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00470 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 19,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00485 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00518 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00559 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00600 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00641 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 19,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00656 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 00692 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00733 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00774 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', '.', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00815 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'l', 'a', 't', '.', ' ', '[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', '[', 'D', ']', 'e', 't', 'e', 'l', 'h', 'a', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00871 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'[', 'V', ']', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', ' ', '[', 'P', ']', 'a', 'g', 'a', 's', ' ', 'o', 'u', ' ', '[', 'E', ']', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00927 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'a', 'l', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00970 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO_IMP */
/* 00983 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 22,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 00992 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 22,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 01004 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MSALDO_INI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_POPLOCALNEAR, 23,	/* MDOC_APAG */
/* 01031 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO_DOC */
/* 01042 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_CONTA */
/* 01054 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 7,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* BANK */
	HB_P_POPLOCALNEAR, 16,	/* MTIPO_REL */
/* 01067 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_DET 2*/
	'D', 0, 
/* 01075 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 27,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01157 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01195) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01200) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 67,	/* 67 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01301 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01340) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01345) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 66,	/* 66 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01445 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 32,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01516 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01555) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01560) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 144,	/* 144 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 130,	/* 130 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', '<', 'P', 'A', '>', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', '<', 'D', 'U', '>', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '<', 'C', 'H', '>', 'c', 'h', 'e', 'q', 'u', 'e', 's', ' ', '<', 'F', 'R', '>', 'f', 'r', 'e', 't', 'e', 's', ' ', 'o', 'u', ' ', 'N', 'A', 'O', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01746 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', 'X', '.', 'X', 'X', 0, 
	HB_P_PUSHBLOCKSHORT, 25,	/* 25 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 33,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01815) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 193,	/* 193 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 181, 0,	/* 181 (abs: 02008) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 166,	/* 166 */
	'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 'o', ' ', 'G', 'r', 'u', 'p', 'o', ' ', 'd', 'a', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 's', 'o', ' ', 'o', ' ', 'p', 'r', 'i', 'm', 'e', 'i', 'r', 'o', ' ', 'd', 'i', 'g', 'i', 't', 'o', ' ', 'd', 'a', ' ', 'c', 'o', 'n', 't', 'a', ',', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'e', 'n', 'd', 'o', ' ', 't', 'o', 'd', 'o', ' ', 'o', 's', ' ', 'e', 's', 'p', 'a', 'c', 'o', ' ', 'p', '/', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 't', 'a', ' ', '<', 'F', '9', '>', 'p', '/', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'a', 'n', 'd', 'o', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02025 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02064) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02069) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02118) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 90, 0,	/* 90 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 02208) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02225 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02264) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02269) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02317) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 91, 0,	/* 91 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 02408) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02425 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02464) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02469) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02520 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DET */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02559) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02564) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'D', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02618 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02657) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02662) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', ',', 'P', ',', 'E', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02718 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 26,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MSALDO_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02757) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02762) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 25, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02810 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 37,	/* READMODAL */
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
/* 02832 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 38,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 02878) */
/* 02844 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 39,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 40,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 02866 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02873 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02878 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHSYMNEAR, 42,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02921) */
/* 02901 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSYMNEAR, 42,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'1', '1', '/', '1', '1', '/', '1', '1', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 02921 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 42,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02964) */
/* 02944 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_PUSHSYMNEAR, 42,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 02964 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_PUSHSYMNEAR, 43,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02974 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_DOSHORT, 2,
/* 03000 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 03006 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_MINUS,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 03059) */
/* 03022 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 13, 0,	/* 13 */
	HB_P_DOSHORT, 2,
/* 03051 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 211,	/* -45 (abs: 03012) */
/* 03059 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 03065 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 35, 16,	/* 4131 (abs: 07212) */
/* 03084 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 104, 5,	/* 1384 (abs: 04477) */
/* 03096 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_LOCALNEARSETSTR, 5, 52, 0,	/* MTIT 52*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'X', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ')', 0, 
/* 03154 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 03162 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03240 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03271 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 03314) */
/* 03282 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03314 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 03368) */
/* 03326 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03368 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 03416) */
/* 03380 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03416 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03437 */ HB_P_LINEOFFSET, 96,	/* 106 */
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
/* 03461 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 03805) */
/* 03476 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 03482 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 49, 1,	/* 305 (abs: 03805) */
/* 03503 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 03528 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 03631) */
/* 03547 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03577) */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 03795) */
/* 03577 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 03626) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03631) */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 03795) */
/* 03631 */ HB_P_LINEOFFSET, 110,	/* 120 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 03681) */
/* 03651 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 03759) */
/* 03681 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 03731) */
/* 03701 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 03759) */
/* 03731 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 03759 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 03787 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 03793 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 03488) */
/* 03805 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 03813 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03883 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03912 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 03946 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 04000) */
/* 03957 */ HB_P_LINEOFFSET, 126,	/* 136 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04000 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04045) */
/* 04011 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04045 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 04093) */
/* 04057 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04093 */ HB_P_LINEOFFSET, 134,	/* 144 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 04137) */
/* 04104 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04137 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04158 */ HB_P_LINEOFFSET, 138,	/* 148 */
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
/* 04182 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 192, 11,	/* 3008 (abs: 07202) */
/* 04197 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 04203 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 04474) */
/* 04224 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04249 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04300) */
/* 04269 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 131, 0,	/* 131 (abs: 04428) */
/* 04300 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04350) */
/* 04320 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 04428) */
/* 04350 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04400) */
/* 04370 */ HB_P_LINEOFFSET, 148,	/* 158 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 04428) */
/* 04400 */ HB_P_LINEOFFSET, 150,	/* 160 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 04428 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 04456 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 04462 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 250, 254,	/* -262 (abs: 04209) */
	HB_P_JUMP, 168, 10,	/* 2728 (abs: 07202) */
/* 04477 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 81, 5,	/* 1361 (abs: 05847) */
/* 04489 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_LOCALNEARSETSTR, 5, 51, 0,	/* MTIT 51*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'D', 'A', 'S', ' ', 'X', ' ', 'P', 'A', 'G', 'A', 'S', ' ', '(', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', 's', ')', 0, 
/* 04546 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 04554 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04634 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04669 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 04712) */
/* 04680 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04712 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 04766) */
/* 04724 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04766 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 04814) */
/* 04778 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 04814 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04835 */ HB_P_LINEOFFSET, 171,	/* 181 */
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
/* 04859 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 05203) */
/* 04874 */ HB_P_LINEOFFSET, 173,	/* 183 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 04880 */ HB_P_LINEOFFSET, 174,	/* 184 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 49, 1,	/* 305 (abs: 05203) */
/* 04901 */ HB_P_LINEOFFSET, 175,	/* 185 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04926 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 05029) */
/* 04945 */ HB_P_LINEOFFSET, 178,	/* 188 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04975) */
	HB_P_JUMP, 221, 0,	/* 221 (abs: 05193) */
/* 04975 */ HB_P_LINEOFFSET, 181,	/* 191 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 05024) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05029) */
	HB_P_JUMP, 167, 0,	/* 167 (abs: 05193) */
/* 05029 */ HB_P_LINEOFFSET, 185,	/* 195 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05079) */
/* 05049 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 05157) */
/* 05079 */ HB_P_LINEOFFSET, 187,	/* 197 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05129) */
/* 05099 */ HB_P_LINEOFFSET, 188,	/* 198 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 05157) */
/* 05129 */ HB_P_LINEOFFSET, 190,	/* 200 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 05157 */ HB_P_LINEOFFSET, 192,	/* 202 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 05185 */ HB_P_LINEOFFSET, 193,	/* 203 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 05191 */ HB_P_LINEOFFSET, 194,	/* 204 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 198, 254,	/* -314 (abs: 04886) */
/* 05203 */ HB_P_LINEOFFSET, 196,	/* 206 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 05211 */ HB_P_LINEOFFSET, 197,	/* 207 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05283 */ HB_P_LINEOFFSET, 198,	/* 208 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05316 */ HB_P_LINEOFFSET, 199,	/* 209 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 05370) */
/* 05327 */ HB_P_LINEOFFSET, 200,	/* 210 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05370 */ HB_P_LINEOFFSET, 202,	/* 212 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05415) */
/* 05381 */ HB_P_LINEOFFSET, 203,	/* 213 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05415 */ HB_P_LINEOFFSET, 205,	/* 215 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 05463) */
/* 05427 */ HB_P_LINEOFFSET, 206,	/* 216 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05463 */ HB_P_LINEOFFSET, 208,	/* 218 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 05507) */
/* 05474 */ HB_P_LINEOFFSET, 209,	/* 219 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05507 */ HB_P_LINEOFFSET, 211,	/* 221 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05528 */ HB_P_LINEOFFSET, 212,	/* 222 */
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
/* 05552 */ HB_P_LINEOFFSET, 213,	/* 223 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 102, 6,	/* 1638 (abs: 07202) */
/* 05567 */ HB_P_LINEOFFSET, 214,	/* 224 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 05573 */ HB_P_LINEOFFSET, 215,	/* 225 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 05844) */
/* 05594 */ HB_P_LINEOFFSET, 216,	/* 226 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05619 */ HB_P_LINEOFFSET, 217,	/* 227 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 05670) */
/* 05639 */ HB_P_LINEOFFSET, 218,	/* 228 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 131, 0,	/* 131 (abs: 05798) */
/* 05670 */ HB_P_LINEOFFSET, 219,	/* 229 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05720) */
/* 05690 */ HB_P_LINEOFFSET, 220,	/* 230 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 80,	/* 80 (abs: 05798) */
/* 05720 */ HB_P_LINEOFFSET, 221,	/* 231 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 05770) */
/* 05740 */ HB_P_LINEOFFSET, 222,	/* 232 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 30,	/* 30 (abs: 05798) */
/* 05770 */ HB_P_LINEOFFSET, 224,	/* 234 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 05798 */ HB_P_LINEOFFSET, 226,	/* 236 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 05826 */ HB_P_LINEOFFSET, 227,	/* 237 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 05832 */ HB_P_LINEOFFSET, 228,	/* 238 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 250, 254,	/* -262 (abs: 05579) */
	HB_P_JUMP, 78, 5,	/* 1358 (abs: 07202) */
/* 05847 */ HB_P_LINEOFFSET, 231,	/* 241 */
	HB_P_LOCALNEARSETSTR, 5, 48, 0,	/* MTIT 48*/
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'D', 'A', 'S', ' ', 'X', ' ', 'P', 'A', 'G', 'A', 'S', ' ', '(', 'E', 'm', 'i', 's', 's', 'a', 'o', ')', 0, 
/* 05901 */ HB_P_LINEOFFSET, 232,	/* 242 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 05909 */ HB_P_LINEOFFSET, 233,	/* 243 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', '_', 'f', 'o', 'r', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 05990 */ HB_P_LINEOFFSET, 235,	/* 245 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 06033) */
/* 06001 */ HB_P_LINEOFFSET, 236,	/* 246 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06033 */ HB_P_LINEOFFSET, 238,	/* 248 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 06087) */
/* 06045 */ HB_P_LINEOFFSET, 239,	/* 249 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_FOR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06087 */ HB_P_LINEOFFSET, 241,	/* 251 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 06135) */
/* 06099 */ HB_P_LINEOFFSET, 242,	/* 252 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06135 */ HB_P_LINEOFFSET, 244,	/* 254 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06156 */ HB_P_LINEOFFSET, 245,	/* 255 */
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
/* 06180 */ HB_P_LINEOFFSET, 246,	/* 256 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 06532) */
/* 06195 */ HB_P_LINEOFFSET, 247,	/* 257 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 06201 */ HB_P_LINEOFFSET, 248,	/* 258 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 57, 1,	/* 313 (abs: 06532) */
/* 06222 */ HB_P_LINEOFFSET, 249,	/* 259 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 06247 */ HB_P_LINEOFFSET, 251,	/* 261 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 86,	/* 86 (abs: 06350) */
/* 06266 */ HB_P_LINEOFFSET, 252,	/* 262 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_ONE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06296) */
	HB_P_JUMP, 229, 0,	/* 229 (abs: 06522) */
/* 06296 */ HB_P_LINEOFFSET, 255,	/* 265 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 31,	/* 31 (abs: 06345) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06350) */
	HB_P_JUMP, 175, 0,	/* 175 (abs: 06522) */
/* 06350 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06402) */
/* 06371 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 06483) */
/* 06402 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06454) */
/* 06423 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 31,	/* 31 (abs: 06483) */
/* 06454 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 06483 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 06512 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MDOC_APAG 1*/
/* 06519 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 190, 254,	/* -322 (abs: 06207) */
/* 06532 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 45, 0,	/* CONS_DUP */
/* 06541 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'c', ',', 't', 'i', 'p', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06615 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06650 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 06706) */
/* 06662 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06706 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 06753) */
/* 06718 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06753 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 06803) */
/* 06766 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06803 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 06849) */
/* 06815 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 47, 0,	/* CCOMM */
/* 06849 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_MESSAGE, 49, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 50,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 47, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 45, 0,	/* CONS_DUP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06871 */ HB_P_LINE, 41, 1,	/* 297 */
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
/* 06896 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 37, 1,	/* 293 (abs: 07202) */
/* 06912 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 51, 0,	/* X */
/* 06919 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* CONS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 8, 1,	/* 264 (abs: 07202) */
/* 06941 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 52,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 06967 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 07020) */
/* 06988 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 136, 0,	/* 136 (abs: 07153) */
/* 07020 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 07072) */
/* 07041 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 07153) */
/* 07072 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 07124) */
/* 07093 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 31,	/* 31 (abs: 07153) */
/* 07124 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 07153 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 45, 0,	/* CONS_DUP */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 07182 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MDOC_REC 1*/
/* 07189 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHVARIABLE, 51, 0,	/* X */
	HB_P_INC,
	HB_P_POPVARIABLE, 51, 0,	/* X */
	HB_P_JUMP, 239, 254,	/* -273 (abs: 06926) */
/* 07202 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMP, 214, 239,	/* -4138 (abs: 03071) */
/* 07212 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 55,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'P', 'A', 'G', 'X', 'R', 'E', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07244) */
	HB_P_JUMP, 129, 231,	/* -6271 (abs: 00970) */
/* 07244 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTIPO */
/* 07271 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 07278 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 07285 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHLOCALNEAR, 17,	/* MSALDO_INI */
	HB_P_POPLOCALNEAR, 14,	/* MSALDO */
/* 07292 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07307 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07322 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 181, 1,	/* 437 (abs: 07769) */
/* 07335 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'R', ' ', 'E', ' ', 'C', ' ', 'E', ' ', 'B', ' ', 'E', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'A', ' ', 'G', ' ', 'A', ' ', 'R', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07465 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'a', 'r', 't', 'a', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 07627 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07661 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'A', 'L', 'D', 'O', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'D', 'O', ' ', 'P', 'E', 'L', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 07723 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 124,	/* 124 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 241, 0,	/* 241 (abs: 08007) */
/* 07769 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 07868 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07902 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'A', 'L', 'D', 'O', ' ', 'I', 'N', 'I', 'C', 'I', 'A', 'L', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'D', 'O', ' ', 'P', 'E', 'L', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 1,
/* 07964 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08007 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 08014 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHSYMNEAR, 44,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 9, 6,	/* 1545 (abs: 09576) */
/* 08034 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08054) */
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 26, 2,	/* 538 (abs: 08592) */
/* 08057 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 3, 0,	/* PAG */
/* 08069 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08087) */
/* 08079 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 61,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08087 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 56,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* PAG */
	HB_P_PUSHLOCALNEAR, 5,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 6,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08102 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 57,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08117 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 76, 1,	/* 332 (abs: 08459) */
/* 08130 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'R', ' ', 'E', ' ', 'C', ' ', 'E', ' ', 'B', ' ', 'E', ' ', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'T', ' ', 'A', ' ', 'S', ' ', ' ', ' ', 'A', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'A', ' ', 'G', ' ', 'A', ' ', 'R', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08260 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'a', 'r', 't', 'a', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', ' ', ' ', ' ', 'O', 'u', 't', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08422 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 136, 0,	/* 136 (abs: 08592) */
/* 08459 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', 'C', 'o', 'n', 't', 'a', 's', ' ', 'A', 'p', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08558 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08592 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 08625) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08630) */
	HB_P_JUMP, 174, 3,	/* 942 (abs: 09569) */
/* 08630 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08659 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 2,	/* 605 (abs: 09274) */
/* 08672 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08724 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08776 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08828 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08880 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08934 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08986 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09038 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09090 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09144 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09205 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 238, 0,	/* 238 (abs: 09509) */
/* 09274 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09328 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09382 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09443 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 62,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09509 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSALDO */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MSALDO */
/* 09534 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_REC */
/* 09550 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHLOCALNEAR, 11,	/* M_DOC */
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_APA */
/* 09566 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMP, 240, 249,	/* -1552 (abs: 08021) */
/* 09576 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 09621 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHLOCALNEAR, 16,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 09907) */
/* 09634 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09769 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDOC_APAG */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 17, 1,	/* 273 (abs: 10177) */
/* 09907 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDOC_REC */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10042 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 'Q', 't', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDOC_APAG */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10177 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 10280 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 60,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_REC */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_APA */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10400 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10427 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 61,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10435 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 64,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10445 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 65,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10487 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 66,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'P', 'A', 'G', 'X', 'R', 'E', 'C', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 10510 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10518 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10524 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

