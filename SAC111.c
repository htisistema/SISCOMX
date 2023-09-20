/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC111.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\SIACHB\TESTE\SAC111.PRG /q /oC:\helio\siachb\SAC111.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2020.05.12 16:30:15 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC111.PRG"

HB_FUNC( SAC111 );
HB_FUNC( FATO_DESC );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( TIRA_ACENTO );
HB_FUNC_EXTERN( UPDATED );
HB_FUNC_EXTERN( VERCODBARRA );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( SACCST );
HB_FUNC_EXTERN( VERCST );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( CRIPTOGRAFIA );
HB_FUNC_EXTERN( SR_SETACTIVECONNECTION );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( INKEY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC111 )
{ "SAC111", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC111 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MFABRICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSELE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MORDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESC_ICM1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSUB_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MCOD_CLF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "FATO_DESC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FATO_DESC )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "TIRA_ACENTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIRA_ACENTO )}, NULL },
{ "UPDATED", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPDATED )}, NULL },
{ "VERCODBARRA", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCODBARRA )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "SACCST", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCST )}, NULL },
{ "VERCST", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCST )}, NULL },
{ "MINSENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIPTOGRAFIA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTOGRAFIA )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONS_CAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_SETACTIVECONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETACTIVECONNECTION )}, NULL },
{ "NCNN1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC111 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC111
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC111 = hb_vm_SymbolInit_SAC111;
   #pragma data_seg()
#endif

HB_FUNC( SAC111 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 73, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 17, 0,	/* 17 */
	HB_P_LOCALNEARSETSTR, 3, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '1', '1', '1', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 42,	/* MDESC_ICM */
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MPRAZO 0*/
	HB_P_LOCALNEARSETSTR, 56, 2, 0,	/* MTIPO_MERC 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 57, 2, 0,	/* MBALANCA 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MALTERA 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 61, 1, 0,	/* MINCLUIR 1*/
	0, 
	HB_P_LOCALNEARSETINT, 62, 0, 0,	/* MFORN_AUX 0*/
	HB_P_LOCALNEARSETSTR, 64, 2, 0,	/* MPOCKET 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 69, 1, 0,	/* CCOMM 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 70, 2, 0,	/* MSLD_NEG 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 71, 2, 0,	/* MDESCONT 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 72, 2, 0,	/* MIAT 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 73, 2, 0,	/* MIPPT 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 74, 1, 0,	/* MLINHA 1*/
	0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 75,	/* MCEST */
/* 00110 */ HB_P_LINEOFFSET, 3,	/* 20 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MFABRICA */
	HB_P_PUSHSYMNEAR, 3,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 4,	/* MSELE */
	HB_P_PUSHSYMNEAR, 5,	/* MORDE */
	HB_P_PUSHSYMNEAR, 6,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 7,	/* MDESC_ICM1 */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 9,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 10,	/* MSUB_GRUPO */
	HB_P_PUSHSYMNEAR, 11,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 12,	/* MCOD_FIS */
	HB_P_PUSHSYMNEAR, 13,	/* M_MERC */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 13, 0,	/* M_MERC */
	HB_P_POPVARIABLE, 11, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 7, 0,	/* MDESC_ICM1 */
/* 00160 */ HB_P_LINEOFFSET, 5,	/* 22 */
	HB_P_LOCALNEARSETSTR, 55, 57, 0,	/* MMEN_ICMS 57*/
	'V', 'e', 'r', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 'n', 'a', ' ', 'l', 'e', 'i', 't', 'u', 'r', 'a', ' ', 'X', ' ', 'd', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'f', 'i', 's', 'c', 'a', 'l', ' ', 'o', 'u', ' ', 'd', 'i', 'g', 'i', 't', 'e', ' ', '0', '1', 0, 
/* 00223 */ HB_P_LINEOFFSET, 7,	/* 24 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPRG */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00278) */
/* 00273 */ HB_P_LINEOFFSET, 8,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00278 */ HB_P_LINEOFFSET, 10,	/* 27 */
	HB_P_PUSHSYMNEAR, 17,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 4, 0,	/* MSELE */
/* 00288 */ HB_P_LINEOFFSET, 11,	/* 28 */
	HB_P_PUSHSYMNEAR, 18,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 5, 0,	/* MORDE */
/* 00298 */ HB_P_LINEOFFSET, 13,	/* 30 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00328) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00328 */ HB_P_LINEOFFSET, 14,	/* 31 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00357) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00357 */ HB_P_LINEOFFSET, 15,	/* 32 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00386) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00386 */ HB_P_LINEOFFSET, 18,	/* 35 */
	HB_P_LOCALNEARSETINT, 8, 50, 0,	/* LBA 50*/
/* 00392 */ HB_P_LINEOFFSET, 19,	/* 36 */
	HB_P_LOCALNEARSETINT, 9, 99, 0,	/* CBA 99*/
/* 00398 */ HB_P_LINEOFFSET, 21,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHVARIABLE, 5, 0,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00425) */
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00426) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00427 */ HB_P_LINEOFFSET, 22,	/* 39 */
	HB_P_LOCALNEARSETSTR, 61, 1, 0,	/* MINCLUIR 1*/
	0, 
