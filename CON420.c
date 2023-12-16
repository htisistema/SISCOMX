/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON420.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON420.PRG /q /oC:\hti\SISCOM\CON420.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:34:53 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON420.PRG"

HB_FUNC( CON420 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( JUROS_PED );
HB_FUNC_EXTERN( V_PED_NT );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON420 )
{ "CON420", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON420 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ_PRIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_REL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPORTA_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CART", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MIMP_PRODUTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "JUROS_PED", {HB_FS_PUBLIC}, {HB_FUNCNAME( JUROS_PED )}, NULL },
{ "MDIF_VLR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_PED_NT", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_PED_NT )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONT_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON420 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON420
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON420 = hb_vm_SymbolInit_CON420;
   #pragma data_seg()
#endif

HB_FUNC( CON420 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 43, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '0', 0, 
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* TIPO_SIT 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MTP_REL 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MIMP_COM 2*/
	'N', 0, 
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MTOT_COMI 0*/
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_LOCALNEARSETINT, 32, 0, 0,	/* MTOT_IND 0*/
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* MVLR_IND 0*/
	HB_P_LOCALNEARSETINT, 34, 0, 0,	/* MSUB_IND 0*/
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 41,	/* MN_BANCO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 44,	/* CONS_DOC */
/* 00073 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 20,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MCPF */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* BANK */
	HB_P_PUSHSYMNEAR, 7,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 8,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 9,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ */
	HB_P_PUSHSYMNEAR, 12,	/* MARQ_PRIN */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_REL */
	HB_P_PUSHSYMNEAR, 14,	/* MPORTA_IMP */
	HB_P_PUSHSYMNEAR, 15,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 16,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 17,	/* MCARTAO */
	HB_P_PUSHSYMNEAR, 18,	/* MCOD_CART */
	HB_P_PUSHSYMNEAR, 19,	/* CONS_CLI */
	HB_P_DOSHORT, 18,
	HB_P_POPVARIABLE, 19, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_POPVARIABLE, 17, 0,	/* MCARTAO */
	HB_P_POPVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 11, 0,	/* MARQ */
	HB_P_POPVARIABLE, 10, 0,	/* MIMP_TIPO */
/* 00156 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_420 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 130, 0,	/* 130 (abs: 00292) */
/* 00165 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_PUSHSYMNEAR, 21,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 22, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00252) */
/* 00247 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00252 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00264 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_LOCALNEARSETSTR, 40, 19, 0,	/* MTITULO 19*/
	'(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ')', 0, 
	HB_P_JUMP, 129, 0,	/* 129 (abs: 00418) */
/* 00292 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_PUSHSYMNEAR, 21,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_420 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 22, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00382) */
/* 00377 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00382 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00394 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_LOCALNEARSETSTR, 40, 18, 0,	/* MTITULO 18*/
	'(', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ')', 0, 
/* 00418 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 23,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 25,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00440 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00469) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00469 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00496) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00496 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00527) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00527 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'r', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00556) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00556 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 26,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHVARIABLE, 16, 0,	/* MALIAS */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00581) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00581 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_PUSHSYMNEAR, 24,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 27,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00600 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', '-', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'o', 's', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00644 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00688 */ HB_P_LINEOFFSET, 32,	/* 45 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00732 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00777 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00822 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', ' ', ' ', ' ', ' ', 'N', 'o', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00875 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00920 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00965 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'o', ' ', '[', 'P', ']', 'a', 'g', 'o', 's', ' ', '[', 'N', ']', 'a', 'o', ' ', 'P', 'a', 'g', 'o', 's', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01015 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'o', ' ', 'D', 'o', 'c', 'u', 'm', '.', ' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'i', 'd', 'o', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01065 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'a', 's', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01115 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'J', 'u', 'r', 'o', 's', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01165 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01215 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 31,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 01224 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 01237 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* BANK */
/* 01248 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MOD 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* MOD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
/* 01262 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 01274 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 01297 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
/* 01308 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* TIPO_SIT 2*/
	'G', 0, 
/* 01316 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 34, 0,	/* MIMP_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 42,	/* MVLR_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MIMP_COM */
	HB_P_POPLOCALNEAR, 27,	/* MTP_REL */
