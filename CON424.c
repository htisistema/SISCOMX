/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON424.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON424.PRG /q /oC:\hti\SISCOM\CON424.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:08 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON424.PRG"

HB_FUNC( CON424 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON424 )
{ "CON424", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON424 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "Q_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON424 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON424
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON424 = hb_vm_SymbolInit_CON424;
   #pragma data_seg()
#endif

HB_FUNC( CON424 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 69, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 14, 0,	/* 14 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '4', 0, 
	HB_P_LOCALNEARSETSTR, 37, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 39, 2, 0,	/* MLOC_PG 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 40,	/* MAREA */
	HB_P_LOCALNEARSETINT, 41, 0, 0,	/* MCOD_OPER 0*/
	HB_P_LOCALNEARSETINT, 42, 0, 0,	/* MJUROS_D 0*/
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MJUR_TOT 0*/
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MTIP_JURO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 45, 2, 0,	/* MEMI_VENC 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MDOC_DESC 2*/
	'N', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
	HB_P_LOCALNEARSETINT, 48, 0, 0,	/* MT_PG 0*/
	HB_P_LOCALNEARSETINT, 49, 0, 0,	/* MT_DES 0*/
	HB_P_LOCALNEARSETINT, 50, 0, 0,	/* MT_JUR 0*/
	HB_P_LOCALNEARSETINT, 52, 0, 0,	/* MTOT_DOC 0*/
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_LOCALNEARSETINT, 54, 0, 0,	/* MQTD_DIAS 0*/
	HB_P_LOCALNEARSETINT, 55, 0, 0,	/* LCI 0*/
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* CCI 0*/
	HB_P_LOCALNEARSETINT, 57, 16, 0,	/* LBA 16*/
	HB_P_LOCALNEARSETINT, 58, 78, 0,	/* CBA 78*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 63,	/* VEMP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 64,	/* ARET */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 69,	/* M_PARAM */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_DUPR */
/* 00138 */ HB_P_LINEOFFSET, 3,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 15,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MCPF */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 7,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 8,	/* MALI */
	HB_P_PUSHSYMNEAR, 9,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ */
	HB_P_PUSHSYMNEAR, 12,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 13,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 14,	/* CONS_CLI */
	HB_P_DOSHORT, 13,
	HB_P_POPVARIABLE, 14, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 11, 0,	/* MARQ */
	HB_P_POPVARIABLE, 10, 0,	/* MIMP_TIPO */
/* 00201 */ HB_P_LINEOFFSET, 5,	/* 19 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_424 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 120,	/* 120 (abs: 00327) */
/* 00209 */ HB_P_LINEOFFSET, 6,	/* 20 */
	HB_P_PUSHSYMNEAR, 16,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00288) */
/* 00283 */ HB_P_LINEOFFSET, 7,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00288 */ HB_P_LINEOFFSET, 9,	/* 23 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MALIAS */
/* 00300 */ HB_P_LINEOFFSET, 10,	/* 24 */
	HB_P_LOCALNEARSETSTR, 51, 19, 0,	/* MTITULO 19*/
	'(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ')', 0, 
	HB_P_JUMPNEAR, 120,	/* 120 (abs: 00445) */
/* 00327 */ HB_P_LINEOFFSET, 12,	/* 26 */
	HB_P_PUSHSYMNEAR, 16,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_424 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'G', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00409) */
/* 00404 */ HB_P_LINEOFFSET, 13,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00409 */ HB_P_LINEOFFSET, 15,	/* 29 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 13, 0,	/* MALIAS */
/* 00421 */ HB_P_LINEOFFSET, 16,	/* 30 */
	HB_P_LOCALNEARSETSTR, 51, 18, 0,	/* MTITULO 18*/
	'(', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ')', 0, 
