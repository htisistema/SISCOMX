/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC621.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SAC621.PRG /q /oC:\helio\siachb\SAC621.c /M /N /B 
 * Created: 2018.04.09 19:27:12 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC621.PRG"

HB_FUNC( SAC621 );
HB_FUNC( CONS_VISI );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( SAC6211 );
HB_FUNC_EXTERN( SAC6212 );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( TBROWSEDB );
HB_FUNC_EXTERN( TBCOLUMNNEW );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( GENKEY );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC621 )
{ "SAC621", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC621 )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "SAC6211", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC6211 )}, NULL },
{ "SAC6212", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC6212 )}, NULL },
{ "CONS_VISI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONS_VISI )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "TBROWSEDB", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBROWSEDB )}, NULL },
{ "TBCOLUMNNEW", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBCOLUMNNEW )}, NULL },
{ "CTVIS", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA_VISI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_TEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HORA_INI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HORA_FIM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_PROC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ADDCOLUMN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_HEADSEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "_COLSEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "FORCESTABLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "GENKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( GENKEY )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC621 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC621
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC621 = hb_vm_SymbolInit_SAC621;
   #pragma data_seg()
#endif

HB_FUNC( SAC621 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
	HB_P_MODULENAME,	/* SAC621.PRG:SAC621 */
 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '6', '2', '1', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 0,
/* 00051 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '6', '2', '1', 0, 
/* 00073 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_LOCALNAME, 2, 0,	/* MOPCAO */
 'M', 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 3, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 4, 0,	/* MOPCAO1 */
 'M', 'O', 'P', 'C', 'A', 'O', '1', 0,
	HB_P_LOCALNAME, 5, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 6, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 7, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 8, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 9, 0,	/* TELA */
 'T', 'E', 'L', 'A', 0,
	HB_P_LOCALNAME, 10, 0,	/* TELA1 */
 'T', 'E', 'L', 'A', '1', 0,
/* 00150 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 8, 0,	/* LCI 8*/
/* 00156 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 5, 0,	/* CCI 5*/
/* 00162 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 7, 12, 0,	/* LBA 12*/
/* 00168 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 8, 35, 0,	/* CBA 35*/
/* 00174 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 9,	/* TELA */
/* 00189 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* OPCAO 0*/
/* 00195 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 3, 0,	/* MTRACO */
/* 00211 */ HB_P_LINEOFFSET, 11,	/* 18 */
/* 00213 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00222 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
	HB_P_PUSHSYMNEAR, 6,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00244 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 7,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'M', 'e', 'n', 'u', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00288 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '0', ' ', '-', '>', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'a', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00395 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '1', ' ', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 's', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'*', '*', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 's', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00492 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', '2', ' ', '-', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'*', '*', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00587 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 9,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00601 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 10,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 81, 0,	/* 81 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OPCAO */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:SAC621 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '6', '2', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 00665 */ HB_P_LINE, 26, 0,	/* 26 */
	HB_P_PUSHSYMNEAR, 11,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00681) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00686) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 00699 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 00753) */
/* 00711 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 13,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 9,	/* TELA */
	HB_P_DOSHORT, 5,
/* 00726 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 14,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00748 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00753 */ HB_P_LINEOFFSET, 27,	/* 34 */
/* 00755 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00773) */
/* 00763 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC6211 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 209, 253,	/* -559 (abs: 00211) */
/* 00773 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00792) */
/* 00782 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC6212 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 190, 253,	/* -578 (abs: 00211) */
/* 00792 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 180, 253,	/* -588 (abs: 00211) */
/* 00802 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 19,	/* CONS_VISI */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 170, 253,	/* -598 (abs: 00211) */
	HB_P_ENDPROC
/* 00813 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CONS_VISI )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
	HB_P_MODULENAME,	/* SAC621.PRG:CONS_VISI */
 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 0,
