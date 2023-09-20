/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC110.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\SIACHB\TESTE\SAC110.PRG /q /oC:\helio\siachb\SAC110.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2020.05.12 16:29:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC110.PRG"

HB_FUNC( SAC110 );
HB_FUNC( VERCLF );
HB_FUNC( VERCST );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( WVW_DRAWBOXGET );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( VERCODBARRA );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SACCST );
HB_FUNC_EXTERN( TIRA_ACENTO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( VERIF_EAN13 );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( CRIPTOGRAFIA );
HB_FUNC_EXTERN( SR_SETACTIVECONNECTION );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SACBAL1 );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( FOUND );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC110 )
{ "SAC110", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC110 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MFABRICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESC_ICM1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSUB_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MPR_VENDA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_DRAWBOXGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_DRAWBOXGET )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "VERCODBARRA", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCODBARRA )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SACCST", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCST )}, NULL },
{ "VERCST", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VERCST )}, NULL },
{ "VERCLF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VERCLF )}, NULL },
{ "TIRA_ACENTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIRA_ACENTO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "VERIF_EAN13", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERIF_EAN13 )}, NULL },
{ "NULO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "CRIPTOGRAFIA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTOGRAFIA )}, NULL },
{ "SR_SETACTIVECONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETACTIVECONNECTION )}, NULL },
{ "NCNN1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "SACBAL1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACBAL1 )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "CLF", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC110 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC110
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC110 = hb_vm_SymbolInit_SAC110;
   #pragma data_seg()
#endif

HB_FUNC( SAC110 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 77, 6,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 18, 0,	/* 18 */
	HB_P_LOCALNEARSETSTR, 7, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '1', '1', '0', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 46,	/* MDESC_ICM */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* MPRECO 0*/
	HB_P_LOCALNEARSETINT, 48, 0, 0,	/* MPRAZO 0*/
	HB_P_LOCALNEARSETSTR, 52, 2, 0,	/* OPCAO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 56, 3, 0,	/* MPRODEPE 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 57, 2, 0,	/* MTIPO_MERC 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 58, 2, 0,	/* MBALANCA 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 59, 1, 0,	/* MINCLUIR 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 61,	/* M_MERC */
	HB_P_LOCALNEARSETINT, 62, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETSTR, 63, 2, 0,	/* MPOCKET 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* CONS_MERC */
	HB_P_LOCALNEARSETSTR, 70, 2, 0,	/* MSLD_NEG 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 71, 2, 0,	/* MDESCONT 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 73, 2, 0,	/* MIAT 2*/
	'A', 0, 
	HB_P_LOCALNEARSETSTR, 74, 2, 0,	/* MIPPT 2*/
	'T', 0, 
	HB_P_LOCALNEARSETSTR, 75, 1, 0,	/* MLINHA 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 76,	/* CALC_COD */
	HB_P_LOCALNEARSETSTR, 81, 1, 0,	/* CCOMM 1*/
	0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 82,	/* MCEST */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 83,	/* MCONS_CAM */
/* 00154 */ HB_P_LINEOFFSET, 2,	/* 20 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MFABRICA */
	HB_P_PUSHSYMNEAR, 3,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 5,	/* MDESC_ICM1 */
	HB_P_PUSHSYMNEAR, 6,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 7,	/* MSUB_GRUPO */
	HB_P_PUSHSYMNEAR, 8,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 9,	/* MCOD_FIS */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_POPVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_POPVARIABLE, 5, 0,	/* MDESC_ICM1 */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_ESPE */
	HB_P_POPVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_POPVARIABLE, 2, 0,	/* MFABRICA */
/* 00216 */ HB_P_LINEOFFSET, 4,	/* 22 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00271) */
/* 00266 */ HB_P_LINEOFFSET, 5,	/* 23 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 8,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00300) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00300 */ HB_P_LINEOFFSET, 9,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'f', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'f', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00327) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00327 */ HB_P_LINEOFFSET, 10,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00357) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00357 */ HB_P_LINEOFFSET, 11,	/* 29 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00386) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00386 */ HB_P_LINEOFFSET, 12,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00415) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00415 */ HB_P_LINEOFFSET, 14,	/* 32 */
	HB_P_LOCALNEARSETINT, 15, 45, 0,	/* LBA 45*/
/* 00421 */ HB_P_LINEOFFSET, 15,	/* 33 */
	HB_P_LOCALNEARSETINT, 16, 99, 0,	/* CBA 99*/
/* 00427 */ HB_P_LINEOFFSET, 16,	/* 34 */
	HB_P_PUSHSYMNEAR, 14,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 00441 */ HB_P_LINEOFFSET, 17,	/* 35 */
	HB_P_LOCALNEARSETSTR, 59, 1, 0,	/* MINCLUIR 1*/
	0, 
/* 00448 */ HB_P_LINEOFFSET, 18,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00491 */ HB_P_LINEOFFSET, 20,	/* 38 */
	HB_P_PUSHSYMNEAR, 17,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00504 */ HB_P_LINEOFFSET, 21,	/* 39 */
	HB_P_PUSHSYMNEAR, 18,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00513 */ HB_P_LINEOFFSET, 22,	/* 40 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* MCODEMP */
/* 00524 */ HB_P_LINEOFFSET, 26,	/* 44 */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* MPRECO 0*/
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MPRAZO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 42,	/* MDESC_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MP_LUCRO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MDESC_ICM1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MFATCONV */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 38,	/* MGRAMATURA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 37,	/* MIPI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MICM_SUB2 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MICM_SUB */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MBEBIDA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MCOM_MONT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MCOMISSAO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MVAREJO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 53,	/* MEST_MAX */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MEST_MIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MPESO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MPESO_LIQ */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_POPVARIABLE, 6, 0,	/* MGRUPO */
/* 00595 */ HB_P_LINEOFFSET, 27,	/* 45 */
	HB_P_LOCALNEARSETINT, 80, 0, 0,	/* MCONFIS 0*/
	HB_P_PUSHLOCALNEAR, 80,	/* MCONFIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 79,	/* MPIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 66,	/* MPR_VENDA4 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 65,	/* MPR_VENDA3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 64,	/* MPR_VENDA2 */
	HB_P_POPVARIABLE, 19, 0,	/* MPR_VENDA1 */