/* 00434 */ HB_P_LINEOFFSET, 23,	/* 40 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00477 */ HB_P_LINEOFFSET, 25,	/* 42 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00524 */ HB_P_LINEOFFSET, 26,	/* 43 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00566 */ HB_P_LINEOFFSET, 27,	/* 44 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00608 */ HB_P_LINEOFFSET, 28,	/* 45 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00651 */ HB_P_LINEOFFSET, 29,	/* 46 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00694 */ HB_P_LINEOFFSET, 30,	/* 47 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'N', 'o', 't', 'a', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 31,	/* 48 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00780 */ HB_P_LINEOFFSET, 32,	/* 49 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00823 */ HB_P_LINEOFFSET, 33,	/* 50 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'r', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00866 */ HB_P_LINEOFFSET, 34,	/* 51 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'A', 'u', 'x', 'i', 'l', 'i', 'a', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00909 */ HB_P_LINEOFFSET, 35,	/* 52 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00952 */ HB_P_LINEOFFSET, 36,	/* 53 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00995 */ HB_P_LINEOFFSET, 37,	/* 54 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01038 */ HB_P_LINEOFFSET, 38,	/* 55 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'e', 's', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01081 */ HB_P_LINEOFFSET, 39,	/* 56 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'e', 's', 'o', ' ', 'B', 'r', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01124 */ HB_P_LINEOFFSET, 40,	/* 57 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'i', 'n', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01167 */ HB_P_LINEOFFSET, 41,	/* 58 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01210 */ HB_P_LINEOFFSET, 42,	/* 59 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'B', 'l', 'o', 'q', '.', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01253 */ HB_P_LINEOFFSET, 43,	/* 60 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01296 */ HB_P_LINEOFFSET, 44,	/* 61 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01339 */ HB_P_LINEOFFSET, 45,	/* 62 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01382 */ HB_P_LINEOFFSET, 46,	/* 63 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01425 */ HB_P_LINEOFFSET, 47,	/* 64 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'L', 'i', 'v', 'r', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01468 */ HB_P_LINEOFFSET, 48,	/* 65 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'j', 'u', 's', 't', 'e', ' ', 'p', '/', 'D', 'o', 'l', 'a', 'r', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01511 */ HB_P_LINEOFFSET, 49,	/* 66 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'a', 'z', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01554 */ HB_P_LINEOFFSET, 50,	/* 67 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 'n', 'v', 'i', 'a', ' ', 'p', '/', 'A', 'P', 'P', '.', '.', '.', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01597 */ HB_P_LINEOFFSET, 51,	/* 68 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'G', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', '1', 'x', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01640 */ HB_P_LINEOFFSET, 52,	/* 69 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'V', 'o', 'l', 'u', 'm', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01683 */ HB_P_LINEOFFSET, 53,	/* 70 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'L', 'o', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01726 */ HB_P_LINEOFFSET, 54,	/* 71 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 's', 'o', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01769 */ HB_P_LINEOFFSET, 55,	/* 72 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01812 */ HB_P_LINEOFFSET, 56,	/* 73 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01855 */ HB_P_LINEOFFSET, 57,	/* 74 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'V', 'e', 'n', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'a', '(', '%', ')', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01898 */ HB_P_LINEOFFSET, 58,	/* 75 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01941 */ HB_P_LINEOFFSET, 59,	/* 76 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'A', 'v', 'i', 's', 't', 'a', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01984 */ HB_P_LINEOFFSET, 60,	/* 77 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'e', 'c', 'o', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'A', 'p', 'r', 'a', 'z', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02027 */ HB_P_LINEOFFSET, 61,	/* 78 */
	HB_P_PUSHSYMNEAR, 26,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHLOCALNEAR, 9,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'A', 'D', 'O', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 6,
/* 02059 */ HB_P_LINEOFFSET, 62,	/* 79 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'(', 'I', 'A', 'T', ')', '-', '[', 'A', ']', 'r', 'r', 'e', 'n', 'd', 'o', 'n', 'd', 'a', 'r', ' ', '[', 'T', ']', 'r', 'u', 'n', 'c', 'a', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02108 */ HB_P_LINEOFFSET, 63,	/* 80 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'(', 'I', 'P', 'P', 'T', ')', '[', 'P', ']', 'r', 'o', 'p', 'r', 'i', 'o', ' ', '[', 'T', ']', 'e', 'r', 'c', 'e', 'r', 'i', 'z', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02157 */ HB_P_LINEOFFSET, 64,	/* 81 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 02225) */
/* 02174 */ HB_P_LINEOFFSET, 65,	/* 82 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'S', 'O', 'S', 'N', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 02274) */
/* 02225 */ HB_P_LINEOFFSET, 67,	/* 84 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', '.', 'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', ' ', '(', 'C', 'S', 'T', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02274 */ HB_P_LINEOFFSET, 69,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02323 */ HB_P_LINEOFFSET, 70,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'E', 'P', 'E', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02372 */ HB_P_LINEOFFSET, 71,	/* 88 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'e', 'n', 's', 'a', 'g', 'e', 'm', ' ', 'N', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02421 */ HB_P_LINEOFFSET, 72,	/* 89 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', '[', '%', ']', ' ', '/', ' ', 'I', 'S', 'S', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02470 */ HB_P_LINEOFFSET, 73,	/* 90 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'o', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02519 */ HB_P_LINEOFFSET, 74,	/* 91 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'P', 'I', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02568 */ HB_P_LINEOFFSET, 75,	/* 92 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02617 */ HB_P_LINEOFFSET, 76,	/* 93 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', '.', 'I', 'C', 'M', 'S', ' ', 'N', 'O', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02666 */ HB_P_LINEOFFSET, 77,	/* 94 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'F', 'a', 't', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02715 */ HB_P_LINEOFFSET, 78,	/* 95 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', '.', 'P', 'e', 's', 's', 'o', 'a', ' ', 'F', 'i', 's', 'i', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02764 */ HB_P_LINEOFFSET, 79,	/* 96 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'[', '%', '}', ' ', 'P', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02813 */ HB_P_LINEOFFSET, 80,	/* 97 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'[', '%', '}', ' ', 'C', 'O', 'N', 'F', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02862 */ HB_P_LINEOFFSET, 81,	/* 98 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'D', 'e', 'n', 't', 'r', 'o', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02911 */ HB_P_LINEOFFSET, 82,	/* 99 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'F', 'o', 'r', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02960 */ HB_P_LINEOFFSET, 83,	/* 100 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'E', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03009 */ HB_P_LINEOFFSET, 86,	/* 103 */
	HB_P_PUSHSYMNEAR, 26,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHLOCALNEAR, 9,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'O', 'U', 'T', 'R', 'A', 'S', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'C', 'O', 'E', 'S', 0, 
	HB_P_DOSHORT, 6,