/* 00445 */ HB_P_LINEOFFSET, 19,	/* 33 */
	HB_P_PUSHSYMNEAR, 18,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 19,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 20,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00467 */ HB_P_LINEOFFSET, 20,	/* 34 */
	HB_P_PUSHSYMNEAR, 21,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00496) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00496 */ HB_P_LINEOFFSET, 22,	/* 36 */
	HB_P_PUSHSYMNEAR, 21,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00523) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00523 */ HB_P_LINEOFFSET, 25,	/* 39 */
	HB_P_PUSHSYMNEAR, 21,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'i', 'p', 'd', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'p', 'd', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00554) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00554 */ HB_P_LINEOFFSET, 27,	/* 41 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 00567 */ HB_P_LINEOFFSET, 28,	/* 42 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00606 */ HB_P_LINEOFFSET, 29,	/* 43 */
	HB_P_PUSHSYMNEAR, 24,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', '-', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00647 */ HB_P_LINEOFFSET, 31,	/* 45 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00692 */ HB_P_LINEOFFSET, 32,	/* 46 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00737 */ HB_P_LINEOFFSET, 33,	/* 47 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00782 */ HB_P_LINEOFFSET, 34,	/* 48 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00827 */ HB_P_LINEOFFSET, 35,	/* 49 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00872 */ HB_P_LINEOFFSET, 36,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00917 */ HB_P_LINEOFFSET, 37,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00962 */ HB_P_LINEOFFSET, 38,	/* 52 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'o', 'c', 'a', 'l', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01007 */ HB_P_LINEOFFSET, 39,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'r', 'e', 'a', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01052 */ HB_P_LINEOFFSET, 40,	/* 54 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01097 */ HB_P_LINEOFFSET, 41,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'o', 'd', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01142 */ HB_P_LINEOFFSET, 42,	/* 56 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', '.', 'c', '/', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 's', 'p', 'e', 'n', 's', 'a', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01205 */ HB_P_LINEOFFSET, 43,	/* 57 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', '.', 'c', '/', 'V', 'e', 'n', 'c', '.', ' ', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'I', 'g', 'u', 'a', 'l', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01268 */ HB_P_LINEOFFSET, 44,	/* 58 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01331 */ HB_P_LINEOFFSET, 45,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'c', '/', 'A', 't', 'r', 'a', 's', 'o', ' ', 'a', 'c', 'i', 'm', 'a', ' ', 'd', 'e', ' ', 'D', 'i', 'a', 's', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01394 */ HB_P_LINEOFFSET, 46,	/* 60 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01456 */ HB_P_LINEOFFSET, 47,	/* 61 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01518 */ HB_P_LINEOFFSET, 48,	/* 62 */
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MCOD_VEND 0*/
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 01529 */ HB_P_LINEOFFSET, 49,	/* 63 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 4,	/* T_INI */
/* 01536 */ HB_P_LINEOFFSET, 50,	/* 64 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_POPLOCALNEAR, 5,	/* T_FIM */
/* 01546 */ HB_P_LINEOFFSET, 51,	/* 65 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 35,	/* BANK */
/* 01556 */ HB_P_LINEOFFSET, 52,	/* 66 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_POPLOCALNEAR, 37,	/* MTIP_PG */
/* 01569 */ HB_P_LINEOFFSET, 53,	/* 67 */
	HB_P_LOCALNEARSETSTR, 39, 2, 0,	/* MLOC_PG 2*/
	' ', 0, 
/* 01577 */ HB_P_LINEOFFSET, 54,	/* 68 */
	HB_P_LOCALNEARSETSTR, 46, 2, 0,	/* MDOC_DESC 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_POPLOCALNEAR, 44,	/* MTIP_JURO */
/* 01592 */ HB_P_LINEOFFSET, 55,	/* 69 */
	HB_P_LOCALNEARSETSTR, 59, 2, 0,	/* MMOV_CX 2*/
	' ', 0, 
/* 01600 */ HB_P_LINEOFFSET, 56,	/* 70 */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MTIPO_SINT 2*/
	'N', 0, 
/* 01608 */ HB_P_LINEOFFSET, 57,	/* 71 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 01632) */
	HB_P_PUSHSYMNEAR, 29,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 3,