/* 00618 */ HB_P_LINEOFFSET, 28,	/* 46 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 78,	/* MCFOP_DENT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 77,	/* MCFOP_FORA */
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 00635 */ HB_P_LINEOFFSET, 29,	/* 47 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCODFORN */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00657) */
/* 00643 */ HB_P_LINEOFFSET, 30,	/* 48 */
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCODFORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00663) */
/* 00657 */ HB_P_LINEOFFSET, 32,	/* 50 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 3, 0,	/* MCOD_FORN */
/* 00663 */ HB_P_LINEOFFSET, 34,	/* 52 */
	HB_P_PUSHLOCALNEAR, 3,	/* MCODBARR */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00679) */
/* 00671 */ HB_P_LINEOFFSET, 35,	/* 53 */
	HB_P_PUSHLOCALNEAR, 3,	/* MCODBARR */
	HB_P_POPLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00690) */
/* 00679 */ HB_P_LINEOFFSET, 37,	/* 55 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MCOD_BC */
/* 00690 */ HB_P_LINEOFFSET, 39,	/* 57 */
	HB_P_PUSHSYMNEAR, 21,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '4', '1', '0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 00736) */
/* 00709 */ HB_P_LINEOFFSET, 40,	/* 58 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDESC_PROD */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00725) */
/* 00717 */ HB_P_LINEOFFSET, 41,	/* 59 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDESC_PROD */
	HB_P_POPLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00736) */
/* 00725 */ HB_P_LINEOFFSET, 43,	/* 61 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MPRODUTO */
/* 00736 */ HB_P_LINEOFFSET, 46,	/* 64 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 60,	/* MDESCRI */
/* 00747 */ HB_P_LINEOFFSET, 47,	/* 65 */
	HB_P_LOCALNEARSETSTR, 57, 2, 0,	/* MTIPO_MERC 2*/
	'1', 0, 
/* 00755 */ HB_P_LINEOFFSET, 48,	/* 66 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 67,	/* MDATA_BLOQ */
	HB_P_POPLOCALNEAR, 14,	/* MDATA_CAD */
/* 00778 */ HB_P_LINEOFFSET, 49,	/* 67 */
	HB_P_LOCALNEARSETSTR, 10, 3, 0,	/* MUNIDADE 3*/
	'U', 'N', 0, 
/* 00787 */ HB_P_LINEOFFSET, 50,	/* 68 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MCOD_CLF */
	HB_P_POPLOCALNEAR, 26,	/* MGRAMA */
/* 00801 */ HB_P_LINEOFFSET, 51,	/* 69 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MFABRICA */
/* 00813 */ HB_P_LINEOFFSET, 52,	/* 70 */
	HB_P_LOCALNEARSETSTR, 71, 2, 0,	/* MDESCONT 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 71,	/* MDESCONT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 70,	/* MSLD_NEG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 58,	/* MBALANCA */
	HB_P_POPLOCALNEAR, 23,	/* MISENTO */
/* 00831 */ HB_P_LINEOFFSET, 53,	/* 71 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_FIS */
/* 00840 */ HB_P_LINEOFFSET, 54,	/* 72 */
	HB_P_LOCALNEARSETSTR, 73, 2, 0,	/* MIAT 2*/
	'A', 0, 
/* 00848 */ HB_P_LINEOFFSET, 55,	/* 73 */
	HB_P_LOCALNEARSETSTR, 74, 2, 0,	/* MIPPT 2*/
	'T', 0, 
/* 00856 */ HB_P_LINEOFFSET, 56,	/* 74 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 51,	/* MREF */
/* 00867 */ HB_P_LINEOFFSET, 57,	/* 75 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* MLOCAL */
/* 00878 */ HB_P_LINEOFFSET, 58,	/* 76 */
	HB_P_LOCALNEARSETSTR, 63, 2, 0,	/* MPOCKET 2*/
	'S', 0, 
	HB_P_PUSHLOCALNEAR, 63,	/* MPOCKET */
	HB_P_POPLOCALNEAR, 39,	/* MDISP */
/* 00890 */ HB_P_LINEOFFSET, 59,	/* 77 */
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MDESC_ICM 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 46,	/* MDESC_ICM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 45,	/* MDOLAR */
	HB_P_POPLOCALNEAR, 40,	/* MLIVRE_DESC */
/* 00905 */ HB_P_LINEOFFSET, 60,	/* 78 */
	HB_P_LOCALNEARSETSTR, 43, 3, 0,	/* MIND_ICMS 3*/
	'0', '1', 0, 
/* 00914 */ HB_P_LINEOFFSET, 61,	/* 79 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MSIT_TRIB 2*/
	'T', 0, 
/* 00922 */ HB_P_LINEOFFSET, 62,	/* 80 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 68,	/* MOBS_BLOQ */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MAPLIC4 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MAPLIC3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 32,	/* MAPLIC2 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MAPLIC1 */
	HB_P_POPLOCALNEAR, 30,	/* MAPLIC0 */
