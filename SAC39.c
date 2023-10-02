/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC39.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC39.PRG /q /oC:\hti\SISCOM\SAC39.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:05 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC39.PRG"

HB_FUNC( SAC39 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC39 )
{ "SAC39", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC39 )}, NULL },
{ "MCOD_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDIA_RE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_RE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "CAR", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESC_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CAIXA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC39 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC39
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC39 = hb_vm_SymbolInit_SAC39;
   #pragma data_seg()
#endif

HB_FUNC( SAC39 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 34, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '3', '9', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MSINTETICO 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 31,	/* M_FINAN */
	HB_P_LOCALNEARSETSTR, 32, 2, 0,	/* MCOM_SEM 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MTOT_CR 0*/
/* 00050 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 2,	/* MPAG */
	HB_P_PUSHSYMNEAR, 3,	/* MTIT */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00085 */ HB_P_LINEOFFSET, 4,	/* 15 */
	HB_P_PUSHSYMNEAR, 10,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'O', 'R', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 11, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00144) */
/* 00139 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 7,	/* 18 */
	HB_P_PUSHSYMNEAR, 12,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 16,	/* MTRACO */
/* 00159 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LCI 5*/
/* 00165 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_LOCALNEARSETINT, 6, 2, 0,	/* CCI 2*/
/* 00171 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 17, 0,	/* LBA 17*/
/* 00177 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_LOCALNEARSETINT, 8, 68, 0,	/* CBA 68*/
/* 00183 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00212) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00212 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00239) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00239 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00268) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00268 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00298) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00298 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_PUSHSYMNEAR, 14,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00338 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_PUSHSYMNEAR, 15,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00347 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 16,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00360 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00399 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00407 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00461 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00515 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00569 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'p', 'r', 'e', '-', 'd', 'a', 't', 'a', 'd', 'o', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00623 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00677 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00731 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00785 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 00853 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00907 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00920 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHLOCALNEAR, 1,	/* MDT1 */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00944) */
/* 00928 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHMEMVAR, 22, 0,	/* MDATA1 */
	HB_P_POPLOCALNEAR, 18,	/* MDATA_INI */
/* 00935 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 00967) */
/* 00944 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 24,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 18,	/* MDATA_INI */
/* 00967 */ HB_P_LINEOFFSET, 43,	/* 54 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MQUANTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 01023 */ HB_P_LINEOFFSET, 44,	/* 55 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 15,	/* MDATA */
/* 01030 */ HB_P_LINEOFFSET, 45,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01040 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 28,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01050 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHLOCALNEAR, 1,	/* MDT1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 12,	/* 3250 (abs: 04306) */
/* 01059 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MSINTETICO 2*/
	'N', 0, 
/* 01067 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01100 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01133 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01167 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'i', 'n', 't', 'e', 'i', 't', 'c', 'o', ' ', 'p', '/', 'm', 'e', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01201 */ HB_P_LINEOFFSET, 54,	/* 65 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01239) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01244) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01286 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MDATA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01324) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01329) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	19, 0,	/* MDATA_FIM */
	18, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01374) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01375) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01393 */ HB_P_LINEOFFSET, 56,	/* 67 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01446) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 01458) */
	HB_P_PUSHSYMNEAR, 35,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01476 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_PUSHSYMNEAR, 29,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 32,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MSINTETICO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01515) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01520) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MSINTETICO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01575 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHSYMNEAR, 36,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 31, 0,	/* GETLIST */
/* 01597 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 37,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01621) */
/* 01609 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 38,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01616 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01621 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01656 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHSYMNEAR, 40,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 41,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01675 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 42,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01682 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 43,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 01722) */
/* 01691 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHSYMNEAR, 44,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* CODIGO */
	HB_P_PUSHSYMNEAR, 44,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* CARTAO */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 01712 */ HB_P_LINEOFFSET, 70,	/* 81 */
	HB_P_PUSHSYMNEAR, 47,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 218,	/* -38 (abs: 01682) */
/* 01722 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 01762 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 40,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 41,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01781 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 42,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01788 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 43,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 01828) */
/* 01797 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHSYMNEAR, 49,	/* FIN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* COD_FIN */
	HB_P_PUSHSYMNEAR, 49,	/* FIN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* DESC_FIN */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 01818 */ HB_P_LINEOFFSET, 81,	/* 92 */
	HB_P_PUSHSYMNEAR, 47,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 218,	/* -38 (abs: 01788) */