/* 00054 */ HB_P_BASELINE, 56, 0,	/* 56 */
	HB_P_LOCALNAME, 1, 0,	/* TELA */
 'T', 'E', 'L', 'A', 0,
	HB_P_LOCALNAME, 2, 0,	/* TELA1 */
 'T', 'E', 'L', 'A', '1', 0,
	HB_P_LOCALNAME, 3, 0,	/* LCI */
 'L', 'C', 'I', 0,
	HB_P_LOCALNAME, 4, 0,	/* CCI */
 'C', 'C', 'I', 0,
	HB_P_LOCALNAME, 5, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNAME, 6, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNAME, 7, 0,	/* MSELE */
 'M', 'S', 'E', 'L', 'E', 0,
	HB_P_LOCALNAME, 8, 0,	/* MORDE */
 'M', 'O', 'R', 'D', 'E', 0,
	HB_P_LOCALNAME, 9, 0,	/* MEN */
 'M', 'E', 'N', 0,
/* 00127 */ HB_P_LINEOFFSET, 2,	/* 58 */
	HB_P_LOCALNAME, 10, 0,	/* OCONSPROD */
 'O', 'C', 'O', 'N', 'S', 'P', 'R', 'O', 'D', 0,
	HB_P_LOCALNAME, 11, 0,	/* OCOLPROD */
 'O', 'C', 'O', 'L', 'P', 'R', 'O', 'D', 0,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYDIM, 1, 0,	/* 1 */
	HB_P_POPLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_LOCALNAME, 12, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 13, 0,	/* NKEY */
 'N', 'K', 'E', 'Y', 0,
	HB_P_LOCALNAME, 14, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
/* 00183 */ HB_P_LINEOFFSET, 4,	/* 60 */
	HB_P_LOCALNEARSETINT, 3, 2, 0,	/* LCI 2*/
/* 00189 */ HB_P_LINEOFFSET, 5,	/* 61 */
	HB_P_LOCALNEARSETINT, 4, 1, 0,	/* CCI 1*/
/* 00195 */ HB_P_LINEOFFSET, 6,	/* 62 */
	HB_P_LOCALNEARSETINT, 5, 22, 0,	/* LBA 22*/
/* 00201 */ HB_P_LINEOFFSET, 7,	/* 63 */
	HB_P_LOCALNEARSETINT, 6, 78, 0,	/* CBA 78*/
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 65 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 1,	/* TELA */
/* 00222 */ HB_P_LINEOFFSET, 11,	/* 67 */
	HB_P_PUSHSYMNEAR, 20,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 7,	/* MSELE */
/* 00231 */ HB_P_LINEOFFSET, 12,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* MORDE */
/* 00240 */ HB_P_LINEOFFSET, 13,	/* 69 */
	HB_P_PUSHSYMNEAR, 22,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 't', 'v', 'i', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 't', 'v', 'i', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00271) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 15,	/* 71 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 't', 'v', 'i', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 23,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00292 */ HB_P_LINEOFFSET, 17,	/* 73 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 9,	/* MEN */
/* 00308 */ HB_P_LINEOFFSET, 19,	/* 75 */
	HB_P_PUSHSYMNEAR, 7,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'V', 'i', 's', 'i', 't', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00357 */ HB_P_LINEOFFSET, 20,	/* 76 */
	HB_P_PUSHSYMNEAR, 24,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 10,	/* OCONSPROD */