/* 01632 */ HB_P_LINEOFFSET, 58,	/* 72 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 34,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 35, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01737 */ HB_P_LINEOFFSET, 59,	/* 73 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 29,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01830 */ HB_P_LINEOFFSET, 60,	/* 74 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01875) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01880) */
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
	35, 0,	/* BANK */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01931 */ HB_P_LINEOFFSET, 61,	/* 75 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01976) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01981) */
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
	4, 0,	/* T_INI */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02012) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02013) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02031 */ HB_P_LINEOFFSET, 62,	/* 76 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02076) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02081) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02112) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02113) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02131 */ HB_P_LINEOFFSET, 63,	/* 77 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02176) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02181) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02215 */ HB_P_LINEOFFSET, 64,	/* 78 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02260) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02265) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	38, 0,	/* MCOD_VEND */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 37,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02339 */ HB_P_LINEOFFSET, 65,	/* 79 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MLOC_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02384) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02389) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'o', 'c', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MLOC_PG */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'M', ',', 'C', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02443 */ HB_P_LINEOFFSET, 66,	/* 80 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02488) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02493) */
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
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02525 */ HB_P_LINEOFFSET, 67,	/* 81 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02570) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02575) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 38,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02626 */ HB_P_LINEOFFSET, 68,	/* 82 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MCOD_OPER */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02671) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02676) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	41, 0,	/* MCOD_OPER */
	55, 0,	/* LCI */
	56, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 37,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02750 */ HB_P_LINEOFFSET, 69,	/* 83 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MTIP_JURO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02795) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02800) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', '_', 'j', 'u', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MTIP_JURO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02854 */ HB_P_LINEOFFSET, 70,	/* 84 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MEMI_VENC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02899) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02904) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'e', 'm', 'i', '_', 'v', 'e', 'n', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MEMI_VENC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02958 */ HB_P_LINEOFFSET, 71,	/* 85 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDOC_DESC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03003) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03008) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'o', 'c', '_', 'd', 'e', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MDOC_DESC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03062 */ HB_P_LINEOFFSET, 72,	/* 86 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	54, 0,	/* MQTD_DIAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03107) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03112) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'q', 't', 'd', '_', 'd', 'i', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03149 */ HB_P_LINEOFFSET, 73,	/* 87 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MMOV_CX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03194) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03199) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'm', 'o', 'v', '_', 'c', 'x', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 56,	/* 56 */
	HB_P_PUSHSYMNEAR, 39,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'C', ']', 'c', 'a', 'i', 'x', 'a', ' ', 'e', ' ', '[', 'M', ']', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03288 */ HB_P_LINEOFFSET, 74,	/* 88 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 56,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTIPO_SINT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03333) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03338) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 's', 'i', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTIPO_SINT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_PUSHSYMNEAR, 39,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'O', 'p', 'c', 'a', 'o', ' ', ':', ' ', '[', 'S', ']', 'i', 'm', ' ', 'o', 'u', ' ', '[', 'N', ']', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03429 */ HB_P_LINEOFFSET, 75,	/* 89 */
	HB_P_PUSHSYMNEAR, 40,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 32, 0,	/* GETLIST */
/* 03451 */ HB_P_LINEOFFSET, 76,	/* 90 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03466) */
	HB_P_JUMP, 109, 37,	/* 9581 (abs: 13044) */
/* 03466 */ HB_P_LINEOFFSET, 79,	/* 93 */
	HB_P_LOCALNEARSETSTR, 8, 2, 0,	/* L_MES 2*/
	' ', 0, 
/* 03474 */ HB_P_LINEOFFSET, 80,	/* 94 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* TP_MES */
	HB_P_POPLOCALNEAR, 9,	/* TD_MES */
/* 03484 */ HB_P_LINEOFFSET, 81,	/* 95 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 03535) */
/* 03496 */ HB_P_LINEOFFSET, 82,	/* 96 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03523 */ HB_P_LINEOFFSET, 83,	/* 97 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'D', 'U', 0, 
	HB_P_JUMP, 129, 3,	/* 897 (abs: 04429) */
/* 03535 */ HB_P_LINEOFFSET, 84,	/* 98 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 03583) */
/* 03547 */ HB_P_LINEOFFSET, 85,	/* 99 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03571 */ HB_P_LINEOFFSET, 86,	/* 100 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'C', 'H', 0, 
	HB_P_JUMP, 81, 3,	/* 849 (abs: 04429) */