/* 00948 */ HB_P_LINEOFFSET, 63,	/* 81 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 50,	/* MSITTRIB */
/* 00959 */ HB_P_LINEOFFSET, 64,	/* 82 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 55,	/* MNBM */
/* 00970 */ HB_P_LINEOFFSET, 65,	/* 83 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 56,	/* MPRODEPE */
/* 00981 */ HB_P_LINEOFFSET, 66,	/* 84 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 82,	/* MCEST */
/* 00992 */ HB_P_LINEOFFSET, 67,	/* 85 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01039 */ HB_P_LINEOFFSET, 68,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01081 */ HB_P_LINEOFFSET, 69,	/* 87 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01123 */ HB_P_LINEOFFSET, 70,	/* 88 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01166 */ HB_P_LINEOFFSET, 71,	/* 89 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01209 */ HB_P_LINEOFFSET, 72,	/* 90 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01252 */ HB_P_LINEOFFSET, 73,	/* 91 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'N', 'o', 't', 'a', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01295 */ HB_P_LINEOFFSET, 74,	/* 92 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01338 */ HB_P_LINEOFFSET, 75,	/* 93 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01381 */ HB_P_LINEOFFSET, 79,	/* 97 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'r', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01424 */ HB_P_LINEOFFSET, 80,	/* 98 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'A', 'u', 'x', 'i', 'l', 'i', 'a', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01467 */ HB_P_LINEOFFSET, 82,	/* 100 */
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
/* 01510 */ HB_P_LINEOFFSET, 83,	/* 101 */
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
/* 01553 */ HB_P_LINEOFFSET, 84,	/* 102 */
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
/* 01596 */ HB_P_LINEOFFSET, 85,	/* 103 */
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
/* 01639 */ HB_P_LINEOFFSET, 86,	/* 104 */
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
/* 01682 */ HB_P_LINEOFFSET, 87,	/* 105 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 's', 'r', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01725 */ HB_P_LINEOFFSET, 88,	/* 106 */
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
/* 01768 */ HB_P_LINEOFFSET, 89,	/* 107 */
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
/* 01811 */ HB_P_LINEOFFSET, 90,	/* 108 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'd', 'o', '.', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01854 */ HB_P_LINEOFFSET, 91,	/* 109 */
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
/* 01897 */ HB_P_LINEOFFSET, 92,	/* 110 */
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
/* 01940 */ HB_P_LINEOFFSET, 93,	/* 111 */
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
/* 01983 */ HB_P_LINEOFFSET, 94,	/* 112 */
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
/* 02026 */ HB_P_LINEOFFSET, 95,	/* 113 */
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
/* 02069 */ HB_P_LINEOFFSET, 96,	/* 114 */
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
/* 02112 */ HB_P_LINEOFFSET, 97,	/* 115 */
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
/* 02155 */ HB_P_LINEOFFSET, 98,	/* 116 */
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
/* 02198 */ HB_P_LINEOFFSET, 99,	/* 117 */
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
/* 02241 */ HB_P_LINEOFFSET, 100,	/* 118 */
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
/* 02284 */ HB_P_LINEOFFSET, 101,	/* 119 */
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
/* 02327 */ HB_P_LINEOFFSET, 102,	/* 120 */
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
/* 02370 */ HB_P_LINEOFFSET, 103,	/* 121 */
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
/* 02413 */ HB_P_LINEOFFSET, 104,	/* 122 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02456 */ HB_P_LINEOFFSET, 105,	/* 123 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'c', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'A', 'v', 'i', 's', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02499 */ HB_P_LINEOFFSET, 106,	/* 124 */
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
/* 02542 */ HB_P_LINEOFFSET, 108,	/* 126 */
	HB_P_PUSHSYMNEAR, 26,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHLOCALNEAR, 16,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'A', 'D', 'O', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 6,
/* 02574 */ HB_P_LINEOFFSET, 109,	/* 127 */
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
/* 02623 */ HB_P_LINEOFFSET, 110,	/* 128 */
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
/* 02672 */ HB_P_LINEOFFSET, 111,	/* 129 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 02740) */
/* 02689 */ HB_P_LINEOFFSET, 112,	/* 130 */
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
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 02789) */
/* 02740 */ HB_P_LINEOFFSET, 114,	/* 132 */
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
/* 02789 */ HB_P_LINEOFFSET, 116,	/* 134 */
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
/* 02838 */ HB_P_LINEOFFSET, 117,	/* 135 */
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
/* 02887 */ HB_P_LINEOFFSET, 118,	/* 136 */
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
/* 02936 */ HB_P_LINEOFFSET, 119,	/* 137 */
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
/* 02985 */ HB_P_LINEOFFSET, 120,	/* 138 */
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
/* 03034 */ HB_P_LINEOFFSET, 121,	/* 139 */
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
/* 03083 */ HB_P_LINEOFFSET, 122,	/* 140 */
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
/* 03132 */ HB_P_LINEOFFSET, 123,	/* 141 */
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
/* 03181 */ HB_P_LINEOFFSET, 124,	/* 142 */
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
/* 03230 */ HB_P_LINEOFFSET, 125,	/* 143 */
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
/* 03279 */ HB_P_LINEOFFSET, 126,	/* 144 */
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
/* 03328 */ HB_P_LINEOFFSET, 127,	/* 145 */
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
/* 03377 */ HB_P_LINEOFFSET, 128,	/* 146 */
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
/* 03426 */ HB_P_LINEOFFSET, 129,	/* 147 */
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
/* 03475 */ HB_P_LINEOFFSET, 130,	/* 148 */
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
/* 03524 */ HB_P_LINEOFFSET, 132,	/* 150 */
	HB_P_PUSHSYMNEAR, 26,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 15,	/* LBA */
	HB_P_PUSHLOCALNEAR, 16,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'P', 'L', 'I', 'C', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_DOSHORT, 6,
/* 03562 */ HB_P_LINEOFFSET, 133,	/* 151 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03602 */ HB_P_LINEOFFSET, 135,	/* 153 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 113,	/* 113 (abs: 03730) */
/* 03619 */ HB_P_LINEOFFSET, 136,	/* 154 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* CONS_MERC */
/* 03626 */ HB_P_LINEOFFSET, 137,	/* 155 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'M', 'A', 'X', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 69, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03680 */ HB_P_LINEOFFSET, 138,	/* 156 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 03705 */ HB_P_LINEOFFSET, 139,	/* 157 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 69,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_AUX */
/* 03730 */ HB_P_LINEOFFSET, 141,	/* 159 */
	HB_P_PUSHMEMVAR, 31, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 14,	/* MDATA_CAD */