/* 01828 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 52, 0,	/* CONS_CAIXA */
/* 01836 */ HB_P_LINEOFFSET, 84,	/* 95 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 01914 */ HB_P_LINEOFFSET, 85,	/* 96 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 01970) */
/* 01926 */ HB_P_LINEOFFSET, 86,	/* 97 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 01970 */ HB_P_LINEOFFSET, 88,	/* 99 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MCOM_SEM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 02012) */
/* 01981 */ HB_P_LINEOFFSET, 89,	/* 100 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'A', 'N', 'D', ' ', 'c', '_', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MCOM_SEM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 02012 */ HB_P_LINEOFFSET, 91,	/* 102 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'H', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'T', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'U', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'N', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'F', 'I', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'R', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'R', 'E', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 02132 */ HB_P_LINEOFFSET, 92,	/* 103 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'p', '_', 'm', 'o', 'v', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 't', 'p', '_', 'm', 'o', 'v', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 02195 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_MESSAGE, 56, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 57,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 52, 0,	/* CONS_CAIXA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02216 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_MESSAGE, 56, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 57,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02240 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02301) */
/* 02254 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 59,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 88, 248,	/* -1960 (abs: 00338) */
/* 02301 */ HB_P_LINEOFFSET, 99,	/* 110 */
	HB_P_PUSHSYMNEAR, 17,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 6,
/* 02363 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02371 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02425 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02479 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02533 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'p', 'r', 'e', '-', 'd', 'a', 't', 'a', 'd', 'o', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02587 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02641 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02695 */ HB_P_LINEOFFSET, 107,	/* 118 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02749 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 02817 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02871 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02906 */ HB_P_LINEOFFSET, 111,	/* 122 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
/* 02912 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_LOCALNEARSETINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 98, 3,	/* 866 (abs: 03795) */
/* 02932 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_PUSHSYMNEAR, 60,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 02955 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02964 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 03006) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'U', 'P', 'L', 'I', '_', 'A', 'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03011) */
	HB_P_JUMP, 12, 3,	/* 780 (abs: 03788) */
