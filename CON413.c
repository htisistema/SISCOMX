/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON413.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON413.PRG /q /oC:\hti\SISCOM\CON413.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:34:53 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON413.PRG"

HB_FUNC( CON413 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VERDESP );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( DBUSEAREA );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( QOUT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON413 )
{ "CON413", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON413 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VERDESP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERDESP )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "DBUSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUSEAREA )}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "Q_DUPP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_FOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "QOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( QOUT )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON413 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON413
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON413 = hb_vm_SymbolInit_CON413;
   #pragma data_seg()
#endif

HB_FUNC( CON413 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 36, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '1', '3', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 33,	/* MBANCO */
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MIMP_TOT 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 35, 2, 0,	/* MTP_PG 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 36, 2, 0,	/* MORD 2*/
	'C', 0, 
/* 00044 */ HB_P_LINEOFFSET, 3,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 3,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* BANK */
	HB_P_PUSHSYMNEAR, 6,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_CONTA */
	HB_P_PUSHSYMNEAR, 8,	/* MCODEMP */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 4, 0,	/* MARQ */
	HB_P_POPVARIABLE, 3, 0,	/* MIMP_TIPO */
/* 00089 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00176) */
/* 00171 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00176 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_PUSHSYMNEAR, 12,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00198 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00227) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00256) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00256 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00276 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '-', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00331 */ HB_P_LINEOFFSET, 19,	/* 31 */
	HB_P_PUSHSYMNEAR, 18,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00340 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHSYMNEAR, 19,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_DOSHORT, 4,
/* 00353 */ HB_P_LINEOFFSET, 21,	/* 33 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'd', '.', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00382 */ HB_P_LINEOFFSET, 22,	/* 34 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00411 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00441 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00471 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00501 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 't', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00531 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'p', '/', 'n', 'a', 'o', ' ', 'I', 'm', 'p', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00571 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'R', 'e', 's', 'u', 'm', 'o', '/', 'G', 'e', 'r', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00602 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'S', 'o', ' ', 'D', 'o', 'c', '.', 'E', 'n', 't', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'N', 'o', '.', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00664 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'i', 'p', '.', 'P', 'a', 'g', 'a', 'm', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00695 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 't', 'a', 'l', ' ', 'p', '/', ' ', 'd', 'i', 'a', ' ', 'e', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00754 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00767 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MTP_CT */
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_CONTA */
/* 00782 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 00790 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 00798 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MTIPO_DOC */
/* 00809 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MBANCO */
	HB_P_POPVARIABLE, 5, 0,	/* BANK */
/* 00824 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_LOCALNEARSETINT, 26, 0, 0,	/* MOD 0*/
	HB_P_PUSHLOCALNEAR, 26,	/* MOD */
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_FORN */
/* 00835 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 23,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 00858 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MNF 2*/
	'N', 0, 
/* 00866 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_LOCALNEARSETSTR, 19, 35, 0,	/* MTIT 35*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ')', 0, 
/* 00907 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_LOCALNEARSETSTR, 34, 2, 0,	/* MIMP_TOT 2*/
	'S', 0, 
/* 00915 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_LOCALNEARSETSTR, 35, 2, 0,	/* MTP_PG 2*/
	' ', 0, 
/* 00923 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 28,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 29, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01005 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 31,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01075 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 26, 0,	/* GETLIST */
/* 01097 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 31,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 3,
/* 01110 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 01156) */
/* 01122 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 12,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 14,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 01144 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01151 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01156 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
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
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01231) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01232) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01250 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01289) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01294) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* T_INI */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01325) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01326) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01344 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01383) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01388) */
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
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01424 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', 'X', 'X', 'X', 'X', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 36,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01501 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MTP_CT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01540) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01545) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', '_', 'c', 't', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'@', '!', ' ', 'X', 'X', 'X', 'X', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MTP_CT */
	HB_P_PUSHSYMNEAR, 36,	/* VERDESP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01603 */ HB_P_LINEOFFSET, 61,	/* 73 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 26, 0,	/* GETLIST */