/* 03583 */ HB_P_LINEOFFSET, 87,	/* 101 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 135, 1,	/* 391 (abs: 03984) */
/* 03596 */ HB_P_LINEOFFSET, 88,	/* 102 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 03620 */ HB_P_LINEOFFSET, 89,	/* 103 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'C', 'T', 0, 
/* 03629 */ HB_P_LINEOFFSET, 90,	/* 104 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
/* 03640 */ HB_P_LINEOFFSET, 91,	/* 105 */
	HB_P_PUSHSYMNEAR, 24,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03671 */ HB_P_LINEOFFSET, 92,	/* 106 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03716 */ HB_P_LINEOFFSET, 93,	/* 107 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03754) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03759) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03809) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 70,	/* 70 */
	HB_P_PUSHSYMNEAR, 39,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03896 */ HB_P_LINEOFFSET, 94,	/* 108 */
	HB_P_PUSHSYMNEAR, 40,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 32, 0,	/* GETLIST */
/* 03918 */ HB_P_LINEOFFSET, 95,	/* 109 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03933) */
	HB_P_JUMP, 45, 243,	/* -3283 (abs: 00647) */
/* 03933 */ HB_P_LINEOFFSET, 98,	/* 112 */
	HB_P_PUSHSYMNEAR, 45,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 46, 0,	/* OPCAO */
/* 03968 */ HB_P_LINEOFFSET, 99,	/* 113 */
	HB_P_PUSHVARIABLE, 46, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 195, 1,	/* 451 (abs: 04429) */
	HB_P_JUMP, 250, 242,	/* -3334 (abs: 00647) */
/* 03984 */ HB_P_LINEOFFSET, 102,	/* 116 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 1,	/* 408 (abs: 04402) */
/* 03997 */ HB_P_LINEOFFSET, 103,	/* 117 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'F', 'I', 'N', 'A', 'N', 'C', 'E', 'I', 'R', 'A', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 04024 */ HB_P_LINEOFFSET, 104,	/* 118 */
	HB_P_LOCALNEARSETSTR, 32, 3, 0,	/* MTIP 3*/
	'F', 'I', 0, 
/* 04033 */ HB_P_LINEOFFSET, 105,	/* 119 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCARTAO */
/* 04044 */ HB_P_LINEOFFSET, 106,	/* 120 */
	HB_P_PUSHSYMNEAR, 24,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'F', 'I', 'N', 'A', 'N', 'C', 'E', 'I', 'R', 'A', ' ', 'P', 'A', 'G', 'A', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 04078 */ HB_P_LINEOFFSET, 107,	/* 121 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04123 */ HB_P_LINEOFFSET, 108,	/* 122 */
	HB_P_PUSHSYMNEAR, 30,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 33,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04161) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04166) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04216) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 71,	/* 71 */
	HB_P_PUSHSYMNEAR, 39,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04304 */ HB_P_LINEOFFSET, 109,	/* 123 */
	HB_P_PUSHSYMNEAR, 40,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 32, 0,	/* GETLIST */
/* 04326 */ HB_P_LINEOFFSET, 110,	/* 124 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04341) */
	HB_P_JUMP, 2, 34,	/* 8706 (abs: 13044) */
/* 04341 */ HB_P_LINEOFFSET, 113,	/* 127 */
	HB_P_PUSHSYMNEAR, 45,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 46, 0,	/* OPCAO */
/* 04380 */ HB_P_LINEOFFSET, 114,	/* 128 */
	HB_P_PUSHSYMNEAR, 47,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04387 */ HB_P_LINEOFFSET, 115,	/* 129 */
	HB_P_PUSHVARIABLE, 46, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 04429) */
	HB_P_JUMP, 88, 241,	/* -3752 (abs: 00647) */
/* 04402 */ HB_P_LINEOFFSET, 119,	/* 133 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'P', 'A', 'G', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 51,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 30,	/* MTIT */
/* 04429 */ HB_P_LINEOFFSET, 121,	/* 135 */
	HB_P_PUSHSYMNEAR, 48,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'o', ' ', 'a', 's', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'c', 'o', 'm', ' ', 'J', 'U', 'R', 'O', 'S', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 36,	/* MTIPO_DUP */
/* 04477 */ HB_P_LINEOFFSET, 122,	/* 136 */
	HB_P_PUSHSYMNEAR, 41,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04492) */
	HB_P_JUMP, 107, 33,	/* 8555 (abs: 13044) */