/* 00377 */ HB_P_LINEOFFSET, 21,	/* 77 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00429 */ HB_P_LINE, 77, 0,	/* 77 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* DATA_VISI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 00444 */ HB_P_LINEOFFSET, 22,	/* 78 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'e', 'c', 'n', 'i', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00499 */ HB_P_LINE, 78, 0,	/* 78 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* COD_TEC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 00515 */ HB_P_LINEOFFSET, 23,	/* 79 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 58,	/* 58 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00570 */ HB_P_LINE, 79, 0,	/* 79 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 00596 */ HB_P_LINEOFFSET, 24,	/* 80 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'o', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00656 */ HB_P_LINE, 80, 0,	/* 80 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* HORA_INI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 00672 */ HB_P_LINEOFFSET, 25,	/* 81 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'o', 'r', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00730 */ HB_P_LINE, 81, 0,	/* 81 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* HORA_FIM */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 00746 */ HB_P_LINEOFFSET, 26,	/* 82 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00802 */ HB_P_LINE, 82, 0,	/* 82 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_OPER */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 00818 */ HB_P_LINEOFFSET, 27,	/* 83 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00871 */ HB_P_LINE, 83, 0,	/* 83 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* OBS1 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 00887 */ HB_P_LINEOFFSET, 28,	/* 84 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 00940 */ HB_P_LINE, 84, 0,	/* 84 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* OBS2 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 00956 */ HB_P_LINEOFFSET, 29,	/* 85 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01009 */ HB_P_LINE, 85, 0,	/* 85 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* OBS3 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 01025 */ HB_P_LINEOFFSET, 30,	/* 86 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01078 */ HB_P_LINE, 86, 0,	/* 86 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* OBS4 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 01094 */ HB_P_LINEOFFSET, 31,	/* 87 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01147 */ HB_P_LINE, 87, 0,	/* 87 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* OBS5 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 01163 */ HB_P_LINEOFFSET, 32,	/* 88 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01220 */ HB_P_LINE, 88, 0,	/* 88 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 39,	/* DATA_PROC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPOP,
/* 01236 */ HB_P_LINEOFFSET, 33,	/* 89 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 01242 */ HB_P_LINEOFFSET, 34,	/* 90 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01283) */
/* 01260 */ HB_P_LINEOFFSET, 35,	/* 91 */
	HB_P_MESSAGE, 41, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01275 */ HB_P_LINEOFFSET, 36,	/* 92 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 01248) */
/* 01283 */ HB_P_LINEOFFSET, 37,	/* 93 */
	HB_P_MESSAGE, 42, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01297 */ HB_P_LINEOFFSET, 38,	/* 94 */
	HB_P_MESSAGE, 43, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 01311 */ HB_P_LINEOFFSET, 39,	/* 95 */
/* 01313 */ HB_P_LINEOFFSET, 40,	/* 96 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'<', 24, 25, '>', ' ', '<', 'D', '>', 'a', 't', 'a', ' ', 'V', 'i', 's', 'i', 't', 'a', ' ', '<', 'C', '>', 'o', 'd', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'C', 'o', 'n', 'f', '.', ' ', '<', 'E', 'S', 'C', '>', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01384 */ HB_P_LINEOFFSET, 41,	/* 97 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* NKEY 0*/
/* 01390 */ HB_P_LINEOFFSET, 42,	/* 98 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 01420) */
/* 01398 */ HB_P_LINEOFFSET, 43,	/* 99 */
	HB_P_MESSAGE, 45, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01408 */ HB_P_LINEOFFSET, 44,	/* 100 */
	HB_P_PUSHSYMNEAR, 46,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* NKEY */
	HB_P_JUMPNEAR, 228,	/* -28 (abs: 01390) */
/* 01420 */ HB_P_LINEOFFSET, 46,	/* 102 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01434) */
/* 01429 */ HB_P_LINEOFFSET, 47,	/* 103 */
	HB_P_JUMP, 193, 11,	/* 3009 (abs: 04440) */
/* 01434 */ HB_P_LINEOFFSET, 48,	/* 104 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01448) */
/* 01443 */ HB_P_LINEOFFSET, 49,	/* 105 */
	HB_P_JUMP, 179, 11,	/* 2995 (abs: 04440) */
/* 01448 */ HB_P_LINEOFFSET, 50,	/* 106 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 01464) */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 217, 3,	/* 985 (abs: 02449) */
/* 01467 */ HB_P_LINEOFFSET, 51,	/* 107 */
	HB_P_PUSHSYMNEAR, 23,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01475 */ HB_P_LINEOFFSET, 52,	/* 108 */
	HB_P_PUSHSYMNEAR, 47,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01482 */ HB_P_LINEOFFSET, 53,	/* 109 */
	HB_P_PUSHSYMNEAR, 24,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 10,	/* OCONSPROD */
