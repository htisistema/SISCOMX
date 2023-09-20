/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACASS1.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SACASS1.PRG /q /oC:\helio\siachb\SACASS1.c /M /N /B 
 * Created: 2018.04.09 19:27:16 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACASS1.PRG"

HB_FUNC( SACASS1 );
HB_FUNC( IMP_ASS );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SACASS10 );
HB_FUNC_EXTERN( SACASS11 );
HB_FUNC_EXTERN( SACASS12 );
HB_FUNC_EXTERN( SACASS2 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACASS1 )
{ "SACASS1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACASS1 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SACASS10", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS10 )}, NULL },
{ "SACASS11", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS11 )}, NULL },
{ "SACASS12", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS12 )}, NULL },
{ "SACASS2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACASS2 )}, NULL },
{ "IMP_ASS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_ASS )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "CGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "INSC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPRADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPLEMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEL1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACASS1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACASS1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACASS1 = hb_vm_SymbolInit_SACASS1;
   #pragma data_seg()
#endif

HB_FUNC( SACASS1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
	HB_P_MODULENAME,	/* SACASS1.PRG:SACASS1 */
 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'A', 'S', 'S', '1', 0,
	HB_P_LOCALNAME, 1, 0,	/* MTP */
 'M', 'T', 'P', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SACASS1.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', ':', 0,
/* 00061 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNAME, 2, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'A', 'S', 'S', '1', 0, 
	HB_P_LOCALNAME, 3, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 4, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 5, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 6, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 7, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
/* 00121 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* LCI 0*/
/* 00127 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
/* 00133 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LBA 5*/
/* 00139 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 25, 0,	/* CBA 25*/
/* 00145 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'M', 'E', 'N', 'U', ' ', 'D', 'E', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00192) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'S', 'S', 'I', 'S', 'T', 'E', 'N', 'C', 'I', 'A', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00206) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'C', 'A', 'O', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00214 */ HB_P_LINEOFFSET, 7,	/* 14 */
/* 00216 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00225 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
	HB_P_PUSHSYMNEAR, 4,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00247 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00255 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00302) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00316) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00363) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00377) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00419 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00470) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00484) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'*', '*', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00531) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00545) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00587 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00637) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00651) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'*', '*', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00698) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00712) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00754 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00801) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00815) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'*', '*', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00862) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00876) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00918 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00967) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00981) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'*', '*', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01037) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 01051) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01093 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 6,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01144) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 01158) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'*', '*', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01206) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 's', 's', 'i', 's', 't', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 01220) */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01262 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01276 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 83, 0,	/* 83 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* OPCAO */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACASS1.PRG:SACASS1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'A', 'S', 'S', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 01342 */ HB_P_LINE, 26, 0,	/* 26 */
	HB_P_PUSHSYMNEAR, 9,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01358) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01363) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01376 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 10,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01400) */
/* 01388 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01395 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01400 */ HB_P_LINEOFFSET, 26,	/* 33 */
/* 01402 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01422) */
/* 01410 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 12,	/* SACASS10 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 75, 251,	/* -1205 (abs: 00214) */
/* 01422 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01447) */
/* 01431 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 13,	/* SACASS11 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 50, 251,	/* -1230 (abs: 00214) */
/* 01447 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01472) */
/* 01456 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 13,	/* SACASS11 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 25, 251,	/* -1255 (abs: 00214) */
/* 01472 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01497) */
/* 01481 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 13,	/* SACASS11 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 0, 251,	/* -1280 (abs: 00214) */
/* 01497 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01518) */
/* 01506 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 14,	/* SACASS12 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 235, 250,	/* -1301 (abs: 00214) */
/* 01518 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 250,	/* -1311 (abs: 00214) */
/* 01528 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 15,	/* SACASS2 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 213, 250,	/* -1323 (abs: 00214) */
	HB_P_ENDPROC