/* 03046 */ HB_P_LINEOFFSET, 87,	/* 104 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'S', 'a', 'l', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03095 */ HB_P_LINEOFFSET, 88,	/* 105 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03144 */ HB_P_LINEOFFSET, 89,	/* 106 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03193 */ HB_P_LINEOFFSET, 90,	/* 107 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'M', 'e', 't', 'r', 'a', 'g', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03242 */ HB_P_LINEOFFSET, 91,	/* 108 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'P', 'a', 'c', 'o', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03291 */ HB_P_LINEOFFSET, 92,	/* 109 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03340 */ HB_P_LINEOFFSET, 93,	/* 110 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', 'i', 'm', 'a', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03389 */ HB_P_LINEOFFSET, 94,	/* 111 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', 'i', 'm', 'a', ' ', 'S', 'a', 'i', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03438 */ HB_P_LINEOFFSET, 96,	/* 113 */
	HB_P_PUSHSYMNEAR, 26,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 8,	/* LBA */
	HB_P_PUSHLOCALNEAR, 9,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'P', 'L', 'I', 'C', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_DOSHORT, 6,
/* 03476 */ HB_P_LINEOFFSET, 97,	/* 114 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03516 */ HB_P_LINEOFFSET, 99,	/* 116 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MFABRICA */
/* 03528 */ HB_P_LINEOFFSET, 101,	/* 118 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 03589 */ HB_P_LINEOFFSET, 102,	/* 119 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* CONS_MERC */
/* 03596 */ HB_P_LINEOFFSET, 103,	/* 120 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 68, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03616 */ HB_P_LINEOFFSET, 104,	/* 121 */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 03681) */
/* 03629 */ HB_P_LINEOFFSET, 105,	/* 122 */
	HB_P_PUSHSYMNEAR, 33,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03669 */ HB_P_LINEOFFSET, 106,	/* 123 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03676 */ HB_P_LINEOFFSET, 107,	/* 124 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03681 */ HB_P_LINEOFFSET, 110,	/* 127 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 11, 0,	/* MCODEMP */
/* 03692 */ HB_P_LINEOFFSET, 111,	/* 128 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 12,	/* MCOD_BARRA */
/* 03703 */ HB_P_LINEOFFSET, 112,	/* 129 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 46,	/* MREF */
/* 03714 */ HB_P_LINEOFFSET, 113,	/* 130 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* MCODIGO */
/* 03730 */ HB_P_LINEOFFSET, 114,	/* 131 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MGRUPO */
/* 03755 */ HB_P_LINEOFFSET, 115,	/* 132 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 10, 0,	/* MSUB_GRUPO */
/* 03781 */ HB_P_LINEOFFSET, 116,	/* 133 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 03818) */
/* 03797 */ HB_P_LINEOFFSET, 117,	/* 134 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 63,	/* MDESCRI */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 03837) */
/* 03818 */ HB_P_LINEOFFSET, 119,	/* 136 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 63,	/* MDESCRI */
/* 03837 */ HB_P_LINEOFFSET, 121,	/* 138 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 4,	/* MPRODUTO */
/* 03848 */ HB_P_LINEOFFSET, 122,	/* 139 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 56,	/* MTIPO_MERC */
/* 03859 */ HB_P_LINEOFFSET, 123,	/* 140 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 5,	/* MUNIDADE */
/* 03870 */ HB_P_LINEOFFSET, 124,	/* 141 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_ESPE */
/* 03887 */ HB_P_LINEOFFSET, 125,	/* 142 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 15,	/* MPESO_LIQ */
/* 03898 */ HB_P_LINEOFFSET, 126,	/* 143 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MPESO */
/* 03909 */ HB_P_LINEOFFSET, 127,	/* 144 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 35,	/* MDISP */
/* 03920 */ HB_P_LINEOFFSET, 128,	/* 145 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MVAREJO */
/* 03931 */ HB_P_LINEOFFSET, 129,	/* 146 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 7,	/* MEST_MIN */
/* 03942 */ HB_P_LINEOFFSET, 130,	/* 147 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 48,	/* MEST_MAX */
/* 03953 */ HB_P_LINEOFFSET, 131,	/* 148 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 2, 0,	/* MFABRICA */
/* 03965 */ HB_P_LINEOFFSET, 132,	/* 149 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 62,	/* MFORN_AUX */
	HB_P_POPVARIABLE, 3, 0,	/* MCOD_FORN */