/* 03011 */ HB_P_LINEOFFSET, 117,	/* 128 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03089) */
/* 03030 */ HB_P_LINEOFFSET, 118,	/* 129 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 03046 */ HB_P_LINEOFFSET, 119,	/* 130 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 188, 2,	/* 700 (abs: 03786) */
/* 03089 */ HB_P_LINEOFFSET, 120,	/* 131 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03129) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03190) */
/* 03131 */ HB_P_LINEOFFSET, 121,	/* 132 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
/* 03147 */ HB_P_LINEOFFSET, 122,	/* 133 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 87, 2,	/* 599 (abs: 03786) */
/* 03190 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 03351) */
/* 03210 */ HB_P_LINEOFFSET, 124,	/* 135 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
/* 03226 */ HB_P_LINEOFFSET, 125,	/* 136 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 03232 */ HB_P_LINEOFFSET, 126,	/* 137 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03272 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 242, 1,	/* 498 (abs: 03786) */
/* 03291 */ HB_P_LINEOFFSET, 128,	/* 139 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03343) */
/* 03312 */ HB_P_LINEOFFSET, 129,	/* 140 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 190, 1,	/* 446 (abs: 03786) */
/* 03343 */ HB_P_LINEOFFSET, 132,	/* 143 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 03278) */
/* 03351 */ HB_P_LINEOFFSET, 133,	/* 144 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 03391) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03452) */
/* 03393 */ HB_P_LINEOFFSET, 134,	/* 145 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
/* 03409 */ HB_P_LINEOFFSET, 135,	/* 146 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 81, 1,	/* 337 (abs: 03786) */
/* 03452 */ HB_P_LINEOFFSET, 136,	/* 147 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 03487) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03548) */
/* 03489 */ HB_P_LINEOFFSET, 137,	/* 148 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
/* 03505 */ HB_P_LINEOFFSET, 138,	/* 149 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 241, 0,	/* 241 (abs: 03786) */
/* 03548 */ HB_P_LINEOFFSET, 139,	/* 150 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 143, 0,	/* 143 (abs: 03708) */
/* 03568 */ HB_P_LINEOFFSET, 140,	/* 151 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
/* 03584 */ HB_P_LINEOFFSET, 141,	/* 152 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03624 */ HB_P_LINEOFFSET, 142,	/* 153 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 03630 */ HB_P_LINEOFFSET, 143,	/* 154 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 03786) */
/* 03649 */ HB_P_LINEOFFSET, 144,	/* 155 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 03700) */
/* 03670 */ HB_P_LINEOFFSET, 145,	/* 156 */
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 03786) */
/* 03700 */ HB_P_LINEOFFSET, 148,	/* 159 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 03636) */
/* 03708 */ HB_P_LINEOFFSET, 149,	/* 160 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 03786) */
/* 03727 */ HB_P_LINEOFFSET, 150,	/* 161 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOT_RE */
/* 03745 */ HB_P_LINEOFFSET, 151,	/* 162 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03786 */ HB_P_LINEOFFSET, 158,	/* 169 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_JUMP, 150, 252,	/* -874 (abs: 02918) */
/* 03795 */ HB_P_LINEOFFSET, 159,	/* 170 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03868 */ HB_P_LINEOFFSET, 160,	/* 171 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03941 */ HB_P_LINEOFFSET, 161,	/* 172 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04014 */ HB_P_LINEOFFSET, 162,	/* 173 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04087 */ HB_P_LINEOFFSET, 163,	/* 174 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04160 */ HB_P_LINEOFFSET, 164,	/* 175 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04233 */ HB_P_LINEOFFSET, 166,	/* 177 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04295 */ HB_P_LINEOFFSET, 167,	/* 178 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 57, 10,	/* 2617 (abs: 06920) */
/* 04306 */ HB_P_LINEOFFSET, 169,	/* 180 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO */
/* 04346 */ HB_P_LINEOFFSET, 170,	/* 181 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 04381 */ HB_P_LINEOFFSET, 172,	/* 183 */
	HB_P_PUSHSYMNEAR, 40,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 41,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04400 */ HB_P_LINEOFFSET, 173,	/* 184 */
	HB_P_PUSHSYMNEAR, 42,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04407 */ HB_P_LINEOFFSET, 175,	/* 186 */
	HB_P_PUSHSYMNEAR, 43,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 04447) */
/* 04416 */ HB_P_LINEOFFSET, 176,	/* 187 */
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHSYMNEAR, 44,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* CODIGO */
	HB_P_PUSHSYMNEAR, 44,	/* CAR */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* CARTAO */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 04437 */ HB_P_LINEOFFSET, 177,	/* 188 */
	HB_P_PUSHSYMNEAR, 47,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 218,	/* -38 (abs: 04407) */
/* 04447 */ HB_P_LINEOFFSET, 180,	/* 191 */
	HB_P_PUSHSYMNEAR, 40,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 41,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04466 */ HB_P_LINEOFFSET, 181,	/* 192 */
	HB_P_PUSHSYMNEAR, 42,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04473 */ HB_P_LINEOFFSET, 183,	/* 194 */
	HB_P_PUSHSYMNEAR, 43,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 04513) */
/* 04482 */ HB_P_LINEOFFSET, 184,	/* 195 */
	HB_P_PUSHSYMNEAR, 30,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHSYMNEAR, 49,	/* FIN */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* COD_FIN */
	HB_P_PUSHSYMNEAR, 49,	/* FIN */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* DESC_FIN */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 04503 */ HB_P_LINEOFFSET, 185,	/* 196 */
	HB_P_PUSHSYMNEAR, 47,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 218,	/* -38 (abs: 04473) */
/* 04513 */ HB_P_LINEOFFSET, 187,	/* 198 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 52, 0,	/* CONS_CAIXA */
/* 04521 */ HB_P_LINEOFFSET, 188,	/* 199 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 04599 */ HB_P_LINEOFFSET, 189,	/* 200 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'H', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'T', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'U', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'D', 'N', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'F', 'I', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'C', 'R', 39, ' ', 'O', 'R', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, 'R', 'E', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 04719 */ HB_P_LINEOFFSET, 190,	/* 201 */
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'A', 'N', 'D', ' ', '(', 't', 'p', '_', 'm', 'o', 'v', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 't', 'p', '_', 'm', 'o', 'v', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 54, 0,	/* CCOMM */
/* 04782 */ HB_P_LINEOFFSET, 191,	/* 202 */
	HB_P_MESSAGE, 56, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 57,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 54, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 52, 0,	/* CONS_CAIXA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04803 */ HB_P_LINEOFFSET, 192,	/* 203 */
	HB_P_MESSAGE, 56, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 57,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04827 */ HB_P_LINEOFFSET, 193,	/* 204 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 04888) */