/* 01625 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01640) */
	HB_P_JUMP, 230, 250,	/* -1306 (abs: 00331) */
/* 01640 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01679) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01684) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIPO_REL */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 37,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01729) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 78,	/* 78 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', '[', 'R', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'r', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', '[', 'G', ']', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01824 */ HB_P_LINEOFFSET, 66,	/* 78 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MNF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01863) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01868) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'n', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MNF */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01916 */ HB_P_LINEOFFSET, 67,	/* 79 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MBANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01955) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01960) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01993 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MTP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02032) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02037) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 38,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'D', 'e', 'i', 'x', 'a', 'r', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'o', 'u', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'a', 'j', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02148 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHSYMNEAR, 24,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 27,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MIMP_TOT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02187) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02192) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 't', 'o', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MIMP_TOT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 30, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02245 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_PUSHSYMNEAR, 32,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 26, 0,	/* GETLIST */
/* 02267 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_PUSHSYMNEAR, 33,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02282) */
	HB_P_JUMP, 100, 248,	/* -1948 (abs: 00331) */
/* 02282 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02303) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 02380) */
/* 02305 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'A', ']', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', ' ', '[', 'S', ']', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 27,	/* MTIPO_CON */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 02388) */
/* 02380 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 02388 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* TP_MES */
	HB_P_POPLOCALNEAR, 6,	/* TD_MES */
/* 02398 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 77, 25,	/* 6477 (abs: 08884) */
/* 02410 */ HB_P_LINEOFFSET, 81,	/* 93 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'o', 'r', 'd', 'e', 'm', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '[', 'A', ']', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'C', 0, 
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 36,	/* MORD */
/* 02486 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIT */
/* 02506 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHSYMNEAR, 40,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02565 */ HB_P_LINEOFFSET, 85,	/* 97 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'a', 'g', 'o', ' ', '=', ' ', 39, 39, ')', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02697 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 02740) */
/* 02708 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02740 */ HB_P_LINEOFFSET, 89,	/* 101 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTP_CT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 02790) */
/* 02751 */ HB_P_LINEOFFSET, 90,	/* 102 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 't', 'i', 'p', '_', 'f', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTP_CT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02790 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 02844) */
/* 02802 */ HB_P_LINEOFFSET, 93,	/* 105 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02844 */ HB_P_LINEOFFSET, 95,	/* 107 */
	HB_P_PUSHLOCALNEAR, 32,	/* MNF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02890) */
/* 02855 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02890 */ HB_P_LINEOFFSET, 98,	/* 110 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 02935) */
/* 02901 */ HB_P_LINEOFFSET, 99,	/* 111 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02935 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 02979) */
/* 02946 */ HB_P_LINEOFFSET, 102,	/* 114 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 't', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 02979 */ HB_P_LINEOFFSET, 104,	/* 116 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 03027) */
/* 02991 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 03027 */ HB_P_LINEOFFSET, 107,	/* 119 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 51,	/* 51 (abs: 03088) */
/* 03039 */ HB_P_LINEOFFSET, 108,	/* 120 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'f', 'o', 'r', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_CONTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 03088 */ HB_P_LINEOFFSET, 110,	/* 122 */
	HB_P_PUSHLOCALNEAR, 36,	/* MORD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 03135) */
/* 03099 */ HB_P_LINEOFFSET, 111,	/* 123 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'v', 'e', 'n', 'c', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 03184) */
/* 03135 */ HB_P_LINEOFFSET, 113,	/* 125 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'v', 'e', 'n', 'c', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'b', 'a', 'n', 'c', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 03184 */ HB_P_LINEOFFSET, 116,	/* 128 */
	HB_P_PUSHSYMNEAR, 45,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 4,