/* 03985 */ HB_P_LINEOFFSET, 133,	/* 150 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 11,	/* MP_LUCRO */
/* 03996 */ HB_P_LINEOFFSET, 134,	/* 151 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 18,	/* MISENTO */
/* 04007 */ HB_P_LINEOFFSET, 135,	/* 152 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 50,	/* MPR_VEN */
/* 04018 */ HB_P_LINEOFFSET, 136,	/* 153 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 51,	/* MPR_VEN1 */
/* 04029 */ HB_P_LINEOFFSET, 137,	/* 154 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 65,	/* MPR_VENDA2 */
/* 04040 */ HB_P_LINEOFFSET, 138,	/* 155 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 101,	/* 101 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 66,	/* MPR_VENDA3 */
/* 04051 */ HB_P_LINEOFFSET, 139,	/* 156 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 102,	/* 102 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 67,	/* MPR_VENDA4 */
/* 04062 */ HB_P_LINEOFFSET, 140,	/* 157 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MCOMISSAO */
/* 04073 */ HB_P_LINEOFFSET, 141,	/* 158 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 22,	/* MCOM_MONT */
/* 04084 */ HB_P_LINEOFFSET, 142,	/* 159 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 23,	/* MPROMOCAO */
/* 04095 */ HB_P_LINEOFFSET, 143,	/* 160 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 24,	/* MBEBIDA */
/* 04106 */ HB_P_LINEOFFSET, 144,	/* 161 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 25,	/* MICM_SUB */
/* 04117 */ HB_P_LINEOFFSET, 145,	/* 162 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 44,	/* MICM_SUB2 */
/* 04128 */ HB_P_LINEOFFSET, 146,	/* 163 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 38, 0,	/* MCOD_CLF */
/* 04140 */ HB_P_LINEOFFSET, 147,	/* 164 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 12, 0,	/* MCOD_FIS */
/* 04154 */ HB_P_LINEOFFSET, 148,	/* 165 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MIPI */
/* 04165 */ HB_P_LINEOFFSET, 149,	/* 166 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MLOCAL */
/* 04176 */ HB_P_LINEOFFSET, 150,	/* 167 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 34,	/* MGRAMATURA */
/* 04187 */ HB_P_LINEOFFSET, 151,	/* 168 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 43,	/* MPRAZO */
/* 04198 */ HB_P_LINEOFFSET, 152,	/* 169 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 37,	/* MFATCONV */
/* 04209 */ HB_P_LINEOFFSET, 153,	/* 170 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 36,	/* MLIVRE_DESC */
/* 04220 */ HB_P_LINEOFFSET, 154,	/* 171 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 38,	/* MDESC_MERC */
/* 04231 */ HB_P_LINEOFFSET, 155,	/* 172 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 39,	/* MIND_ICMS */
/* 04242 */ HB_P_LINEOFFSET, 156,	/* 173 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 40,	/* MSIT_TRIB */
/* 04253 */ HB_P_LINEOFFSET, 157,	/* 174 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 53,	/* MNBM */
/* 04264 */ HB_P_LINEOFFSET, 158,	/* 175 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 54,	/* MPRODEPE */
/* 04275 */ HB_P_LINEOFFSET, 159,	/* 176 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 41,	/* MDOLAR */
/* 04286 */ HB_P_LINEOFFSET, 160,	/* 177 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 45,	/* MSITTRIB */
/* 04297 */ HB_P_LINEOFFSET, 161,	/* 178 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MDESC_ICM */
/* 04308 */ HB_P_LINEOFFSET, 162,	/* 179 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MDESC_ICM1 */
/* 04320 */ HB_P_LINEOFFSET, 163,	/* 180 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 27,	/* MAPLIC0 */
/* 04331 */ HB_P_LINEOFFSET, 164,	/* 181 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 28,	/* MAPLIC1 */
/* 04342 */ HB_P_LINEOFFSET, 165,	/* 182 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 29,	/* MAPLIC2 */
/* 04353 */ HB_P_LINEOFFSET, 166,	/* 183 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 30,	/* MAPLIC3 */
/* 04364 */ HB_P_LINEOFFSET, 167,	/* 184 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 31,	/* MAPLIC4 */
/* 04375 */ HB_P_LINEOFFSET, 168,	/* 185 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 57,	/* MBALANCA */
/* 04386 */ HB_P_LINEOFFSET, 169,	/* 186 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 58,	/* MMETRAGEM */
/* 04397 */ HB_P_LINEOFFSET, 170,	/* 187 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 59,	/* MPACOTE */
/* 04408 */ HB_P_LINEOFFSET, 171,	/* 188 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 64,	/* MPOCKET */
/* 04419 */ HB_P_LINEOFFSET, 172,	/* 189 */
	HB_P_PUSHSYMNEAR, 39,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 3,
