/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <saccliatu.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\saccliatu.prg /q /oC:\hti\SISCOM\saccliatu.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:19 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "saccliatu.prg"

HB_FUNC( SACCLIATU );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCLIATU )
{ "SACCLIATU", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCLIATU )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MCONT_01", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONT_02", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONT_03", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONT_04", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONT_07", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCONT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "CONS_NUM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCLIATU )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCLIATU
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCLIATU = hb_vm_SymbolInit_SACCLIATU;
   #pragma data_seg()
#endif

HB_FUNC( SACCLIATU )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 10, 0,	/* MPRG 10*/
	'S', 'A', 'C', 'C', 'L', 'I', 'A', 'T', 'U', 0, 
	HB_P_LOCALNEARSETSTR, 2, 38, 0,	/* MTITULO 38*/
	'A', 'T', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 'U', 'L', 'T', 'I', 'M', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* SOMA_PED */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_C */
/* 00082 */ HB_P_LINEOFFSET, 2,	/* 8 */
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
/* 00109 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00144) */
/* 00139 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00154 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_LOCALNEARSETINT, 5, 21, 0,	/* LBA 21*/
/* 00160 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_LOCALNEARSETINT, 6, 90, 0,	/* CBA 90*/
/* 00166 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 7,
/* 00188 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 9,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00197 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 10, 0,	/* MCONT_01 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 11, 0,	/* MCONT_02 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 12, 0,	/* MCONT_03 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 13, 0,	/* MCONT_04 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 14, 0,	/* MCONT_07 */
/* 00219 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHMEMVAR, 15, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00232 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00274 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00307 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'U', 'l', 't', 'i', 'm', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00341 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00375 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'l', 'r', '.', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00409 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'd', 'o', 's', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00461 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00482) */
	HB_P_PUSHSYMNEAR, 20,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00496) */
/* 00484 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 21,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00491 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00496 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_CLI */
/* 00503 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_POPVARIABLE, 22, 0,	/* CCOMM */
/* 00531 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 22, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 8, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00552 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00576 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 113, 254,	/* -399 (abs: 00188) */
/* 00590 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* I */
	HB_P_POPVARIABLE, 27, 0,	/* MCONT */
/* 00600 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 26, 0,	/* I */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 129, 3,	/* 897 (abs: 01514) */
/* 00620 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 28,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00634 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00673 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 29, 0,	/* CONS_NUM */
/* 00681 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'D', 'E', 'S', 'C', ',', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'D', 'E', 'S', 'C', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 29, 0,	/* CONS_NUM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00850 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00874 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* CONS_NUM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 106, 2,	/* 618 (abs: 01504) */
/* 00889 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* CONS_NUM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 00912 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* CONS_NUM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 00936 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_PED */
/* 00943 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 29, 0,	/* CONS_NUM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 9, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01038 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01062 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* SOMA_PED 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* SOMA_PED */
	HB_P_POPVARIABLE, 27, 0,	/* MCONT */
/* 01073 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 27, 0,	/* MCONT */
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 01169) */
/* 01092 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHLOCALNEAR, 10,	/* SOMA_PED */
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* SOMA_PED */
/* 01118 */ HB_P_LINEOFFSET, 57,	/* 63 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* SOMA_PED */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01158 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHVARIABLE, 27, 0,	/* MCONT */
	HB_P_INC,
	HB_P_POPVARIABLE, 27, 0,	/* MCONT */
	HB_P_JUMPNEAR, 168,	/* -88 (abs: 01079) */
/* 01169 */ HB_P_LINEOFFSET, 59,	/* 65 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'S', 'E', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'u', 'l', 't', '_', 'c', 'o', 'm', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'l', 'r', '_', 'c', 'o', 'm', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* SOMA_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01317 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_C */
/* 01324 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'r', 'a', 'z', 'a', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* CONS_C */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01409 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01433 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHSYMNEAR, 25,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_C */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 01502) */
/* 01446 */ HB_P_LINEOFFSET, 65,	/* 71 */
	HB_P_PUSHSYMNEAR, 32,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_C */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_C */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 33, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_C */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_C */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01502 */ HB_P_LINEOFFSET, 68,	/* 74 */
	HB_P_PUSHVARIABLE, 26, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 26, 0,	/* I */
	HB_P_JUMP, 119, 252,	/* -905 (abs: 00606) */
/* 01514 */ HB_P_LINEOFFSET, 69,	/* 75 */
	HB_P_MESSAGE, 23, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 24,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 186, 250,	/* -1350 (abs: 00188) */
	HB_P_ENDPROC
/* 01542 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