/* 03737 */ HB_P_LINEOFFSET, 142,	/* 160 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_DRAWBOXGET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 4,
/* 03750 */ HB_P_LINEOFFSET, 143,	/* 161 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MDATA_CAD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03788) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03793) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03825 */ HB_P_LINEOFFSET, 144,	/* 162 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03875) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 03887) */
	HB_P_PUSHSYMNEAR, 38,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03905 */ HB_P_LINEOFFSET, 145,	/* 163 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 03927 */ HB_P_LINEOFFSET, 146,	/* 164 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 143, 0,	/* 143 (abs: 04080) */
/* 03940 */ HB_P_LINEOFFSET, 148,	/* 166 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 03961 */ HB_P_LINEOFFSET, 150,	/* 168 */
	HB_P_PUSHSYMNEAR, 43,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'f', 'a', 'b', 'r', 'i', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 2,
/* 03991 */ HB_P_LINEOFFSET, 151,	/* 169 */
	HB_P_PUSHLOCALNEAR, 1,	/* OP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 04053) */
/* 03999 */ HB_P_LINEOFFSET, 153,	/* 171 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', 'p', '/', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 04033 */ HB_P_LINEOFFSET, 154,	/* 172 */
	HB_P_PUSHSYMNEAR, 44,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 04041 */ HB_P_LINEOFFSET, 155,	/* 173 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 204,	/* -52 (abs: 03999) */
/* 04053 */ HB_P_LINEOFFSET, 160,	/* 178 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04060 */ HB_P_LINEOFFSET, 161,	/* 179 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDESC_PROD */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04075) */
/* 04068 */ HB_P_LINEOFFSET, 162,	/* 180 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04075 */ HB_P_LINEOFFSET, 164,	/* 182 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04080 */ HB_P_LINEOFFSET, 167,	/* 185 */
	HB_P_PUSHSYMNEAR, 38,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 3,
/* 04093 */ HB_P_LINEOFFSET, 168,	/* 186 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_DRAWBOXGET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 4,
/* 04107 */ HB_P_LINEOFFSET, 169,	/* 187 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_DRAWBOXGET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 4,
/* 04121 */ HB_P_LINEOFFSET, 170,	/* 188 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 32,	/* 32 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04175) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 04191) */
	HB_P_PUSHSYMNEAR, 46,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_PUSHMEMVARREF, 7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04209 */ HB_P_LINEOFFSET, 171,	/* 189 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 04231 */ HB_P_LINEOFFSET, 172,	/* 190 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04253) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04265) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04270) */
	HB_P_JUMP, 64, 241,	/* -3776 (abs: 00491) */
/* 04270 */ HB_P_LINEOFFSET, 175,	/* 193 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04309) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04314) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 16,	/* 16 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04368 */ HB_P_LINEOFFSET, 176,	/* 194 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 04390 */ HB_P_LINEOFFSET, 177,	/* 195 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04405) */
	HB_P_JUMP, 185, 240,	/* -3911 (abs: 00491) */
/* 04405 */ HB_P_LINEOFFSET, 180,	/* 198 */
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLONG, 159, 134, 1, 0, 	/* 99999 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 04499) */
/* 04422 */ HB_P_LINEOFFSET, 181,	/* 199 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'O', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 'm', 'a', 'i', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'o', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'd', 'o', ' ', 'b', 'a', 'n', 'c', 'o', ' ', 'd', 'e', ' ', 'd', 'a', 'd', 'o', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 91, 240,	/* -4005 (abs: 00491) */
/* 04499 */ HB_P_LINEOFFSET, 184,	/* 202 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 04517 */ HB_P_LINEOFFSET, 185,	/* 203 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 04526 */ HB_P_LINEOFFSET, 186,	/* 204 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04551 */ HB_P_LINEOFFSET, 187,	/* 205 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04577 */ HB_P_LINEOFFSET, 188,	/* 206 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
/* 04595 */ HB_P_LINEOFFSET, 189,	/* 207 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04603 */ HB_P_LINEOFFSET, 190,	/* 208 */
	HB_P_PUSHSYMNEAR, 46,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_PUSHMEMVARREF, 7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 4,
/* 04620 */ HB_P_LINEOFFSET, 192,	/* 210 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* ARET */
/* 04628 */ HB_P_LINEOFFSET, 193,	/* 211 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 49, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04703 */ HB_P_LINEOFFSET, 194,	/* 212 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 04761) */
/* 04717 */ HB_P_LINEOFFSET, 195,	/* 213 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'j', 'a', ' ', 'E', 'x', 'i', 's', 't', 'e', ' ', 'n', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 85, 239,	/* -4267 (abs: 00491) */
/* 04761 */ HB_P_LINEOFFSET, 198,	/* 216 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MPRODUTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04800) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04805) */
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
	9, 0,	/* MPRODUTO */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04843) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 04844) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04862 */ HB_P_LINEOFFSET, 199,	/* 217 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 04884 */ HB_P_LINEOFFSET, 200,	/* 218 */
	HB_P_PUSHLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 60,	/* MDESCRI */
/* 04906 */ HB_P_LINEOFFSET, 201,	/* 219 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MDESCRI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04945) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04950) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', 'S', '7', '0', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04987 */ HB_P_LINEOFFSET, 202,	/* 220 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 52,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05059 */ HB_P_LINEOFFSET, 203,	/* 221 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 05081 */ HB_P_LINEOFFSET, 204,	/* 222 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05096) */
	HB_P_JUMP, 6, 238,	/* -4602 (abs: 00491) */
/* 05096 */ HB_P_LINEOFFSET, 210,	/* 228 */
	HB_P_PUSHSYMNEAR, 52,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 3,
