/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SAC5.PRG /q /oC:\helio\siachb\SAC5.c /M /N /B 
 * Created: 2018.04.09 19:25:03 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5.PRG"

HB_FUNC( SAC5 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC58 );
HB_FUNC_EXTERN( SAC580 );
HB_FUNC_EXTERN( SAC5PED );
HB_FUNC_EXTERN( SAC5NOTA );
HB_FUNC_EXTERN( SAC5ETQ );
HB_FUNC_EXTERN( SAC5PLA1 );
HB_FUNC_EXTERN( SAC5CAD );
HB_FUNC_EXTERN( SAC64 );
HB_FUNC_EXTERN( TEXTO );
HB_FUNC_EXTERN( SACPERF );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5 )
{ "SAC5", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5 )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC58", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC58 )}, NULL },
{ "SAC580", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC580 )}, NULL },
{ "SAC5PED", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED )}, NULL },
{ "SAC5NOTA", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5NOTA )}, NULL },
{ "SAC5ETQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ETQ )}, NULL },
{ "SAC5PLA1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PLA1 )}, NULL },
{ "SAC5CAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5CAD )}, NULL },
{ "SAC64", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC64 )}, NULL },
{ "TEXTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TEXTO )}, NULL },
{ "SACPERF", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACPERF )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5 = hb_vm_SymbolInit_SAC5;
   #pragma data_seg()
#endif

HB_FUNC( SAC5 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
	HB_P_MODULENAME,	/* SAC5.PRG:SAC5 */
 'S', 'A', 'C', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC5.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '.', 'P', 'R', 'G', ':', 0,
/* 00045 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNAME, 1, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 1, 5, 0,	/* MPRG 5*/
	'S', 'A', 'C', '5', 0, 
/* 00065 */ HB_P_LINEOFFSET, 2,	/* 9 */
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
	HB_P_LOCALNAME, 11, 0,	/* MTRACO */
 'M', 'T', 'R', 'A', 'C', 'O', 0,
/* 00152 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 3, 0,	/* LCI 3*/
/* 00158 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 5, 0,	/* CCI 5*/
/* 00164 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 7, 14, 0,	/* LBA 14*/
/* 00170 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 8, 38, 0,	/* CBA 38*/
/* 00176 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 9,	/* TELA */
/* 00191 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* OPCAO 0*/
/* 00197 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 2,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* MTRACO */
/* 00212 */ HB_P_LINEOFFSET, 11,	/* 18 */
/* 00214 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00223 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
	HB_P_PUSHSYMNEAR, 5,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00245 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 6,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'c', 'a', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00287 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 7,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 1,
/* 00296 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '0', ' ', '-', '>', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'p', '/', 'B', 'a', 'l', 'a', 'n', 'c', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'p', 'a', 'r', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'o', ' ', 'd', 'e', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00410 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '1', ' ', '-', '>', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'E', 's', 't', '.', ' ', 'A', '.', 'V', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'A', '.', 'V', '.', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00525 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '2', ' ', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', '.', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '/', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'*', '*', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '/', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00634 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '3', ' ', '-', '>', ' ', 'N', 'o', 't', 'a', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'*', '*', ' ', 'N', 'o', 't', 'a', 's', ' ', 'F', 'i', 's', 'c', 'a', 'i', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00735 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '4', ' ', '-', '>', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00834 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '5', ' ', '-', '>', ' ', 'P', 'l', 'a', 'n', '.', 'C', 'a', 'd', '.', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'*', '*', ' ', 'P', 'l', 'a', 'n', 'i', 'l', 'h', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', 'd', 'e', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00946 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '6', ' ', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'A', 'D', 'A', 'S', 'T', 'R', 'O', ' ', '(', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'E', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ')', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01067 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '7', ' ', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'o', 'e', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'*', '*', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'o', 'e', 's', ' ', 'p', '/', ' ', 'H', 'R', 'B', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01178 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '8', ' ', '-', '>', ' ', 'T', ' ', 'E', ' ', 'X', ' ', 'T', ' ', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'*', '*', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'T', 'e', 'x', 't', 'o', ' ', 'S', 'i', 'm', 'p', 'l', 'e', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01281 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 8,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '9', ' ', '-', '>', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', ' ', 'M', 'a', 't', '.', 'P', 'r', 'i', 'm', 'a', ' ', '(', 'E', 'X', 'C', 'E', 'L', ')', ' ', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'*', '*', ' ', 'G', 'e', 'r', 'a', 'r', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'd', 'a', 's', ' ', 'd', 'e', ' ', 'M', 'a', 't', '.', 'P', 'r', 'i', 'm', 'a', ' ', 'p', '/', 'E', 'X', 'C', 'E', 'L', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01405 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 9,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01419 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 10,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 77, 0,	/* 77 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OPCAO */
	HB_P_MODULENAME,	/* C:\helio\siachb\SAC5.PRG:SAC5 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', '5', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', '5', 0,
	HB_P_LOCALNAME, 255, 255,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
/* 01479 */ HB_P_LINE, 35, 0,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01495) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01500) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 01513 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 12,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 9,	/* TELA */
	HB_P_DOSHORT, 5,
/* 01528 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 13,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01545) */
/* 01540 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01545 */ HB_P_LINEOFFSET, 36,	/* 43 */
/* 01547 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01565) */
/* 01555 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC58 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 186, 250,	/* -1350 (abs: 00212) */
/* 01565 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01584) */
/* 01574 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC580 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 167, 250,	/* -1369 (abs: 00212) */
/* 01584 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01603) */
/* 01593 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC5PED */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 148, 250,	/* -1388 (abs: 00212) */
/* 01603 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01622) */
/* 01612 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC5NOTA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 129, 250,	/* -1407 (abs: 00212) */
/* 01622 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01641) */
/* 01631 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC5ETQ */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 110, 250,	/* -1426 (abs: 00212) */
/* 01641 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01660) */
/* 01650 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHSYMNEAR, 19,	/* SAC5PLA1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 91, 250,	/* -1445 (abs: 00212) */
/* 01660 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01679) */
/* 01669 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SAC5CAD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 72, 250,	/* -1464 (abs: 00212) */
/* 01679 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01698) */
/* 01688 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC64 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 53, 250,	/* -1483 (abs: 00212) */
/* 01698 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01717) */
/* 01707 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_PUSHSYMNEAR, 22,	/* TEXTO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 34, 250,	/* -1502 (abs: 00212) */
/* 01717 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 250,	/* -1512 (abs: 00212) */
/* 01727 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHSYMNEAR, 23,	/* SACPERF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 14, 250,	/* -1522 (abs: 00212) */
	HB_P_ENDPROC
/* 01738 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SAC5 */
 'S', 'A', 'C', '5', 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', '5', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	160, 250, 255, 255, 173, 217, 182, 'm', 219, 18, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00055 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