/* 03213 */ HB_P_LINEOFFSET, 117,	/* 129 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_POPVARIABLE, 46, 0,	/* MALIAS */
/* 03227 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 03243 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHSYMNEAR, 47,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03250 */ HB_P_LINEOFFSET, 120,	/* 132 */
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 03322) */
/* 03259 */ HB_P_LINEOFFSET, 121,	/* 133 */
	HB_P_PUSHSYMNEAR, 49,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03306 */ HB_P_LINEOFFSET, 122,	/* 134 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 46, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 50,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
	HB_P_JUMP, 84, 244,	/* -2988 (abs: 00331) */
/* 03322 */ HB_P_LINEOFFSET, 125,	/* 137 */
	HB_P_PUSHSYMNEAR, 51,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'A', 'P', 'A', 'G', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03353) */
	HB_P_JUMP, 53, 244,	/* -3019 (abs: 00331) */
/* 03353 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MT_DIA 0*/
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 03387 */ HB_P_LINEOFFSET, 130,	/* 142 */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 03409 */ HB_P_LINEOFFSET, 131,	/* 143 */
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
	HB_P_POPLOCALNEAR, 20,	/* MTIPO */
/* 03435 */ HB_P_LINEOFFSET, 132,	/* 144 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 03443 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 230, 11,	/* 3046 (abs: 06496) */
/* 03453 */ HB_P_LINEOFFSET, 134,	/* 146 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03471) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 03724) */
/* 03474 */ HB_P_LINEOFFSET, 135,	/* 147 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 03480 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03495) */
/* 03488 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03495 */ HB_P_LINEOFFSET, 139,	/* 151 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 03508 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03522 */ HB_P_LINEOFFSET, 141,	/* 153 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 03666 */ HB_P_LINEOFFSET, 142,	/* 154 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03699 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 03724 */ HB_P_LINEOFFSET, 145,	/* 157 */
	HB_P_PUSHSYMNEAR, 61,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 03745 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03765) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 97, 2,	/* 609 (abs: 04374) */
/* 03768 */ HB_P_LINEOFFSET, 147,	/* 159 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 71, 2,	/* 583 (abs: 04360) */
/* 03780 */ HB_P_LINEOFFSET, 148,	/* 160 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 210, 1,	/* 466 (abs: 04255) */
/* 03792 */ HB_P_LINEOFFSET, 149,	/* 161 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 03845 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03903 */ HB_P_LINEOFFSET, 151,	/* 163 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03951 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03984 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04002) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 102, 1,	/* 358 (abs: 04360) */
/* 04005 */ HB_P_LINEOFFSET, 154,	/* 166 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 04011 */ HB_P_LINEOFFSET, 155,	/* 167 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 04024) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04024 */ HB_P_LINEOFFSET, 156,	/* 168 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 04037 */ HB_P_LINEOFFSET, 157,	/* 169 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04051 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 04195 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04228 */ HB_P_LINEOFFSET, 160,	/* 172 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 04360) */
/* 04255 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04312 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04360 */ HB_P_LINEOFFSET, 167,	/* 179 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MT_DIA 0*/
/* 04366 */ HB_P_LINEOFFSET, 168,	/* 180 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 04374 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04409) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 04420) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04430) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 200, 1,	/* 456 (abs: 04886) */
/* 04433 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 159, 1,	/* 415 (abs: 04854) */
/* 04442 */ HB_P_LINEOFFSET, 172,	/* 184 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04560 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04585 */ HB_P_LINEOFFSET, 174,	/* 186 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04603) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 04854) */
/* 04606 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 04612 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 04625) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04625 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 04638 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04652 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 04796 */ HB_P_LINEOFFSET, 180,	/* 192 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04829 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 04854 */ HB_P_LINEOFFSET, 184,	/* 196 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
/* 04864 */ HB_P_LINEOFFSET, 185,	/* 197 */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 04886 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04906) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 97, 2,	/* 609 (abs: 05515) */
/* 04909 */ HB_P_LINEOFFSET, 188,	/* 200 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 71, 2,	/* 583 (abs: 05501) */
/* 04921 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 210, 1,	/* 466 (abs: 05396) */
/* 04933 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 04986 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05044 */ HB_P_LINEOFFSET, 192,	/* 204 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05092 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05125 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05143) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 102, 1,	/* 358 (abs: 05501) */
/* 05146 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 05152 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 05165) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05165 */ HB_P_LINEOFFSET, 197,	/* 209 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05178 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05192 */ HB_P_LINEOFFSET, 199,	/* 211 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 05336 */ HB_P_LINEOFFSET, 200,	/* 212 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05369 */ HB_P_LINEOFFSET, 201,	/* 213 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 05501) */
/* 05396 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05453 */ HB_P_LINEOFFSET, 205,	/* 217 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05501 */ HB_P_LINEOFFSET, 208,	/* 220 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MT_DIA 0*/
/* 05507 */ HB_P_LINEOFFSET, 209,	/* 221 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 05515 */ HB_P_LINEOFFSET, 211,	/* 223 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05550) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05561) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 05571) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 194, 0,	/* 194 (abs: 05765) */
/* 05574 */ HB_P_LINEOFFSET, 212,	/* 224 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 150, 0,	/* 150 (abs: 05730) */
/* 05583 */ HB_P_LINEOFFSET, 213,	/* 225 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05705 */ HB_P_LINEOFFSET, 214,	/* 226 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 05730 */ HB_P_LINEOFFSET, 216,	/* 228 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
/* 05740 */ HB_P_LINEOFFSET, 217,	/* 229 */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
	HB_P_JUMP, 241, 246,	/* -2319 (abs: 03443) */
