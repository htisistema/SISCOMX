/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACETQ_C.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACETQ_C.PRG /q /oC:\hti\SISCOM\SACETQ_C.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:17 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACETQ_C.PRG"

HB_FUNC( SACETQ_C );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( RANGECHECK );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACETQ_C )
{ "SACETQ_C", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACETQ_C )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "RANGECHECK", {HB_FS_PUBLIC}, {HB_FUNCNAME( RANGECHECK )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODVEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLOQUEIO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "NASCIMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_NAS1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_NAS2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_NAS3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_NAS4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_NAS5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPLEMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACETQ_C )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACETQ_C
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACETQ_C = hb_vm_SymbolInit_SACETQ_C;
   #pragma data_seg()
#endif

HB_FUNC( SACETQ_C )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 27, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'E', 'T', 'Q', '_', 'C', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 25,	/* M_ETQ */
	HB_P_LOCALNEARSETINT, 26, 1, 0,	/* MQUANTD 1*/
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MBLOQ 2*/
	'N', 0, 
/* 00034 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 2,	/* MCGC */
	HB_P_PUSHSYMNEAR, 3,	/* MCPF */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 5,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 6,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 7,	/* MARQ */
	HB_P_PUSHSYMNEAR, 9,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 10,	/* CONS_CLI */
	HB_P_DOSHORT, 9,
	HB_P_POPVARIABLE, 10, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 7, 0,	/* MARQ */
	HB_P_POPVARIABLE, 6, 0,	/* MIMP_TIPO */
/* 00083 */ HB_P_LINEOFFSET, 4,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CC 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_POPLOCALNEAR, 4,	/* LC */
/* 00093 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 18, 0,	/* LB 18*/
/* 00099 */ HB_P_LINEOFFSET, 6,	/* 18 */
	HB_P_LOCALNEARSETINT, 7, 76, 0,	/* CB 76*/
/* 00105 */ HB_P_LINEOFFSET, 8,	/* 20 */
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
/* 00127 */ HB_P_LINEOFFSET, 9,	/* 21 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00156) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00156 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', 'C', 'E', 'P', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'E', 'P', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00183) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00183 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_PUSHSYMNEAR, 15,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00210) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00210 */ HB_P_LINEOFFSET, 12,	/* 24 */
	HB_P_PUSHSYMNEAR, 16,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00227 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 17,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00247 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_PUSHSYMNEAR, 18,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00254 */ HB_P_LINEOFFSET, 16,	/* 28 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'O', 'p', 'c', 'o', 'e', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00307 */ HB_P_LINEOFFSET, 19,	/* 31 */
	HB_P_PUSHSYMNEAR, 20,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00316 */ HB_P_LINEOFFSET, 21,	/* 33 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 5, 0,	/* MTIPO_IMP */
/* 00329 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* MCOD 2*/
	'S', 0, 
/* 00337 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MCONTADOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MCODIGO */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_CLI */
/* 00353 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MTIP_CLI */
/* 00363 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MCLASSIF 2*/
	'2', 0, 
/* 00371 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCIDADE */
	HB_P_POPLOCALNEAR, 12,	/* MBAIRRO */
/* 00385 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_PUSHSYMNEAR, 8,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_POPLOCALNEAR, 21,	/* MDIA_INI */
/* 00399 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MDATA_FIM */
	HB_P_POPLOCALNEAR, 23,	/* MDATA_INI */
/* 00422 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_LOCALNEARSETINT, 17, 11, 0,	/* MESPACO 11*/
/* 00428 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_LOCALNEARSETINT, 19, 2, 0,	/* MFILA 2*/
	HB_P_PUSHLOCALNEAR, 19,	/* MFILA */
	HB_P_POPLOCALNEAR, 18,	/* MLINHAS */
/* 00438 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_LOCALNEARSETINT, 15, 20, 0,	/* MQTD_ETQ 20*/
/* 00444 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_LOCALNEARSETINT, 26, 1, 0,	/* MQUANTD 1*/
/* 00450 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MBLOQ 2*/
	'S', 0, 
/* 00458 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_PUSHSYMNEAR, 23,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00468 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00477 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'E', 't', 'i', 'q', 'u', 'e', 't', 'a', ' ', 'I', 'N', 'D', 'I', 'V', 'I', 'D', 'U', 'A', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00522 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'O', 'P', 'C', 'O', 'E', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00554 */ HB_P_LINEOFFSET, 39,	/* 51 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'L', 'A', 'S', 'S', 'I', 'F', 'I', 'C', 'A', 'C', 'A', 'O', ':', ' ', '[', ' ', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00597 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 47, 0,	/* 47*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'*', '*', ' ', 'A', 'n', 'i', 'v', 'e', 'r', 's', 'a', 'r', 'i', 'o', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 00639 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 47, 0,	/* 47*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', '*', ' ', 'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 00683 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00691 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00728 */ HB_P_LINEOFFSET, 44,	/* 56 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'[', ' ', ']', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00772 */ HB_P_LINEOFFSET, 45,	/* 57 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', '.', 'U', 'l', 't', '.', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00821 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'[', '1', ']', ' ', 'M', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00859 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'[', '2', ']', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00898 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'[', '5', ']', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'B', 'a', 'i', 'r', 'r', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00963 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'i', 'a', '/', 'M', 'e', 's', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01004 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'i', 'a', '/', 'M', 'e', 's', ' ', 'F', 'i', 'n', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01043 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01081 */ HB_P_LINEOFFSET, 52,	/* 64 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01117 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'E', 's', 'p', 'a', 'c', 'o', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01178 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'e', 'n', 't', 'r', 'e', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01239 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'i', 'l', 'e', 'i', 'r', 'a', ' ', 'E', 'T', 'I', 'Q', 'U', 'E', 'T', 'A', 'S', ' ', '[', '1', ',', '2', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01300 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', '/', 'p', 'a', 'g', 'i', 'n', 'a', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01361 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01422 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'o', 's', ' ', 'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'D', 'O', 'S', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01483 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01544 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01605 */ HB_P_LINEOFFSET, 61,	/* 73 */
	HB_P_PUSHSYMNEAR, 27,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'm', 'a', 't', 'r', 'i', 'c', 'u', 'l', 'a', ' ', 'o', 'u', ' ', 'e', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', 's', ' ', 'o', 'p', 'c', 'o', 'e', 's', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'p', '/', ' ', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01670 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_PUSHSYMNEAR, 32,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01764 */ HB_P_LINEOFFSET, 64,	/* 76 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 01786 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 01823) */
/* 01798 */ HB_P_LINEOFFSET, 66,	/* 78 */
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
	HB_P_JUMP, 184, 24,	/* 6328 (abs: 08148) */
/* 01823 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01832 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01876) */
/* 01844 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_LOCALNEARSETINT, 19, 1, 0,	/* MFILA 1*/
/* 01850 */ HB_P_LINEOFFSET, 72,	/* 84 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* NOME */
	HB_P_DOSHORT, 1,
/* 01876 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01884 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MTIP_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01929) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01934) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'i', 'p', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MTIP_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', ',', 'C', ',', 'O', ',', 'R', ',', 'P', ',', 'F', ',', 'U', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01990) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 159, 0,	/* 159 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 141, 0,	/* 141 (abs: 02149) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', ' ', '>', 'P', '/', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02166 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 33, 0,	/* 33*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MCODIGO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02211) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02216) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	20, 0,	/* MCODIGO */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 32,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02274) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 105, 0,	/* 105 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 02379) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'u', 'l', 't', 'i', 'm', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'p', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'p', '/', 'T', 'O', 'D', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02396 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCLASSIF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02441) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02446) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'l', 'a', 's', 's', 'i', 'f', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCLASSIF */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', ',', '2', ',', '5', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02507 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02552) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02557) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCLASSIF */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02599) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02616 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MBAIRRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02661) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02666) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02716 */ HB_P_LINEOFFSET, 80,	/* 92 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MDIA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02761) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02766) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'i', 'a', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02804 */ HB_P_LINEOFFSET, 81,	/* 93 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MDIA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02849) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02854) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'i', 'a', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 51, 0,	/* 51 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	21, 0,	/* MDIA_INI */
	22, 0,	/* MDIA_FIM */
	HB_P_PUSHSYMNEAR, 41,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 41,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02923) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02924) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MDIA_INI */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02959 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03004) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03009) */
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
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03051 */ HB_P_LINEOFFSET, 83,	/* 95 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MDATA_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03096) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03101) */
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
	24, 0,	/* MDATA_FIM */
	23, 0,	/* MDATA_INI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03146) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 03147) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MDATA_INI */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03182 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03227) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03232) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'e', 's', 'p', 'a', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MESPACO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03266) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 03267) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03292 */ HB_P_LINEOFFSET, 85,	/* 97 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03337) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03342) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'i', 'n', 'h', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03375 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MFILA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03420) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03425) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'f', 'i', 'l', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 43,	/* RANGECHECK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03481 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MQTD_ETQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03526) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03531) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'q', 't', 'd', '_', 'e', 't', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03566 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03611) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03616) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03665 */ HB_P_LINEOFFSET, 89,	/* 101 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MBLOQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03710) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03715) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'b', 'l', 'o', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MBLOQ */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03765 */ HB_P_LINEOFFSET, 90,	/* 102 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 39, 0,	/* 39 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LC */
	5, 0,	/* CC */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 44,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 43, 0,	/* 43*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03848) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 39,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 85,	/* 85 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 03933) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 40,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03950 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LC */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_PUSHLOCALNEAR, 5,	/* CC */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03995) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04000) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 33, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04045 */ HB_P_LINEOFFSET, 92,	/* 104 */
	HB_P_PUSHSYMNEAR, 34,	/* READMODAL */
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
/* 04067 */ HB_P_LINEOFFSET, 93,	/* 105 */
	HB_P_PUSHSYMNEAR, 35,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04082) */
	HB_P_JUMP, 229, 15,	/* 4069 (abs: 08148) */