/* 01502 */ HB_P_LINEOFFSET, 54,	/* 110 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01554 */ HB_P_LINE, 110, 0,	/* 110 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* DATA_VISI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 01569 */ HB_P_LINEOFFSET, 55,	/* 111 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'e', 'c', 'n', 'i', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01624 */ HB_P_LINE, 111, 0,	/* 111 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* COD_TEC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 01640 */ HB_P_LINEOFFSET, 56,	/* 112 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 58,	/* 58 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01695 */ HB_P_LINE, 112, 0,	/* 112 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 01721 */ HB_P_LINEOFFSET, 57,	/* 113 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'o', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01781 */ HB_P_LINE, 113, 0,	/* 113 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* HORA_INI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 01797 */ HB_P_LINEOFFSET, 58,	/* 114 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'o', 'r', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01855 */ HB_P_LINE, 114, 0,	/* 114 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* HORA_FIM */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 01871 */ HB_P_LINEOFFSET, 59,	/* 115 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01927 */ HB_P_LINE, 115, 0,	/* 115 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_OPER */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 01943 */ HB_P_LINEOFFSET, 60,	/* 116 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 01996 */ HB_P_LINE, 116, 0,	/* 116 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* OBS1 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 02012 */ HB_P_LINEOFFSET, 61,	/* 117 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02065 */ HB_P_LINE, 117, 0,	/* 117 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* OBS2 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 02081 */ HB_P_LINEOFFSET, 62,	/* 118 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02134 */ HB_P_LINE, 118, 0,	/* 118 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* OBS3 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 02150 */ HB_P_LINEOFFSET, 63,	/* 119 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02203 */ HB_P_LINE, 119, 0,	/* 119 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* OBS4 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 02219 */ HB_P_LINEOFFSET, 64,	/* 120 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02272 */ HB_P_LINE, 120, 0,	/* 120 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* OBS5 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 02288 */ HB_P_LINEOFFSET, 65,	/* 121 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02345 */ HB_P_LINE, 121, 0,	/* 121 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 39,	/* DATA_PROC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPOP,
/* 02361 */ HB_P_LINEOFFSET, 66,	/* 122 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 02367 */ HB_P_LINEOFFSET, 67,	/* 123 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02408) */
/* 02385 */ HB_P_LINEOFFSET, 68,	/* 124 */
	HB_P_MESSAGE, 41, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02400 */ HB_P_LINEOFFSET, 69,	/* 125 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 02373) */
/* 02408 */ HB_P_LINEOFFSET, 70,	/* 126 */
	HB_P_MESSAGE, 42, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02422 */ HB_P_LINEOFFSET, 71,	/* 127 */
	HB_P_MESSAGE, 43, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 02436 */ HB_P_LINEOFFSET, 72,	/* 128 */
	HB_P_MESSAGE, 45, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 145, 251,	/* -1135 (abs: 01311) */
/* 02449 */ HB_P_LINEOFFSET, 73,	/* 129 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 02465) */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 218, 3,	/* 986 (abs: 03451) */
/* 02468 */ HB_P_LINEOFFSET, 74,	/* 130 */
	HB_P_PUSHSYMNEAR, 23,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 02477 */ HB_P_LINEOFFSET, 75,	/* 131 */
	HB_P_PUSHSYMNEAR, 47,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02484 */ HB_P_LINEOFFSET, 76,	/* 132 */
	HB_P_PUSHSYMNEAR, 24,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 10,	/* OCONSPROD */
