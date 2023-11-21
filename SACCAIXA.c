/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACCAIXA.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACCAIXA.PRG /q /oC:\hti\SISCOM\SACCAIXA.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACCAIXA.PRG"

HB_FUNC( SACCAIXA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC30 );
HB_FUNC_EXTERN( SAC301 );
HB_FUNC_EXTERN( CON241V );
HB_FUNC_EXTERN( SAC31 );
HB_FUNC_EXTERN( SAC31_4 );
HB_FUNC_EXTERN( SAC31_1 );
HB_FUNC_EXTERN( SAC31_3 );
HB_FUNC_EXTERN( SAC33 );
HB_FUNC_EXTERN( SAC34 );
HB_FUNC_EXTERN( SAC36 );
HB_FUNC_EXTERN( SAC37 );
HB_FUNC_EXTERN( CON25 );
HB_FUNC_EXTERN( SAC38 );
HB_FUNC_EXTERN( CON211 );
HB_FUNC_EXTERN( SAC39 );
HB_FUNC_EXTERN( SAC210 );
HB_FUNC_EXTERN( SACREC );
HB_FUNC_EXTERN( SAC42 );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( F7_CLI );
HB_FUNC_EXTERN( SACCEP );
HB_FUNC_EXTERN( SACCHEQ );
HB_FUNC_EXTERN( EMI_CARNE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCAIXA )
{ "SACCAIXA", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCAIXA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "NITEMMENU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC30", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC30 )}, NULL },
{ "SAC301", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC301 )}, NULL },
{ "CON241V", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON241V )}, NULL },
{ "SAC31", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC31 )}, NULL },
{ "SAC31_4", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC31_4 )}, NULL },
{ "SAC31_1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC31_1 )}, NULL },
{ "SAC31_3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC31_3 )}, NULL },
{ "SAC33", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC33 )}, NULL },
{ "SAC34", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC34 )}, NULL },
{ "SAC36", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC36 )}, NULL },
{ "SAC37", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC37 )}, NULL },
{ "CON25", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON25 )}, NULL },
{ "SAC38", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC38 )}, NULL },
{ "CON211", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON211 )}, NULL },
{ "SAC39", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC39 )}, NULL },
{ "SAC210", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC210 )}, NULL },
{ "SACREC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACREC )}, NULL },
{ "SAC42", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC42 )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "F7_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( F7_CLI )}, NULL },
{ "SACCEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCEP )}, NULL },
{ "SACCHEQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCHEQ )}, NULL },
{ "EMI_CARNE", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMI_CARNE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCAIXA )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCAIXA
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCAIXA = hb_vm_SymbolInit_SACCAIXA;
   #pragma data_seg()
#endif

HB_FUNC( SACCAIXA )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', 0, 
/* 00019 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00029 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_LOCALNEARSETINT, 5, 22, 0,	/* LBA 22*/
/* 00035 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_LOCALNEARSETINT, 6, 39, 0,	/* CBA 39*/
/* 00041 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00047 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00055 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'C', ' ', 'A', ' ', 'I', ' ', 'X', ' ', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00084 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00093 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00102 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '0', ' ', '-', '>', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00149 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '1', ' ', '-', '>', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00199 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '2', ' ', '-', '>', ' ', 'V', 'a', 'l', 'e', 's', ' ', 'p', '/', 'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00249 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '3', ' ', '-', '>', ' ', 'V', 'a', 'l', 'e', 's', ' ', 'A', 'n', 't', 'i', 'g', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00299 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '4', ' ', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', '/', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'V', 'a', 'l', 'e', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00349 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '5', ' ', '-', '>', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00399 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '6', ' ', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', '/', 'A', 'l', 't', '.', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00449 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '7', ' ', '-', '>', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00499 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '8', ' ', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'P', 'e', 'd', 'e', 'n', 't', 'e', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00549 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'A', ' ', '-', '>', ' ', 'F', 'u', 'n', 'd', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00599 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'B', ' ', '-', '>', ' ', 'R', 'e', 't', 'i', 'r', 'a', 'd', 'a', ' ', 'D', 'e', 'p', 'o', 's', 'i', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00649 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'C', ' ', '-', '>', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00699 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'D', ' ', '-', '>', ' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00749 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'E', ' ', '-', '>', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', 's', ' ', 'A', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 't', 'i', 'v', 'a', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00799 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'F', ' ', '-', '>', ' ', 'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00849 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'G', ' ', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '/', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'N', '.', 'F', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00899 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'H', ' ', '-', '>', ' ', 'R', 'e', 'c', 'i', 'b', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00949 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'I', ' ', '-', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00999 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'J', ' ', '-', '>', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01049 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'K', ' ', '-', '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'E', 'P', 39, 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01099 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'L', ' ', '-', '>', ' ', 'P', 'r', 'e', 'e', 'n', 'c', 'h', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01149 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'M', ' ', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'r', 'n', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01199 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 5,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01213 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHSYMNEAR, 6,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 7,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01239) */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 01245) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'n', 'i', 't', 'e', 'm', 'm', 'e', 'n', 'u', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 8, 0,	/* NITEMMENU */
/* 01263 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01271 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01286) */
	HB_P_JUMP, 93, 2,	/* 605 (abs: 01888) */
/* 01286 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01305) */
/* 01295 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC30 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 62, 251,	/* -1218 (abs: 00084) */
/* 01305 */ HB_P_LINEOFFSET, 48,	/* 54 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01325) */
/* 01315 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC301 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 42, 251,	/* -1238 (abs: 00084) */
/* 01325 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01349) */
/* 01335 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHSYMNEAR, 12,	/* CON241V */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 18, 251,	/* -1262 (abs: 00084) */
/* 01349 */ HB_P_LINEOFFSET, 54,	/* 60 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01369) */
/* 01359 */ HB_P_LINEOFFSET, 56,	/* 62 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC31 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 254, 250,	/* -1282 (abs: 00084) */
/* 01369 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01389) */
/* 01379 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC31_4 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 234, 250,	/* -1302 (abs: 00084) */
/* 01389 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01409) */
/* 01399 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC31_1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 214, 250,	/* -1322 (abs: 00084) */
/* 01409 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01429) */
/* 01419 */ HB_P_LINEOFFSET, 66,	/* 72 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC31_3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 250,	/* -1342 (abs: 00084) */
/* 01429 */ HB_P_LINEOFFSET, 67,	/* 73 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01449) */
/* 01439 */ HB_P_LINEOFFSET, 69,	/* 75 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC33 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 174, 250,	/* -1362 (abs: 00084) */
/* 01449 */ HB_P_LINEOFFSET, 70,	/* 76 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01469) */
/* 01459 */ HB_P_LINEOFFSET, 72,	/* 78 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC34 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 154, 250,	/* -1382 (abs: 00084) */
/* 01469 */ HB_P_LINEOFFSET, 73,	/* 79 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01489) */
/* 01479 */ HB_P_LINEOFFSET, 75,	/* 81 */
	HB_P_PUSHSYMNEAR, 19,	/* SAC36 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 134, 250,	/* -1402 (abs: 00084) */
/* 01489 */ HB_P_LINEOFFSET, 76,	/* 82 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01509) */
/* 01499 */ HB_P_LINEOFFSET, 78,	/* 84 */
	HB_P_PUSHSYMNEAR, 20,	/* SAC37 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 114, 250,	/* -1422 (abs: 00084) */
/* 01509 */ HB_P_LINEOFFSET, 79,	/* 85 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01533) */
/* 01519 */ HB_P_LINEOFFSET, 81,	/* 87 */
	HB_P_PUSHSYMNEAR, 21,	/* CON25 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 90, 250,	/* -1446 (abs: 00084) */
/* 01533 */ HB_P_LINEOFFSET, 82,	/* 88 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01553) */
/* 01543 */ HB_P_LINEOFFSET, 84,	/* 90 */
	HB_P_PUSHSYMNEAR, 22,	/* SAC38 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 70, 250,	/* -1466 (abs: 00084) */
/* 01553 */ HB_P_LINEOFFSET, 85,	/* 91 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01577) */
/* 01563 */ HB_P_LINEOFFSET, 87,	/* 93 */
	HB_P_PUSHSYMNEAR, 23,	/* CON211 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 46, 250,	/* -1490 (abs: 00084) */
/* 01577 */ HB_P_LINEOFFSET, 88,	/* 94 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01597) */
/* 01587 */ HB_P_LINEOFFSET, 90,	/* 96 */
	HB_P_PUSHSYMNEAR, 24,	/* SAC39 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 26, 250,	/* -1510 (abs: 00084) */
/* 01597 */ HB_P_LINEOFFSET, 91,	/* 97 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01617) */
/* 01607 */ HB_P_LINEOFFSET, 93,	/* 99 */
	HB_P_PUSHSYMNEAR, 25,	/* SAC210 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 6, 250,	/* -1530 (abs: 00084) */
/* 01617 */ HB_P_LINEOFFSET, 94,	/* 100 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01637) */
/* 01627 */ HB_P_LINEOFFSET, 99,	/* 105 */
	HB_P_PUSHSYMNEAR, 26,	/* SACREC */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 242, 249,	/* -1550 (abs: 00084) */
/* 01637 */ HB_P_LINEOFFSET, 100,	/* 106 */
	HB_P_PUSHVARIABLE, 8, 0,	/* NITEMMENU */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01657) */
/* 01647 */ HB_P_LINEOFFSET, 102,	/* 108 */
	HB_P_PUSHSYMNEAR, 27,	/* SAC42 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 222, 249,	/* -1570 (abs: 00084) */
/* 01657 */ HB_P_LINEOFFSET, 103,	/* 109 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 01830) */
/* 01667 */ HB_P_LINEOFFSET, 106,	/* 112 */
	HB_P_PUSHSYMNEAR, 28,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 29,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 30,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 01689 */ HB_P_LINEOFFSET, 107,	/* 113 */
	HB_P_PUSHSYMNEAR, 31,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01718) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01718 */ HB_P_LINEOFFSET, 108,	/* 114 */
	HB_P_PUSHSYMNEAR, 31,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'e', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'e', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01745) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01745 */ HB_P_LINEOFFSET, 110,	/* 116 */
	HB_P_PUSHSYMNEAR, 31,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01772) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01772 */ HB_P_LINEOFFSET, 111,	/* 117 */
	HB_P_PUSHSYMNEAR, 32,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01789 */ HB_P_LINEOFFSET, 112,	/* 118 */
	HB_P_PUSHSYMNEAR, 29,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 33,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 01809 */ HB_P_LINEOFFSET, 113,	/* 119 */
	HB_P_PUSHSYMNEAR, 34,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01816 */ HB_P_LINEOFFSET, 115,	/* 121 */
	HB_P_PUSHSYMNEAR, 35,	/* F7_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 49, 249,	/* -1743 (abs: 00084) */
/* 01830 */ HB_P_LINEOFFSET, 116,	/* 122 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01849) */
/* 01839 */ HB_P_LINEOFFSET, 118,	/* 124 */
	HB_P_PUSHSYMNEAR, 36,	/* SACCEP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 30, 249,	/* -1762 (abs: 00084) */
/* 01849 */ HB_P_LINEOFFSET, 119,	/* 125 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01868) */
/* 01858 */ HB_P_LINEOFFSET, 121,	/* 127 */
	HB_P_PUSHSYMNEAR, 37,	/* SACCHEQ */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 11, 249,	/* -1781 (abs: 00084) */
/* 01868 */ HB_P_LINEOFFSET, 122,	/* 128 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 249,	/* -1791 (abs: 00084) */
/* 01878 */ HB_P_LINEOFFSET, 124,	/* 130 */
	HB_P_PUSHSYMNEAR, 38,	/* EMI_CARNE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 247, 248,	/* -1801 (abs: 00084) */
/* 01888 */ HB_P_LINEOFFSET, 127,	/* 133 */
	HB_P_PUSHSYMNEAR, 39,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01895 */ HB_P_LINEOFFSET, 128,	/* 134 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01900 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