/* 05765 */ HB_P_LINEOFFSET, 220,	/* 232 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 2,	/* 666 (abs: 06440) */
/* 05777 */ HB_P_LINEOFFSET, 221,	/* 233 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* FORNEC */
	HB_P_DOSHORT, 1,
/* 05802 */ HB_P_LINEOFFSET, 222,	/* 234 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* CLIENTE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* TIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05842 */ HB_P_LINEOFFSET, 223,	/* 235 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05876 */ HB_P_LINEOFFSET, 224,	/* 236 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_DOSHORT, 1,
/* 05905 */ HB_P_LINEOFFSET, 225,	/* 237 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05939 */ HB_P_LINEOFFSET, 226,	/* 238 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 05973 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06026 */ HB_P_LINEOFFSET, 228,	/* 240 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_PUSHMEMVAR, 74, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06071 */ HB_P_LINEOFFSET, 229,	/* 241 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* BANCO */
	HB_P_DOSHORT, 1,
/* 06100 */ HB_P_LINEOFFSET, 230,	/* 242 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* TP_PG */
	HB_P_DOSHORT, 1,
/* 06129 */ HB_P_LINEOFFSET, 231,	/* 243 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 06392) */
/* 06142 */ HB_P_LINEOFFSET, 232,	/* 244 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 06148 */ HB_P_LINEOFFSET, 233,	/* 245 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06163) */
/* 06156 */ HB_P_LINEOFFSET, 234,	/* 246 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06163 */ HB_P_LINEOFFSET, 236,	/* 248 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06176 */ HB_P_LINEOFFSET, 237,	/* 249 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06190 */ HB_P_LINEOFFSET, 238,	/* 250 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 06334 */ HB_P_LINEOFFSET, 239,	/* 251 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06367 */ HB_P_LINEOFFSET, 240,	/* 252 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 06392 */ HB_P_LINEOFFSET, 242,	/* 254 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* OBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 06440) */
/* 06405 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06440 */ HB_P_LINEOFFSET, 246,	/* 258 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT 1*/
/* 06446 */ HB_P_LINEOFFSET, 247,	/* 259 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* TOT_G 1*/
/* 06452 */ HB_P_LINEOFFSET, 248,	/* 260 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
/* 06463 */ HB_P_LINEOFFSET, 249,	/* 261 */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
/* 06474 */ HB_P_LINEOFFSET, 250,	/* 262 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 06485 */ HB_P_LINEOFFSET, 251,	/* 263 */
	HB_P_PUSHSYMNEAR, 78,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 22, 244,	/* -3050 (abs: 03443) */