/* 04492 */ HB_P_LINEOFFSET, 125,	/* 139 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04547 */ HB_P_LINEOFFSET, 126,	/* 140 */
	HB_P_PUSHLOCALNEAR, 60,	/* MTIPO_SINT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 55, 9,	/* 2359 (abs: 06915) */
/* 04559 */ HB_P_LINEOFFSET, 127,	/* 141 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 04624) */
/* 04570 */ HB_P_LINEOFFSET, 128,	/* 142 */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04650) */
/* 04624 */ HB_P_LINEOFFSET, 130,	/* 144 */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 04650 */ HB_P_LINEOFFSET, 135,	/* 149 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCER */
	HB_P_POPLOCALNEAR, 12,	/* PAG */
/* 04723 */ HB_P_LINEOFFSET, 136,	/* 150 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* CONS_CLI */
/* 04731 */ HB_P_LINEOFFSET, 137,	/* 151 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 14, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04787 */ HB_P_LINEOFFSET, 138,	/* 152 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04811 */ HB_P_LINEOFFSET, 139,	/* 153 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04865) */
/* 04825 */ HB_P_LINEOFFSET, 140,	/* 154 */
	HB_P_PUSHSYMNEAR, 54,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 04860 */ HB_P_LINEOFFSET, 141,	/* 155 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04865 */ HB_P_LINEOFFSET, 143,	/* 157 */
	HB_P_PUSHSYMNEAR, 55,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04897) */
	HB_P_JUMP, 214, 31,	/* 8150 (abs: 13044) */
/* 04897 */ HB_P_LINEOFFSET, 146,	/* 160 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 56, 0,	/* I */
/* 04903 */ HB_P_LINEOFFSET, 147,	/* 161 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 56, 0,	/* I */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 124, 6,	/* 1660 (abs: 06581) */
/* 04924 */ HB_P_LINEOFFSET, 148,	/* 162 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MALIAS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 121,	/* 121 (abs: 05058) */
/* 04939 */ HB_P_LINEOFFSET, 149,	/* 163 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', 'p', 'a', 'g', 'o', ')', ',', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
	HB_P_JUMPNEAR, 119,	/* 119 (abs: 05175) */
/* 05058 */ HB_P_LINEOFFSET, 151,	/* 165 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'l', 'p', 'a', 'g', 'o', ')', ',', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05175 */ HB_P_LINEOFFSET, 153,	/* 167 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05215 */ HB_P_LINEOFFSET, 154,	/* 168 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05258) */
/* 05226 */ HB_P_LINEOFFSET, 155,	/* 169 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05258 */ HB_P_LINEOFFSET, 157,	/* 171 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 05299) */
/* 05269 */ HB_P_LINEOFFSET, 158,	/* 172 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05299 */ HB_P_LINEOFFSET, 160,	/* 174 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05342) */
/* 05310 */ HB_P_LINEOFFSET, 161,	/* 175 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05342 */ HB_P_LINEOFFSET, 163,	/* 177 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05385) */
/* 05353 */ HB_P_LINEOFFSET, 164,	/* 178 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05385 */ HB_P_LINEOFFSET, 166,	/* 180 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05437) */
/* 05396 */ HB_P_LINEOFFSET, 167,	/* 181 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05437 */ HB_P_LINEOFFSET, 169,	/* 183 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 05479) */
/* 05448 */ HB_P_LINEOFFSET, 170,	/* 184 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05479 */ HB_P_LINEOFFSET, 172,	/* 186 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05525) */
/* 05491 */ HB_P_LINEOFFSET, 173,	/* 187 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05525 */ HB_P_LINEOFFSET, 175,	/* 189 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05577) */
/* 05536 */ HB_P_LINEOFFSET, 176,	/* 190 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05577 */ HB_P_LINEOFFSET, 178,	/* 192 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_DUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 05620) */
/* 05588 */ HB_P_LINEOFFSET, 179,	/* 193 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05620 */ HB_P_LINEOFFSET, 181,	/* 195 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05663) */
/* 05631 */ HB_P_LINEOFFSET, 182,	/* 196 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05663 */ HB_P_LINEOFFSET, 184,	/* 198 */
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_JURO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05708) */
/* 05674 */ HB_P_LINEOFFSET, 185,	/* 199 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05708 */ HB_P_LINEOFFSET, 187,	/* 201 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 05754) */
/* 05719 */ HB_P_LINEOFFSET, 188,	/* 202 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05754 */ HB_P_LINEOFFSET, 190,	/* 204 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 05802) */
/* 05765 */ HB_P_LINEOFFSET, 191,	/* 205 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05802 */ HB_P_LINEOFFSET, 193,	/* 207 */
	HB_P_PUSHLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 05842) */