/* 04082 */ HB_P_LINEOFFSET, 97,	/* 109 */
	HB_P_PUSHSYMNEAR, 45,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'T', 'Q', '_', 'C', 'L', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04112) */
	HB_P_JUMP, 38, 241,	/* -3802 (abs: 00307) */
/* 04112 */ HB_P_LINEOFFSET, 100,	/* 112 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCONTADOR 0*/
/* 04118 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 110, 9,	/* 2414 (abs: 06542) */
/* 04131 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHSYMNEAR, 13,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 17,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCLASSIF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 04156 */ HB_P_LINEOFFSET, 105,	/* 117 */
	HB_P_PUSHSYMNEAR, 18,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04163 */ HB_P_LINEOFFSET, 106,	/* 118 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MCODIGO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 64,	/* 64 (abs: 04236) */
/* 04174 */ HB_P_LINEOFFSET, 107,	/* 119 */
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MCODIGO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 04228) */
/* 04192 */ HB_P_LINEOFFSET, 108,	/* 120 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04218 */ HB_P_LINEOFFSET, 109,	/* 121 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 204,	/* -52 (abs: 04174) */
/* 04228 */ HB_P_LINEOFFSET, 111,	/* 123 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04236 */ HB_P_LINEOFFSET, 113,	/* 125 */
	HB_P_PUSHSYMNEAR, 52,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 162, 13,	/* 3490 (abs: 07733) */
