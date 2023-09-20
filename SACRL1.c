/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACRL1.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\SACRL1.PRG /q /oC:\helio\siachb\SACRL1.c /M /N /B 
 * Created: 2018.04.09 19:28:21 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACRL1.PRG"

HB_FUNC( SACRL1 );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACRL1 )
{ "SACRL1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACRL1 )}, NULL },
{ "SENHA_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_OPER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "Q_CONS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SEN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACRL1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACRL1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACRL1 = hb_vm_SymbolInit_SACRL1;
   #pragma data_seg()
#endif

HB_FUNC( SACRL1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 1,	/* locals, params */
	HB_P_MODULENAME,	/* SACRL1.PRG:SACRL1 */
 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_LOCALNAME, 1, 0,	/* MTP */
 'M', 'T', 'P', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 0,
/* 00058 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNAME, 2, 0,	/* MPRG */
 'M', 'P', 'R', 'G', 0,
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', 'R', 'L', '1', 0, 
	HB_P_LOCALNAME, 3, 0,	/* LI */
 'L', 'I', 0,
	HB_P_LOCALNEARSETINT, 3, 18, 0,	/* LI 18*/
	HB_P_LOCALNAME, 4, 0,	/* CI */
 'C', 'I', 0,
	HB_P_LOCALNEARSETINT, 4, 5, 0,	/* CI 5*/
	HB_P_LOCALNAME, 5, 0,	/* LB */
 'L', 'B', 0,
	HB_P_LOCALNEARSETINT, 5, 21, 0,	/* LB 21*/
	HB_P_LOCALNAME, 6, 0,	/* CB */
 'C', 'B', 0,
	HB_P_LOCALNEARSETINT, 6, 58, 0,	/* CB 58*/
	HB_P_LOCALNAME, 7, 0,	/* OPCAO */
 'O', 'P', 'C', 'A', 'O', 0,
	HB_P_LOCALNAME, 8, 0,	/* I */
 'I', 0,
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
	HB_P_LOCALNAME, 9, 0,	/* LBA */
 'L', 'B', 'A', 0,
	HB_P_LOCALNEARSETINT, 9, 16, 0,	/* LBA 16*/
	HB_P_LOCALNAME, 10, 0,	/* CBA */
 'C', 'B', 'A', 0,
	HB_P_LOCALNEARSETINT, 10, 58, 0,	/* CBA 58*/
	HB_P_LOCALNAME, 11, 0,	/* M_DADOS */
 'M', '_', 'D', 'A', 'D', 'O', 'S', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_DADOS */
	HB_P_LOCALNAME, 12, 0,	/* M_PONTO */
 'M', '_', 'P', 'O', 'N', 'T', 'O', 0,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 12,	/* M_PONTO */
	HB_P_LOCALNAME, 13, 0,	/* POINT */
 'P', 'O', 'I', 'N', 'T', 0,
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* POINT 0*/
	HB_P_LOCALNAME, 14, 0,	/* MHORA */
 'M', 'H', 'O', 'R', 'A', 0,
	HB_P_LOCALNAME, 15, 0,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
/* 00223 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SENHA_ACESS */
	HB_P_PUSHSYMNEAR, 2,	/* NIVEL_ACESS */
	HB_P_PUSHSYMNEAR, 3,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_OPER */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_OPER */
/* 00242 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ',', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ',', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'R', 'E', 'L', 'O', 'G', 'I', 'O', ' ', 'D', 'E', ' ', 'P', 'O', 'N', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00326) */
/* 00321 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00326 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_PUSHSYMNEAR, 7,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00348 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'a', 'c', 'r', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'r', 'l', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00373) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00373 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00402) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00402 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ',', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ',', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'R', 'E', 'L', 'O', 'G', 'I', 'O', ' ', 'D', 'E', ' ', 'P', 'O', 'N', 'T', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00476 */ HB_P_LINEOFFSET, 12,	/* 19 */
/* 00478 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 12,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00487 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 13,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 00500 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DADOS */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00510 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 14,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PONTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00520 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 15,	/* MDATA */
/* 00527 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'e', ' ', 'S', 'e', 'n', 'h', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00572 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 17,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHLOCALNEAR, 10,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00590 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 17,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHLOCALNEAR, 10,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00608 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00616 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00649 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'A', 'T', 'A', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00683 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'H', 'o', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00727 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 62,	/* 62 */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG:SACRL1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_PUSHSYMNEAR, 25,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00815) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00826) */
	HB_P_PUSHSYMNEAR, 26,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_OPER */
	HB_P_ONE,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 00832 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00846 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG:SACRL1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00935) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00940) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 70, 0,	/* 70 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG:SACRL1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
/* 01003 */ HB_P_LINE, 39, 0,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01018) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01019) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01025 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01039 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 23, 0,	/* GETLIST */
/* 01061 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01078) */
/* 01073 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_JUMP, 234, 4,	/* 1258 (abs: 02333) */
/* 01078 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 30, 0,	/* Q_CONS */
/* 01086 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 30, 0,	/* Q_CONS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01184 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* Q_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01252) */
/* 01198 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 36,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'l', 'a', 'n', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', 's', 't', 'e', ' ', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01247 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_JUMP, 251, 252,	/* -773 (abs: 00476) */
/* 01252 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01261 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 01267 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* Q_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 92,	/* 92 (abs: 01376) */
/* 01286 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_DADOS */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01350 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PONTO */
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01368 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 155,	/* -101 (abs: 01273) */
/* 01376 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01423 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 38,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 9,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 10,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 11,	/* M_DADOS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 13,	/* POINT */
/* 01451 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01459 */ HB_P_LINEOFFSET, 52,	/* 59 */
/* 01461 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01478) */
/* 01473 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_JUMP, 90, 3,	/* 858 (abs: 02333) */
/* 01478 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 12, 252,	/* -1012 (abs: 00476) */
/* 01491 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHSYMNEAR, 18,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01499 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 01674) */
/* 01511 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* LBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01555 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01576) */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01583) */
/* 01578 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_JUMP, 176, 251,	/* -1104 (abs: 00476) */
/* 01583 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PONTO */
	HB_P_PUSHLOCALNEAR, 13,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01647 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 147, 2,	/* 659 (abs: 02330) */