/* 05813 */ HB_P_LINEOFFSET, 194,	/* 208 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05842 */ HB_P_LINEOFFSET, 196,	/* 210 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 05895) */
/* 05853 */ HB_P_LINEOFFSET, 197,	/* 211 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'a', 't', 'p', 'a', 'g', ' ', '-', ' ', 'v', 'e', 'n', 'c', ')', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 05895 */ HB_P_LINEOFFSET, 199,	/* 213 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 70, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05915 */ HB_P_LINEOFFSET, 200,	/* 214 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05939 */ HB_P_LINEOFFSET, 201,	/* 215 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 05951 */ HB_P_LINEOFFSET, 202,	/* 216 */
	HB_P_PUSHSYMNEAR, 58,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 05971 */ HB_P_LINEOFFSET, 203,	/* 217 */
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05987) */
	HB_P_JUMP, 75, 2,	/* 587 (abs: 06571) */
/* 05987 */ HB_P_LINEOFFSET, 206,	/* 220 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 06005) */
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 42, 1,	/* 298 (abs: 06303) */
/* 06008 */ HB_P_LINEOFFSET, 207,	/* 221 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 06014 */ HB_P_LINEOFFSET, 208,	/* 222 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06029) */
/* 06022 */ HB_P_LINEOFFSET, 209,	/* 223 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06029 */ HB_P_LINEOFFSET, 211,	/* 225 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06044 */ HB_P_LINEOFFSET, 212,	/* 226 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06058 */ HB_P_LINEOFFSET, 213,	/* 227 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06087 */ HB_P_LINEOFFSET, 214,	/* 228 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06156 */ HB_P_LINEOFFSET, 215,	/* 229 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06192 */ HB_P_LINEOFFSET, 216,	/* 230 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'l', 'r', '.', 'M', 'e', 'd', '.', 'D', 'o', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 06231 */ HB_P_LINEOFFSET, 217,	/* 231 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 06270 */ HB_P_LINEOFFSET, 218,	/* 232 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06303 */ HB_P_LINEOFFSET, 220,	/* 234 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06341 */ HB_P_LINEOFFSET, 221,	/* 235 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06376 */ HB_P_LINEOFFSET, 222,	/* 236 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06426 */ HB_P_LINEOFFSET, 223,	/* 237 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06488 */ HB_P_LINEOFFSET, 224,	/* 238 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06542 */ HB_P_LINEOFFSET, 225,	/* 239 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
/* 06556 */ HB_P_LINEOFFSET, 226,	/* 240 */
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
/* 06569 */ HB_P_LINEOFFSET, 227,	/* 241 */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 56, 0,	/* I */
	HB_P_JUMP, 123, 249,	/* -1669 (abs: 04909) */
