/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacbanco.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacbanco.prg /q /oC:\hti\SISCOM\sacbanco.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:14:50 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacbanco.prg"

HB_FUNC( SACBANCO );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( TBROWSEDB );
HB_FUNC_EXTERN( TBCOLUMNNEW );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( DBGOBOTTOM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( GENKEY );
HB_FUNC_EXTERN( __MVRELEASE );
HB_FUNC_EXTERN( READKILL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACBANCO )
{ "SACBANCO", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACBANCO )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "TBROWSEDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBROWSEDB )}, NULL },
{ "TBCOLUMNNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBCOLUMNNEW )}, NULL },
{ "SACBAN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AGENCIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DV_AG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "C_C", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DV_CC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MODALIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "N_CONV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_CEDENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIASPROT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ADDCOLUMN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HEADSEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_COLSEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "FORCESTABLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "MCODIGO_BAN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOBOTTOM", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOBOTTOM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "DIG_AG_CC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTEIRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_TRANS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESPESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOCAL_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GENKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( GENKEY )}, NULL },
{ "__MVRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVRELEASE )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACBANCO )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACBANCO
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACBANCO = hb_vm_SymbolInit_SACBANCO;
   #pragma data_seg()
#endif

HB_FUNC( SACBANCO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 27, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'B', 'A', 'N', 'C', 'O', 0, 
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_LOCALNEARSETSTR, 20, 2, 0,	/* MMODALIDADE 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* MDIASPROT 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 24,	/* MLOCAL_PG */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MDESPESA 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* MCARTEIRA */
/* 00058 */ HB_P_LINEOFFSET, 3,	/* 16 */
	HB_P_PUSHSYMNEAR, 2,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'A', 'D', 'A', 'S', 'T', 'R', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'N', 'C', 'O', 'S', ' ', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 3, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00113) */
/* 00108 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00113 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* F7CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_POPLOCALNEAR, 3,	/* F7LCI */
/* 00123 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_LOCALNEARSETINT, 5, 20, 0,	/* F7LBA 20*/
/* 00129 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_LOCALNEARSETINT, 6, 88, 0,	/* F7CBA 88*/
/* 00135 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MEMP_RESA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'C', 'A', 'D', 'A', 'S', 'T', 'R', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'N', 'C', 'O', 'S', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00187 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_PUSHSYMNEAR, 6,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00219) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00219 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_PUSHSYMNEAR, 7,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 00235 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 00271 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00297 */ HB_P_LINEOFFSET, 16,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 00323 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 00351 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 00381 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 00406 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 00434 */ HB_P_LINEOFFSET, 21,	/* 34 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 00459 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 00492 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 00526 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 00560 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 00596 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 00602 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 00643) */
/* 00620 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00635 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 00608) */
/* 00643 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00657 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00671 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHSYMNEAR, 27,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00680 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'<', 'P', '>', 'e', 's', 'q', 'u', 'i', 's', 'a', ' ', '<', 'I', '>', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', 'p', '/', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', '<', 'E', 'S', 'C', '>', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00752 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* F7NKEY 0*/
/* 00758 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00768 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 30,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* F7NKEY */
/* 00778 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00799) */
/* 00787 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 31, 0,	/* MCODIGO_BAN */
	HB_P_POPLOCALNEAR, 12,	/* MCOD_BANCO */
	HB_P_JUMP, 176, 35,	/* 9136 (abs: 09932) */
/* 00799 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 00815) */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 46, 14,	/* 3630 (abs: 04445) */
/* 00818 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00852 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 32,	/* DBGOBOTTOM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00859 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'a', ' ', 'i', 'n', 'c', 'l', 'u', 'i', 'd', 'o', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00920 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 33,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 12,	/* MCOD_BANCO */
/* 00943 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MNOME_BANCO */
/* 00954 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MCARTEIRA */
	HB_P_POPLOCALNEAR, 14,	/* MNUM_BANCO */
/* 00968 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MC_C */
	HB_P_POPLOCALNEAR, 15,	/* MAGENCIA */
/* 00982 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 21,	/* MN_CONV */
/* 00993 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MCOD_CEDENTE */
/* 01004 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MCOD_TRANS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MMODALIDADE */
	HB_P_POPLOCALNEAR, 27,	/* MDIG_AG_CC */
/* 01021 */ HB_P_LINEOFFSET, 53,	/* 66 */
	HB_P_LOCALNEARSETSTR, 16, 2, 0,	/* MDV_AG 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 16,	/* MDV_AG */
	HB_P_POPLOCALNEAR, 18,	/* MDV_CC */
/* 01033 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MDESPESA 0*/
	HB_P_PUSHLOCALNEAR, 25,	/* MDESPESA */
	HB_P_POPLOCALNEAR, 23,	/* MDIASPROT */
/* 01043 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_LOCALNEARSETSTR, 24, 88, 0,	/* MLOCAL_PG 88*/
	'A', 't', 233, ' ', 'o', ' ', 'v', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ',', ' ', 'p', 'a', 'g', 225, 'v', 'e', 'l', ' ', 'e', 'm', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 'b', 'a', 'n', 'c', 'o', '.', ' ', 'A', 'p', 243, 's', ' ', 'o', ' ', 'v', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ',', ' ', 'e', 'm', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', 'd', 'o', ' ', 0, 
/* 01137 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01175 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01213 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'o', 'm', 'e', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01252 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01291 */ HB_P_LINEOFFSET, 60,	/* 73 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'V', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01313 */ HB_P_LINEOFFSET, 61,	/* 74 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01352 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'V', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01374 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'g', 'i', 't', 'o', ' ', 'A', 'g', '/', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01413 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01452 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01491 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'e', 'd', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01530 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'C', 'a', 'r', 't', 'e', 'i', 'r', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01569 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'T', 'r', 'a', 'n', 's', 'm', 'i', 's', 's', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01608 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'a', 's', ' ', 'p', '/', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01647 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01686 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01725 */ HB_P_LINEOFFSET, 74,	/* 87 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCOD_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01763) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01768) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MCOD_BANCO */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01809) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01810) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01828 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 43,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 39, 0,	/* GETLIST */
/* 01850 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 44,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01872) */
/* 01862 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 124, 31,	/* 8060 (abs: 09929) */
/* 01872 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 19,	/* Q_BAN */
/* 01879 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 19, 0,	/* Q_BAN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01949 */ HB_P_LINEOFFSET, 82,	/* 95 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01973 */ HB_P_LINEOFFSET, 83,	/* 96 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* Q_BAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 02035) */
/* 01986 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHSYMNEAR, 49,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'E', 's', 't', 'e', ' ', 'F', 'o', 'r', 'm', 'a', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 100, 251,	/* -1180 (abs: 00852) */
/* 02035 */ HB_P_LINEOFFSET, 87,	/* 100 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'N', 'o', 'm', 'e', '/', 'A', 'g', 'e', 'n', 'c', 'i', 'a', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02093 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02131) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02136) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNUM_BANCO */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02176) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02177) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02195 */ HB_P_LINEOFFSET, 89,	/* 102 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MNOME_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02234) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02239) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'n', 'o', 'm', 'e', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MNOME_BANCO */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02280) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02281) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02299 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MAGENCIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02338) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02343) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'a', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MAGENCIA */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02381) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02382) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02400 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDV_AG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02439) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02444) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'v', '_', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02477 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MC_C */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02516) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02521) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MC_C */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02555) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02556) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02574 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDV_CC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02613) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02618) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'v', '_', 'c', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02651 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MDIG_AG_CC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02690) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02695) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'i', 'g', '_', 'a', 'g', '_', 'c', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02732 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MMODALIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02771) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02776) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02814 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MN_CONV */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02853) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02858) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'n', '_', 'c', 'o', 'n', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02892 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MCOD_CEDENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02931) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02936) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'c', 'o', 'd', '_', 'c', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02975 */ HB_P_LINEOFFSET, 98,	/* 111 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTEIRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03014) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03019) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03055 */ HB_P_LINEOFFSET, 99,	/* 112 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MCOD_TRANS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03094) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03099) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 't', 'r', 'a', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03136 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MDIASPROT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03175) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03180) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'i', 'a', 's', 'p', 'r', 'o', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03217 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MDESPESA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03256) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03261) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'p', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03303 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MLOCAL_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03342) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03347) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'l', 'o', 'c', 'a', 'l', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03385 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHSYMNEAR, 43,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 39, 0,	/* GETLIST */
/* 03407 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_PUSHSYMNEAR, 44,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03422) */
	HB_P_JUMP, 249, 245,	/* -2567 (abs: 00852) */