/* 02504 */ HB_P_LINEOFFSET, 77,	/* 133 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02556 */ HB_P_LINE, 133, 0,	/* 133 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* DATA_VISI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 02571 */ HB_P_LINEOFFSET, 78,	/* 134 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'e', 'c', 'n', 'i', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02626 */ HB_P_LINE, 134, 0,	/* 134 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* COD_TEC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 02642 */ HB_P_LINEOFFSET, 79,	/* 135 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 58,	/* 58 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02697 */ HB_P_LINE, 135, 0,	/* 135 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 02723 */ HB_P_LINEOFFSET, 80,	/* 136 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'o', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02783 */ HB_P_LINE, 136, 0,	/* 136 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* HORA_INI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 02799 */ HB_P_LINEOFFSET, 81,	/* 137 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'o', 'r', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02857 */ HB_P_LINE, 137, 0,	/* 137 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* HORA_FIM */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 02873 */ HB_P_LINEOFFSET, 82,	/* 138 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02929 */ HB_P_LINE, 138, 0,	/* 138 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_OPER */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 02945 */ HB_P_LINEOFFSET, 83,	/* 139 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 02998 */ HB_P_LINE, 139, 0,	/* 139 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* OBS1 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 03014 */ HB_P_LINEOFFSET, 84,	/* 140 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03067 */ HB_P_LINE, 140, 0,	/* 140 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* OBS2 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 03083 */ HB_P_LINEOFFSET, 85,	/* 141 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03136 */ HB_P_LINE, 141, 0,	/* 141 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* OBS3 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 03152 */ HB_P_LINEOFFSET, 86,	/* 142 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03205 */ HB_P_LINE, 142, 0,	/* 142 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* OBS4 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 03221 */ HB_P_LINEOFFSET, 87,	/* 143 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03274 */ HB_P_LINE, 143, 0,	/* 143 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* OBS5 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 03290 */ HB_P_LINEOFFSET, 88,	/* 144 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03347 */ HB_P_LINE, 144, 0,	/* 144 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 39,	/* DATA_PROC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPOP,
/* 03363 */ HB_P_LINEOFFSET, 89,	/* 145 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 03369 */ HB_P_LINEOFFSET, 90,	/* 146 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03410) */
/* 03387 */ HB_P_LINEOFFSET, 91,	/* 147 */
	HB_P_MESSAGE, 41, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 03402 */ HB_P_LINEOFFSET, 92,	/* 148 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 03375) */
/* 03410 */ HB_P_LINEOFFSET, 93,	/* 149 */
	HB_P_MESSAGE, 42, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 03424 */ HB_P_LINEOFFSET, 94,	/* 150 */
	HB_P_MESSAGE, 43, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 03438 */ HB_P_LINEOFFSET, 95,	/* 151 */
	HB_P_MESSAGE, 45, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 167, 247,	/* -2137 (abs: 01311) */
/* 03451 */ HB_P_LINEOFFSET, 97,	/* 153 */
	HB_P_PUSHSYMNEAR, 48,	/* GENKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 't', 'v', 'i', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSE, 145, 247,	/* -2159 (abs: 01311) */
/* 03473 */ HB_P_LINEOFFSET, 98,	/* 154 */
	HB_P_PUSHSYMNEAR, 24,	/* TBROWSEDB */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 10,	/* OCONSPROD */
/* 03493 */ HB_P_LINEOFFSET, 99,	/* 155 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03545 */ HB_P_LINE, 155, 0,	/* 155 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* DATA_VISI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 03560 */ HB_P_LINEOFFSET, 100,	/* 156 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'e', 'c', 'n', 'i', 'c', 'o', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03615 */ HB_P_LINE, 156, 0,	/* 156 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* COD_TEC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 03631 */ HB_P_LINEOFFSET, 101,	/* 157 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHBLOCKSHORT, 58,	/* 58 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03686 */ HB_P_LINE, 157, 0,	/* 157 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* COD_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* CLIENTE */
	HB_P_PLUS,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPOP,
/* 03712 */ HB_P_LINEOFFSET, 102,	/* 158 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'H', 'o', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03772 */ HB_P_LINE, 158, 0,	/* 158 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* HORA_INI */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 03788 */ HB_P_LINEOFFSET, 103,	/* 159 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'o', 'r', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03846 */ HB_P_LINE, 159, 0,	/* 159 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 32,	/* HORA_FIM */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 03862 */ HB_P_LINEOFFSET, 104,	/* 160 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03918 */ HB_P_LINE, 160, 0,	/* 160 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COD_OPER */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
/* 03934 */ HB_P_LINEOFFSET, 105,	/* 161 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 03987 */ HB_P_LINE, 161, 0,	/* 161 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* OBS1 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPOP,
/* 04003 */ HB_P_LINEOFFSET, 106,	/* 162 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 04056 */ HB_P_LINE, 162, 0,	/* 162 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* OBS2 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPOP,
/* 04072 */ HB_P_LINEOFFSET, 107,	/* 163 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 04125 */ HB_P_LINE, 163, 0,	/* 163 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* OBS3 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPOP,
/* 04141 */ HB_P_LINEOFFSET, 108,	/* 164 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 04194 */ HB_P_LINE, 164, 0,	/* 164 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* OBS4 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPOP,
/* 04210 */ HB_P_LINEOFFSET, 109,	/* 165 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 04263 */ HB_P_LINE, 165, 0,	/* 165 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 38,	/* OBS5 */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPOP,
/* 04279 */ HB_P_LINEOFFSET, 110,	/* 166 */
	HB_P_PUSHSYMNEAR, 25,	/* TBCOLUMNNEW */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHBLOCKSHORT, 48,	/* 48 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC621.PRG:CONS_VISI */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', ':', 'C', 'O', 'N', 'S', '_', 'V', 'I', 'S', 'I', 0,