/* 04432 */ HB_P_LINEOFFSET, 173,	/* 190 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 4,
/* 04448 */ HB_P_LINEOFFSET, 174,	/* 191 */
	HB_P_PUSHSYMNEAR, 41,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 3,
/* 04462 */ HB_P_LINEOFFSET, 175,	/* 192 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 70,	/* MSLD_NEG */
/* 04473 */ HB_P_LINEOFFSET, 176,	/* 193 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 71,	/* MDESCONT */
/* 04484 */ HB_P_LINEOFFSET, 177,	/* 194 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 52,	/* MDATA1 */
/* 04495 */ HB_P_LINEOFFSET, 178,	/* 195 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 72,	/* MIAT */
/* 04506 */ HB_P_LINEOFFSET, 179,	/* 196 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 73,	/* MIPPT */
/* 04517 */ HB_P_LINEOFFSET, 180,	/* 197 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 75,	/* MCEST */
/* 04528 */ HB_P_LINEOFFSET, 181,	/* 198 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 04537 */ HB_P_LINEOFFSET, 182,	/* 199 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04562 */ HB_P_LINEOFFSET, 183,	/* 200 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_DOSHORT, 1,
/* 04580 */ HB_P_LINEOFFSET, 184,	/* 201 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04605 */ HB_P_LINEOFFSET, 185,	/* 202 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRODUTO */
	HB_P_DOSHORT, 1,
/* 04623 */ HB_P_LINEOFFSET, 186,	/* 203 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MDESCRI */
	HB_P_DOSHORT, 1,
/* 04641 */ HB_P_LINEOFFSET, 187,	/* 204 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04667 */ HB_P_LINEOFFSET, 188,	/* 205 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04693 */ HB_P_LINEOFFSET, 189,	/* 206 */
	HB_P_PUSHSYMNEAR, 43,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 5,
/* 04709 */ HB_P_LINEOFFSET, 190,	/* 207 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 04718 */ HB_P_LINEOFFSET, 191,	/* 208 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BARRA */
	HB_P_DOSHORT, 1,
/* 04736 */ HB_P_LINEOFFSET, 192,	/* 209 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MREF */
	HB_P_DOSHORT, 1,
/* 04754 */ HB_P_LINEOFFSET, 193,	/* 210 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04777 */ HB_P_LINEOFFSET, 194,	/* 211 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04800 */ HB_P_LINEOFFSET, 195,	/* 212 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04832 */ HB_P_LINEOFFSET, 196,	/* 213 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04866 */ HB_P_LINEOFFSET, 197,	/* 214 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04900 */ HB_P_LINEOFFSET, 198,	/* 215 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04934 */ HB_P_LINEOFFSET, 199,	/* 216 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04968 */ HB_P_LINEOFFSET, 200,	/* 217 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04991 */ HB_P_LINEOFFSET, 201,	/* 218 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MDISP */
	HB_P_DOSHORT, 1,
/* 05009 */ HB_P_LINEOFFSET, 202,	/* 219 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* MDESCONT */
	HB_P_DOSHORT, 1,
/* 05027 */ HB_P_LINEOFFSET, 203,	/* 220 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCODEMP */
	HB_P_DOSHORT, 1,
/* 05046 */ HB_P_LINEOFFSET, 204,	/* 221 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_MERC */
	HB_P_DOSHORT, 1,
/* 05064 */ HB_P_LINEOFFSET, 205,	/* 222 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MLIVRE_DESC */
	HB_P_DOSHORT, 1,
/* 05082 */ HB_P_LINEOFFSET, 206,	/* 223 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05105 */ HB_P_LINEOFFSET, 207,	/* 224 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05134 */ HB_P_LINEOFFSET, 208,	/* 225 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05157 */ HB_P_LINEOFFSET, 209,	/* 226 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05189 */ HB_P_LINEOFFSET, 210,	/* 227 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05222 */ HB_P_LINEOFFSET, 211,	/* 228 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLOCAL */
	HB_P_DOSHORT, 1,
/* 05240 */ HB_P_LINEOFFSET, 212,	/* 229 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 57,	/* MBALANCA */
	HB_P_DOSHORT, 1,
/* 05258 */ HB_P_LINEOFFSET, 213,	/* 230 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05290 */ HB_P_LINEOFFSET, 214,	/* 231 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05322 */ HB_P_LINEOFFSET, 215,	/* 232 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05354 */ HB_P_LINEOFFSET, 216,	/* 233 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05386 */ HB_P_LINEOFFSET, 217,	/* 234 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 45,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05422 */ HB_P_LINEOFFSET, 218,	/* 235 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05455 */ HB_P_LINEOFFSET, 220,	/* 237 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05478 */ HB_P_LINEOFFSET, 221,	/* 238 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05501 */ HB_P_LINEOFFSET, 222,	/* 239 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_DOSHORT, 1,
/* 05519 */ HB_P_LINEOFFSET, 223,	/* 240 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MNBM */
	HB_P_DOSHORT, 1,
/* 05537 */ HB_P_LINEOFFSET, 224,	/* 241 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MPRODEPE */
	HB_P_DOSHORT, 1,