/* 04246 */ HB_P_LINEOFFSET, 114,	/* 126 */
	HB_P_PUSHSYMNEAR, 48,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04272 */ HB_P_LINEOFFSET, 118,	/* 130 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDATA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04303) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* DATA_CAD */
	HB_P_PUSHLOCALNEAR, 23,	/* MDATA_INI */
	HB_P_LESS,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04303) */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* DATA_CAD */
	HB_P_PUSHLOCALNEAR, 24,	/* MDATA_FIM */
	HB_P_GREATER,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04325) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTIP_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04324) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 8,	/* MTIP_CLI */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 54,	/* TIPO */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 30,	/* 30 (abs: 04356) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 04355) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* CODVEND */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 04380) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 27,	/* MBLOQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04379) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* BLOQUEIO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04393) */
/* 04382 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 102, 255,	/* -154 (abs: 04236) */
/* 04393 */ HB_P_LINEOFFSET, 123,	/* 135 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 04459) */
/* 04404 */ HB_P_LINEOFFSET, 124,	/* 136 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04426) */
/* 04415 */ HB_P_LINEOFFSET, 125,	/* 137 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 69, 255,	/* -187 (abs: 04236) */
/* 04426 */ HB_P_LINEOFFSET, 128,	/* 140 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 04459) */
/* 04437 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_PUSHLOCALNEAR, 12,	/* MBAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04459) */
/* 04448 */ HB_P_LINEOFFSET, 130,	/* 142 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 36, 255,	/* -220 (abs: 04236) */
/* 04459 */ HB_P_LINEOFFSET, 136,	/* 148 */
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 137, 3,	/* 905 (abs: 05373) */
/* 04471 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* NASCIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 04566) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* NASCIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04579) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* NASCIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04621) */
/* 04581 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 04621 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* DATA_NAS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 04716) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* DATA_NAS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04729) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* DATA_NAS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04771) */
/* 04731 */ HB_P_LINEOFFSET, 141,	/* 153 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* NOME1 */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 04771 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* DATA_NAS2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 04866) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* DATA_NAS2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04879) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* DATA_NAS2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 04921) */
/* 04881 */ HB_P_LINEOFFSET, 144,	/* 156 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* NOME2 */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 04921 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* DATA_NAS3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 05016) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* DATA_NAS3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05029) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* DATA_NAS3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 05071) */
/* 05031 */ HB_P_LINEOFFSET, 147,	/* 159 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* NOME3 */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 05071 */ HB_P_LINEOFFSET, 149,	/* 161 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DATA_NAS4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 05166) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DATA_NAS4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05179) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DATA_NAS4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 05221) */
/* 05181 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* NOME4 */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 05221 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* DATA_NAS5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MDIA_INI */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 05316) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 42,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* DATA_NAS5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MDIA_FIM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05329) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* DATA_NAS5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 84,	/* 84 (abs: 05413) */
/* 05331 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* NOME5 */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 42,	/* 42 (abs: 05413) */
/* 05373 */ HB_P_LINEOFFSET, 156,	/* 168 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_ARRAYGEN, 7, 0,	/* 7 */
	HB_P_DOSHORT, 2,
