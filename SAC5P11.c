/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5P11.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5P11.PRG /q /oC:\hti\SISCOM\SAC5P11.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:03 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5P11.PRG"

HB_FUNC( SAC5P11 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5P11 )
{ "SAC5P11", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5P11 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ_ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "MCONS_PEDIDOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5P11 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5P11
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5P11 = hb_vm_SymbolInit_SAC5P11;
   #pragma data_seg()
#endif

HB_FUNC( SAC5P11 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 37, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'P', '1', '1', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* MPRODUTO */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MQTD_PROD 0*/
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* MCUS_REAL 0*/
	HB_P_LOCALNEARSETINT, 32, 0, 0,	/* MPROD 0*/
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MPESO 0*/
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* MVLR_IPI 0*/
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MTOTG_IPI 0*/
	HB_P_LOCALNEARSETSTR, 36, 2, 0,	/* MTIPCONS 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 37, 3, 0,	/* MUF 3*/
	' ', ' ', 0, 
/* 00060 */ HB_P_LINEOFFSET, 3,	/* 16 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 12,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* MTIT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MPAG */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 6,	/* MARQ_ALI */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* CONS_CLI */
	HB_P_DOSHORT, 10,
	HB_P_POPVARIABLE, 11, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_FORN */
/* 00111 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_PUSHSYMNEAR, 13,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'P', '/', '*', '*', 'P', 'E', 'D', 'I', 'D', 'O', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 14, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00203) */
/* 00198 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00203 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_PUSHSYMNEAR, 15,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00220 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_LOCALNEARSETINT, 2, 15, 0,	/* LBA 15*/
/* 00226 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_LOCALNEARSETINT, 3, 70, 0,	/* CBA 70*/
/* 00232 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_PUSHSYMNEAR, 16,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 17,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 18,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00254 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00281) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00281 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00310) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00310 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00340) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00340 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00369) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00369 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00382 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'P', '/', '*', '*', 'P', 'E', 'D', 'I', 'D', 'O', '*', '*', 0, 
	HB_P_DOSHORT, 5,
/* 00457 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_PUSHSYMNEAR, 22,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00466 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 00476 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
/* 00483 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MCOD_CLI 0*/
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MCOD_OPE */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MCOD_VEN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MGRUPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 31,	/* MCUS_REAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MQTD_PROD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MPROD_PESO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_PESO */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_FORN */
/* 00515 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MTIPO_CONS 2*/
	'M', 0, 
/* 00523 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_LOCALNEARSETSTR, 23, 2, 0,	/* MASS 2*/
	' ', 0, 
/* 00531 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_LOCALNEARSETSTR, 37, 3, 0,	/* MUF 3*/
	' ', ' ', 0, 
/* 00540 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_LOCALNEARSETSTR, 29, 2, 0,	/* MTIP_ORD 2*/
	'A', 0, 
/* 00548 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_LOCALNEARSETSTR, 36, 2, 0,	/* MTIPCONS 2*/
	'G', 0, 
/* 00556 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00598 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', '.', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'o', 'u', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00655 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00692 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00729 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00766 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00803 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00840 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00877 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00914 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'C', 'u', 's', 't', 'o', ' ', '[', 'R', ']', 'e', 'a', 'l', ' ', '[', 'M', ']', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00970 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'O', 'r', 'd', 'e', 'm', ' ', '[', 'A', ']', 'l', 'f', 'a', '.', ' ', '[', 'Q', ']', 'u', 'a', 'n', 't', 'd', '.', ' ', '[', 'V', ']', 'a', 'l', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01026 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'T', 'i', 'p', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'A', ']', 'b', 'e', 'r', 't', 'o', ' ', '[', 'P', ']', 'a', 'g', 'o', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01082 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'Q', 'u', 'a', 'n', 't', '.', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'o', 'u', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 't', 'o', 'd', 'o', 's', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01138 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 27,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 01203) */
/* 01157 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', ' ', 'T', 'e', 'c', 'n', 'i', 'c', 'a', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01203 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_LOCALNEARSETSTR, 18, 2, 0,	/* MTIPO_ARQ 2*/
	'P', 0, 
/* 01211 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MTIPO_ARQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01249) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01254) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'a', 'r', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MTIPO_ARQ */
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
/* 01308 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01347) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01352) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01394) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01395) */
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
/* 01413 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01452) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01457) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	8, 0,	/* MDATA2 */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01499) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01500) */
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
/* 01518 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01557) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01562) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01599) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 01612) */
	HB_P_PUSHSYMNEAR, 34,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALREF, 255, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 4,
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
/* 01630 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_VEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01669) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01674) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MCOD_VEN */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01713) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01724) */
	HB_P_PUSHSYMNEAR, 35,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 26,	/* 26 */
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
/* 01742 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCOD_OPE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01781) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01786) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCOD_OPE */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01825) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01836) */
	HB_P_PUSHSYMNEAR, 35,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 26,	/* 26 */
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
/* 01854 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01893) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01898) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 36,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
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
/* 01956 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 37,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 27,	/* 27 */
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
/* 02028 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02067) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02072) */
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
	22, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'M', 0, 
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
/* 02127 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MTIP_ORD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02166) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02171) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', '_', 'o', 'r', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MTIP_ORD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'Q', ',', 'V', 0, 
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
/* 02226 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MTIPCONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02265) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02270) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* MTIPCONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'P', ',', 'G', 0, 
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
/* 02325 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MQTD_PROD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02364) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02369) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'q', 't', 'd', '_', 'p', 'r', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
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
/* 02406 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MASS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02445) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02450) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'a', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MASS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 18,	/* 18 */
	HB_P_PUSHSYMNEAR, 27,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '2', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02516 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 38,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 02538 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 39,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02553) */
	HB_P_JUMP, 51, 14,	/* 3635 (abs: 06185) */