/* 01334 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 20,	/* MTIP */
/* 01345 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 39,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 40, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01427 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01465) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01470) */
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
	20, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 42,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01521 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 01584) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 90, 0,	/* 90 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 01674) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01691 */ HB_P_LINEOFFSET, 60,	/* 73 */
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
/* 01713 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 01737) */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 3,
/* 01737 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01776) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01781) */
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
	9, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 48,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01829) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 85,	/* 85 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 01914) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 45,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01931 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01996 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* MN_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02035) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02040) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'n', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02086 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02125) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02130) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 68,	/* 68 */
	HB_P_PUSHSYMNEAR, 45,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'i', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02232 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02271) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02276) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 43,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 66,	/* 66 */
	HB_P_PUSHSYMNEAR, 45,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02376 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* TIPO_SIT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02415) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02420) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'i', 'p', 'o', '_', 's', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* TIPO_SIT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', ',', 'N', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02475 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MTP_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02514) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02519) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'p', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MTP_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02571 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MIMP_COM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02610) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02615) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 'c', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MIMP_COM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02668 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MVLR_JUROS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02707) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02712) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'v', 'l', 'r', '_', 'j', 'u', 'r', 'o', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MVLR_JUROS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MIMP_COM */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02783 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 34, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02854 */ HB_P_LINEOFFSET, 72,	/* 85 */
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
/* 02876 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_PUSHSYMNEAR, 49,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 02922) */
/* 02888 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_PUSHSYMNEAR, 23,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 25,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 02910 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02917 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02922 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 02976) */
/* 02934 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'A', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 02964 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_LOCALNEARSETSTR, 20, 3, 0,	/* MTIP 3*/
	'D', 'U', 0, 
	HB_P_JUMP, 11, 3,	/* 779 (abs: 03752) */
/* 02976 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 03027) */
/* 02988 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 03015 */ HB_P_LINEOFFSET, 83,	/* 96 */
	HB_P_LOCALNEARSETSTR, 20, 3, 0,	/* MTIP 3*/
	'C', 'H', 0, 
	HB_P_JUMP, 216, 2,	/* 728 (abs: 03752) */
/* 03027 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 69, 1,	/* 325 (abs: 03362) */
/* 03040 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 03067 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_LOCALNEARSETSTR, 20, 3, 0,	/* MTIP 3*/
	'C', 'T', 0, 
/* 03076 */ HB_P_LINEOFFSET, 87,	/* 100 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 18, 0,	/* MCOD_CART */
/* 03082 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03116 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03160 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 51,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03229 */ HB_P_LINEOFFSET, 91,	/* 104 */
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
/* 03251 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHSYMNEAR, 52,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03260 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03285 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_PUSHSYMNEAR, 52,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03293 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHSYMNEAR, 51,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_DOSHORT, 3,
/* 03306 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSYMNEAR, 54,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 23,	/* OPCAO */
/* 03340 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03347 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_PUSHLOCALNEAR, 23,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 140, 1,	/* 396 (abs: 03752) */
	HB_P_JUMP, 160, 247,	/* -2144 (abs: 01215) */
/* 03362 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 03722) */
/* 03375 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'I', 'N', 'A', 'N', 'C', 'E', 'I', 'R', 'A', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 03405 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_LOCALNEARSETSTR, 20, 3, 0,	/* MTIP 3*/
	'F', 'I', 0, 
/* 03414 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 18, 0,	/* MCOD_CART */
/* 03420 */ HB_P_LINEOFFSET, 105,	/* 118 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03460 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03504 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHSYMNEAR, 35,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 38,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 27,	/* 27 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03557) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 03568) */
	HB_P_PUSHSYMNEAR, 55,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 41, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 37, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03586 */ HB_P_LINEOFFSET, 108,	/* 121 */
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
/* 03608 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHSYMNEAR, 52,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03617 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03642 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_PUSHSYMNEAR, 52,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03650 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_DOSHORT, 3,
/* 03663 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_PUSHSYMNEAR, 54,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 23,	/* OPCAO */
/* 03701 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03708 */ HB_P_LINEOFFSET, 116,	/* 129 */
	HB_P_PUSHLOCALNEAR, 23,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 03752) */
	HB_P_JUMP, 56, 246,	/* -2504 (abs: 01215) */
/* 03722 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 40,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 03752 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO */
/* 03778 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIT */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 03812) */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'o', 'c', '.', 'P', 'A', 'G', 'O', 'S', 0, 
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 03850) */
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 03838) */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'o', 'c', '.', 'N', 'A', 'O', ' ', 'P', 'A', 'G', 'O', 0, 
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 03850) */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'O', 'C', '.', 'G', 'E', 'R', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTIT */
/* 03853 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03874) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 28,	/* MIMP_COM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 03984) */
/* 03876 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_PUSHSYMNEAR, 57,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 83,	/* 83 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'A', ']', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'O', 'C', '.', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'S', ',', 'T', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 03992) */
/* 03984 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_LOCALNEARSETSTR, 25, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 03992 */ HB_P_LINEOFFSET, 129,	/* 142 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* TP_MES */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* TD_MES */
	HB_P_POPLOCALNEAR, 30,	/* I */