/* 04841 */ HB_P_LINEOFFSET, 194,	/* 205 */
	HB_P_PUSHSYMNEAR, 59,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 61, 238,	/* -4547 (abs: 00338) */
/* 04888 */ HB_P_LINEOFFSET, 197,	/* 208 */
	HB_P_PUSHSYMNEAR, 17,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 6,
/* 04950 */ HB_P_LINEOFFSET, 198,	/* 209 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04958 */ HB_P_LINEOFFSET, 199,	/* 210 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05012 */ HB_P_LINEOFFSET, 200,	/* 211 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05066 */ HB_P_LINEOFFSET, 201,	/* 212 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05120 */ HB_P_LINEOFFSET, 202,	/* 213 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 'p', 'r', 'e', '-', 'd', 'a', 't', 'a', 'd', 'o', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05174 */ HB_P_LINEOFFSET, 203,	/* 214 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05228 */ HB_P_LINEOFFSET, 204,	/* 215 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05282 */ HB_P_LINEOFFSET, 205,	/* 216 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05336 */ HB_P_LINEOFFSET, 206,	/* 217 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05404 */ HB_P_LINEOFFSET, 207,	/* 218 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'R', 'I', 'O', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05458 */ HB_P_LINEOFFSET, 208,	/* 219 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 05493 */ HB_P_LINEOFFSET, 209,	/* 220 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
/* 05499 */ HB_P_LINEOFFSET, 210,	/* 221 */
	HB_P_LOCALNEARSETINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 51, 3,	/* 819 (abs: 06335) */
/* 05519 */ HB_P_LINEOFFSET, 211,	/* 222 */
	HB_P_PUSHSYMNEAR, 60,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05542 */ HB_P_LINEOFFSET, 212,	/* 223 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05551 */ HB_P_LINEOFFSET, 213,	/* 224 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05591) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 05652) */
/* 05593 */ HB_P_LINEOFFSET, 214,	/* 225 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
/* 05609 */ HB_P_LINEOFFSET, 215,	/* 226 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 165, 2,	/* 677 (abs: 06326) */
/* 05652 */ HB_P_LINEOFFSET, 216,	/* 227 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 05692) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 05753) */
/* 05694 */ HB_P_LINEOFFSET, 217,	/* 228 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
/* 05710 */ HB_P_LINEOFFSET, 218,	/* 229 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 64, 2,	/* 576 (abs: 06326) */
/* 05753 */ HB_P_LINEOFFSET, 219,	/* 230 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 05914) */
/* 05773 */ HB_P_LINEOFFSET, 220,	/* 231 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
/* 05789 */ HB_P_LINEOFFSET, 221,	/* 232 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 05795 */ HB_P_LINEOFFSET, 222,	/* 233 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05835 */ HB_P_LINEOFFSET, 223,	/* 234 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 219, 1,	/* 475 (abs: 06326) */
/* 05854 */ HB_P_LINEOFFSET, 224,	/* 235 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 05906) */
/* 05875 */ HB_P_LINEOFFSET, 225,	/* 236 */
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMP, 167, 1,	/* 423 (abs: 06326) */
/* 05906 */ HB_P_LINEOFFSET, 228,	/* 239 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 05841) */
/* 05914 */ HB_P_LINEOFFSET, 229,	/* 240 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 05949) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 06010) */
/* 05951 */ HB_P_LINEOFFSET, 230,	/* 241 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
/* 05967 */ HB_P_LINEOFFSET, 231,	/* 242 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 63, 1,	/* 319 (abs: 06326) */
/* 06010 */ HB_P_LINEOFFSET, 232,	/* 243 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 06088) */
/* 06029 */ HB_P_LINEOFFSET, 233,	/* 244 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 06045 */ HB_P_LINEOFFSET, 234,	/* 245 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 241, 0,	/* 241 (abs: 06326) */
/* 06088 */ HB_P_LINEOFFSET, 235,	/* 246 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 143, 0,	/* 143 (abs: 06248) */
/* 06108 */ HB_P_LINEOFFSET, 236,	/* 247 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
/* 06124 */ HB_P_LINEOFFSET, 237,	/* 248 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06164 */ HB_P_LINEOFFSET, 238,	/* 249 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 06170 */ HB_P_LINEOFFSET, 239,	/* 250 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 06326) */
/* 06189 */ HB_P_LINEOFFSET, 240,	/* 251 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 06240) */
/* 06210 */ HB_P_LINEOFFSET, 241,	/* 252 */
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 88,	/* 88 (abs: 06326) */
/* 06240 */ HB_P_LINEOFFSET, 244,	/* 255 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 06176) */
/* 06248 */ HB_P_LINEOFFSET, 245,	/* 256 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 06326) */
/* 06267 */ HB_P_LINEOFFSET, 246,	/* 257 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOT_RE */
/* 06285 */ HB_P_LINEOFFSET, 247,	/* 258 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06326 */ HB_P_LINEOFFSET, 249,	/* 260 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_JUMP, 197, 252,	/* -827 (abs: 05505) */
/* 06335 */ HB_P_LINEOFFSET, 250,	/* 261 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06408 */ HB_P_LINEOFFSET, 251,	/* 262 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06481 */ HB_P_LINEOFFSET, 252,	/* 263 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06554 */ HB_P_LINEOFFSET, 253,	/* 264 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06627 */ HB_P_LINEOFFSET, 254,	/* 265 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06700 */ HB_P_LINEOFFSET, 255,	/* 266 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06773 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 48, 0,	/* 48*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06848 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOT_CR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06911 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 06920 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 06970 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 63,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 06979 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 64,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07010) */
	HB_P_JUMP, 243, 229,	/* -6669 (abs: 00338) */
