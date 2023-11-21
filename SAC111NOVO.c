/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC111NOVO.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC111NOVO.PRG /q /oC:\hti\SISCOM\SAC111NOVO.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:57 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC111NOVO.PRG"

HB_FUNC( SAC111 );
HB_FUNC( SAC111OI );
HB_FUNC( SAC111DF );
HB_FUNC( SAC111SV );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( WVW_PBSETFONT );
HB_FUNC_EXTERN( WVW_PBCREATE );
HB_FUNC_EXTERN( WVW_PBENABLE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( INICIA_ACBR );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VERCST );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( VERCODBARRA );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( IBR_COMANDO );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( UPDATED );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( SAC110SITE );
HB_FUNC_EXTERN( DRAWLABEL );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SACCST );
HB_FUNC_EXTERN( VEROBS );
HB_FUNC_EXTERN( TIRA_ACENTO );
HB_FUNC_EXTERN( SR_SETACTIVECONNECTION );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC111NOVO )
{ "SAC111", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC111 )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MISENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFABRICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_AUX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALTERA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBOTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBOTA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBOTA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBOTA3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "WVW_PBSETFONT", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBSETFONT )}, NULL },
{ "WVW_PBCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBCREATE )}, NULL },
{ "SAC111OI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC111OI )}, NULL },
{ "SAC111DF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC111DF )}, NULL },
{ "SAC111SV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC111SV )}, NULL },
{ "WVW_PBENABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_PBENABLE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INICIA_ACBR", {HB_FS_PUBLIC}, {HB_FUNCNAME( INICIA_ACBR )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VERCST", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCST )}, NULL },
{ "MINCLUSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MGRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSUB_GRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "VERCODBARRA", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCODBARRA )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "IBR_COMANDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_COMANDO )}, NULL },
{ "MRETORNO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "LIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "UPDATED", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPDATED )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MDESCRI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "SAC110SITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC110SITE )}, NULL },
{ "DRAWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWLABEL )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SACCST", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCST )}, NULL },
{ "MINSENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEROBS", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEROBS )}, NULL },
{ "TIRA_ACENTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIRA_ACENTO )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONS_CAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_SETACTIVECONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETACTIVECONNECTION )}, NULL },
{ "NCNN1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC111NOVO )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC111NOVO
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC111NOVO = hb_vm_SymbolInit_SAC111NOVO;
   #pragma data_seg()
#endif

HB_FUNC( SAC111 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 3, 1, 0,	/* MACBR 1*/
	0, 
/* 00011 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', '1', '1', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* CONS_MERC */
	HB_P_PUSHSYMNEAR, 3,	/* MISENTO */
	HB_P_PUSHSYMNEAR, 4,	/* MFABRICA */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_AUX */
	HB_P_PUSHSYMNEAR, 6,	/* MALTERA */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 9,	/* NBOTA */
	HB_P_PUSHSYMNEAR, 10,	/* NBOTA1 */
	HB_P_PUSHSYMNEAR, 11,	/* NBOTA2 */
	HB_P_PUSHSYMNEAR, 12,	/* NBOTA3 */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 6, 0,	/* MALTERA */
	HB_P_POPVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00067 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00124) */
/* 00119 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00124 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00154) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00154 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00183) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00183 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00212) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00212 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 17,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 00226 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00269 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 20,	/* WVW_PBSETFONT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'm', 'e', 's', 0, 
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00290 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'O', 'u', 't', 'r', 'a', 's', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 231, 245, 'e', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 22,	/* SAC111OI */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 9, 0,	/* NBOTA */
/* 00339 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 'd', 'o', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 23,	/* SAC111DF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 10, 0,	/* NBOTA1 */
/* 00383 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'v', 'a', 'r', ' ', 'A', 'l', 't', 'e', 'r', 'a', 231, 227, 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 24,	/* SAC111SV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 11, 0,	/* NBOTA2 */
/* 00430 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* NBOTA */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 00442 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* NBOTA1 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 00454 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* NBOTA2 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 00466 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCODIGO */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_MERC */
/* 00473 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 19,	/* 19 (abs: 00507) */
/* 00490 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 28,	/* INICIA_ACBR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00507) */
/* 00499 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_LOCALNEARSETSTR, 3, 2, 0,	/* MACBR 2*/
	'S', 0, 
/* 00507 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 2, 0,	/* CONS_MERC */
/* 00515 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 2, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00591 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00615 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 00681) */
/* 00629 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00669 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00676 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00681 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 4, 0,	/* MFABRICA */
/* 00694 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 36,	/* VERCST */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MISENTO */
/* 00712 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 37, 0,	/* MINCLUSAO */
/* 00721 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 38,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPOP,
/* 00744 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 38,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 40, 0,	/* MGRUPO */
/* 00770 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 38,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 41, 0,	/* MSUB_GRUPO */
/* 00795 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_AUX */
/* 00808 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 38,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_FORN */
/* 00826 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 42,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00839 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 43,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00849 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00892 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00900 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00942 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00985 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01028 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01071 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01114 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01157 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01200 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', 'i', 'm', 'a', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01243 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', 'i', 'm', 'a', ' ', 'S', 'a', 'i', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01286 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'a', 't', 'a', ' ', 'U', 'l', 't', 'i', 'm', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01329 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHSYMNEAR, 48,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'O', 'U', 'T', 'R', 'A', 'S', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'C', 'O', 'E', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 8,
/* 01367 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01412 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01457 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01502 */ HB_P_LINEOFFSET, 95,	/* 103 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'A', 'u', 'x', 'i', 'l', 'i', 'a', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01547 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01592 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'e', 's', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01637 */ HB_P_LINEOFFSET, 98,	/* 106 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'e', 's', 'o', ' ', 'B', 'r', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01682 */ HB_P_LINEOFFSET, 99,	/* 107 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'i', 'n', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01727 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01772 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'B', 'l', 'o', 'q', '.', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01817 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01862 */ HB_P_LINEOFFSET, 103,	/* 111 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01907 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'L', 'i', 'v', 'r', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01952 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 'j', 'u', 's', 't', 'e', ' ', 'p', '/', 'D', 'o', 'l', 'a', 'r', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01997 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'n', 'v', 'i', 'a', ' ', 'p', '/', 'A', 'P', 'P', '.', '.', '.', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02042 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'G', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', '1', 'x', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02087 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'V', 'o', 'l', 'u', 'm', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02132 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'L', 'o', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02177 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'U', 's', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02222 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02267 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02312 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'a', 'z', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02357 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02402 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'V', 'e', 'n', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'a', '(', '%', ')', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02447 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', '(', '%', ')', '.', '.', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02492 */ HB_P_LINEOFFSET, 117,	/* 125 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'A', 'p', 'r', 'a', 'z', 'o', ' ', 'R', '$', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02537 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02582 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02627 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'I', 'm', 'a', 'g', 'e', 'm', ' ', 'd', 'o', ' ', 'A', 'P', 'P', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02673 */ HB_P_LINEOFFSET, 122,	/* 130 */
	HB_P_PUSHSYMNEAR, 48,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'A', 'D', 'O', 'S', ' ', 'F', 'I', 'S', 'C', 'A', 'I', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 8,
/* 02707 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'N', 'o', 't', 'a', ' ', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02752 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02816) */
/* 02769 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'S', 'O', 'S', 'N', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 02861) */
/* 02816 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', '.', 'S', 'i', 't', '.', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', ' ', '(', 'C', 'S', 'T', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02861 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02906 */ HB_P_LINEOFFSET, 130,	/* 138 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'(', 'I', 'A', 'T', ')', '-', '[', 'A', ']', 'r', 'r', 'e', 'n', 'd', '.', ' ', '[', 'T', ']', 'r', 'u', 'n', 'c', 'a', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02951 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'(', 'I', 'P', 'P', 'T', ')', '[', 'P', ']', 'r', 'o', 'p', 'r', 'i', 'o', ' ', '[', 'T', ']', 'e', 'r', 'c', 'e', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02996 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'E', 'P', 'E', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03041 */ HB_P_LINEOFFSET, 133,	/* 141 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'e', 'n', 's', 'a', 'g', 'e', 'm', ' ', 'N', 'F', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03086 */ HB_P_LINEOFFSET, 134,	/* 142 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'C', 'M', ' ', '[', '%', ']', ' ', '/', ' ', 'I', 'S', 'S', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03131 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'o', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03176 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'F', 'a', 't', 'o', 'r', ' ', 'D', 'e', 's', 'c', '.', 'B', 'A', 'S', 'E', ' ', 'I', 'C', 'M', 'S', ' ', 'S', 'U', 'B', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03221 */ HB_P_LINEOFFSET, 137,	/* 145 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'P', 'I', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03266 */ HB_P_LINEOFFSET, 138,	/* 146 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03311 */ HB_P_LINEOFFSET, 139,	/* 147 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'e', 's', 'c', '.', 'I', 'C', 'M', 'S', ' ', 'N', 'O', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03356 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'F', 'a', 't', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03401 */ HB_P_LINEOFFSET, 141,	/* 149 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', '.', 'P', 'e', 's', 's', 'o', 'a', ' ', 'F', 'i', 's', 'i', 'c', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03446 */ HB_P_LINEOFFSET, 142,	/* 150 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'S', 'T', ' ', 'd', 'o', ' ', 'P', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03491 */ HB_P_LINEOFFSET, 143,	/* 151 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'[', '%', '}', ' ', 'P', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03536 */ HB_P_LINEOFFSET, 144,	/* 152 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'S', 'T', ' ', 'd', 'o', ' ', 'C', 'O', 'F', 'I', 'N', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03581 */ HB_P_LINEOFFSET, 145,	/* 153 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'[', '%', '}', ' ', 'C', 'O', 'F', 'I', 'N', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03626 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'D', 'e', 'n', 't', 'r', 'o', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03671 */ HB_P_LINEOFFSET, 147,	/* 155 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'F', 'o', 'r', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03716 */ HB_P_LINEOFFSET, 148,	/* 156 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'E', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03761 */ HB_P_LINEOFFSET, 149,	/* 157 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'A', 'N', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03806 */ HB_P_LINEOFFSET, 150,	/* 158 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'v', 'e', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03851 */ HB_P_LINEOFFSET, 151,	/* 159 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03860 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03883 */ HB_P_LINEOFFSET, 153,	/* 161 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03908 */ HB_P_LINEOFFSET, 154,	/* 162 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MSUB_GRUPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03932 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03956 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03980 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04017 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04041 */ HB_P_LINEOFFSET, 159,	/* 167 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04065 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04089 */ HB_P_LINEOFFSET, 162,	/* 170 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04112 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04136 */ HB_P_LINEOFFSET, 164,	/* 172 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04160 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04184 */ HB_P_LINEOFFSET, 166,	/* 174 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04208 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04243 */ HB_P_LINEOFFSET, 168,	/* 176 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04278 */ HB_P_LINEOFFSET, 169,	/* 177 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04314 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04350 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04374 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04398 */ HB_P_LINEOFFSET, 173,	/* 181 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04422 */ HB_P_LINEOFFSET, 174,	/* 182 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04446 */ HB_P_LINEOFFSET, 175,	/* 183 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04470 */ HB_P_LINEOFFSET, 176,	/* 184 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04494 */ HB_P_LINEOFFSET, 177,	/* 185 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04527 */ HB_P_LINEOFFSET, 178,	/* 186 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04561 */ HB_P_LINEOFFSET, 179,	/* 187 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04585 */ HB_P_LINEOFFSET, 180,	/* 188 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04609 */ HB_P_LINEOFFSET, 181,	/* 189 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04642 */ HB_P_LINEOFFSET, 182,	/* 190 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04675 */ HB_P_LINEOFFSET, 183,	/* 191 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04705 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04738 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04771 */ HB_P_LINEOFFSET, 186,	/* 194 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04804 */ HB_P_LINEOFFSET, 187,	/* 195 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04838 */ HB_P_LINEOFFSET, 188,	/* 196 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04872 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 04904 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 04936 */ HB_P_LINEOFFSET, 191,	/* 199 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 04968 */ HB_P_LINEOFFSET, 192,	/* 200 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 05000 */ HB_P_LINEOFFSET, 196,	/* 204 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 05032 */ HB_P_LINEOFFSET, 197,	/* 205 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05056 */ HB_P_LINEOFFSET, 198,	/* 206 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05080 */ HB_P_LINEOFFSET, 199,	/* 207 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05104 */ HB_P_LINEOFFSET, 200,	/* 208 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05128 */ HB_P_LINEOFFSET, 201,	/* 209 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05152 */ HB_P_LINEOFFSET, 202,	/* 210 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05176 */ HB_P_LINEOFFSET, 203,	/* 211 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05208 */ HB_P_LINEOFFSET, 204,	/* 212 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05241 */ HB_P_LINEOFFSET, 205,	/* 213 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05275 */ HB_P_LINEOFFSET, 206,	/* 214 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05308 */ HB_P_LINEOFFSET, 207,	/* 215 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05332 */ HB_P_LINEOFFSET, 208,	/* 216 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 94,	/* 94 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05356 */ HB_P_LINEOFFSET, 209,	/* 217 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05390 */ HB_P_LINEOFFSET, 210,	/* 218 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05423 */ HB_P_LINEOFFSET, 211,	/* 219 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05452 */ HB_P_LINEOFFSET, 212,	/* 220 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05486 */ HB_P_LINEOFFSET, 213,	/* 221 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05515 */ HB_P_LINEOFFSET, 214,	/* 222 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05549 */ HB_P_LINEOFFSET, 215,	/* 223 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05573 */ HB_P_LINEOFFSET, 216,	/* 224 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05597 */ HB_P_LINEOFFSET, 217,	/* 225 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05631 */ HB_P_LINEOFFSET, 218,	/* 226 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 50,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 117,	/* 117 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05668 */ HB_P_LINEOFFSET, 219,	/* 227 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05692 */ HB_P_LINEOFFSET, 220,	/* 228 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05700 */ HB_P_LINEOFFSET, 221,	/* 229 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 39,	/* 39 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_AUX */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05773) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 05792) */
	HB_P_PUSHSYMNEAR, 55,	/* VERCODBARRA */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05816 */ HB_P_LINEOFFSET, 222,	/* 230 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 05838 */ HB_P_LINEOFFSET, 223,	/* 231 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 05925) */