/* 04005 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 04049) */
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04091) */
/* 04051 */ HB_P_LINEOFFSET, 131,	/* 144 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '9', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* T_INI */
/* 04071 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '0', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_FIM */
/* 04091 */ HB_P_LINEOFFSET, 134,	/* 147 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 44,	/* CONS_DOC */
/* 04098 */ HB_P_LINEOFFSET, 135,	/* 148 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_420 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 04191) */
/* 04106 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 85,	/* 85 (abs: 04274) */
/* 04191 */ HB_P_LINEOFFSET, 138,	/* 151 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04274 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 04321) */
/* 04286 */ HB_P_LINEOFFSET, 141,	/* 154 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04321 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 04364) */
/* 04332 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04364 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_PUSHLOCALNEAR, 27,	/* MTP_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 04412) */
/* 04375 */ HB_P_LINEOFFSET, 147,	/* 160 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', '_', 't', 'r', 'a', 'n', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04412 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 116,	/* 116 (abs: 04538) */
/* 04424 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04466 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04488) */
	HB_P_PUSHSYMNEAR, 51,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 04496) */
	HB_P_PUSHSYMNEAR, 55,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POP,
/* 04497 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MCOD_CART */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 17, 0,	/* MCARTAO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO */
/* 04538 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 04592) */
/* 04549 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04592 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04638) */
/* 04604 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04638 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MN_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 04683) */
/* 04649 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MN_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04683 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 04731) */
/* 04695 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04731 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 04796) */
/* 04742 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'b', 'a', 'n', 'c', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 04896) */
/* 04796 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 04853) */
/* 04807 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'b', 'a', 'n', 'c', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 04896) */
/* 04853 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 59, 0,	/* CCOMM */
/* 04896 */ HB_P_LINEOFFSET, 173,	/* 186 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 59, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04916 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04940 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 05003) */
/* 04953 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHSYMNEAR, 63,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 55, 241,	/* -3785 (abs: 01215) */
/* 05003 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 64,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'E', 'M', 'I', 'T', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 05043) */
/* 05031 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05038 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 05043 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 13,	/* 3569 (abs: 08621) */
/* 05055 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* MT_DIA 0*/
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 43,	/* MTOT_DIF */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* TOT */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 05080 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
/* 05091 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 15,	/* L_MES */
/* 05116 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 05127 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* I 0*/
/* 05133 */ HB_P_LINEOFFSET, 190,	/* 203 */
	HB_P_LOCALNEARSETINT, 30, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 106, 9,	/* 2410 (abs: 07559) */
/* 05152 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCLIENTE */
/* 05164 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05182) */
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 252, 1,	/* 508 (abs: 05690) */
/* 05185 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 05191 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05206) */
/* 05199 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05206 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHSYMNEAR, 68,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 05219 */ HB_P_LINEOFFSET, 198,	/* 211 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05233 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 05348) */
/* 05241 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05296 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05348 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 111,	/* 111 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', '.', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', 'S', 'i', 't', '.', 0, 
	HB_P_PUSHLOCALNEAR, 27,	/* MTP_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 05506) */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'D', 'o', 'c', '.', 'T', 'r', 'a', 'n', 's', '.', 0, 
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 05509) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05512 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_PUSHLOCALNEAR, 28,	/* MIMP_COM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 05571) */
/* 05523 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', '%', ' ', 'C', 'o', 'm', ' ', ' ', 'V', 'l', 'r', '.', 'C', 'o', 'm', ' ', 'N', 'o', '.', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05571 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_JUROS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 05633) */
/* 05582 */ HB_P_LINEOFFSET, 208,	/* 221 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', ' ', 'P', 'r', '.', 'V', 'e', 'n', 'd', 'a', ' ', ' ', 'D', 'i', 'f', '.', 'R', '$', ' ', ' ', 'D', 'i', 'f', '.', '%', 0, 
	HB_P_DOSHORT, 1,
/* 05633 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05666 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 05690 */ HB_P_LINEOFFSET, 213,	/* 226 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 219, 0,	/* 219 (abs: 05922) */
/* 05706 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 189, 0,	/* 189 (abs: 05904) */
/* 05718 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 05768 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05823 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05871 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05904 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* MT_DIA 0*/
/* 05910 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 05922 */ HB_P_LINEOFFSET, 223,	/* 236 */
	HB_P_PUSHSYMNEAR, 73,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05944 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05958 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 06020) */
/* 05969 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 06000) */
/* 05980 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 06020) */
	HB_P_JUMP, 19, 6,	/* 1555 (abs: 07552) */