/* 05413 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHLOCALNEAR, 19,	/* MFILA */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 2,	/* 725 (abs: 06144) */
/* 05422 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 187, 2,	/* 699 (abs: 06133) */
/* 05437 */ HB_P_LINEOFFSET, 160,	/* 172 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 05443 */ HB_P_LINEOFFSET, 161,	/* 173 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 152, 2,	/* 664 (abs: 06123) */
/* 05462 */ HB_P_LINEOFFSET, 162,	/* 174 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05476 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05504 */ HB_P_LINEOFFSET, 164,	/* 176 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 05558) */
/* 05515 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 05591) */
/* 05558 */ HB_P_LINEOFFSET, 167,	/* 179 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05591 */ HB_P_LINEOFFSET, 169,	/* 181 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 05635) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 05668) */
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05670 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05699 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 05740) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 05751) */
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05753 */ HB_P_LINEOFFSET, 172,	/* 184 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05829 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 05870) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 66,	/* 66 (abs: 05934) */
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05936 */ HB_P_LINEOFFSET, 174,	/* 186 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05974 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06015) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 22,	/* 22 (abs: 06035) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06037 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 06062 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
/* 06068 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06114) */
/* 06080 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 06086 */ HB_P_LINEOFFSET, 180,	/* 192 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 06092 */ HB_P_LINEOFFSET, 181,	/* 193 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 15,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 06114) */
/* 06101 */ HB_P_LINEOFFSET, 182,	/* 194 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCONTADOR 0*/
/* 06107 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06114 */ HB_P_LINEOFFSET, 186,	/* 198 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
	HB_P_JUMP, 97, 253,	/* -671 (abs: 05449) */