/* 01541 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_ASS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 10,	/* locals, params */
	HB_P_MODULENAME,	/* SACASS1.PRG:IMP_ASS */
 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', ':', 'I', 'M', 'P', '_', 'A', 'S', 'S', 0,
	HB_P_LOCALNAME, 1, 0,	/* MCODMERC */
 'M', 'C', 'O', 'D', 'M', 'E', 'R', 'C', 0,
	HB_P_LOCALNAME, 2, 0,	/* MDESCR */
 'M', 'D', 'E', 'S', 'C', 'R', 0,
	HB_P_LOCALNAME, 3, 0,	/* MMOT */
 'M', 'M', 'O', 'T', 0,
	HB_P_LOCALNAME, 4, 0,	/* MQTD */
 'M', 'Q', 'T', 'D', 0,
	HB_P_LOCALNAME, 5, 0,	/* MCODVEN */
 'M', 'C', 'O', 'D', 'V', 'E', 'N', 0,
	HB_P_LOCALNAME, 6, 0,	/* MQTD_COP */
 'M', 'Q', 'T', 'D', '_', 'C', 'O', 'P', 0,
	HB_P_LOCALNAME, 7, 0,	/* MDAT */
 'M', 'D', 'A', 'T', 0,
	HB_P_LOCALNAME, 8, 0,	/* MHOR */
 'M', 'H', 'O', 'R', 0,
	HB_P_LOCALNAME, 9, 0,	/* MMOT1 */
 'M', 'M', 'O', 'T', '1', 0,
	HB_P_LOCALNAME, 10, 0,	/* MMOT2 */
 'M', 'M', 'O', 'T', '2', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SACASS1.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', ':', 0,
/* 00149 */ HB_P_BASELINE, 62, 0,	/* 62 */
	HB_P_LOCALNAME, 11, 0,	/* MTRACO */
 'M', 'T', 'R', 'A', 'C', 'O', 0,
/* 00162 */ HB_P_LINEOFFSET, 1,	/* 63 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 20,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 18,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 19,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 19, 0,	/* MARQ */
	HB_P_POPVARIABLE, 18, 0,	/* MIMP_TIPO */
/* 00189 */ HB_P_LINEOFFSET, 2,	/* 64 */
	HB_P_PUSHSYMNEAR, 22,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	223, 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* MTRACO */
/* 00204 */ HB_P_LINEOFFSET, 4,	/* 66 */
	HB_P_PUSHMEMVAR, 23, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 17, 0,	/* MTIPO_IMP */
/* 00217 */ HB_P_LINEOFFSET, 6,	/* 68 */
	HB_P_PUSHSYMNEAR, 24,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'S', 'S', 'I', 'S', 'T', 'E', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00250) */
/* 00245 */ HB_P_LINEOFFSET, 7,	/* 69 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00250 */ HB_P_LINEOFFSET, 10,	/* 72 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 25, 0,	/* I */
	HB_P_PUSHVARIABLE, 25, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 6,	/* MQTD_COP */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 236, 6,	/* 1772 (abs: 02034) */
/* 00265 */ HB_P_LINEOFFSET, 11,	/* 73 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00279 */ HB_P_LINEOFFSET, 12,	/* 74 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 00293 */ HB_P_LINEOFFSET, 13,	/* 75 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MEMP_RESA */
	HB_P_DOSHORT, 1,