/* 03422 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHSYMNEAR, 50,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03474) */
	HB_P_JUMP, 197, 245,	/* -2619 (abs: 00852) */
/* 03474 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 184,	/* 184 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', '(', 'c', 'o', 'd', '_', 'b', 'a', 'n', 'c', 'o', ',', ' ', 'n', 'o', 'm', 'e', '_', 'b', 'a', 'n', 'c', 'o', ',', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', ',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ',', 'c', '_', 'c', ',', 'c', 'o', 'd', '_', 't', 'r', 'a', 'n', 's', ',', 'd', 'v', '_', 'c', 'c', ',', 'd', 'v', '_', 'a', 'g', ',', 'c', 'o', 'd', '_', 'c', 'e', 'd', 'e', 'n', 't', 'e', ',', 'd', 'i', 'a', 's', 'p', 'r', 'o', 't', ',', 'l', 'o', 'c', 'a', 'l', '_', 'p', 'g', ',', 'd', 'e', 's', 'p', 'e', 's', 'a', ',', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', ',', 'n', '_', 'c', 'o', 'n', 'v', ',', 'd', 'i', 'g', '_', 'a', 'g', '_', 'c', 'c', ',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MNOME_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MNUM_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MAGENCIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MC_C */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MCOD_TRANS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDV_CC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDV_AG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MCOD_CEDENTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIASPROT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLOCAL_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDESPESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCARTEIRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MN_CONV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MDIG_AG_CC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MMODALIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
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
/* 03898 */ HB_P_LINEOFFSET, 146,	/* 159 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03922 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03929 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 51,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 03941 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHSYMNEAR, 6,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03973) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03973 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 7,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 03989 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03996 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 04032 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 04058 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 04084 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 04112 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 04142 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 04167 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 04195 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 04220 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 04253 */ HB_P_LINEOFFSET, 163,	/* 176 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 04287 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 04321 */ HB_P_LINEOFFSET, 165,	/* 178 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 04357 */ HB_P_LINEOFFSET, 166,	/* 179 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 04363 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 04404) */
/* 04381 */ HB_P_LINEOFFSET, 168,	/* 181 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04396 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 04369) */
/* 04404 */ HB_P_LINEOFFSET, 170,	/* 183 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04418 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04432 */ HB_P_LINEOFFSET, 172,	/* 185 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 111, 21,	/* 5487 (abs: 09929) */
/* 04445 */ HB_P_LINEOFFSET, 175,	/* 188 */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 121, 19,	/* 4985 (abs: 09437) */
/* 04455 */ HB_P_LINEOFFSET, 176,	/* 189 */
	HB_P_PUSHSYMNEAR, 34,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 31, 0,	/* MCODIGO_BAN */
	HB_P_POPLOCALNEAR, 12,	/* MCOD_BANCO */