/* 06581 */ HB_P_LINEOFFSET, 228,	/* 242 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06595 */ HB_P_LINEOFFSET, 229,	/* 243 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06646 */ HB_P_LINEOFFSET, 230,	/* 244 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06715 */ HB_P_LINEOFFSET, 231,	/* 245 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'e', 'd', 'i', 'o', ' ', 'p', '/', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06802 */ HB_P_LINEOFFSET, 232,	/* 246 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06886 */ HB_P_LINEOFFSET, 233,	/* 247 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 157, 23,	/* 6045 (abs: 12957) */
/* 06915 */ HB_P_LINEOFFSET, 235,	/* 249 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06966 */ HB_P_LINEOFFSET, 237,	/* 251 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MALIAS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 07081) */
/* 06981 */ HB_P_LINEOFFSET, 238,	/* 252 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 07179) */
/* 07081 */ HB_P_LINEOFFSET, 240,	/* 254 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', '=', 39, 'B', 39, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07179 */ HB_P_LINEOFFSET, 242,	/* 256 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 07224) */
/* 07191 */ HB_P_LINEOFFSET, 243,	/* 257 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07224 */ HB_P_LINEOFFSET, 245,	/* 259 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07267) */
/* 07235 */ HB_P_LINEOFFSET, 246,	/* 260 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MMOV_CX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07267 */ HB_P_LINEOFFSET, 248,	/* 262 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 07308) */
/* 07278 */ HB_P_LINEOFFSET, 249,	/* 263 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07308 */ HB_P_LINEOFFSET, 251,	/* 265 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07351) */
/* 07319 */ HB_P_LINEOFFSET, 252,	/* 266 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07351 */ HB_P_LINEOFFSET, 254,	/* 268 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07394) */
/* 07362 */ HB_P_LINEOFFSET, 255,	/* 269 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07394 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 07448) */
/* 07406 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07448 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 07492) */
/* 07460 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07492 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 07540) */
/* 07505 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07540 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 07594) */
/* 07552 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07594 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPO_DUP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 07639) */
/* 07606 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07639 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 07684) */
/* 07651 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'm', 'o', 'v', '_', 'c', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MLOC_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07684 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_JURO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 07731) */
/* 07696 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'j', 'u', 'r', 'o', 's', '_', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07731 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 07779) */
/* 07743 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07779 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 07829) */
/* 07791 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'm', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07829 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHLOCALNEAR, 45,	/* MEMI_VENC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 07871) */
/* 07841 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '=', ' ', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07871 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 07926) */
/* 07883 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'a', 't', 'p', 'a', 'g', ' ', '-', ' ', 'v', 'e', 'n', 'c', ')', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MQTD_DIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07926 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'p', 'a', 'g', ',', 't', 'i', 'p', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 67,	/* CCOMM */
/* 07975 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 68, 0,	/* Q_DUPR */
/* 07984 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 67,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 68, 0,	/* Q_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08005 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_MESSAGE, 51, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 52,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08030 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* Q_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 08096) */
/* 08045 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 54,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 234, 226,	/* -7446 (abs: 00647) */
/* 08096 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 55,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 08129) */
	HB_P_JUMP, 54, 19,	/* 4918 (abs: 13044) */
/* 08129 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'o', 'n', 0, 
	HB_P_DOSHORT, 2,
/* 08144 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 69,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 70,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 08174) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 'y', 'y', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 08185) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'd', 'd', '/', 'm', 'm', '/', 'y', 'y', 0, 
	HB_P_DOSHORT, 2,
/* 08187 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCER */
	HB_P_POPLOCALNEAR, 12,	/* PAG */
/* 08261 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MDIA */
/* 08274 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 08341) */
/* 08286 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 08368) */
/* 08341 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 08368 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 08381 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 56, 0,	/* I */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_PUSHSYMNEAR, 53,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* Q_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 34, 15,	/* 3874 (abs: 12274) */
/* 08403 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 58,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 08431 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08450) */
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 46, 2,	/* 558 (abs: 09008) */
/* 08453 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 08460 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08477) */
/* 08469 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08477 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 08493 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08508 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08538 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08608 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08649 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 08683 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08720 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08759 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08798 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'i', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 08831 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'J', 'u', 'r', '.', 'D', 'e', 's', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08869 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08906 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 08943 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'L', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 08974 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09008 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 09068) */
/* 09020 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 29,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 4,
/* 09049 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 40,	/* MAREA */
	HB_P_PUSHMEMVAR, 14, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09068) */
	HB_P_JUMP, 127, 12,	/* 3199 (abs: 12264) */