/* 05850 */ HB_P_LINEOFFSET, 224,	/* 232 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 05913) */
/* 05858 */ HB_P_LINEOFFSET, 226,	/* 234 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05893 */ HB_P_LINEOFFSET, 227,	/* 235 */
	HB_P_PUSHSYMNEAR, 59,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 05901 */ HB_P_LINEOFFSET, 228,	/* 236 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 203,	/* -53 (abs: 05858) */
/* 05913 */ HB_P_LINEOFFSET, 233,	/* 241 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05920 */ HB_P_LINEOFFSET, 234,	/* 242 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 05925 */ HB_P_LINEOFFSET, 236,	/* 244 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 3,	/* MACBR */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 05953) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 05969) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_AUX */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_NOT,
	HB_P_JUMPFALSE, 67, 1,	/* 323 (abs: 06292) */
/* 05972 */ HB_P_LINEOFFSET, 237,	/* 245 */
	HB_P_PUSHSYMNEAR, 60,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'G', 'T', 'I', 'N', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', '(', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 61, 0,	/* MRETORNO */
/* 06022 */ HB_P_LINEOFFSET, 238,	/* 246 */
	HB_P_PUSHSYMNEAR, 62,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MRETORNO */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 63, 0,	/* LIN */
/* 06041 */ HB_P_LINEOFFSET, 239,	/* 247 */
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'x', 'M', 'o', 't', 'i', 'v', 'o', '=', 'R', 'e', 'j', 'e', 'i', 'c', 'a', 'o', ':', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 06097) */
/* 06077 */ HB_P_LINEOFFSET, 240,	/* 248 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 198, 0,	/* 198 (abs: 06292) */
/* 06097 */ HB_P_LINEOFFSET, 242,	/* 250 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 64, 0,	/* LINHA */
	HB_P_POPVARIABLE, 65, 0,	/* LINHAS */