/* 04336 */ HB_P_LINE, 166, 0,	/* 166 */
	HB_P_PUSHSYMNEAR, 26,	/* CTVIS */
	HB_P_PUSHALIASEDFIELDNEAR, 39,	/* DATA_PROC */
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALREF, 11, 0,	/* OCOLPROD */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPOP,
/* 04352 */ HB_P_LINEOFFSET, 111,	/* 167 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* I 0*/
/* 04358 */ HB_P_LINEOFFSET, 112,	/* 168 */
	HB_P_LOCALNEARSETINT, 12, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 04399) */
/* 04376 */ HB_P_LINEOFFSET, 113,	/* 169 */
	HB_P_MESSAGE, 41, 0,	/* ADDCOLUMN */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHLOCALNEAR, 11,	/* OCOLPROD */
	HB_P_PUSHLOCALNEAR, 12,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04391 */ HB_P_LINEOFFSET, 114,	/* 170 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 223,	/* -33 (abs: 04364) */
/* 04399 */ HB_P_LINEOFFSET, 115,	/* 171 */
	HB_P_MESSAGE, 42, 0,	/* _HEADSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	196, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04413 */ HB_P_LINEOFFSET, 116,	/* 172 */
	HB_P_MESSAGE, 43, 0,	/* _COLSEP */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 04427 */ HB_P_LINEOFFSET, 117,	/* 173 */
	HB_P_MESSAGE, 45, 0,	/* FORCESTABLE */
	HB_P_PUSHLOCALNEAR, 10,	/* OCONSPROD */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
	HB_P_JUMP, 202, 243,	/* -3126 (abs: 01311) */
/* 04440 */ HB_P_LINEOFFSET, 121,	/* 177 */
	HB_P_PUSHSYMNEAR, 15,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 8,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 04464) */
	HB_P_PUSHSYMNEAR, 23,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 04465) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 04466 */ HB_P_LINEOFFSET, 122,	/* 178 */
	HB_P_PUSHSYMNEAR, 13,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 9,	/* MEN */
	HB_P_DOSHORT, 5,
/* 04482 */ HB_P_LINEOFFSET, 123,	/* 179 */
	HB_P_PUSHSYMNEAR, 13,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 1,	/* TELA */
	HB_P_DOSHORT, 5,
/* 04497 */ HB_P_LINEOFFSET, 124,	/* 180 */
	HB_P_PUSHLOCALNEAR, 13,	/* NKEY */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 04525) */
/* 04506 */ HB_P_LINEOFFSET, 125,	/* 181 */
	HB_P_PUSHSYMNEAR, 49,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 50, 0,	/* GETLIST */
/* 04520 */ HB_P_LINEOFFSET, 126,	/* 182 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 04525 */ HB_P_LINEOFFSET, 128,	/* 184 */
	HB_P_PUSHSYMNEAR, 49,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 50, 0,	/* GETLIST */
/* 04539 */ HB_P_LINEOFFSET, 129,	/* 185 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04544 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SAC621 */
 'S', 'A', 'C', '6', '2', '1', 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', '6', '2', '1', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	160, 250, 255, 247, 'l', 'K', 0, 245, 186, 250, 255, 255, 223, 255, 255, 255, 255, 255, 255, 254, 255, '?', '~', 11, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00073 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