/* 09068 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHLOCALNEAR, 33,	/* MDIA */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 41, 1,	/* 297 (abs: 09381) */
/* 09087 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 09349) */
/* 09097 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09136 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09175 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09214 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09253 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09301 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MT_PG */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09349 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_LOCALNEARSETINT, 50, 0, 0,	/* MT_JUR 0*/
	HB_P_PUSHLOCALNEAR, 50,	/* MT_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
/* 09366 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MDIA */
/* 09381 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_PUSHSYMNEAR, 72,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 09491) */
/* 09413 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 72,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 8,	/* L_MES */
/* 09442 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 09466 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 09491 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09530 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 09566 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09624 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09680) */
/* 09644 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 09770) */
/* 09680 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09736) */
/* 09700 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 09770) */
/* 09736 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09770 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09811 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09870 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09929 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09988 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHLOCALNEAR, 46,	/* MDOC_DESC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 10058) */
/* 10000 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 58,	/* 58 (abs: 10114) */
/* 10058 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10114 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 10155 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 10196 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 10232 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 10284) */
/* 10252 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 10284 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_DUP 1*/
/* 10291 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* MTOT_DUP 1*/
/* 10298 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
/* 10316 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 26,	/* MVLR_DUP */
/* 10334 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 53,	/* MVLR_DOC */
/* 10352 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 52,	/* MTOT_DOC */
/* 10370 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 10412) */
/* 10387 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHLOCALNEAR, 42,	/* MJUROS_D */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 42,	/* MJUROS_D */
/* 10405 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_LOCALNEARADDINT, 43, 1, 0,	/* MJUR_TOT 1*/
/* 10412 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 10539) */
/* 10438 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
/* 10467 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* TOT_JUR 1*/
/* 10474 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHLOCALNEAR, 50,	/* MT_JUR */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 50,	/* MT_JUR */
/* 10503 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MVLR_JUR */
/* 10532 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* MTOT_JUR 1*/
/* 10539 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 10666) */
/* 10565 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
/* 10594 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* TOT_DES 1*/
/* 10601 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 49,	/* MT_DES */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 49,	/* MT_DES */
/* 10630 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 28,	/* MVLR_DES */
/* 10659 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_LOCALNEARADDINT, 25, 1, 0,	/* MTOT_DES 1*/
/* 10666 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHLOCALNEAR, 48,	/* MT_PG */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 48,	/* MT_PG */
/* 10684 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHLOCALNEAR, 34,	/* MT_DIA */
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MT_DIA */
/* 10702 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_PUSHSYMNEAR, 72,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 249, 5,	/* 1529 (abs: 12261) */
/* 10735 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_LESS,
	HB_P_JUMPFALSE, 220, 1,	/* 476 (abs: 11222) */
/* 10749 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 10794 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10894 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10994 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11094 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ' ', 'P', 'a', 'g', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11194 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 219, 3,	/* 987 (abs: 12206) */
/* 11222 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11230 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 11237 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 11253 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 11268 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11298 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11368 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11409 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'L', 'o', 'c', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 11443 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', '.', 'P', 'a', 'g', 'a', 'm', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 11480 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11519 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11558 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'i', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 11591 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'J', 'u', 'r', '.', 'D', 'e', 's', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11629 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 11666 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 63,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 11703 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11737 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* L_MES */
	HB_P_DOSHORT, 1,
/* 11761 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'M', 'E', 'S', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 11806 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11906 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12006 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_DES */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* VLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12106 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', '.', ' ', 'P', 'a', 'g', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_DUP */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12206 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 72,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 68, 0,	/* Q_DUPR */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 8,	/* L_MES */
/* 12235 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_LOCALNEARSETINT, 53, 0, 0,	/* MVLR_DOC 0*/
	HB_P_PUSHLOCALNEAR, 53,	/* MVLR_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* VLR_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* VLR_JUR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* VLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_DES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_JUR */
	HB_P_POPLOCALNEAR, 17,	/* TOT_DUP */
/* 12261 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHVARIABLE, 56, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 56, 0,	/* I */
	HB_P_JUMP, 213, 240,	/* -3883 (abs: 08388) */
/* 12274 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_GREATEREQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 12293) */
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 12318) */
/* 12295 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* PAG 1*/
/* 12302 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 61,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* PAG */
	HB_P_PUSHLOCALNEAR, 30,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 12318 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 62,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 12333 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 12385 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MTOT_DOC */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12494 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTOT_JUR */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MVLR_JUR */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12603 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTOT_DES */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MVLR_DES */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12712 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MVLR_DUP */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12821 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'D', 'i', 's', 'p', 'e', 'n', 'c', 'a', 'd', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MJUR_TOT */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MJUROS_D */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12930 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 67,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 12957 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 60,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 12965 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 73,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 12975 */ HB_P_LINE, 221, 1,	/* 477 */
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
/* 13017 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 74,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'P', 'A', 'G', 'A', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 150, 207,	/* -12394 (abs: 00647) */
/* 13044 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 47,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13052 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 13058 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