/* 06107 */ HB_P_LINEOFFSET, 243,	/* 251 */
	HB_P_PUSHSYMNEAR, 66,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MRETORNO */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 65, 0,	/* LINHAS */
/* 06122 */ HB_P_LINEOFFSET, 244,	/* 252 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 64, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 64, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 65, 0,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 157, 0,	/* 157 (abs: 06292) */
/* 06138 */ HB_P_LINEOFFSET, 245,	/* 253 */
	HB_P_PUSHSYMNEAR, 62,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MRETORNO */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHVARIABLE, 64, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 63, 0,	/* LIN */
/* 06158 */ HB_P_LINEOFFSET, 247,	/* 255 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'S', 'T', '=', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 06220) */
/* 06179 */ HB_P_LINEOFFSET, 248,	/* 256 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 06279) */
/* 06196 */ HB_P_LINEOFFSET, 249,	/* 257 */
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 61,	/* 61 (abs: 06279) */
/* 06220 */ HB_P_LINEOFFSET, 251,	/* 259 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'C', 'M', '=', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 06279) */
/* 06240 */ HB_P_LINEOFFSET, 252,	/* 260 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 06279) */
/* 06257 */ HB_P_LINEOFFSET, 253,	/* 261 */
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 63, 0,	/* LIN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPOP,
/* 06279 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHVARIABLE, 64, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 64, 0,	/* LINHA */
	HB_P_JUMP, 95, 255,	/* -161 (abs: 06128) */
/* 06292 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 67,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 29,	/* 29 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06344) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 06357) */
	HB_P_PUSHSYMNEAR, 68,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 41,	/* 41 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 'r', ' ', 'o', ' ', 'g', 'r', 'u', 'p', 'o', '.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06415 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 06438 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 83,	/* 83 (abs: 06532) */
/* 06451 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHLOCALNEAR, 2,	/* OP */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 06518) */
/* 06460 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'e', 'c', 'l', 'e', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 06496 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 59,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 06505 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 200,	/* -56 (abs: 06460) */
/* 06518 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06526 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06532 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 68,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 3,
/* 06547 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 67,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 32,	/* 32 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06602) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 06618) */
	HB_P_PUSHSYMNEAR, 70,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHMEMVARREF, 41, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 45,	/* 45 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 'r', ' ', 'o', ' ', 's', 'u', 'b', '-', 'g', 'r', 'u', 'p', 'o', '.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06680 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 06703 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06726) */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06738) */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06743) */
	HB_P_JUMP, 230, 232,	/* -5914 (abs: 00826) */