/* 06000 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 06020) */
	HB_P_JUMP, 255, 5,	/* 1535 (abs: 07552) */
/* 06020 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06061 */ HB_P_LINEOFFSET, 237,	/* 250 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06096 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06131 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06184 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 06234) */
/* 06201 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'A', 'R', 'T', '.', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 06315) */
/* 06234 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 06284) */
/* 06251 */ HB_P_LINEOFFSET, 243,	/* 256 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'B', 'A', 'N', 'C', 'O', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 06315) */
/* 06284 */ HB_P_LINEOFFSET, 245,	/* 258 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06315 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06355 */ HB_P_LINEOFFSET, 248,	/* 261 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06395 */ HB_P_LINEOFFSET, 249,	/* 262 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06451 */ HB_P_LINEOFFSET, 250,	/* 263 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 75, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06497 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 06547) */
/* 06514 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'A', 'b', 'e', 'r', 't', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 06578) */
/* 06547 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'P', 'a', 'g', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06578 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MTP_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 06624) */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 06628) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 06630 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHLOCALNEAR, 28,	/* MIMP_COM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 177, 0,	/* 177 (abs: 06817) */
/* 06643 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06695 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06756 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06792 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 29,	/* MTOT_COMI */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 29,	/* MTOT_COMI */
/* 06817 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_JUROS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 191, 0,	/* 191 (abs: 07018) */
/* 06830 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 76,	/* JUROS_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 77, 0,	/* MDIF_VLR */
/* 06849 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 77, 0,	/* MDIF_VLR */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06906 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* MDIF_VLR */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06953 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 77, 0,	/* MDIF_VLR */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07007 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHLOCALNEAR, 43,	/* MTOT_DIF */
	HB_P_PUSHVARIABLE, 77, 0,	/* MDIF_VLR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 43,	/* MTOT_DIF */
/* 07018 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* V_PED_NT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 07070 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHVARIABLE, 34, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 150, 1,	/* 406 (abs: 07487) */
/* 07084 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 80, 0,	/* CONS_PED */
/* 07093 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 07190 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07215 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 07487) */
/* 07231 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
/* 07238 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 230, 0,	/* 230 (abs: 07487) */
/* 07260 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07474 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_INC,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_JUMP, 17, 255,	/* -239 (abs: 07245) */
/* 07487 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_LOCALNEARADDINT, 11, 1, 0,	/* TOT 1*/
/* 07494 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* TOT_G 1*/
/* 07501 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHLOCALNEAR, 13,	/* TOT_DIN */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* TOT_DIN */
/* 07517 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* TOT_GIN */
/* 07533 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MT_DIA */
/* 07549 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* I 1*/
	HB_P_JUMP, 143, 246,	/* -2417 (abs: 05139) */
/* 07559 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_LOCALNEARADDINT, 30, 255, 255,	/* I -1*/
/* 07566 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 209, 0,	/* 209 (abs: 07789) */
/* 07583 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 196, 0,	/* 196 (abs: 07789) */
/* 07596 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07650 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07706 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07755 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07789 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHLOCALNEAR, 13,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 142, 0,	/* 142 (abs: 07938) */
/* 07799 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07904 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07938 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 07980) */
/* 07951 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07959 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 07966 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 68,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 07980 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 07995 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 08040 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'E', 'M', 'I', 'T', 'I', 'D', 'O', 'S', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08160 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHLOCALNEAR, 28,	/* MIMP_COM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 08245) */
/* 08172 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MTOT_COMI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08245 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHLOCALNEAR, 42,	/* MVLR_JUROS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 62, 1,	/* 318 (abs: 08573) */
/* 08258 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 43,	/* MTOT_DIF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08366 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MTOT_DIF */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08471 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'a', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 82,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MTOT_DIF */
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'@', 'E', ' ', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08573 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 08600 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08608 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 84,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 31, 12,	/* 3103 (abs: 11721) */
/* 08621 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 08642) */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 7, 12,	/* 3079 (abs: 11721) */
/* 08645 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_LOCALNEARSETINT, 31, 0, 0,	/* MTOT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 31,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* TOT */
	HB_P_POPLOCALNEAR, 8,	/* PAG */
/* 08671 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 15,	/* L_MES */
/* 08697 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 08709 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MTIPO */
/* 08736 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* I 0*/
/* 08743 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_LOCALNEARSETINT, 30, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 33, 9,	/* 2337 (abs: 11097) */
/* 08763 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 08780 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 08834) */
/* 08792 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 36,	/* MCOD_AUX */
/* 08812 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 08860) */
/* 08834 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 36,	/* MCOD_AUX */
/* 08847 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
/* 08860 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHLOCALNEAR, 36,	/* MCOD_AUX */
	HB_P_PUSHLOCALNEAR, 10,	/* MFORNEC */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 7,	/* 1958 (abs: 10826) */