/* 02553 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 24,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02611 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'P', '/', 'P', 'E', 'D', 'I', 'D', 'O', ')', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 02664 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPCONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02698) */
/* 02675 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
	HB_P_JUMPNEAR, 55,	/* 55 (abs: 02751) */
/* 02698 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPCONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 02731) */
/* 02709 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 02751) */
/* 02731 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'G', 'E', 'R', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 02751 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
/* 02759 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIPO_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 02906) */
/* 02771 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'p', 'm', 'e', 'r', 'c', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'p', 'e', 's', 'o', ')', ',', 0, 
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 02880 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'C', 'u', 's', 't', 'o', ' ', 'R', 'E', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
	HB_P_JUMP, 141, 0,	/* 141 (abs: 03044) */
/* 02906 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'p', 'm', 'e', 'r', 'c', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'p', 'e', 's', 'o', ')', ',', 0, 
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03015 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'C', 'u', 's', 't', 'o', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 03044 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIPO_ARQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 03122) */
/* 03055 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'S', 'U', 'M', '(', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', '*', ' ', '(', 'p', 'i', 'p', 'i', '/', '1', '0', '0', ')', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 67,	/* 67 (abs: 03187) */
/* 03122 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'S', 'U', 'M', '(', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ' ', '*', ' ', '(', 'p', 'i', 'p', 'i', '/', '1', '0', '0', ')', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03187 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, 'C', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03293 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 03354) */
/* 03304 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MGRUPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03354 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 03402) */
/* 03365 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03402 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 03459) */
/* 03414 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03459 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 03515) */
/* 03470 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03515 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCOD_OPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 03571) */
/* 03526 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCOD_OPE */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03571 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPCONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 03627) */
/* 03582 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03627 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHLOCALNEAR, 36,	/* MTIPCONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 03665) */
/* 03638 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03665 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ',', 'p', 'm', 'e', 'r', 'c', ',', 'p', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 41, 0,	/* CCOMM */
/* 03718 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 41, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03739 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_MESSAGE, 44, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 45,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03763 */ HB_P_LINEOFFSET, 117,	/* 130 */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 03829) */
/* 03777 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_PUSHSYMNEAR, 47,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'e', 's', 's', 'e', 's', ' ', 'd', 'a', 'd', 'o', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 215, 242,	/* -3369 (abs: 00457) */
/* 03829 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MTOTG_IPI 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IPI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MPESO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MCUSG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCUS_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MVLR_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOTG_SAI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_SAI */
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 03864 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'E', 'D', '_', 'R', 'E', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
/* 03883 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 't', 'e', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
/* 03919 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 03974) */
/* 03930 */ HB_P_LINEOFFSET, 126,	/* 139 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'C', 'o', 'd', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MCOD_VEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 04026) */
/* 03974 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 04026) */
/* 03985 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'C', 'o', 'd', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
/* 04026 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 04059) */
/* 04037 */ HB_P_LINEOFFSET, 131,	/* 144 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', 'U', 'F', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 37,	/* MUF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 04059 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIP_ORD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 04136) */
/* 04070 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_PUSHSYMNEAR, 49,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 04101 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'p', '/', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'L', 'F', 'A', 'B', 'E', 'T', 'I', 'C', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
	HB_P_JUMP, 143, 0,	/* 143 (abs: 04276) */