/* 06743 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 06753 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06780 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06807 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06832 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 06841 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 70,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHMEMVARREF, 41, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 4,
/* 06859 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06923) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 06924) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'e', 's', 'c', 'r', 'i', 231, 227, 'o', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 06993) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 37, 0,	/* MINCLUSAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07016 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 90,	/* 90 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'U', 'N', ']', ' ', 'U', 'n', 'i', 'd', 'a', 'd', 'e', ' ', '-', ' ', '[', 'K', 'G', ']', ' ', 'Q', 'u', 'i', 'l', 'o', ' ', '-', ' ', '[', 'M', 'T', ']', ' ', 'M', 'e', 't', 'r', 'o', ' ', '-', ' ', 'O', 'u', ' ', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', '.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 07150) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 37, 0,	/* MINCLUSAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07173 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 07196 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 71,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07213) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MALTERA */
/* 07213 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 72,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 73, 0,	/* MDESCRI */
/* 07243 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSYMNEAR, 51,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBLOCKSHORT, 31,	/* 31 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 07319) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 37, 0,	/* MINCLUSAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07324) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 07325) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 65,	/* 65 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'p', 'r', 'e', 231, 'o', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 07390) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 37, 0,	/* MINCLUSAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07413 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 07436 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* NBOTA */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 07449 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* NBOTA1 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 07462 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* NBOTA2 */
	HB_P_TRUE,
	HB_P_DOSHORT, 3,
/* 07475 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 229,	/* -6660 (abs: 00826) */
/* 07489 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07497 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07503 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC111OI )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'A', 'L', 'T', 'E', 'R', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '-', ' ', 'O', 'u', 't', 'r', 'a', 's', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00078) */
/* 00073 */ HB_P_LINEOFFSET, 1,	/* 332 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00078 */ HB_P_LINEOFFSET, 4,	/* 335 */
	HB_P_PUSHSYMNEAR, 17,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 336 */
	HB_P_PUSHSYMNEAR, 74,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00099 */ HB_P_LINEOFFSET, 6,	/* 337 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '-', ' ', 'O', 'u', 't', 'r', 'a', 's', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00164 */ HB_P_LINEOFFSET, 7,	/* 338 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_PBCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'h', 't', 't', 'p', 's', ':', '/', '/', 'i', 'm', 'g', 'u', 'r', '.', 'c', 'o', 'm', '/', 'u', 'p', 'l', 'o', 'a', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 75,	/* SAC110SITE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 12, 0,	/* NBOTA3 */
/* 00219 */ HB_P_LINEOFFSET, 9,	/* 340 */
	HB_P_PUSHSYMNEAR, 42,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00232 */ HB_P_LINEOFFSET, 10,	/* 341 */
	HB_P_PUSHSYMNEAR, 43,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00242 */ HB_P_LINEOFFSET, 11,	/* 342 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00289 */ HB_P_LINEOFFSET, 12,	/* 343 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00333 */ HB_P_LINEOFFSET, 13,	/* 344 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00377 */ HB_P_LINEOFFSET, 14,	/* 345 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00422 */ HB_P_LINEOFFSET, 15,	/* 346 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'A', 'u', 'x', 'i', 'l', 'i', 'a', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00467 */ HB_P_LINEOFFSET, 16,	/* 347 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00512 */ HB_P_LINEOFFSET, 17,	/* 348 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'e', 's', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00557 */ HB_P_LINEOFFSET, 18,	/* 349 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'e', 's', 'o', ' ', 'B', 'r', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00602 */ HB_P_LINEOFFSET, 19,	/* 350 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'i', 'n', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00647 */ HB_P_LINEOFFSET, 20,	/* 351 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00692 */ HB_P_LINEOFFSET, 21,	/* 352 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'B', 'l', 'o', 'q', '.', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 22,	/* 353 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00782 */ HB_P_LINEOFFSET, 23,	/* 354 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00827 */ HB_P_LINEOFFSET, 24,	/* 355 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'L', 'i', 'v', 'r', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00872 */ HB_P_LINEOFFSET, 25,	/* 356 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 'j', 'u', 's', 't', 'e', ' ', 'p', '/', 'D', 'o', 'l', 'a', 'r', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00917 */ HB_P_LINEOFFSET, 26,	/* 357 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'n', 'v', 'i', 'a', ' ', 'p', '/', 'A', 'P', 'P', '.', '.', '.', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00962 */ HB_P_LINEOFFSET, 27,	/* 358 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'G', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', '1', 'x', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01007 */ HB_P_LINEOFFSET, 28,	/* 359 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'V', 'o', 'l', 'u', 'm', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01052 */ HB_P_LINEOFFSET, 29,	/* 360 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'L', 'o', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01097 */ HB_P_LINEOFFSET, 30,	/* 361 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'U', 's', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01142 */ HB_P_LINEOFFSET, 31,	/* 362 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01187 */ HB_P_LINEOFFSET, 32,	/* 363 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'M', 'o', 'n', 't', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01232 */ HB_P_LINEOFFSET, 33,	/* 364 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'a', 'z', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01277 */ HB_P_LINEOFFSET, 34,	/* 365 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01322 */ HB_P_LINEOFFSET, 35,	/* 366 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'V', 'e', 'n', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'a', '(', '%', ')', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01367 */ HB_P_LINEOFFSET, 36,	/* 367 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', '(', '%', ')', '.', '.', ' ', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01412 */ HB_P_LINEOFFSET, 37,	/* 368 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'A', 'p', 'r', 'a', 'z', 'o', ' ', 'R', '$', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01457 */ HB_P_LINEOFFSET, 38,	/* 369 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01502 */ HB_P_LINEOFFSET, 39,	/* 370 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01547 */ HB_P_LINEOFFSET, 40,	/* 371 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'I', 'm', 'a', 'g', 'e', 'm', ' ', 'd', 'o', ' ', 'A', 'P', 'P', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01592 */ HB_P_LINEOFFSET, 41,	/* 372 */
	HB_P_PUSHSYMNEAR, 76,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 133,	/* 133 */
	'S', 'i', 't', 'e', ':', ' ', 'h', 't', 't', 'p', 's', ':', '/', '/', 'i', 'm', 'g', 'u', 'r', '.', 'c', 'o', 'm', '/', 'u', 'p', 'l', 'o', 'a', 'd', ' ', '-', ' ', 'E', 's', 'c', 'o', 'l', 'h', 'e', 'r', ' ', 'a', ' ', 'I', 'M', 'A', 'G', 'E', 'M', ' ', 'e', ' ', 'c', 'o', 'p', 'i', 'a', ' ', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'd', 'a', ' ', 'I', 'M', 'A', 'G', 'E', 'M', ' ', 'e', ' ', '<', 'F', '6', '>', ' ', 'P', 'a', 'r', 'a', ' ', 'c', 'o', 'p', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 34, 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'I', 'm', 'a', 'g', 'e', 'm', ' ', 'd', 'o', ' ', 'A', 'P', 'P', 34, 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01753 */ HB_P_LINEOFFSET, 42,	/* 373 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01800 */ HB_P_LINEOFFSET, 44,	/* 375 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 77, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01876 */ HB_P_LINEOFFSET, 45,	/* 376 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 67,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 78,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVARREF, 8, 0,	/* MCOD_FORN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 46,	/* 46 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 'r', ' ', 'o', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01991 */ HB_P_LINEOFFSET, 46,	/* 377 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 02013 */ HB_P_LINEOFFSET, 47,	/* 378 */
	HB_P_PUSHSYMNEAR, 71,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02029) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* MALTERA */
