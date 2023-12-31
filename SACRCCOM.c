/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACRCCOM.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACRCCOM.PRG /q /oC:\hti\SISCOM\SACRCCOM.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:21 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACRCCOM.PRG"

HB_FUNC( SACRCCOM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( EXTENSO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( PADR );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACRCCOM )
{ "SACRCCOM", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACRCCOM )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "EXTENSO", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXTENSO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "PADR", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADR )}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACRCCOM )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACRCCOM
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACRCCOM = hb_vm_SymbolInit_SACRCCOM;
   #pragma data_seg()
#endif

HB_FUNC( SACRCCOM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 29, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'R', 'C', 'C', 'O', 'M', 0, 
	HB_P_LOCALNEARSETSTR, 2, 31, 0,	/* MTITULO 31*/
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'R', 'E', 'C', 'I', 'B', 'O', 'S', ' ', 'D', 'E', ' ', 'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', 0, 
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* LINHAS 0*/
/* 00058 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00085 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00120) */
/* 00115 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00120 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00130 */ HB_P_LINEOFFSET, 10,	/* 21 */
	HB_P_LOCALNEARSETINT, 5, 6, 0,	/* LBA 6*/
/* 00136 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_LOCALNEARSETINT, 6, 66, 0,	/* CBA 66*/
/* 00142 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'R', 'e', 'c', 'e', 'b', 'i', ' ', 'd', 'a', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* MEMP_RESA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'a', ' ', 'i', 'm', 'p', 'o', 'r', 't', 'a', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* LIN1 */
/* 00199 */ HB_P_LINEOFFSET, 13,	/* 24 */
	HB_P_LOCALNEARSETSTR, 9, 47, 0,	/* LIN2 47*/
	' ', 'r', 'e', 'f', 'e', 'r', 'e', 'n', 't', 'e', ' ', 'a', ' ', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'v', 'e', 'n', 'd', 'a', 's', ' ', 'd', 'o', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
/* 00252 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* OPCAO */
/* 00262 */ HB_P_LINEOFFSET, 15,	/* 26 */
	HB_P_PUSHSYMNEAR, 9,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 28,	/* TRACO */
/* 00277 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_PUSHSYMNEAR, 10,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 16,	/* TELAREC */
/* 00292 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00309 */ HB_P_LINEOFFSET, 20,	/* 31 */
	HB_P_PUSHMEMVAR, 12, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00322 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_PUSHSYMNEAR, 13,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00371 */ HB_P_LINEOFFSET, 23,	/* 34 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MNOME */
/* 00382 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* MREF2 */
/* 00393 */ HB_P_LINEOFFSET, 25,	/* 36 */
	HB_P_PUSHMEMVAR, 14, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 19,	/* MDATA */
/* 00400 */ HB_P_LINEOFFSET, 26,	/* 37 */
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MVALOR 0*/
/* 00406 */ HB_P_LINEOFFSET, 27,	/* 38 */
	HB_P_PUSHSYMNEAR, 15,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 21,	/* MREF */
/* 00426 */ HB_P_LINEOFFSET, 28,	/* 39 */
	HB_P_PUSHSYMNEAR, 15,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 22,	/* MREF1 */
/* 00446 */ HB_P_LINEOFFSET, 29,	/* 40 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 24,	/* MREF3 */
/* 00457 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* MREF4 */
/* 00468 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 26,	/* MREF5 */
/* 00479 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 27,	/* MREF6 */
/* 00490 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHSYMNEAR, 16,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00498 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'D', 'a', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00528 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'N', 'o', 'm', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00558 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'P', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00588 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'V', 'a', 'l', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00619 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00652 */ HB_P_LINEOFFSET, 39,	/* 50 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00680 */ HB_P_LINEOFFSET, 40,	/* 51 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00725) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00730) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00768 */ HB_P_LINEOFFSET, 41,	/* 52 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 00790 */ HB_P_LINEOFFSET, 42,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00805) */
	HB_P_JUMP, 91, 4,	/* 1115 (abs: 01917) */
/* 00805 */ HB_P_LINEOFFSET, 46,	/* 57 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MNOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00850) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00855) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00887 */ HB_P_LINEOFFSET, 47,	/* 58 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MREF2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00932) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00937) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'r', 'e', 'f', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00965 */ HB_P_LINEOFFSET, 48,	/* 59 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01010) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01015) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01058 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MREF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01103) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01108) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'r', 'e', 'f', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01135 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MREF1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01180) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01185) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'r', 'e', 'f', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 23, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01213 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 01235 */ HB_P_LINEOFFSET, 52,	/* 63 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01250) */
	HB_P_JUMP, 86, 252,	/* -938 (abs: 00309) */
/* 01250 */ HB_P_LINEOFFSET, 55,	/* 66 */
	HB_P_PUSHSYMNEAR, 26,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'C', '_', 'C', 'O', 'M', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01281) */
	HB_P_JUMP, 55, 252,	/* -969 (abs: 00309) */
/* 01281 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_PUSHLOCALNEAR, 8,	/* LIN1 */
	HB_P_PUSHSYMNEAR, 27,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* EXTENSO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVALOR */
	HB_P_TRUE,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'e', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'a', 'i', 's', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* LIN2 */
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MREF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MREF1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', ' ', 'q', 'u', 'e', ' ', 'd', 'o', 'u', ' ', 'p', 'l', 'e', 'n', 'a', ' ', 'q', 'u', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* RRECIBO */
/* 01416 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	14, 0, 
	HB_P_DOSHORT, 1,
/* 01441 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', ' ', 'E', ' ', 'C', ' ', 'I', ' ', 'B', ' ', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 01474 */ HB_P_LINEOFFSET, 61,	/* 72 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 01499 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHSYMNEAR, 33,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* RRECIBO */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* LINHAS */
/* 01512 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_LOCALNEARSETINT, 29, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 29,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 13,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 01613) */
/* 01525 */ HB_P_LINEOFFSET, 66,	/* 77 */
	HB_P_PUSHSYMNEAR, 34,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* RRECIBO */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHLOCALNEAR, 29,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 01543 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* PADR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01579 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 01605 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_LOCALNEARADDINT, 29, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 163,	/* -93 (abs: 01518) */
/* 01613 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 29,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 31,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01669 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01716 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MNOME */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01746 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MREF2 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01776 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'H', 'r', 's', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01812 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* TRACO */
	HB_P_DOSHORT, 1,
/* 01835 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHSYMNEAR, 40,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01844 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHSYMNEAR, 41,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01851 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 42,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01892 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHSYMNEAR, 43,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'C', '_', 'C', 'O', 'M', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 187, 249,	/* -1605 (abs: 00309) */
/* 01917 */ HB_P_LINEOFFSET, 82,	/* 93 */
	HB_P_PUSHSYMNEAR, 44,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01924 */ HB_P_LINEOFFSET, 83,	/* 94 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01929 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