/* 05110 */ HB_P_LINEOFFSET, 211,	/* 229 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 53,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05184 */ HB_P_LINEOFFSET, 212,	/* 230 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_BC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05223) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05228) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', '_', 'b', 'c', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_BC */
	HB_P_PUSHSYMNEAR, 54,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05296 */ HB_P_LINEOFFSET, 213,	/* 231 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MREF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05335) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05340) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05371 */ HB_P_LINEOFFSET, 214,	/* 232 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MUNIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05410) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05415) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05450 */ HB_P_LINEOFFSET, 215,	/* 233 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MP_LUCRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05489) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05494) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05533 */ HB_P_LINEOFFSET, 216,	/* 234 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MPESO_LIQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05572) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05577) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05619 */ HB_P_LINEOFFSET, 217,	/* 235 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MPESO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05658) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05663) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05701 */ HB_P_LINEOFFSET, 218,	/* 236 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MEST_MIN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05740) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05745) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05787 */ HB_P_LINEOFFSET, 219,	/* 237 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MEST_MAX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05826) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05831) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05873 */ HB_P_LINEOFFSET, 220,	/* 238 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	70, 0,	/* MSLD_NEG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05912) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05917) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05970 */ HB_P_LINEOFFSET, 221,	/* 239 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MDISP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06009) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06014) */
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
	39, 0,	/* MDISP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06064 */ HB_P_LINEOFFSET, 222,	/* 240 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	71, 0,	/* MDESCONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06103) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06108) */
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
	HB_P_PUSHBLOCK, 92, 0,	/* 92 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MPRG */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'E', 'S', 'C', '_', 'P', 'R', 'O', 'D', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06252 */ HB_P_LINEOFFSET, 223,	/* 241 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 55, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06317 */ HB_P_LINEOFFSET, 224,	/* 242 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MTIPO_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06356) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06361) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MTIPO_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'1', ',', '2', ',', '3', ',', '4', ',', '5', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 91,	/* 91 */
	HB_P_PUSHSYMNEAR, 56,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', '1', ']', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '[', '2', ']', ' ', 'M', 'a', 't', 'e', 'r', 'i', 'a', ' ', 'P', 'r', 'i', 'm', 'a', ' ', '-', ' ', '[', '3', ']', ' ', 'I', 's', 'u', 'm', 'o', 's', ' ', '-', ' ', '[', '4', ']', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', '-', ' ', '[', '5', ']', ' ', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06511 */ HB_P_LINEOFFSET, 225,	/* 243 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* MLIVRE_DESC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06550) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06555) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06593 */ HB_P_LINEOFFSET, 226,	/* 244 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MDOLAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06632) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06637) */
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
	45, 0,	/* MDOLAR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06688 */ HB_P_LINEOFFSET, 227,	/* 245 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MPRAZO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06727) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06732) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06766 */ HB_P_LINEOFFSET, 228,	/* 246 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	63, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06805) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06810) */
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
	63, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06862 */ HB_P_LINEOFFSET, 229,	/* 247 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MFATCONV */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06901) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06906) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06945 */ HB_P_LINEOFFSET, 230,	/* 248 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MGRAMATURA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06984) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06989) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07031 */ HB_P_LINEOFFSET, 231,	/* 249 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MLOCAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07070) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07075) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07108 */ HB_P_LINEOFFSET, 232,	/* 250 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MBALANCA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07147) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07152) */
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
	58, 0,	/* MBALANCA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07205 */ HB_P_LINEOFFSET, 233,	/* 251 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MCOMISSAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07244) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07249) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07289 */ HB_P_LINEOFFSET, 234,	/* 252 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MCOM_MONT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07328) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07333) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07373 */ HB_P_LINEOFFSET, 235,	/* 253 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MVAREJO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07412) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07417) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'v', 'a', 'r', 'e', 'j', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MVAREJO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07455) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07456) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07489 */ HB_P_LINEOFFSET, 236,	/* 254 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MDESC_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07528) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07533) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07574 */ HB_P_LINEOFFSET, 237,	/* 255 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MPRECO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07613) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07618) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'e', 'c', 'o', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07659 */ HB_P_LINEOFFSET, 238,	/* 256 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07721 */ HB_P_LINEOFFSET, 239,	/* 257 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	73, 0,	/* MIAT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07760) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07765) */
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
	73, 0,	/* MIAT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07814 */ HB_P_LINEOFFSET, 240,	/* 258 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	74, 0,	/* MIPPT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07853) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07858) */
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
	74, 0,	/* MIPPT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07908 */ HB_P_LINEOFFSET, 241,	/* 259 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 07930 */ HB_P_LINEOFFSET, 242,	/* 260 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07945) */
	HB_P_JUMP, 229, 226,	/* -7451 (abs: 00491) */
/* 07945 */ HB_P_LINEOFFSET, 245,	/* 263 */
	HB_P_PUSHSYMNEAR, 58,	/* SACCST */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 50,	/* MSITTRIB */
/* 07954 */ HB_P_LINEOFFSET, 246,	/* 264 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07969) */
	HB_P_JUMP, 205, 226,	/* -7475 (abs: 00491) */
/* 07969 */ HB_P_LINEOFFSET, 249,	/* 267 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 07978 */ HB_P_LINEOFFSET, 250,	/* 268 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 50,	/* MSITTRIB */
	HB_P_DOSHORT, 1,
/* 07996 */ HB_P_LINEOFFSET, 251,	/* 269 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08004 */ HB_P_LINEOFFSET, 252,	/* 270 */
	HB_P_PUSHSYMNEAR, 59,	/* VERCST */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 50,	/* MSITTRIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* MISENTO */
/* 08015 */ HB_P_LINEOFFSET, 253,	/* 271 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	55, 0,	/* MNBM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08054) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08059) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08086 */ HB_P_LINEOFFSET, 254,	/* 272 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	56, 0,	/* MPRODEPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08125) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08130) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08177 */ HB_P_LINEOFFSET, 255,	/* 273 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MCOD_CLF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08216) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08221) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* MCOD_CLF */
	HB_P_PUSHSYMNEAR, 60,	/* VERCLF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08278 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MBEBIDA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08318) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08323) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08360 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MICM_SUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08400) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08405) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08444 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MIPI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08484) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08489) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08524 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08580 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDESC_ICM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08620) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08625) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDESC_ICM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08679 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08742 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	49, 0,	/* MICM_SUB2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08782) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08787) */
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
	HB_P_PUSHSYMNEAR, 21,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08844 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	79, 0,	/* MPIS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08884) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08889) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08925 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	80, 0,	/* MCONFIS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08965) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08970) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'n', 'f', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09009 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	78, 0,	/* MCFOP_DENT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09049) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09054) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'f', 'o', 'p', '_', 'd', 'e', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09094 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	77, 0,	/* MCFOP_FORA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09134) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09139) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'f', 'o', 'p', '_', 'f', 'o', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09179 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	82, 0,	/* MCEST */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09219) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09224) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'c', 'e', 's', 't', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09261 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MAPLIC0 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09301) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09306) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09340 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MAPLIC1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09380) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09385) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09415 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MAPLIC2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09455) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09460) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09490 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* MAPLIC3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09530) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09535) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09565 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* MAPLIC4 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09605) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09610) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09640 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 09663 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09679) */
	HB_P_JUMP, 31, 220,	/* -9185 (abs: 00491) */