/* 05555 */ HB_P_LINEOFFSET, 225,	/* 242 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05578 */ HB_P_LINEOFFSET, 226,	/* 243 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05609 */ HB_P_LINEOFFSET, 227,	/* 244 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05641 */ HB_P_LINEOFFSET, 228,	/* 245 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05673 */ HB_P_LINEOFFSET, 229,	/* 246 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05696 */ HB_P_LINEOFFSET, 230,	/* 247 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05728 */ HB_P_LINEOFFSET, 231,	/* 248 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05760 */ HB_P_LINEOFFSET, 232,	/* 249 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05783 */ HB_P_LINEOFFSET, 233,	/* 250 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05806 */ HB_P_LINEOFFSET, 234,	/* 251 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05829 */ HB_P_LINEOFFSET, 235,	/* 252 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05854) */
	HB_P_PUSHSYMNEAR, 46,	/* FATO_DESC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
/* 05854 */ HB_P_LINEOFFSET, 236,	/* 253 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05863 */ HB_P_LINEOFFSET, 237,	/* 254 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05886 */ HB_P_LINEOFFSET, 238,	/* 255 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05920 */ HB_P_LINEOFFSET, 239,	/* 256 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05952 */ HB_P_LINEOFFSET, 241,	/* 258 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05987 */ HB_P_LINEOFFSET, 242,	/* 259 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'R', 'E', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', 'D', 'A', 'S', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 'S', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', '/', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 06162) */
/* 06075 */ HB_P_LINEOFFSET, 243,	/* 260 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 06084 */ HB_P_LINEOFFSET, 244,	/* 261 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06123 */ HB_P_LINEOFFSET, 245,	/* 262 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06162 */ HB_P_LINEOFFSET, 247,	/* 264 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 58,	/* MMETRAGEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06190 */ HB_P_LINEOFFSET, 248,	/* 265 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MPACOTE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06218 */ HB_P_LINEOFFSET, 249,	/* 266 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06249 */ HB_P_LINEOFFSET, 250,	/* 267 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 06277 */ HB_P_LINEOFFSET, 251,	/* 268 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 06305 */ HB_P_LINEOFFSET, 252,	/* 269 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06328 */ HB_P_LINEOFFSET, 253,	/* 270 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06351 */ HB_P_LINEOFFSET, 254,	/* 271 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06374 */ HB_P_LINEOFFSET, 255,	/* 272 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06397 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06421 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 06430 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 17,	/* MCOD_AUX */
/* 06442 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_MERC */
/* 06455 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MALTERA 2*/
	'*', 0, 
/* 06464 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 39,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 9, 0,	/* MGRUPO */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06532 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 06555 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 06582) */
/* 06568 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06576 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06582 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 06592 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06618 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 06627 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 31,	/* 31 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06681) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 06696) */
	HB_P_PUSHSYMNEAR, 40,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_PUSHMEMVARREF, 10, 0,	/* MSUB_GRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06714 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 06737 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06760) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06772) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06777) */
	HB_P_JUMP, 82, 243,	/* -3246 (abs: 03528) */
/* 06777 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 06787 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06813 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 06822 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MPRODUTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06862) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06867) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MPRODUTO */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06905) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 06906) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06924 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	63, 0,	/* MDESCRI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06964) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06969) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', 'S', '7', '0', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	63, 0,	/* MDESCRI */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07009) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07010) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07028 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 90,	/* 90 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 41,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 07158) */
	HB_P_POP,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 55,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '4', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 07122) */
	HB_P_PUSHSYMNEAR, 55,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 07141) */
	HB_P_PUSHSYMNEAR, 55,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '5', '4', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 07152) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07157) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07158) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07176 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 07199 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07215) */
	HB_P_JUMP, 156, 241,	/* -3684 (abs: 03528) */
/* 07215 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 56,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MPRODUTO */
/* 07227 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 56,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 63,	/* MDESCRI */
/* 07239 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 57,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07255) */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MALTERA 2*/
	'*', 0, 
/* 07255 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 07265 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07292 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 07301 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 43,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07376 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCOD_BARRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07416) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07421) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	17, 0,	/* MCOD_AUX */
	12, 0,	/* MCOD_BARRA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07473) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 07486) */
	HB_P_PUSHSYMNEAR, 58,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07504 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MREF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07544) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07549) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'r', 'e', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07580 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MUNIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07620) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07625) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'u', 'n', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07660 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MP_LUCRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07700) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07705) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', '_', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07744 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MPESO_LIQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07784) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07789) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07831 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MPESO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07871) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07876) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07914 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MEST_MIN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07954) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07959) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 's', 't', '_', 'm', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08001 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MEST_MAX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08041) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08046) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 's', 't', '_', 'm', 'a', 'x', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08088 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	70, 0,	/* MSLD_NEG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08128) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08133) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'l', 'd', '_', 'n', 'e', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	70, 0,	/* MSLD_NEG */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08186 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MDISP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08226) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08231) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'i', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MDISP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08281 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	71, 0,	/* MDESCONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08321) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08326) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'c', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	71, 0,	/* MDESCONT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 93, 0,	/* 93 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MPRG */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'E', 'S', 'C', '_', 'P', 'R', 'O', 'D', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08471 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08527 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	56, 0,	/* MTIPO_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08567) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08572) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	56, 0,	/* MTIPO_MERC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'1', ',', '2', ',', '3', ',', '4', ',', '5', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 08623) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 59,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 93,	/* 93 */
	HB_P_PUSHSYMNEAR, 60,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', '1', ']', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '[', '2', ']', ' ', 'M', 'a', 't', 'e', 'r', 'i', 'a', ' ', 'P', 'r', 'i', 'm', 'a', ' ', '-', ' ', '[', '3', ']', ' ', 'I', 's', 'u', 'm', 'o', 's', ' ', '-', ' ', '[', '4', ']', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', '-', ' ', '[', '5', ']', ' ', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08733 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MLIVRE_DESC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08773) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08778) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'l', 'i', 'v', 'r', 'e', '_', 'd', 'e', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08816 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MDOLAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08856) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08861) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'o', 'l', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MDOLAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08912 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MPRAZO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08952) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08957) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'a', 'z', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08991 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	64, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09031) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09036) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'o', 'c', 'k', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	64, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09088 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '5', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 09139) */