/* 07010 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 07017 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 07037 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 34,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 07094) */
/* 07050 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', '-', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIT */
/* 07094 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 65,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07111 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07126 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07156 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07187 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'h', 'e', 'q', 'u', 'e', ' ', 'A', 'v', 'i', 's', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07223 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'h', 'q', '.', 'P', 'r', 'e', '-', 'D', 'a', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07260 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07289 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07321 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07354 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'R', 'e', 'c', '.', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07390 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'D', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07431 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07446 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07470 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_LOCALNEARSETINT, 27, 0, 0,	/* MTOT_FIN 0*/
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
/* 07493 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDATA_AUX */
/* 07506 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 07533 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* CONT_CAIXA 0*/
/* 07540 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_LOCALNEARSETINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 166, 9,	/* 2470 (abs: 10028) */
/* 07561 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHLOCALNEAR, 29,	/* MSINTETICO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 215, 3,	/* 983 (abs: 08554) */
/* 07574 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDATA_AUX */
/* 07588 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA_AUX */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 2,	/* 531 (abs: 08134) */
/* 07606 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 60,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 07630 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07671) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 07710) */
/* 07673 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
/* 07690 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_JUMP, 147, 1,	/* 403 (abs: 08110) */
/* 07710 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07751) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 07790) */
/* 07753 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
/* 07770 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_JUMP, 67, 1,	/* 323 (abs: 08110) */
/* 07790 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 07847) */
/* 07810 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
/* 07827 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_JUMP, 10, 1,	/* 266 (abs: 08110) */
/* 07847 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 07883) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 07922) */
/* 07885 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
/* 07902 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_JUMP, 191, 0,	/* 191 (abs: 08110) */
/* 07922 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 07958) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 07996) */
/* 07960 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* MDIA_FIN */
/* 07977 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_JUMPNEAR, 116,	/* 116 (abs: 08110) */
/* 07996 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08052) */
/* 08016 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 08033 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_JUMPNEAR, 60,	/* 60 (abs: 08110) */
/* 08052 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 08110) */
/* 08072 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MDIA_RE */
/* 08091 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOT_RE */
/* 08110 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
/* 08117 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 225, 253,	/* -543 (abs: 07588) */
/* 08134 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_LOCALNEARADDINT, 34, 255, 255,	/* CONT_CAIXA -1*/
/* 08141 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08156 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDATA_AUX */
	HB_P_DOSHORT, 1,