/* 09679 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 61,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MPRODUTO */
/* 09691 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 61,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MDESCRI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 60,	/* MDESCRI */
/* 09703 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 62,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 52,	/* OPCAO */
/* 09751 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 09773) */
	HB_P_PUSHLOCALNEAR, 52,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09778) */
	HB_P_JUMP, 188, 219,	/* -9284 (abs: 00491) */
/* 09778 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 240, 2,	/* 752 (abs: 10546) */
/* 09797 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 09809 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'a', 'l', 'c', 'u', 'l', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09851 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* ARET */
/* 09860 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 49, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 09928 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_LOCALNEARSETINT, 62, 0, 0,	/* I 0*/
/* 09935 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_LOCALNEARSETINT, 62, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 35, 1,	/* 291 (abs: 10244) */
/* 09956 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'a', 'l', 'c', 'u', 'l', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 49, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10067 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 76,	/* CALC_COD */
/* 10075 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 76, 0,	/* CALC_COD */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10158 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 76,	/* CALC_COD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 10234) */
/* 10172 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 10186 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 62,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_AUX */
/* 10200 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ':', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 10244) */
/* 10234 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_LOCALNEARADDINT, 62, 1, 0,	/* I 1*/
	HB_P_JUMP, 213, 254,	/* -299 (abs: 09942) */
/* 10244 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 10414) */
/* 10259 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* ARET */
/* 10268 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'M', 'A', 'X', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 49, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10323 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* MCOD_MERC */
/* 10350 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_AUX */
/* 10377 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'G', 'e', 'r', 'a', 'd', 'o', ' ', 'o', ' ', 'U', 'l', 't', 'i', 'm', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ':', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10414 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* ARET */
/* 10423 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 49, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10492 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 10509) */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 10546) */
/* 10509 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 22, 253,	/* -746 (abs: 09797) */
/* 10546 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'r', 'r', 'a', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10597 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 54,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUE, 203, 0,	/* 203 (abs: 10816) */
/* 10616 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 63,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 19,	/* MCOD_BC */
/* 10631 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_BC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10671) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10676) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', '_', 'b', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_BC */
	HB_P_PUSHSYMNEAR, 54,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10732 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 15, 0,	/* GETLIST */
/* 10755 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 63,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 64,	/* VERIF_EAN13 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MCOD_BC */
/* 10793 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 54,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 10813) */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 10816) */
	HB_P_JUMP, 245, 254,	/* -267 (abs: 10546) */
/* 10816 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_LOCALNEARSETINT, 62, 1, 0,	/* I 1*/
/* 10823 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', 'n', 's', 'e', 'r', 'i', 'n', 'o', ' ', 'R', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'n', 'o', ' ', 'S', 'A', 'C', 'M', 'E', 'R', 'C', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10865 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 61,	/* M_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 10889 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 65, 0,	/* NULO */
/* 10902 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MUNIDADE */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 50,	/* MSITTRIB */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 75,	/* MLINHA */
/* 10948 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_LOCALNEARSETSTR, 81, 1, 0,	/* CCOMM 1*/
	0, 