/* 09108 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 44,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MFATCONV */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 09223) */
/* 09139 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MFATCONV */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09179) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09184) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'F', 'a', 't', 'C', 'o', 'n', 'v', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09223 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MGRAMATURA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09263) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09268) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'g', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09310 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MLOCAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09350) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09355) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09388 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MBALANCA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09428) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09433) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'b', 'a', 'l', 'a', 'n', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MBALANCA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09486 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MCOMISSAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09526) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09531) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09571 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MCOM_MONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09611) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09616) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'm', '_', 'm', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09656 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MVAREJO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09696) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09701) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'v', 'a', 'r', 'e', 'j', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 16,	/* 16 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09754 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MDESC_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09794) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09799) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'e', 's', 'c', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09840 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MPR_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09880) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09885) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'r', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09927 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MPR_VEN1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09967) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09972) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', '_', 'v', 'e', 'n', '1', 0, 
	HB_P_PUSHSYMNEAR, 45,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10015 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	72, 0,	/* MIAT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10055) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10060) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'i', 'a', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	72, 0,	/* MIAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10109 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	73, 0,	/* MIPPT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10149) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10154) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'i', 'p', 'p', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	73, 0,	/* MIPPT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10204 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 10227 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10243) */
	HB_P_JUMP, 200, 229,	/* -6712 (abs: 03528) */
/* 10243 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 61,	/* SACCST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 45,	/* MSITTRIB */
/* 10256 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10272) */
	HB_P_JUMP, 171, 229,	/* -6741 (abs: 03528) */
/* 10272 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 10282 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_DOSHORT, 1,
/* 10301 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 42,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 10310 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 62,	/* VERCST */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 63, 0,	/* MINSENTO */
/* 10323 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MNBM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10363) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10368) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'n', 'b', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10395 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	54, 0,	/* MPRODEPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10435) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10440) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'd', 'e', 'p', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 148, 0,	/* 148 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10487 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10543 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MBEBIDA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10583) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10588) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'e', 'b', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10625 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MICM_SUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10665) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10670) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'c', 'm', '_', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10709 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MIPI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10749) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10754) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'i', 'p', 'i', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10789 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10845 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MDESC_ICM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10885) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10890) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MDESC_ICM */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 10947) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 10946) */
	HB_P_PUSHSYMNEAR, 46,	/* FATO_DESC */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 10947) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10965 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 10988 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 11004) */
	HB_P_JUMP, 207, 226,	/* -7473 (abs: 03528) */
/* 11004 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHLOCALNEAR, 42,	/* MDESC_ICM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 11023) */
/* 11016 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MDESC_ICM1 */
/* 11023 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MICM_SUB2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11063) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11068) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'c', 'm', '_', 's', 'u', 'b', '2', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11125 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11203 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11281 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11358 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11435 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11514 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MMETRAGEM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11554) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11559) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'm', 'e', 't', 'r', 'a', 'g', 'e', 'm', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11600 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MPACOTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11640) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11645) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'a', 'c', 'o', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11684 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MAPLIC0 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11724) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11729) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'a', 'p', 'l', 'i', 'c', '0', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11763 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MAPLIC1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11803) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11808) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'a', 'p', 'l', 'i', 'c', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11838 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MAPLIC2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11878) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11883) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'a', 'p', 'l', 'i', 'c', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11913 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MAPLIC3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 11953) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 11958) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'a', 'p', 'l', 'i', 'c', '3', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 11988 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MAPLIC4 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 12028) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 12033) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'a', 'p', 'l', 'i', 'c', '4', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12063 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 12086 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 57,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 12102) */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MALTERA 2*/
	'*', 0, 
/* 12102 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 54,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12118) */
	HB_P_JUMP, 117, 222,	/* -8587 (abs: 03528) */
/* 12118 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 65,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 49,	/* OPCAO */
/* 12167 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHLOCALNEAR, 49,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12182) */
	HB_P_JUMP, 53, 222,	/* -8651 (abs: 03528) */