/* 00314 */ HB_P_LINEOFFSET, 14,	/* 76 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00328 */ HB_P_LINEOFFSET, 15,	/* 77 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 133, 0,	/* 133 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 32, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00445 */ HB_P_LINEOFFSET, 16,	/* 78 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00459 */ HB_P_LINEOFFSET, 17,	/* 79 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00483 */ HB_P_LINEOFFSET, 18,	/* 80 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 00498 */ HB_P_LINEOFFSET, 19,	/* 81 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'A', 'S', 'S', 'I', 'S', 'T', 'E', 'N', 'C', 'I', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00544 */ HB_P_LINEOFFSET, 20,	/* 82 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00558 */ HB_P_LINEOFFSET, 21,	/* 83 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00591 */ HB_P_LINEOFFSET, 22,	/* 84 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDAT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00619 */ HB_P_LINEOFFSET, 23,	/* 85 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'H', 'o', 'r', 'a', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00653 */ HB_P_LINEOFFSET, 24,	/* 86 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MHOR */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00681 */ HB_P_LINEOFFSET, 25,	/* 87 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'O', 'p', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00714 */ HB_P_LINEOFFSET, 26,	/* 88 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* COD_OPERADO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00740 */ HB_P_LINEOFFSET, 27,	/* 89 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'V', 'e', 'n', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00773 */ HB_P_LINEOFFSET, 28,	/* 90 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCODVEN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00798 */ HB_P_LINEOFFSET, 29,	/* 91 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00812 */ HB_P_LINEOFFSET, 30,	/* 92 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00836 */ HB_P_LINEOFFSET, 31,	/* 93 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* COD_CLI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* RAZAO */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00893 */ HB_P_LINEOFFSET, 32,	/* 94 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* NOME */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00938 */ HB_P_LINEOFFSET, 33,	/* 95 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 40,	/* CGC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 145, 0,	/* 145 (abs: 01094) */
/* 00952 */ HB_P_LINEOFFSET, 34,	/* 96 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'N', 'P', 'J', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00991 */ HB_P_LINEOFFSET, 35,	/* 97 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 40,	/* CGC */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'@', '@', 'R', ' ', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '/', '9', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01045 */ HB_P_LINEOFFSET, 36,	/* 98 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'I', 'n', 's', 'c', 'r', 'i', 'c', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* INSC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 104,	/* 104 (abs: 01196) */
/* 01094 */ HB_P_LINEOFFSET, 37,	/* 99 */
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* CPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 91,	/* 91 (abs: 01196) */
/* 01107 */ HB_P_LINEOFFSET, 38,	/* 100 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'C', 'P', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01146 */ HB_P_LINEOFFSET, 39,	/* 101 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* CPF */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'@', '@', 'R', ' ', '9', '9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01196 */ HB_P_LINEOFFSET, 41,	/* 103 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* COMPRADO */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01241 */ HB_P_LINEOFFSET, 42,	/* 104 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* ENDERECO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 39,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 01340) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 47,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 01343) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01347 */ HB_P_LINEOFFSET, 43,	/* 105 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* BAIRRO */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01392 */ HB_P_LINEOFFSET, 44,	/* 106 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* CIDADE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', '-', ' ', 'U', 'F', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* UF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'C', 'E', 'P', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* CEP */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01471 */ HB_P_LINEOFFSET, 45,	/* 107 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* TEL1 */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01516 */ HB_P_LINEOFFSET, 46,	/* 108 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'R', 'o', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* ROTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01566 */ HB_P_LINEOFFSET, 47,	/* 109 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* ROTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01613 */ HB_P_LINEOFFSET, 48,	/* 110 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01637 */ HB_P_LINEOFFSET, 50,	/* 112 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01668 */ HB_P_LINEOFFSET, 51,	/* 113 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01700 */ HB_P_LINEOFFSET, 52,	/* 114 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01727 */ HB_P_LINEOFFSET, 53,	/* 115 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01764 */ HB_P_LINEOFFSET, 54,	/* 116 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01788 */ HB_P_LINEOFFSET, 55,	/* 117 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MCODMERC */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* MDESCR */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01822 */ HB_P_LINEOFFSET, 56,	/* 118 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 33,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MQTD */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 3,
/* 01860 */ HB_P_LINEOFFSET, 57,	/* 119 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'M', 'O', 'T', 'I', 'V', 'O', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* MMOT */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01896 */ HB_P_LINEOFFSET, 58,	/* 120 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MMOT1 */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01932 */ HB_P_LINEOFFSET, 59,	/* 121 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 10,	/* MMOT2 */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01968 */ HB_P_LINEOFFSET, 60,	/* 122 */
	HB_P_PUSHSYMNEAR, 27,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTRACO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01992 */ HB_P_LINEOFFSET, 61,	/* 123 */
	HB_P_PUSHSYMNEAR, 54,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02001 */ HB_P_LINEOFFSET, 62,	/* 124 */
	HB_P_PUSHSYMNEAR, 55,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02008 */ HB_P_LINEOFFSET, 63,	/* 125 */
	HB_P_PUSHSYMNEAR, 26,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 02022 */ HB_P_LINEOFFSET, 64,	/* 126 */
	HB_P_PUSHVARIABLE, 25, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 25, 0,	/* I */
	HB_P_JUMP, 17, 249,	/* -1775 (abs: 00256) */
/* 02034 */ HB_P_LINEOFFSET, 65,	/* 127 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 56, 0,	/* F */
/* 02040 */ HB_P_LINEOFFSET, 66,	/* 128 */
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 02081 */ HB_P_LINEOFFSET, 67,	/* 129 */
	HB_P_PUSHSYMNEAR, 57,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'A', 'S', 'S', 'I', 'S', 'T', 'E', 'N', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 02103 */ HB_P_LINEOFFSET, 68,	/* 130 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02108 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SACASS1 */
 'S', 'A', 'C', 'A', 'S', 'S', '1', 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', 'A', 'S', 'S', '1', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	144, 254, 255, 'v', 182, 'm', 'K', 192, '5', 255, 255, 255, 191, 127, 255, 255, 7, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00068 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