/* 04472 */ HB_P_LINEOFFSET, 177,	/* 190 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCONSULTA */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04483) */
	HB_P_JUMP, 76, 21,	/* 5452 (abs: 09932) */
/* 04483 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSYMNEAR, 53,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', '<', 'A', '>', 'l', 't', 'e', 'r', 'a', 'r', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'r', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'E', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* F7OPCAO */
/* 04532 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_PUSHSYMNEAR, 44,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04547) */
	HB_P_JUMP, 12, 21,	/* 5388 (abs: 09932) */
/* 04547 */ HB_P_LINEOFFSET, 183,	/* 196 */
	HB_P_PUSHLOCALNEAR, 7,	/* F7OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 12,	/* 3308 (abs: 07864) */
/* 04559 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 04594 */ HB_P_LINEOFFSET, 186,	/* 199 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 24,	/* MLOCAL_PG */
/* 04605 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04643 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04681 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'o', 'm', 'e', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04720 */ HB_P_LINEOFFSET, 190,	/* 203 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04759 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'V', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04781 */ HB_P_LINEOFFSET, 192,	/* 205 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04820 */ HB_P_LINEOFFSET, 193,	/* 206 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'D', 'V', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04842 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'g', 'i', 't', 'o', ' ', 'A', 'g', '/', 'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04881 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04920 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04959 */ HB_P_LINEOFFSET, 197,	/* 210 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'e', 'd', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04998 */ HB_P_LINEOFFSET, 198,	/* 211 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'C', 'a', 'r', 't', 'e', 'i', 'r', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05037 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'T', 'r', 'a', 'n', 's', 'm', 'i', 's', 's', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05076 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'a', 's', ' ', 'p', '/', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05115 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', 'R', '$', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05154 */ HB_P_LINEOFFSET, 202,	/* 215 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'L', 'o', 'c', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05193 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'l', 't', 'e', 'r', 'e', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 05246 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05255 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_DOSHORT, 1,
/* 05274 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05282 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_POPLOCALNEAR, 13,	/* MNOME_BANCO */
/* 05290 */ HB_P_LINEOFFSET, 208,	/* 221 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_POPLOCALNEAR, 14,	/* MNUM_BANCO */
/* 05298 */ HB_P_LINEOFFSET, 209,	/* 222 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_POPLOCALNEAR, 15,	/* MAGENCIA */
/* 05306 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_POPLOCALNEAR, 17,	/* MC_C */
/* 05314 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_POPLOCALNEAR, 18,	/* MDV_CC */
/* 05322 */ HB_P_LINEOFFSET, 212,	/* 225 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_POPLOCALNEAR, 16,	/* MDV_AG */
/* 05330 */ HB_P_LINEOFFSET, 213,	/* 226 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 54,	/* DIG_AG_CC */
	HB_P_POPLOCALNEAR, 27,	/* MDIG_AG_CC */