/* 01674 */ HB_P_LINEOFFSET, 64,	/* 71 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 135, 2,	/* 647 (abs: 02330) */
/* 01686 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 13,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MHORA */
/* 01699 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_PUSHMEMVAR, 30, 0,	/* Q_CONS */
	HB_P_PUSHLOCALNEAR, 13,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 15,	/* MDATA */
/* 01712 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_PUSHSYMNEAR, 40,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_PUSHLOCALNEAR, 4,	/* CI */
	HB_P_PUSHLOCALNEAR, 5,	/* LB */
	HB_P_PUSHLOCALNEAR, 6,	/* CB */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'L', 'A', 'N', 'C', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 01760 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 17,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01788 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'H', 'o', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01837 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG:SACRL1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* MDATA */
 'M', 'D', 'A', 'T', 'A', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01932) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01937) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 01953 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01967 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CI */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 24,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 75, 0,	/* 75 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MHORA */
	HB_P_MODULENAME,	/* C:\helio\siachb\SACRL1.PRG:SACRL1 */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', ':', 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_LOCALNAME, 255, 255,	/* MHORA */
 'M', 'H', 'O', 'R', 'A', 0,
	HB_P_LOCALNAME, 1, 0,	/* _1 */
 '_', '1', 0,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02062) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02067) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'h', 'o', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', ':', '9', '9', ':', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
/* 02093 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 23, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02107 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 23, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 23, 0,	/* GETLIST */
/* 02129 */ HB_P_LINEOFFSET, 73,	/* 80 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* LBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 02174 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02195) */
	HB_P_PUSHSYMNEAR, 29,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 02202) */
/* 02197 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_JUMP, 69, 249,	/* -1723 (abs: 00476) */
/* 02202 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'r', 'l', ' ', 'S', 'E', 'T', ' ', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MHORA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	',', ' ', 'd', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'R', 'E', 'C', 'N', 'O', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* M_PONTO */
	HB_P_PUSHLOCALNEAR, 13,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02306 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 194, 248,	/* -1854 (abs: 00476) */
/* 02333 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 41,	/* SEN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 42,	/* DBCLOSEAREA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_POPALIAS,
/* 02345 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHSYMNEAR, 43,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02352 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02357 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SACRL1 */
 'S', 'A', 'C', 'R', 'L', '1', 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'S', 'A', 'C', 'R', 'L', '1', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	136, 206, '=', 240, 255, 247, 253, 255, 239, 255, '7', 14, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00061 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