/* 06123 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 23,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 06133 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 143, 248,	/* -1905 (abs: 04236) */
/* 06144 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 06150 */ HB_P_LINEOFFSET, 192,	/* 204 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 99, 1,	/* 355 (abs: 06521) */
/* 06169 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06183 */ HB_P_LINEOFFSET, 194,	/* 206 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06211 */ HB_P_LINEOFFSET, 195,	/* 207 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 06265) */
/* 06222 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 06298) */
/* 06265 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06298 */ HB_P_LINEOFFSET, 200,	/* 212 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06327 */ HB_P_LINEOFFSET, 201,	/* 213 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06403 */ HB_P_LINEOFFSET, 202,	/* 214 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06441 */ HB_P_LINEOFFSET, 203,	/* 215 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 06466 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06512) */
/* 06478 */ HB_P_LINEOFFSET, 205,	/* 217 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 06484 */ HB_P_LINEOFFSET, 206,	/* 218 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 06490 */ HB_P_LINEOFFSET, 207,	/* 219 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 15,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 06512) */
/* 06499 */ HB_P_LINEOFFSET, 208,	/* 220 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCONTADOR 0*/
/* 06505 */ HB_P_LINEOFFSET, 209,	/* 221 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06512 */ HB_P_LINEOFFSET, 212,	/* 224 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
	HB_P_JUMP, 150, 254,	/* -362 (abs: 06156) */
/* 06521 */ HB_P_LINEOFFSET, 213,	/* 225 */
	HB_P_PUSHSYMNEAR, 23,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 06531 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHSYMNEAR, 51,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 1, 247,	/* -2303 (abs: 04236) */
/* 06542 */ HB_P_LINEOFFSET, 240,	/* 252 */
	HB_P_PUSHLOCALNEAR, 19,	/* MFILA */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 249, 2,	/* 761 (abs: 07309) */
/* 06551 */ HB_P_LINEOFFSET, 241,	/* 253 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 06557 */ HB_P_LINEOFFSET, 242,	/* 254 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_PUSHLOCALNEAR, 26,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 141, 4,	/* 1165 (abs: 07733) */
/* 06571 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06585 */ HB_P_LINEOFFSET, 244,	/* 256 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 06610 */ HB_P_LINEOFFSET, 245,	/* 257 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 06667) */
/* 06621 */ HB_P_LINEOFFSET, 246,	/* 258 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 06700) */
/* 06667 */ HB_P_LINEOFFSET, 248,	/* 260 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06700 */ HB_P_LINEOFFSET, 250,	/* 262 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06744) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 06777) */
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06779 */ HB_P_LINEOFFSET, 251,	/* 263 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 06859) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06862) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06865 */ HB_P_LINEOFFSET, 252,	/* 264 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06906) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 67,	/* 67 (abs: 06971) */
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 06967) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06970) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06973 */ HB_P_LINEOFFSET, 253,	/* 265 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07037 */ HB_P_LINEOFFSET, 254,	/* 266 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07078) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 07121) */
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07123 */ HB_P_LINEOFFSET, 255,	/* 267 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07157 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHLOCALNEAR, 17,	/* MESPACO */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07199) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 07212) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07214 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 07240 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
/* 07247 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'J', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 07299) */
/* 07260 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 07267 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MCONTADOR 1*/
/* 07274 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCONTADOR */
	HB_P_PUSHLOCALNEAR, 15,	/* MQTD_ETQ */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 07299) */
/* 07284 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MCONTADOR 0*/
/* 07291 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07299 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
	HB_P_JUMP, 25, 253,	/* -743 (abs: 06563) */
/* 07309 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* I 0*/
/* 07316 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* I */
	HB_P_PUSHLOCALNEAR, 26,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 104, 1,	/* 360 (abs: 07688) */
/* 07331 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07346 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 07372 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 07431) */
/* 07384 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COD_CLI */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 07465) */
/* 07431 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07465 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* ENDERECO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 07546) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 07549) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07552 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* CIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* UF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07617 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07652 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 07678 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* I 1*/
	HB_P_JUMP, 150, 254,	/* -362 (abs: 07323) */
/* 07688 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 1, 227,	/* -7423 (abs: 00307) */
/* 07733 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 74,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 57, 1,	/* 313 (abs: 08058) */
/* 07748 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07763 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07791 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 13,	/* MCOD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 07846) */
/* 07803 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '(', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 07880) */
/* 07846 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 77,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 07880 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07909 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07983 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08021 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 25,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 18,	/* MLINHAS */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 08047 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 23,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* M_ETQ */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 08058 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 75,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 08073 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 79,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08081 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 83,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 08123 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 84,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'T', 'Q', '_', 'C', 'L', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 98, 225,	/* -7838 (abs: 00307) */
/* 08148 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 85,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08156 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 08162 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