/* 04136 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTIP_ORD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'Q', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 04212) */
/* 04147 */ HB_P_LINEOFFSET, 137,	/* 150 */
	HB_P_PUSHSYMNEAR, 49,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 04178 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'p', '/', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 66,	/* 66 (abs: 04276) */
/* 04212 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_PUSHSYMNEAR, 49,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 04243 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'p', '/', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'V', 'E', 'N', 'D', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
/* 04276 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHSYMNEAR, 50,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'E', 'D', '_', 'R', 'E', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04306) */
	HB_P_JUMP, 250, 240,	/* -3846 (abs: 00457) */
/* 04306 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_POPLOCALNEAR, 32,	/* MPROD */
/* 04316 */ HB_P_LINEOFFSET, 147,	/* 160 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 46,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 234, 3,	/* 1002 (abs: 05335) */
/* 04336 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04355) */
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 104, 1,	/* 360 (abs: 04715) */
/* 04358 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 04367 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 04383) */
/* 04376 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04383 */ HB_P_LINEOFFSET, 153,	/* 166 */
	HB_P_PUSHSYMNEAR, 53,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 04401 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 54,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04415 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04445 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 04477 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'l', 'r', '.', 'S', 'a', 'i', 'd', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 04509 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'l', 'r', '.', 'M', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04539 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', ' ', 'V', 'l', 'r', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04579 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'V', 'l', 'r', '.', 'M', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04616 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', 'M', 'a', 'r', 'g', 'e', 'm', 0, 
	HB_P_DOSHORT, 1,
/* 04654 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', '(', '%', ')', 0, 
	HB_P_DOSHORT, 1,
/* 04691 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04715 */ HB_P_LINEOFFSET, 165,	/* 178 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04744 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04778 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04830 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04884 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04945 */ HB_P_LINEOFFSET, 170,	/* 183 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04999 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05060 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05122 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 55,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05202 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTOT_PESO */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTOT_PESO */
/* 05218 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOTG_SAI */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOTG_SAI */
/* 05234 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MTOTG_IPI */
/* 05250 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MVLRG_SAI */
/* 05266 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCUS_SAI */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MCUS_SAI */
/* 05282 */ HB_P_LINEOFFSET, 179,	/* 192 */
	HB_P_PUSHLOCALNEAR, 16,	/* MCUSG_SAI */
	HB_P_PUSHMEMVAR, 40, 0,	/* MCONS_PEDIDOS */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MCUSG_SAI */
/* 05298 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MQTD_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 19,	/* 19 (abs: 05326) */
/* 05309 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_LOCALNEARADDINT, 32, 1, 0,	/* MPROD 1*/
/* 05315 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHLOCALNEAR, 30,	/* MQTD_PROD */
	HB_P_PUSHLOCALNEAR, 32,	/* MPROD */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 05326) */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 05335) */
/* 05326 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 14, 252,	/* -1010 (abs: 04322) */
/* 05335 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05381) */
/* 05347 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 05356 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05363 */ HB_P_LINEOFFSET, 190,	/* 203 */
	HB_P_PUSHSYMNEAR, 53,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05381 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 05428 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'E', 'S', 'O', ' ', 'B', 'R', 'U', 'T', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTOT_PESO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05494 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'S', 'A', 'I', 'D', 'A', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOTG_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05560 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', 's', ' ', 'S', 'A', 'I', 'D', 'A', 'S', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05626 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'I', 'P', 'I', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05692 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05747 */ HB_P_LINEOFFSET, 198,	/* 211 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'O', 'T', 'A', 'L', ' ', 'D', 'A', 'S', ' ', 'S', 'A', 'I', 'D', 'A', 'S', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05816 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'V', 'A', 'L', 'O', 'R', ' ', 'C', 'U', 'S', 'T', 'O', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCUSG_SAI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05882 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05937 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'M', 'A', 'R', 'G', 'E', 'M', ' ', 'L', 'U', 'C', 'R', 'O', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 16,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06009 */ HB_P_LINEOFFSET, 202,	/* 215 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'M', 'A', 'R', 'G', 'E', 'M', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 16,	/* MCUSG_SAI */
	HB_P_MINUS,
	HB_P_PUSHLOCALNEAR, 15,	/* MVLRG_SAI */
	HB_P_PUSHLOCALNEAR, 35,	/* MTOTG_IPI */
	HB_P_PLUS,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06092 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 06118 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_PUSHSYMNEAR, 52,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06125 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 58,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 06134 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 59,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 06175 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHSYMNEAR, 60,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 06185 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_PUSHSYMNEAR, 61,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06192 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06197 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