/* 02029 */ HB_P_LINEOFFSET, 48,	/* 379 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02044) */
	HB_P_JUMP, 255, 14,	/* 3839 (abs: 05880) */
/* 02044 */ HB_P_LINEOFFSET, 52,	/* 383 */
	HB_P_PUSHSYMNEAR, 78,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_FORN */
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 3,
/* 02057 */ HB_P_LINEOFFSET, 53,	/* 384 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_PUSHSYMNEAR, 79,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 42,	/* 42 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'<', 'F', '1', '>', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 'r', ' ', 'a', ' ', 'E', 'S', 'P', 'E', 'C', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02188 */ HB_P_LINEOFFSET, 54,	/* 385 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02304 */ HB_P_LINEOFFSET, 55,	/* 386 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'1', ',', '2', ',', '3', ',', '4', ',', '5', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 91,	/* 91 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', '1', ']', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '[', '2', ']', ' ', 'M', 'a', 't', 'e', 'r', 'i', 'a', ' ', 'P', 'r', 'i', 'm', 'a', ' ', '-', ' ', '[', '3', ']', ' ', 'I', 's', 'u', 'm', 'o', 's', ' ', '-', ' ', '[', '4', ']', ' ', 'C', 'o', 'n', 's', 'u', 'm', 'o', ' ', '-', ' ', '[', '5', ']', ' ', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02483 */ HB_P_LINEOFFSET, 56,	/* 387 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02605 */ HB_P_LINEOFFSET, 57,	/* 388 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02727 */ HB_P_LINEOFFSET, 58,	/* 389 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02850 */ HB_P_LINEOFFSET, 59,	/* 390 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02973 */ HB_P_LINEOFFSET, 60,	/* 391 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03093 */ HB_P_LINEOFFSET, 61,	/* 392 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03213 */ HB_P_LINEOFFSET, 62,	/* 393 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 124,	/* 124 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'E', 'S', 'C', '_', 'P', 'R', 'O', 'D', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 03397) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03420 */ HB_P_LINEOFFSET, 63,	/* 394 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03523 */ HB_P_LINEOFFSET, 64,	/* 395 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03643 */ HB_P_LINEOFFSET, 65,	/* 396 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03763 */ HB_P_LINEOFFSET, 66,	/* 397 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03883 */ HB_P_LINEOFFSET, 67,	/* 398 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04004 */ HB_P_LINEOFFSET, 68,	/* 399 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04120 */ HB_P_LINEOFFSET, 69,	/* 400 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', ' ', 'S', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', ' ', 'N', 227, 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04240 */ HB_P_LINEOFFSET, 70,	/* 401 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04360 */ HB_P_LINEOFFSET, 71,	/* 402 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04480 */ HB_P_LINEOFFSET, 72,	/* 403 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04597 */ HB_P_LINEOFFSET, 73,	/* 404 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04717 */ HB_P_LINEOFFSET, 74,	/* 405 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04788 */ HB_P_LINEOFFSET, 75,	/* 406 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04908 */ HB_P_LINEOFFSET, 76,	/* 407 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05029 */ HB_P_LINEOFFSET, 77,	/* 408 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05150 */ HB_P_LINEOFFSET, 78,	/* 409 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05266 */ HB_P_LINEOFFSET, 79,	/* 410 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05378 */ HB_P_LINEOFFSET, 80,	/* 411 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05490 */ HB_P_LINEOFFSET, 81,	/* 412 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05602 */ HB_P_LINEOFFSET, 82,	/* 413 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05714 */ HB_P_LINEOFFSET, 83,	/* 414 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'S', '6', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05783 */ HB_P_LINEOFFSET, 84,	/* 415 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 05805 */ HB_P_LINEOFFSET, 85,	/* 416 */
	HB_P_PUSHSYMNEAR, 80,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'o', 'u', 't', 'r', 'a', 's', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 81, 0,	/* OPCAO */
/* 05853 */ HB_P_LINEOFFSET, 86,	/* 417 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05875) */
	HB_P_PUSHVARIABLE, 81, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05880) */
	HB_P_JUMP, 230, 233,	/* -5658 (abs: 00219) */
/* 05880 */ HB_P_LINEOFFSET, 92,	/* 423 */
	HB_P_PUSHSYMNEAR, 74,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	13, 13, 13, 13, 13, 13, 13, 0, 
	HB_P_DOSHORT, 1,