/* 08871 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08890) */
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 109, 1,	/* 365 (abs: 09255) */
/* 08893 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 08900 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 08917) */
/* 08909 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08917 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 68,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 08931 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08946 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 09064) */
/* 08955 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09011 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09064 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 133,	/* 133 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 09221 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09255 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 192, 0,	/* 192 (abs: 09457) */
/* 09268 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHLOCALNEAR, 26,	/* TIPO_SIT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 09369) */
/* 09280 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 161, 0,	/* 161 (abs: 09457) */
/* 09299 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 09333) */
/* 09311 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 09346) */
/* 09333 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
/* 09346 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 09359 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* I 1*/
	HB_P_JUMP, 6, 254,	/* -506 (abs: 08860) */
/* 09369 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 09457) */
/* 09387 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 09421) */
/* 09399 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 09434) */
/* 09421 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
/* 09434 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 09447 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* I 1*/
	HB_P_JUMP, 174, 253,	/* -594 (abs: 08860) */
/* 09457 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09472 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09514 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09550 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09586 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09640 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 09695) */
/* 09658 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'A', 'R', 'T', 'E', 'I', 'R', 'A', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 09785) */
/* 09695 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 09750) */
/* 09713 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'B', 'A', 'N', 'C', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 09785) */
/* 09750 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09785 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09826 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09867 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09924 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 75, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09976 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
/* 09992 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_LOCALNEARADDINT, 32, 1, 0,	/* MTOT_IND 1*/
/* 09999 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* TOT_G 1*/
/* 10006 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MJUROS 0*/
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_POPLOCALNEAR, 37,	/* MMULTA */
/* 10017 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHMEMVAR, 75, 0,	/* MDATA_SIS */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 39,	/* MDIAS_ATRAS */
/* 10034 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHLOCALNEAR, 39,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 10099) */
/* 10043 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 85, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 37,	/* MMULTA */
/* 10068 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 39,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 85, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 38,	/* MJUROS */
/* 10099 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 31,	/* MTOT_JUROS */
/* 10112 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MJUROS_IND */
/* 10125 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
/* 10147 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* TOT_GIN */
/* 10163 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10214 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10269 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 70,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* V_PED_NT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 79,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 10321 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHVARIABLE, 34, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 150, 1,	/* 406 (abs: 10738) */
/* 10335 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 80, 0,	/* CONS_PED */
/* 10344 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10441 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_MESSAGE, 60, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 61,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10466 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 10738) */
/* 10482 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
/* 10489 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 80, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 230, 0,	/* 230 (abs: 10738) */
/* 10511 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 80, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10725 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_INC,
	HB_P_POPVARIABLE, 81, 0,	/* CONT_PED */
	HB_P_JUMP, 17, 255,	/* -239 (abs: 10496) */
/* 10738 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* I 1*/
/* 10745 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_PUSHSYMNEAR, 62,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 10826) */
/* 10760 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MDIA */
/* 10773 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 10807) */
/* 10785 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 74,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 10823) */
/* 10807 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHLOCALNEAR, 44,	/* CONS_DOC */
	HB_P_PUSHLOCALNEAR, 30,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MFORNEC */
	HB_P_JUMP, 88, 248,	/* -1960 (abs: 08860) */
	HB_P_JUMP, 85, 248,	/* -1963 (abs: 08860) */
/* 10826 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_LOCALNEARADDINT, 30, 255, 255,	/* I -1*/
/* 10833 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 244, 0,	/* 244 (abs: 11087) */
/* 10846 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10880 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11036 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11070 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 11087 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_LOCALNEARADDINT, 30, 1, 0,	/* I 1*/
	HB_P_JUMP, 216, 246,	/* -2344 (abs: 08750) */
/* 11097 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 11139) */
/* 11110 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11118 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* PAG 1*/
/* 11125 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 68,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* PAG */
	HB_P_PUSHLOCALNEAR, 18,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 19,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 11139 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 47,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 244, 0,	/* 244 (abs: 11393) */
/* 11152 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11186 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11342 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11376 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 11393 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 69,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 11408 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 11453 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'n', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 72,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 31,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11676 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 83,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 11703 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 67,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11711 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 84,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 11721 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 86,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 86,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 86,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 11763 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 87,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'O', 'C', '_', 'E', 'M', 'I', 'T', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 11786 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11794 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 11800 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