/* 08180 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08223 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08266 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08309 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08352 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08395 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08438 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08482 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 12, 4,	/* 1036 (abs: 09587) */
/* 08554 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHLOCALNEAR, 30,	/* MMES */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 47, 2,	/* 559 (abs: 09142) */
/* 08586 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 60,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 08610 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 08638 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 08679) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 08718) */
/* 08681 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
/* 08698 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_JUMP, 147, 1,	/* 403 (abs: 09118) */
/* 08718 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 08759) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 08798) */
/* 08761 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
/* 08778 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_JUMP, 67, 1,	/* 323 (abs: 09118) */
/* 08798 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 08855) */
/* 08818 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
/* 08835 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_JUMP, 10, 1,	/* 266 (abs: 09118) */
/* 08855 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 08891) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 08930) */
/* 08893 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
/* 08910 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_JUMP, 191, 0,	/* 191 (abs: 09118) */
/* 08930 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 08966) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09004) */
/* 08968 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 25,	/* MDIA_FIN */
/* 08985 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_JUMPNEAR, 116,	/* 116 (abs: 09118) */
/* 09004 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09060) */
/* 09024 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 09041 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_JUMPNEAR, 60,	/* 60 (abs: 09118) */
/* 09060 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 09118) */
/* 09080 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* MDIA_RE */
/* 09099 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* MTOT_RE */
/* 09118 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
/* 09125 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* CONS_CAIXA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 183, 253,	/* -585 (abs: 08554) */
/* 09142 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_LOCALNEARADDINT, 34, 255, 255,	/* CONT_CAIXA -1*/
/* 09149 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09164 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MMES */
	HB_P_DOSHORT, 1,
/* 09188 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 69,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 52, 0,	/* CONS_CAIXA */
	HB_P_PUSHLOCALNEAR, 34,	/* CONT_CAIXA */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 30,	/* MMES */
/* 09216 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09259 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09302 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09345 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09388 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09431 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09474 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09518 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MDIA_DIN */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 25, 0,	/* MDIA_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09587 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MDIA_FIN 0*/
	HB_P_PUSHLOCALNEAR, 25,	/* MDIA_FIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDIA_CART */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MDIA_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_CH_P */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MDIA_CH */
	HB_P_POPLOCALNEAR, 20,	/* MDIA_DIN */
/* 09610 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 141, 1,	/* 397 (abs: 10018) */
/* 09624 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09632 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 09642 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 65,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 09659 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09674 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09704 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09735 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'h', 'e', 'q', 'u', 'e', ' ', 'A', 'v', 'i', 's', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09771 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'h', 'q', '.', 'P', 'r', 'e', '-', 'D', 'a', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09808 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09837 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09869 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09902 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'R', 'e', 'c', '.', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09938 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'D', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09979 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 09994 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 10018 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* CONT_CAIXA 1*/
	HB_P_JUMP, 82, 246,	/* -2478 (abs: 07547) */
/* 10028 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 10076) */
/* 10041 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10049 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 2, 0,	/* MPAG */
/* 10059 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 65,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 10076 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHSYMNEAR, 66,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10091 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10130 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10166 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10202 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10238 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10274 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10310 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 10347 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'O', 'T', 'A', 'L', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 10382 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10425 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10468 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10511 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10554 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10597 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10640 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10684 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIN */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_CH */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOT_CH_P */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_DUP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 26, 0,	/* MTOT_RE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10753 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 11105) */
/* 10768 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', 'S', ' ', 'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 10844 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 10851 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 10977) */
/* 10870 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10918 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* M_CARTAO */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 10968 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 139,	/* -117 (abs: 10858) */
/* 10977 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 11017 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 11067 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_CART */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 11105 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 84, 1,	/* 340 (abs: 11457) */
/* 11120 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', 'S', ' ', 'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 11196 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 11203 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 11329) */
/* 11222 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11270 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 68,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* M_FINAN */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 11320 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 139,	/* -117 (abs: 11210) */
/* 11329 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 11369 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'T', 'o', 't', 'a', 'l', ' ', 'e', 'm', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 11419 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTOT_FIN */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 11457 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11465 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 71,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 11475 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 72,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 11517 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 73,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'A', 'T', 'U', 'R', 'A', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 11539 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 38,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11547 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 11553 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