/* 05897 */ HB_P_LINEOFFSET, 93,	/* 424 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05904 */ HB_P_LINEOFFSET, 94,	/* 425 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 05909 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC111DF )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 14,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '-', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 15, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00074) */
/* 00069 */ HB_P_LINEOFFSET, 1,	/* 434 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00074 */ HB_P_LINEOFFSET, 4,	/* 437 */
	HB_P_PUSHSYMNEAR, 17,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 00088 */ HB_P_LINEOFFSET, 5,	/* 438 */
	HB_P_PUSHSYMNEAR, 74,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00095 */ HB_P_LINEOFFSET, 6,	/* 439 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', '-', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00154 */ HB_P_LINEOFFSET, 8,	/* 441 */
	HB_P_PUSHSYMNEAR, 42,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00167 */ HB_P_LINEOFFSET, 9,	/* 442 */
	HB_P_PUSHSYMNEAR, 43,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00177 */ HB_P_LINEOFFSET, 10,	/* 443 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'N', 'o', 't', 'a', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00224 */ HB_P_LINEOFFSET, 11,	/* 444 */
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 00290) */
/* 00241 */ HB_P_LINEOFFSET, 12,	/* 445 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'S', 'O', 'S', 'N', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00337) */
/* 00290 */ HB_P_LINEOFFSET, 14,	/* 447 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', '.', 'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', ' ', '(', 'C', 'S', 'T', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00337 */ HB_P_LINEOFFSET, 16,	/* 449 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00385 */ HB_P_LINEOFFSET, 17,	/* 450 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'(', 'I', 'A', 'T', ')', '-', '[', 'A', ']', 'r', 'r', 'e', 'n', 'd', 'o', 'n', 'd', 'a', 'r', ' ', '[', 'T', ']', 'r', 'u', 'n', 'c', 'a', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00433 */ HB_P_LINEOFFSET, 18,	/* 451 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'(', 'I', 'P', 'P', 'T', ')', '[', 'P', ']', 'r', 'o', 'p', 'r', 'i', 'o', ' ', '[', 'T', ']', 'e', 'r', 'c', 'e', 'r', 'i', 'z', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00481 */ HB_P_LINEOFFSET, 19,	/* 452 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'E', 'P', 'E', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00529 */ HB_P_LINEOFFSET, 20,	/* 453 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'M', 'e', 'n', 's', 'a', 'g', 'e', 'm', ' ', 'N', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00577 */ HB_P_LINEOFFSET, 21,	/* 454 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', '[', '%', ']', ' ', '/', ' ', 'I', 'S', 'S', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00625 */ HB_P_LINEOFFSET, 22,	/* 455 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'o', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00673 */ HB_P_LINEOFFSET, 23,	/* 456 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'F', 'a', 't', 'o', 'r', ' ', 'D', 'e', 's', 'c', '.', 'B', 'A', 'S', 'E', ' ', 'I', 'C', 'M', 'S', ' ', 'S', 'U', 'B', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00721 */ HB_P_LINEOFFSET, 24,	/* 457 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'P', 'I', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00769 */ HB_P_LINEOFFSET, 25,	/* 458 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00817 */ HB_P_LINEOFFSET, 26,	/* 459 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'c', '.', 'I', 'C', 'M', 'S', ' ', 'N', 'O', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00865 */ HB_P_LINEOFFSET, 27,	/* 460 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'F', 'a', 't', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00913 */ HB_P_LINEOFFSET, 28,	/* 461 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', '.', 'P', 'e', 's', 's', 'o', 'a', ' ', 'F', 'i', 's', 'i', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00961 */ HB_P_LINEOFFSET, 29,	/* 462 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'S', 'T', ' ', 'd', 'o', ' ', 'P', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01009 */ HB_P_LINEOFFSET, 30,	/* 463 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'[', '%', '}', ' ', 'P', 'I', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01057 */ HB_P_LINEOFFSET, 31,	/* 464 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'S', 'T', ' ', 'd', 'o', ' ', 'C', 'O', 'F', 'I', 'N', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01105 */ HB_P_LINEOFFSET, 32,	/* 465 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'[', '%', '}', ' ', 'C', 'O', 'F', 'I', 'N', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01153 */ HB_P_LINEOFFSET, 33,	/* 466 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'D', 'e', 'n', 't', 'r', 'o', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01201 */ HB_P_LINEOFFSET, 34,	/* 467 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'F', 'O', 'P', ' ', 'p', '/', 'F', 'o', 'r', 'a', ' ', 'd', 'o', ' ', 'E', 's', 't', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01249 */ HB_P_LINEOFFSET, 35,	/* 468 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'E', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01297 */ HB_P_LINEOFFSET, 36,	/* 469 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'A', 'N', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01345 */ HB_P_LINEOFFSET, 37,	/* 470 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', ' ', 'T', 'r', 'i', 'b', 'u', 't', 'a', 'v', 'e', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01393 */ HB_P_LINEOFFSET, 39,	/* 472 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01459 */ HB_P_LINEOFFSET, 40,	/* 473 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 01481 */ HB_P_LINEOFFSET, 41,	/* 474 */
	HB_P_PUSHSYMNEAR, 71,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01497) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* MALTERA */
/* 01497 */ HB_P_LINEOFFSET, 42,	/* 475 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01512) */
	HB_P_JUMP, 181, 250,	/* -1355 (abs: 00154) */
/* 01512 */ HB_P_LINEOFFSET, 45,	/* 478 */
	HB_P_PUSHSYMNEAR, 82,	/* SACCST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPOP,
/* 01536 */ HB_P_LINEOFFSET, 46,	/* 479 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01551) */
	HB_P_JUMP, 142, 250,	/* -1394 (abs: 00154) */
/* 01551 */ HB_P_LINEOFFSET, 49,	/* 482 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01560 */ HB_P_LINEOFFSET, 50,	/* 483 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01583 */ HB_P_LINEOFFSET, 51,	/* 484 */
	HB_P_PUSHSYMNEAR, 45,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01591 */ HB_P_LINEOFFSET, 52,	/* 485 */
	HB_P_PUSHSYMNEAR, 36,	/* VERCST */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 83, 0,	/* MINSENTO */
/* 01609 */ HB_P_LINEOFFSET, 54,	/* 487 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01672 */ HB_P_LINEOFFSET, 55,	/* 488 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01756 */ HB_P_LINEOFFSET, 56,	/* 489 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01840 */ HB_P_LINEOFFSET, 57,	/* 490 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHMEMVAR, 49, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 148, 0,	/* 148 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01919 */ HB_P_LINEOFFSET, 58,	/* 491 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_PUSHSYMNEAR, 84,	/* VEROBS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02007 */ HB_P_LINEOFFSET, 59,	/* 492 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02077 */ HB_P_LINEOFFSET, 60,	/* 493 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02148 */ HB_P_LINEOFFSET, 61,	/* 494 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02236 */ HB_P_LINEOFFSET, 62,	/* 495 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02307 */ HB_P_LINEOFFSET, 63,	/* 496 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02374 */ HB_P_LINEOFFSET, 64,	/* 497 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02458 */ HB_P_LINEOFFSET, 65,	/* 498 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02530 */ HB_P_LINEOFFSET, 66,	/* 499 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02601 */ HB_P_LINEOFFSET, 67,	/* 500 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02668 */ HB_P_LINEOFFSET, 68,	/* 501 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02740 */ HB_P_LINEOFFSET, 69,	/* 502 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02807 */ HB_P_LINEOFFSET, 70,	/* 503 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02879 */ HB_P_LINEOFFSET, 71,	/* 504 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
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
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02949 */ HB_P_LINEOFFSET, 72,	/* 505 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
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
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03019 */ HB_P_LINEOFFSET, 73,	/* 506 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
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
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03091 */ HB_P_LINEOFFSET, 74,	/* 507 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', '9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'c', 243, 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'A', 'N', 'P', ':', ' ', '2', '1', '0', '2', '0', '3', '0', '0', '1', ' ', 's', 'e', ' ', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'T', 'i', 'p', 'o', ':', ' ', 'G', 'L', 'P', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 117,	/* 117 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03234 */ HB_P_LINEOFFSET, 75,	/* 508 */
	HB_P_PUSHSYMNEAR, 52,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 50,	/* 50 */
	HB_P_PUSHSYMNEAR, 69,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'U', 'N', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'M', 'E', 'D', 'I', 'D', 'A', ' ', 'T', 'R', 'I', 'B', 'U', 'T', 'A', 'R', 'I', 'A', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03350 */ HB_P_LINEOFFSET, 76,	/* 509 */
	HB_P_PUSHSYMNEAR, 57,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 03372 */ HB_P_LINEOFFSET, 77,	/* 510 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03387) */
	HB_P_JUMP, 98, 243,	/* -3230 (abs: 00154) */