/* 05338 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_POPLOCALNEAR, 20,	/* MMODALIDADE */
/* 05346 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_POPLOCALNEAR, 21,	/* MN_CONV */
/* 05354 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_POPLOCALNEAR, 22,	/* MCOD_CEDENTE */
/* 05362 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* CARTEIRA */
	HB_P_POPLOCALNEAR, 26,	/* MCARTEIRA */
/* 05370 */ HB_P_LINEOFFSET, 218,	/* 231 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_POPLOCALNEAR, 23,	/* MDIASPROT */
/* 05378 */ HB_P_LINEOFFSET, 219,	/* 232 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 56,	/* COD_TRANS */
	HB_P_POPLOCALNEAR, 28,	/* MCOD_TRANS */
/* 05386 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* DESPESA */
	HB_P_POPLOCALNEAR, 25,	/* MDESPESA */
/* 05394 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* LOCAL_PG */
	HB_P_POPLOCALNEAR, 24,	/* MLOCAL_PG */
/* 05402 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'M', 'o', 'd', 'i', 'f', 'i', 'q', 'u', 'e', ' ', 'o', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', '(', '2', '0', ' ', 'C', 'a', 'r', 'a', 'c', 't', '.', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ')', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05475 */ HB_P_LINEOFFSET, 223,	/* 236 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05513) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05518) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNUM_BANCO */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05558) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05559) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05577 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MNOME_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05616) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05621) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'n', 'o', 'm', 'e', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MNOME_BANCO */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05662) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05663) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05681 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MAGENCIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05720) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05725) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'a', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MAGENCIA */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05763) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05764) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05782 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDV_AG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05821) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05826) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'v', '_', 'a', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05859 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MC_C */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05898) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05903) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MC_C */
	HB_P_PUSHSYMNEAR, 41,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05937) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05938) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05956 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDV_CC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05995) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06000) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'v', '_', 'c', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06033 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MDIG_AG_CC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06072) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06077) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'i', 'g', '_', 'a', 'g', '_', 'c', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06114 */ HB_P_LINEOFFSET, 230,	/* 243 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MMODALIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06153) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06158) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06196 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MN_CONV */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06235) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06240) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'n', '_', 'c', 'o', 'n', 'v', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06274 */ HB_P_LINEOFFSET, 232,	/* 245 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MCOD_CEDENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06313) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06318) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'c', 'o', 'd', '_', 'c', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06357 */ HB_P_LINEOFFSET, 233,	/* 246 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MCARTEIRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06396) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06401) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06437 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MCOD_TRANS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06476) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06481) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 't', 'r', 'a', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06518 */ HB_P_LINEOFFSET, 235,	/* 248 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MDIASPROT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06557) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06562) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'i', 'a', 's', 'p', 'r', 'o', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06599 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MDESPESA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06638) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06643) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'p', 'e', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06685 */ HB_P_LINEOFFSET, 237,	/* 250 */
	HB_P_PUSHSYMNEAR, 37,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 38,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 40,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MLOCAL_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06724) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06729) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'l', 'o', 'c', 'a', 'l', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'S', '4', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06767 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_PUSHSYMNEAR, 43,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 39, 0,	/* GETLIST */
/* 06789 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_PUSHSYMNEAR, 44,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 06818) */
/* 06801 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06808 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 81, 8,	/* 2129 (abs: 08944) */
/* 06818 */ HB_P_LINEOFFSET, 244,	/* 257 */
	HB_P_PUSHSYMNEAR, 50,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06870) */
	HB_P_JUMP, 31, 247,	/* -2273 (abs: 04594) */