/* 12182 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* M_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 12208 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BARRA */
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRODUTO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* MUNIDADE */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 232, 3,	/* 1000 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 50,	/* MPR_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 74,	/* MLINHA */
/* 12265 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12311 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BARRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12343 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'r', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MREF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12375 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12426 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12458 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 56,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12490 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'b', 'a', 'l', 'a', 'n', 'c', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 57,	/* MBALANCA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12522 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MUNIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12554 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12594 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'm', 'e', 't', 'r', 'a', 'g', 'e', 'm', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 58,	/* MMETRAGEM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12626 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'a', 'c', 'o', 't', 'e', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MPACOTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12658 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPESO_LIQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12690 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'e', 's', 'o', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPESO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12722 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'i', 's', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MDISP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12754 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'l', 'i', 'v', 'r', 'e', '_', 'd', 'e', 's', 'c', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MLIVRE_DESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12786 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MP_LUCRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12818 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MVAREJO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12850 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MEST_MIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12882 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MEST_MAX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12914 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12954 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MFABRICA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 12987 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 50,	/* MPR_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13019 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MPR_VEN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13051 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 65,	/* MPR_VENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13083 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 66,	/* MPR_VENDA3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13115 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 67,	/* MPR_VENDA4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13147 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MISENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13179 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13211 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'm', '_', 'm', 'o', 'n', 't', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MCOM_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13243 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MPROMOCAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13275 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'b', 'e', 'b', 'i', 'd', 'a', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MBEBIDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13307 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'c', 'm', '_', 's', 'u', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MICM_SUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13339 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'c', 'm', '_', 's', 'u', 'b', '2', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MICM_SUB2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13371 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'p', 'i', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MIPI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13403 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'f', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCOD_CLF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13436 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'f', 'i', 's', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCOD_FIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13469 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MSITTRIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13501 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'n', 'b', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MNBM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13533 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'o', 'd', 'e', 'p', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MPRODEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13565 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13597 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'g', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MGRAMATURA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13629 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'a', 'z', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MPRAZO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13661 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'f', 'a', 't', 'c', 'o', 'n', 'v', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MFATCONV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13693 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MDESC_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13725 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MDESC_ICM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13757 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MDESC_ICM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13790 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'o', 'l', 'a', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MDOLAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13822 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '0', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MAPLIC0 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13854 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '1', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MAPLIC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13886 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '2', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MAPLIC2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13918 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '3', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MAPLIC3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13950 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '4', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MAPLIC4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 13982 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'o', 'c', 'k', 'e', 't', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 64,	/* MPOCKET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14014 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MDESCRI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14054 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MDESCRI */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14093 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'l', 'd', '_', 'n', 'e', 'g', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* MSLD_NEG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14125 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* MDESCONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14157 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'a', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* MIAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14189 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'p', 'p', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MIPPT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14221 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 50,	/* MPR_VEN */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 14308) */
/* 14236 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 67, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14272 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14308 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHLOCALNEAR, 60,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 14356) */
/* 14320 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 67, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14356 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* CRIPTOGRAFIA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 74,	/* MLINHA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14402 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'p', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14444 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 'f', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14486 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'f', 'o', 'p', '_', 'd', 'e', 'n', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14528 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'f', 'o', 'p', '_', 'f', 'o', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14570 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'e', 's', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14612 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 69,	/* CCOMM */
/* 14656 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14674 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 70, 0,	/* ARET */
/* 14683 */ HB_P_LINE, 218, 1,	/* 474 */
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
/* 14708 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 71, 0,	/* MCONS_CAM */
/* 14717 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 't', 'u', '_', 'p', 'r', 'o', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'm', '_', 'd', 'b', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 71, 0,	/* MCONS_CAM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 14767 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 72,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 73, 0,	/* NCNN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 14796) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 71, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 14841) */
/* 14798 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14816 */ HB_P_LINE, 224, 1,	/* 480 */
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
/* 14841 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 72,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* NCNN2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 14870) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 71, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 14915) */
/* 14872 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 69,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14890 */ HB_P_LINE, 228, 1,	/* 484 */
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
/* 14915 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 72,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 75, 0,	/* NCNN */
	HB_P_DOSHORT, 1,
/* 14926 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 14934 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 14940 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FATO_DESC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 76,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 00018 */ HB_P_LINEOFFSET, 1,	/* 520 */
	HB_P_PUSHSYMNEAR, 22,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'F', 'a', 't', 'o', 'r', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00052 */ HB_P_LINEOFFSET, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'a', 't', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00075 */ HB_P_LINEOFFSET, 3,	/* 522 */
	HB_P_PUSHSYMNEAR, 48,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 77,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 51,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00118) */
	HB_P_PUSHMEMVAR, 7, 0,	/* MDESC_ICM1 */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00124) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPMEMVAR, 7, 0,	/* MDESC_ICM1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* MDESC_ICM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00163) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00164) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 52, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00182 */ HB_P_LINEOFFSET, 4,	/* 523 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCONS */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 00214) */
/* 00190 */ HB_P_LINEOFFSET, 5,	/* 524 */
	HB_P_PUSHSYMNEAR, 53,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00222) */
/* 00214 */ HB_P_LINEOFFSET, 7,	/* 526 */
	HB_P_PUSHSYMNEAR, 78,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00222 */ HB_P_LINEOFFSET, 9,	/* 528 */
	HB_P_PUSHSYMNEAR, 76,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 50, 0,	/* GETLIST */
/* 00236 */ HB_P_LINEOFFSET, 10,	/* 529 */
	HB_P_PUSHSYMNEAR, 34,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00243 */ HB_P_LINEOFFSET, 11,	/* 530 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00248 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