/* 03387 */ HB_P_LINEOFFSET, 80,	/* 513 */
	HB_P_PUSHSYMNEAR, 80,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 81, 0,	/* OPCAO */
/* 03430 */ HB_P_LINEOFFSET, 81,	/* 514 */
	HB_P_PUSHVARIABLE, 81, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_POP,
/* 03441 */ HB_P_LINEOFFSET, 87,	/* 520 */
	HB_P_PUSHSYMNEAR, 74,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	13, 13, 13, 13, 13, 13, 13, 0, 
	HB_P_DOSHORT, 1,
/* 03458 */ HB_P_LINEOFFSET, 88,	/* 521 */
	HB_P_PUSHSYMNEAR, 35,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03465 */ HB_P_LINEOFFSET, 89,	/* 522 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03470 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC111SV )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 85,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 00024 */ HB_P_LINEOFFSET, 1,	/* 530 */
	HB_P_PUSHSYMNEAR, 85,	/* TIRA_ACENTO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPOP,
/* 00047 */ HB_P_LINEOFFSET, 3,	/* 532 */
	HB_P_PUSHSYMNEAR, 80,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 81, 0,	/* OPCAO */
/* 00096 */ HB_P_LINEOFFSET, 4,	/* 533 */
	HB_P_PUSHSYMNEAR, 58,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00118) */
	HB_P_PUSHVARIABLE, 81, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00125) */
/* 00120 */ HB_P_LINEOFFSET, 5,	/* 534 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00125 */ HB_P_LINEOFFSET, 8,	/* 537 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* MALTERA */
/* 00134 */ HB_P_LINEOFFSET, 9,	/* 538 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00184 */ HB_P_LINEOFFSET, 10,	/* 539 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00223 */ HB_P_LINEOFFSET, 11,	/* 540 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'r', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00262 */ HB_P_LINEOFFSET, 12,	/* 541 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MSUB_GRUPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00314 */ HB_P_LINEOFFSET, 13,	/* 542 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00353 */ HB_P_LINEOFFSET, 14,	/* 543 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 't', 'i', 'p', 'o', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00392 */ HB_P_LINEOFFSET, 15,	/* 544 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'b', 'a', 'l', 'a', 'n', 'c', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00431 */ HB_P_LINEOFFSET, 16,	/* 545 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00470 */ HB_P_LINEOFFSET, 17,	/* 546 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00516 */ HB_P_LINEOFFSET, 18,	/* 547 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'm', 'e', 't', 'r', 'a', 'g', 'e', 'm', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00548 */ HB_P_LINEOFFSET, 19,	/* 548 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'a', 'c', 'o', 't', 'e', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00580 */ HB_P_LINEOFFSET, 20,	/* 549 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'e', 's', 'o', '_', 'l', 'i', 'q', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00619 */ HB_P_LINEOFFSET, 21,	/* 550 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'e', 's', 'o', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00658 */ HB_P_LINEOFFSET, 22,	/* 551 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'i', 's', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00697 */ HB_P_LINEOFFSET, 23,	/* 552 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'l', 'i', 'v', 'r', 'e', '_', 'd', 'e', 's', 'c', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00736 */ HB_P_LINEOFFSET, 24,	/* 553 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00775 */ HB_P_LINEOFFSET, 25,	/* 554 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00814 */ HB_P_LINEOFFSET, 26,	/* 555 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 't', '_', 'm', 'i', 'n', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00853 */ HB_P_LINEOFFSET, 27,	/* 556 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'e', 's', 't', '_', 'm', 'a', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00892 */ HB_P_LINEOFFSET, 28,	/* 557 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00933 */ HB_P_LINEOFFSET, 29,	/* 558 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MFABRICA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 00967 */ HB_P_LINEOFFSET, 30,	/* 559 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01006 */ HB_P_LINEOFFSET, 31,	/* 560 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01045 */ HB_P_LINEOFFSET, 32,	/* 561 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01084 */ HB_P_LINEOFFSET, 33,	/* 562 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 101,	/* 101 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01123 */ HB_P_LINEOFFSET, 34,	/* 563 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 102,	/* 102 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01162 */ HB_P_LINEOFFSET, 35,	/* 564 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MISENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01196 */ HB_P_LINEOFFSET, 36,	/* 565 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01235 */ HB_P_LINEOFFSET, 37,	/* 566 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'm', '_', 'm', 'o', 'n', 't', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01274 */ HB_P_LINEOFFSET, 38,	/* 567 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01313 */ HB_P_LINEOFFSET, 39,	/* 568 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'b', 'e', 'b', 'i', 'd', 'a', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01352 */ HB_P_LINEOFFSET, 40,	/* 569 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'c', 'm', '_', 's', 'u', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01391 */ HB_P_LINEOFFSET, 41,	/* 570 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'c', 'm', '_', 's', 'u', 'b', '2', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01430 */ HB_P_LINEOFFSET, 42,	/* 571 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'p', 'i', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01469 */ HB_P_LINEOFFSET, 43,	/* 572 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'c', 'l', 'f', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01508 */ HB_P_LINEOFFSET, 44,	/* 573 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 'f', 'i', 's', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01547 */ HB_P_LINEOFFSET, 45,	/* 574 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01586 */ HB_P_LINEOFFSET, 46,	/* 575 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'n', 'b', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01625 */ HB_P_LINEOFFSET, 47,	/* 576 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'o', 'd', 'e', 'p', 'e', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01664 */ HB_P_LINEOFFSET, 48,	/* 577 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01703 */ HB_P_LINEOFFSET, 49,	/* 578 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'g', 'r', 'a', 'm', 'a', 't', 'u', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01742 */ HB_P_LINEOFFSET, 50,	/* 579 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', 'a', 'z', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01781 */ HB_P_LINEOFFSET, 51,	/* 580 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'f', 'a', 't', 'c', 'o', 'n', 'v', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01820 */ HB_P_LINEOFFSET, 52,	/* 581 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01859 */ HB_P_LINEOFFSET, 53,	/* 582 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01898 */ HB_P_LINEOFFSET, 54,	/* 583 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01937 */ HB_P_LINEOFFSET, 55,	/* 584 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'o', 'l', 'a', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 01976 */ HB_P_LINEOFFSET, 56,	/* 585 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '0', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02015 */ HB_P_LINEOFFSET, 57,	/* 586 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '1', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02054 */ HB_P_LINEOFFSET, 58,	/* 587 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '2', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02093 */ HB_P_LINEOFFSET, 59,	/* 588 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '3', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02132 */ HB_P_LINEOFFSET, 60,	/* 589 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'a', 'p', 'l', 'i', 'c', '4', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02171 */ HB_P_LINEOFFSET, 61,	/* 590 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'o', 'c', 'k', 'e', 't', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02210 */ HB_P_LINEOFFSET, 62,	/* 591 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'r', 'i', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02257 */ HB_P_LINEOFFSET, 63,	/* 592 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'r', 'i', '1', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02303 */ HB_P_LINEOFFSET, 64,	/* 593 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'l', 'd', '_', 'n', 'e', 'g', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02342 */ HB_P_LINEOFFSET, 65,	/* 594 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02381 */ HB_P_LINEOFFSET, 66,	/* 595 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'a', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02420 */ HB_P_LINEOFFSET, 67,	/* 596 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'i', 'p', 'p', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02459 */ HB_P_LINEOFFSET, 68,	/* 597 */
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 02554) */
/* 02480 */ HB_P_LINEOFFSET, 69,	/* 598 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 87, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02517 */ HB_P_LINEOFFSET, 70,	/* 599 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 88, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02554 */ HB_P_LINEOFFSET, 72,	/* 601 */
	HB_P_PUSHMEMVAR, 6, 0,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 02603) */