/* 06496 */ HB_P_LINEOFFSET, 253,	/* 265 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 84, 2,	/* 596 (abs: 07101) */
/* 06508 */ HB_P_LINEOFFSET, 254,	/* 266 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 221, 1,	/* 477 (abs: 06994) */
/* 06520 */ HB_P_LINEOFFSET, 255,	/* 267 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 06573 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06632 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06681 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06715 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06734) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 111, 1,	/* 367 (abs: 07101) */
/* 06737 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 06744 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 06758) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06758 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 06772 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06787 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 06932 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06966 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 07101) */
/* 06994 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07052 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07101 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 79,	/* QOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07192 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07213) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07223) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 115, 2,	/* 627 (abs: 07850) */
/* 07226 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 86, 2,	/* 598 (abs: 07834) */
/* 07239 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 222, 1,	/* 478 (abs: 07727) */
/* 07252 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07306 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07365 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07414 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07448 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 07467) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 111, 1,	/* 367 (abs: 07834) */
/* 07470 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 07477 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 07491) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07491 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07505 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07520 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 07665 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07699 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 07834) */
/* 07727 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07785 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07834 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MT_DIA 0*/
/* 07841 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 07850 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 34,	/* MIMP_TOT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 0,	/* 246 (abs: 08106) */
/* 07863 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07986 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08106 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 156, 1,	/* 412 (abs: 08529) */
/* 08120 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08128 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 08135 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08149 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 08164 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 08209 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 08235 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHLOCALNEAR, 26,	/* MOD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 131, 0,	/* 131 (abs: 08374) */
/* 08246 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 128, 0,	/* 128 (abs: 08499) */
/* 08374 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08499 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 118, 13,	/* 3446 (abs: 11972) */
/* 08529 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 08545 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 08590 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHLOCALNEAR, 26,	/* MOD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 131, 0,	/* 131 (abs: 08729) */
/* 08601 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 128, 0,	/* 128 (abs: 08854) */
/* 08729 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08854 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 19, 12,	/* 3091 (abs: 11972) */
/* 08884 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 12,	/* 3078 (abs: 11972) */
/* 08897 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIT */
/* 08918 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 40,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08978 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'a', 'g', 'o', ' ', '=', ' ', 39, 39, ')', ' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09111 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 09156) */
/* 09123 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09156 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTP_CT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 09204) */
/* 09168 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'f', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MTP_CT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09204 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 09260) */
/* 09217 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09260 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 32,	/* MNF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09308) */
/* 09272 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09308 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 09355) */
/* 09320 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09355 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 09401) */
/* 09367 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 't', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09401 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 09451) */
/* 09414 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 41,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09451 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'p', 'a', 'g', 'o', ',', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09498 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 45,	/* DBUSEAREA */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'Q', 'L', 'R', 'D', 'D', 0, 
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 4,
/* 09528 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_POPVARIABLE, 46, 0,	/* MALIAS */
/* 09543 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', '_', 'd', 'u', 'p', 'p', 0, 
	HB_P_DOSHORT, 1,
/* 09560 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 47,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09568 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 09643) */
/* 09578 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 49,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09626 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHALIAS,
	HB_P_PUSHVARIABLE, 46, 0,	/* MALIAS */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 50,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
	HB_P_JUMP, 163, 219,	/* -9309 (abs: 00331) */