/* 10956 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSTR, 62, 3,	/* 830 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', '(', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ' ', ',', 'r', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', ' ', ',', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', ' ', ' ', ',', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', ',', 'b', 'a', 'l', 'a', 'n', 'c', 'a', ' ', ' ', ' ', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ' ', ',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', ' ', ',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ' ', ',', 'd', 'i', 's', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'l', 'i', 'v', 'r', 'e', '_', 'd', 'e', 's', 'c', ',', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', ' ', ' ', ',', 'p', 'e', 's', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ' ', ',', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', ' ', ' ', ',', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ' ', ' ', ',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', ' ', ' ', ',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ',', 'c', 'o', 'm', '_', 'm', 'o', 'n', 't', ' ', ' ', ',', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ' ', ',', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ' ', ',', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', ' ', ' ', ',', 's', 'a', 'l', 'd', 'o', '_', 'f', 'i', 's', ' ', ',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', ',', 's', 'a', 'l', 'd', 'o', '_', 'a', 'v', ' ', ' ', ',', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ' ', ',', 'b', 'e', 'b', 'i', 'd', 'a', ' ', ' ', ' ', ' ', ',', 'i', 'c', 'm', '_', 's', 'u', 'b', ' ', ' ', ' ', ',', 'i', 'c', 'm', '_', 's', 'u', 'b', '2', ' ', ' ', ',', 'i', 'p', 'i', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'c', 'l', 'f', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'f', 'i', 's', ' ', ' ', ' ', ',', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', ' ', ',', 'n', 'b', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'p', 'r', 'o', 'd', 'e', 'p', 'e', ' ', ' ', ' ', ',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ',', 'g', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', ',', 'p', 'r', 'a', 'z', 'o', ' ', ' ', ' ', ' ', ' ', ',', 'F', 'a', 't', 'C', 'o', 'n', 'v', ' ', ' ', ' ', ',', 'd', 'e', 's', 'c', '_', 'm', 'e', 'r', 'c', ' ', ',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', ' ', ' ', ',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', ' ', ',', 'd', 'o', 'l', 'a', 'r', ' ', ' ', ' ', ' ', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', ',', 'a', 'p', 'l', 'i', 'c', '0', ' ', ' ', ' ', ' ', ',', 'a', 'p', 'l', 'i', 'c', '1', ' ', ' ', ' ', ' ', ',', 'a', 'p', 'l', 'i', 'c', '2', ' ', ' ', ' ', ' ', ',', 'a', 'p', 'l', 'i', 'c', '3', ' ', ' ', ' ', ' ', ',', 'a', 'p', 'l', 'i', 'c', '4', ' ', ' ', ' ', ' ', ',', 'p', 'r', '_', 'f', 'a', 't', ' ', ' ', ' ', ' ', ',', 'p', 'o', 'c', 'k', 'e', 't', ' ', ' ', ' ', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', ',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', ' ', ',', 's', 'l', 'd', '_', 'n', 'e', 'g', ' ', ' ', ' ', ',', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', ' ', ' ', ',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', ',', 'i', 'a', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'i', 'p', 'p', 't', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', ' ', ',', 'p', 'i', 's', ' ', ' ', ',', 'c', 'o', 'n', 'f', 'i', 's', ' ', ',', 'c', 'f', 'o', 'p', '_', 'd', 'e', 'n', 't', ',', 'c', 'f', 'o', 'p', '_', 'f', 'o', 'r', 'a', ',', 'c', 'e', 's', 't', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MREF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MDESCRI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 57,	/* MTIPO_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 58,	/* MBALANCA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MUNIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MDISP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MLIVRE_DESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPESO_LIQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPESO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MP_LUCRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MEST_MIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MEST_MAX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MFABRICA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MISENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MCOMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MCOM_MONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MVAREJO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MBEBIDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MICM_SUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MICM_SUB2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MIPI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCOD_CLF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_FIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 50,	/* MSITTRIB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* MNBM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 56,	/* MPRODEPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MGRAMATURA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MPRAZO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MFATCONV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MDESC_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* MDESC_ICM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MDESC_ICM1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MDOLAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MAPLIC0 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MAPLIC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MAPLIC2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MAPLIC3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MAPLIC4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_PUSHDOUBLE, 102, 102, 102, 102, 102, 102, 230, 63, 10, 1,	/* 0.7, 10, 1 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MPOCKET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MPR_VENDA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 64,	/* MPR_VENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 65,	/* MPR_VENDA3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 66,	/* MPR_VENDA4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MDESCRI */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* MSLD_NEG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 71,	/* MDESCONT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 12701) */
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 12708) */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MIAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 74,	/* MIPPT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* CRIPTOGRAFIA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MLINHA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 79,	/* MPIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* MCONFIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* MCFOP_DENT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* MCFOP_FORA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MCEST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 81,	/* CCOMM */
/* 12844 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 81,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12862 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12887 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 83,	/* MCONS_CAM */
/* 12895 */ HB_P_LINE, 59, 2,	/* 571 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 't', 'u', '_', 'p', 'r', 'o', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'm', '_', 'd', 'b', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 83, 0,	/* MCONS_CAM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12945 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 68,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 69, 0,	/* NCNN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 12973) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 83,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 13018) */
/* 12975 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 81,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12993 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13018 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 68,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 70, 0,	/* NCNN2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 13046) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 83,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 13091) */
/* 13048 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 81,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13066 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13091 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHSYMNEAR, 68,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* NCNN */
	HB_P_DOSHORT, 1,
/* 13101 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 13236) */
/* 13119 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 13129 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
/* 13148 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_DOSHORT, 1,
/* 13167 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 13176 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'F', 'o', 'i', ' ', 'G', 'e', 'r', 'a', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', ' ', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ':', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13236 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHLOCALNEAR, 2,	/* COMP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 185, 3,	/* 953 (abs: 14196) */
/* 13246 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', 'n', 's', 'e', 'r', 'i', 'n', 'o', ' ', 'R', 'e', 'g', 'i', 's', 't', 'r', 'o', ' ', 'n', 'o', ' ', 'C', 'O', 'M', 'P', 'R', 'A', 'S', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 13288 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTR, 117, 1,	/* 373 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 'c', 'o', 'm', 'p', 'r', 'a', 's', ' ', '(', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', ',', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ',', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', ' ', ',', 'd', 'a', 't', '_', 'e', 'n', 't', ' ', ' ', ',', 'p', 'r', '_', 'u', 'n', 'i', 't', ' ', ' ', ',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ',', 's', 'a', 'l', 'd', 'o', ' ', ' ', ' ', ' ', ',', 'q', 'u', 'a', 'n', 't', 'd', '1', ' ', ' ', ',', 'q', 'u', 'a', 'n', 't', 'd', '2', ' ', ' ', ',', 'q', 'u', 'a', 'n', 't', 'd', '3', ' ', ' ', ',', 'q', 'u', 'a', 'n', 't', 'd', '4', ' ', ' ', ',', 'v', 'l', 'r', '1', ' ', ' ', ' ', ' ', ' ', ',', 'v', 'l', 'r', '2', ' ', ' ', ' ', ' ', ' ', ',', 'v', 'l', 'r', '3', ' ', ' ', ' ', ' ', ' ', ',', 'v', 'l', 'r', '4', ' ', ' ', ' ', ' ', ' ', ',', 't', 'o', 't', '_', 'q', 't', 'd', ' ', ' ', ',', 'm', 'e', 'd', 'i', 'a', ' ', ' ', ' ', ' ', ',', 'd', 'i', 's', 'p', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'e', 'd', '_', 'c', 'u', 's', 't', ' ', ',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ',', 'r', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'g', 'r', 'u', 'p', 'o', '_', 's', 'u', 'b', ',', 'c', 'o', 'd', 'f', 'a', 'b', ' ', ' ', ' ', ',', 'f', 'a', 'b', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'e', 's', '1', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'e', 's', '2', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'e', 's', '3', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'e', 's', '4', ' ', ' ', ' ', ' ', ' ', ',', 'q', 't', 'd', '_', 'm', 'e', 's', ' ', ' ', ',', 'd', 'i', 'a', 's', '_', 's', 'u', 'g', ' ', ',', 'p', 'e', 's', 'o', ' ', ' ', ' ', ' ', ' ', ',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', ' ', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPRODUTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MEST_MIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MPRECO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MDISP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MUNIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MREF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MFABRICA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPESO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MISENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14171 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14196 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_PUSHSYMNEAR, 62,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'o', ' ', 's', 'a', 'l', 'd', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 52,	/* OPCAO */
/* 14249 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_PUSHLOCALNEAR, 52,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 14271) */
/* 14261 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHSYMNEAR, 72,	/* SACBAL1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
/* 14271 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_LOCALNEARSETSTR, 59, 2, 0,	/* MINCLUIR 2*/
	'*', 0, 