/* 02566 */ HB_P_LINEOFFSET, 73,	/* 602 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 87, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02603 */ HB_P_LINEOFFSET, 75,	/* 604 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'p', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02647 */ HB_P_LINEOFFSET, 76,	/* 605 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'n', 'f', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02691 */ HB_P_LINEOFFSET, 77,	/* 606 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 's', 't', '_', 'p', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02735 */ HB_P_LINEOFFSET, 78,	/* 607 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 's', 't', '_', 'c', 'o', 'n', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02779 */ HB_P_LINEOFFSET, 79,	/* 608 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'f', 'o', 'p', '_', 'd', 'e', 'n', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02823 */ HB_P_LINEOFFSET, 80,	/* 609 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'f', 'o', 'p', '_', 'f', 'o', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02867 */ HB_P_LINEOFFSET, 81,	/* 610 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'e', 's', 't', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02911 */ HB_P_LINEOFFSET, 82,	/* 611 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'a', 'p', 'p', '_', 'i', 'm', 'a', 'g', 'e', 'm', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02955 */ HB_P_LINEOFFSET, 83,	/* 612 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'd', 'e', 's', 'c', '_', 'i', 'c', 'm', '_', 's', 'u', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 02999 */ HB_P_LINEOFFSET, 84,	/* 613 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'c', 'o', 'd', 'i', 'g', 'o', '_', 'a', 'n', 'p', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 117,	/* 117 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 03043 */ HB_P_LINEOFFSET, 85,	/* 614 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', '_', 't', 'r', 'i', 'b', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 03087 */ HB_P_LINEOFFSET, 86,	/* 615 */
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 86, 0,	/* CCOMM */
/* 03133 */ HB_P_LINEOFFSET, 87,	/* 616 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03151 */ HB_P_LINEOFFSET, 88,	/* 617 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 89, 0,	/* ARET */
/* 03159 */ HB_P_LINEOFFSET, 89,	/* 618 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03183 */ HB_P_LINEOFFSET, 91,	/* 620 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 90, 0,	/* MCONS_CAM */
/* 03191 */ HB_P_LINEOFFSET, 92,	/* 621 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 't', 'u', '_', 'p', 'r', 'o', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'm', '_', 'd', 'b', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 90, 0,	/* MCONS_CAM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03240 */ HB_P_LINEOFFSET, 93,	/* 622 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03264 */ HB_P_LINEOFFSET, 94,	/* 623 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 91,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 92, 0,	/* NCNN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 03292) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 90, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 03336) */
/* 03294 */ HB_P_LINEOFFSET, 95,	/* 624 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03312 */ HB_P_LINEOFFSET, 96,	/* 625 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03336 */ HB_P_LINEOFFSET, 98,	/* 627 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 91,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 93, 0,	/* NCNN2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 03364) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 90, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 03408) */
/* 03366 */ HB_P_LINEOFFSET, 99,	/* 628 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 86, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03384 */ HB_P_LINEOFFSET, 100,	/* 629 */
	HB_P_MESSAGE, 29, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 30,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03408 */ HB_P_LINEOFFSET, 102,	/* 631 */
	HB_P_PUSHSYMNEAR, 91,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 94, 0,	/* NCNN */
	HB_P_DOSHORT, 1,
/* 03418 */ HB_P_LINEOFFSET, 104,	/* 633 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03452 */ HB_P_LINEOFFSET, 106,	/* 635 */
	HB_P_PUSHSYMNEAR, 74,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	27, 0, 
	HB_P_DOSHORT, 1,
/* 03463 */ HB_P_LINEOFFSET, 107,	/* 636 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 37, 0,	/* MINCLUSAO */
/* 03472 */ HB_P_LINEOFFSET, 108,	/* 637 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* NBOTA */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 03484 */ HB_P_LINEOFFSET, 109,	/* 638 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* NBOTA1 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 03496 */ HB_P_LINEOFFSET, 110,	/* 639 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_PBENABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* NBOTA2 */
	HB_P_FALSE,
	HB_P_DOSHORT, 3,
/* 03508 */ HB_P_LINEOFFSET, 111,	/* 640 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03513 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