/* 09643 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 51,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'A', 'P', 'A', 'G', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 09675) */
	HB_P_JUMP, 131, 219,	/* -9341 (abs: 00331) */
/* 09675 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MT_DIA 0*/
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* VENCER */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 09710 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 13,	/* L_MES */
/* 09733 */ HB_P_LINE, 124, 1,	/* 380 */
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
	HB_P_POPLOCALNEAR, 20,	/* MTIPO */
/* 09760 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_POPLOCALNEAR, 24,	/* MDIA */
/* 09769 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 151, 7,	/* 1943 (abs: 11720) */
/* 09780 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* FORNEC */
	HB_P_POPLOCALNEAR, 31,	/* MCOD_AUX */
/* 09789 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* CLIENTE */
	HB_P_POPLOCALNEAR, 28,	/* MCLIENTE */
/* 09798 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* TIP_FOR */
	HB_P_POPLOCALNEAR, 29,	/* MTIP_FOR */
/* 09807 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MCOD_AUX */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* FORNEC */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 09827) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 254, 3,	/* 1022 (abs: 10849) */
/* 09830 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 61,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 09852 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 09871) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 10103) */
/* 09874 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 09881 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 09895) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09895 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 09909 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09924 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 10069 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10103 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 2,	/* 666 (abs: 10779) */
/* 10116 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* FORNEC */
	HB_P_DOSHORT, 1,
/* 10142 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* CLIENTE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* TIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10183 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* TIPO */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DUPLICATA */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10218 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NUMERO */
	HB_P_DOSHORT, 1,
/* 10248 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 10283 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 10318 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10372 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* VENC */
	HB_P_PUSHMEMVAR, 74, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10418 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* BANCO */
	HB_P_DOSHORT, 1,
/* 10448 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* TP_PG */
	HB_P_DOSHORT, 1,
/* 10478 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* OBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 10528) */
/* 10492 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10528 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 10547) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 10779) */
/* 10550 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 10557 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 10571) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10571 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 10585 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10600 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 10745 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10779 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* TOT 1*/
/* 10786 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* TOT_G 1*/
/* 10793 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* TOT_DIN */
/* 10805 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* TOT_GIN */
/* 10817 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 23,	/* MT_DIA */
	HB_P_PUSHSYMNEAR, 54,	/* Q_DUPP */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* VALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MT_DIA */
/* 10829 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 78,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 10838 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 48,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 241, 251,	/* -1039 (abs: 09807) */
/* 10849 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 35,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 190, 251,	/* -1090 (abs: 09769) */
/* 10862 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 226, 0,	/* 226 (abs: 11099) */
/* 10876 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10884 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 10891 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 10905 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10920 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 11065 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11099 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 1,	/* 434 (abs: 11543) */
/* 11112 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11146 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11244 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11278 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
/* 11289 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 11308) */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 153, 1,	/* 409 (abs: 11717) */
/* 11311 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 11318 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 11332) */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11332 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 11346 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11361 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'C', 'o', 'd', '.', ' ', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'C', 'o', 'b', ' ', 'T', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 11506 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 177, 0,	/* 177 (abs: 11717) */
/* 11543 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MCOD_AUX */
	HB_P_DOSHORT, 1,
/* 11567 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MCLIENTE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* MTIP_FOR */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11604 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11706 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT_DIN 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* TOT_DIN */
	HB_P_POPLOCALNEAR, 14,	/* TOT */
	HB_P_JUMP, 100, 248,	/* -1948 (abs: 09769) */
/* 11720 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 11762) */
/* 11733 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11741 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 11748 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 58,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 11762 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 59,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 11777 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 11822 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11945 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 20,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 11972 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 57,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11980 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 81,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 11990 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 82,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 82,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 82,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 12032 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 83,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'A', 'P', 'A', 'G', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 52, 210,	/* -11724 (abs: 00331) */
	HB_P_ENDPROC
/* 12059 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