/* 06870 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', ' ', 'S', 'E', 'T', ' ', 'n', 'o', 'm', 'e', '_', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MNOME_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MNUM_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MAGENCIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	',', 'c', '_', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MC_C */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	',', 'd', 'v', '_', 'c', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDV_CC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	',', 'd', 'v', '_', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDV_AG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'i', 'g', '_', 'a', 'g', '_', 'c', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MDIG_AG_CC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'm', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MMODALIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'n', '_', 'c', 'o', 'n', 'v', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MN_CONV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'o', 'd', '_', 'c', 'e', 'd', 'e', 'n', 't', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MCOD_CEDENTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MCARTEIRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'o', 'd', '_', 't', 'r', 'a', 'n', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MCOD_TRANS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'i', 'a', 's', 'p', 'r', 'o', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MDIASPROT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'd', 'e', 's', 'p', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MDESPESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'l', 'o', 'c', 'a', 'l', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MLOCAL_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07292 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07317 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07325 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 51,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 07338 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 6,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 07371) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 07371 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 7,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 07388 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07396 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 07433 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 07460 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 07487 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 07516 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 07547 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 07573 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 07602 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 07628 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 07662 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 07697 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 07732 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 07769 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 07776 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 07820) */
/* 07795 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 07811 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 221,	/* -35 (abs: 07783) */
/* 07820 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 07835 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 07850 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 59, 4,	/* 1083 (abs: 08944) */
/* 07864 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 7,	/* F7OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 4,	/* 1070 (abs: 08944) */
/* 07877 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 4,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 07912 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07944 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07976 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'N', 'o', 'm', 'e', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08009 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08042 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'o', 'n', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08075 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08108 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'A', 'l', 't', 'e', 'r', 'e', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 08162 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 08172 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_DOSHORT, 1,
/* 08192 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_DOSHORT, 1,
/* 08212 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_DOSHORT, 1,
/* 08233 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_DOSHORT, 1,
/* 08254 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 35,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 36,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_DOSHORT, 1,
/* 08275 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08284 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 50,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'i', 'g', 'i', 't', 'a', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08353) */
/* 08334 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08342 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 82, 2,	/* 594 (abs: 08944) */
/* 08353 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'b', 'a', 'n', 'c', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 48,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08421 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_MESSAGE, 46, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 47,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08446 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08454 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 7,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 08471 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08479 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 08516 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 08543 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 08570 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 08599 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 08630 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 08656 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 08685 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 08711 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 08745 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 08780 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 08815 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 08852 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 08859 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 08903) */
/* 08878 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 08894 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 221,	/* -35 (abs: 08866) */
/* 08903 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 08918 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 08933 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08944 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 7,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 08961 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 52,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08969 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 09006 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 09033 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 09060 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 09089 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 09120 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 09146 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 09175 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 09201 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 09235 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 09270 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 09305 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 09342 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 09349 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 09393) */
/* 09368 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09384 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 221,	/* -35 (abs: 09356) */
/* 09393 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09408 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09423 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 197, 221,	/* -8763 (abs: 00671) */
/* 09437 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 59,	/* GENKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSE, 173, 221,	/* -8787 (abs: 00671) */
/* 09461 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* F7LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* F7CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* F7LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* F7CBA */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'b', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 8,	/* OCONSPROD */
/* 09498 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* COD_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 09525 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* NUM_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 09552 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* NOME_BANCO */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 09581 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* AGENCIA */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 09612 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* DV_AG */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 09638 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'n', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* C_C */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 09667 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'V', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* DV_CC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 09693 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* MODALIDADE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 09727 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'N', 'o', '.', 'C', 'o', 'n', 'v', 'e', 'n', 'i', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* N_CONV */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 09762 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'e', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 21,	/* COD_CEDENTE */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 09797 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 10,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'i', 'a', 's', ' ', 'P', 'r', 'o', 't', 'e', 's', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 11,	/* SACBAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DIASPROT */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 9, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 09834 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* F7I 0*/
/* 09841 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* F7I 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 09885) */
/* 09860 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_MESSAGE, 24, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 9,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 10,	/* F7I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09876 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* F7I 1*/
	HB_P_JUMPNEAR, 221,	/* -35 (abs: 09848) */
/* 09885 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_MESSAGE, 25, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09900 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_MESSAGE, 26, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 09915 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_MESSAGE, 29, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 8,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 217, 219,	/* -9255 (abs: 00671) */
	HB_P_JUMP, 214, 219,	/* -9258 (abs: 00671) */
/* 09932 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 45,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09940 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHLOCALNEAR, 11,	/* F7NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 09970) */
/* 09950 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 60,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 09963 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BANCO */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 09970 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 60,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 09983 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 61,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 39, 0,	/* GETLIST */
/* 09998 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHLOCALNEAR, 12,	/* MCOD_BANCO */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10005 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