/* 14280 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHLOCALNEAR, 4,	/* MDESC_PROD */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 14295) */
	HB_P_PUSHLOCALNEAR, 6,	/* MXML */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 20, 202,	/* -13804 (abs: 00491) */
/* 14298 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 14306 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_MERC */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 14313 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VERCLF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 5,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 170, 2,	/* 682 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* MCOD_FIS */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 683 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 5,	/* MZERO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00033) */
	HB_P_PUSHLOCALNEAR, 5,	/* MZERO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00040) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 5,	/* MZERO */
	HB_P_ONE,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00050) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VCODI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00057) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 00104) */
/* 00059 */ HB_P_LINEOFFSET, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00068 */ HB_P_LINEOFFSET, 3,	/* 685 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00091 */ HB_P_LINEOFFSET, 4,	/* 686 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00099 */ HB_P_LINEOFFSET, 5,	/* 687 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00104 */ HB_P_LINEOFFSET, 7,	/* 689 */
	HB_P_PUSHSYMNEAR, 73,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* MSELE */
/* 00113 */ HB_P_LINEOFFSET, 8,	/* 690 */
	HB_P_PUSHSYMNEAR, 74,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 7,	/* MORDE */
/* 00122 */ HB_P_LINEOFFSET, 9,	/* 691 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'f', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'f', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00149) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00149 */ HB_P_LINEOFFSET, 12,	/* 694 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'f', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00168 */ HB_P_LINEOFFSET, 13,	/* 695 */
	HB_P_PUSHSYMNEAR, 75,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00175 */ HB_P_LINEOFFSET, 16,	/* 698 */
	HB_P_PUSHSYMNEAR, 76,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* VCODI */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00185 */ HB_P_LINEOFFSET, 18,	/* 700 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 4,	/* T */
	HB_P_TRUE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00200) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 77,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 00290) */
/* 00202 */ HB_P_LINEOFFSET, 19,	/* 701 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* VCODI */
/* 00213 */ HB_P_LINEOFFSET, 20,	/* 702 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* MCOD_FIS */
/* 00225 */ HB_P_LINEOFFSET, 21,	/* 703 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'j', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00259 */ HB_P_LINEOFFSET, 22,	/* 704 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00283) */
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00284) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00285 */ HB_P_LINEOFFSET, 23,	/* 705 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00290 */ HB_P_LINEOFFSET, 25,	/* 707 */
	HB_P_PUSHSYMNEAR, 77,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 91,	/* 91 (abs: 00388) */
/* 00299 */ HB_P_LINEOFFSET, 26,	/* 708 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* VCODI */
/* 00310 */ HB_P_LINEOFFSET, 27,	/* 709 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* MCOD_FIS */
/* 00322 */ HB_P_LINEOFFSET, 28,	/* 710 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'n', 'a', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 29,	/* 711 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00381) */
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00382) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00383 */ HB_P_LINEOFFSET, 30,	/* 712 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00388 */ HB_P_LINEOFFSET, 32,	/* 714 */
	HB_P_PUSHSYMNEAR, 78,	/* CLF */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* NUMERO */
	HB_P_POPMEMVAR, 9, 0,	/* MCOD_FIS */
/* 00397 */ HB_P_LINEOFFSET, 33,	/* 715 */
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00436) */
/* 00405 */ HB_P_LINEOFFSET, 34,	/* 716 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00429) */
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00430) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00431 */ HB_P_LINEOFFSET, 35,	/* 717 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00436 */ HB_P_LINEOFFSET, 37,	/* 719 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00445 */ HB_P_LINEOFFSET, 38,	/* 720 */
	HB_P_PUSHSYMNEAR, 24,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 25,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* CLF */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* NUMERO */
	HB_P_DOSHORT, 1,
/* 00465 */ HB_P_LINEOFFSET, 39,	/* 721 */
	HB_P_PUSHSYMNEAR, 48,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00473 */ HB_P_LINEOFFSET, 40,	/* 722 */
	HB_P_PUSHSYMNEAR, 41,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00497) */
	HB_P_PUSHSYMNEAR, 42,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00498) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00499 */ HB_P_LINEOFFSET, 41,	/* 723 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00504 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VERCST )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 219, 2,	/* 731 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MVER_CST */
/* 00011 */ HB_P_LINEOFFSET, 1,	/* 732 */
	HB_P_PUSHSYMNEAR, 57,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* M_CST */
/* 00022 */ HB_P_LINEOFFSET, 2,	/* 733 */
	HB_P_MESSAGE, 28, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 29,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 's', 't', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 50,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_CST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MVER_CST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00084 */ HB_P_LINEOFFSET, 3,	/* 734 */
	HB_P_PUSHSYMNEAR, 51,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MVER_CST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 00184) */
/* 00097 */ HB_P_LINEOFFSET, 4,	/* 735 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 's', 't', 'e', ' ', 'C', 'S', 'T', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* M_CST */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', 'n', 'a', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', 'f', 'a', 'v', 'o', 'r', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', '.', '.', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00164 */ HB_P_LINEOFFSET, 5,	/* 736 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00177) */
/* 00172 */ HB_P_LINEOFFSET, 6,	/* 737 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00177 */ HB_P_LINEOFFSET, 8,	/* 739 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00184 */ HB_P_LINEOFFSET, 12,	/* 743 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00197) */
/* 00192 */ HB_P_LINEOFFSET, 13,	/* 744 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00197 */ HB_P_LINEOFFSET, 15,	/* 746 */
	HB_P_PUSHLOCALNEAR, 3,	/* MVER_CST */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00208 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

