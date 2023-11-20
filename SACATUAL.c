/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACATUAL.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SACATUAL.PRG /q /oC:\hti\SISCOM\SACATUAL.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:06 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACATUAL.PRG"

HB_FUNC( SACATUAL );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETCOLOR );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( __MVRELEASE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( INKEY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACATUAL )
{ "SACATUAL", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACATUAL )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETCOLOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOLOR )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVRELEASE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACATUAL )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACATUAL
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACATUAL = hb_vm_SymbolInit_SACATUAL;
   #pragma data_seg()
#endif

HB_FUNC( SACATUAL )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'A', 'T', 'U', 'A', 'L', 0, 
	HB_P_LOCALNEARSETSTR, 2, 25, 0,	/* MTITULO 25*/
	'M', 'A', 'N', 'U', 'T', 'E', 'N', 'C', 'A', 'O', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', ' ', 'M', 'O', 'R', 'T', 'O', 0, 
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* I 0*/
/* 00052 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MDIAS */
/* 00072 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00082 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 23, 0,	/* LBA 23*/
/* 00088 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_LOCALNEARSETINT, 6, 79, 0,	/* CBA 79*/
/* 00094 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00103 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00120 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00148 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'E', ' ', 'I', 'M', 'P', 'O', 'R', 'T', 'A', 'N', 'T', 'E', ' ', 'q', 'u', 'e', ' ', 't', 'o', 'd', 'o', 's', ' ', 'o', 's', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'i', 's', ' ', 'e', 's', 't', 'e', 'j', 'a', 'm', ' ', 'f', 'o', 'r', 'a', ' ', 'd', 'e', ' ', 'f', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'q', 'u', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00247 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	's', 'e', 'j', 'a', ' ', 'f', 'e', 'i', 't', 'o', ' ', 'e', 's', 's', 'a', ' ', 'r', 'o', 't', 'i', 'n', 'a', ',', ' ', 'C', 'a', 's', 'o', ' ', 'c', 'o', 'n', 't', 'r', 'a', 'r', 'i', 'o', ' ', 'p', 'o', 'd', 'e', ' ', 'o', 'c', 'o', 'r', 'r', 'e', 'r', ' ', 's', 'e', 'r', 'i', 'o', 's', ' ', 'p', 'r', 'o', 'b', 'l', 'e', 'm', 'a', 's', 0, 
	HB_P_DOSHORT, 1,
/* 00340 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* SETCOLOR */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'I', '*', 0, 
	HB_P_DOSHORT, 1,
/* 00352 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'M', 'P', 'O', 'R', 'T', 'A', 'N', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 00387 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 2,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00395 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 8,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 9, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 00448) */
/* 00424 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 10,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
/* 00436 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00443 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00448 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'D', 'a', 't', 'a', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00501 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 't', 'u', 'a', 'l', '.', 'T', 'i', 't', 'u', 'l', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', '.', '/', 'A', ' ', 'P', 'A', 'G', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00553 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_LOCALNEARSETSTR, 8, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00561 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_LOCALNEARSETSTR, 12, 2, 0,	/* MDOC 2*/
	' ', 0, 
/* 00569 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDIAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00614) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00619) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'i', 'a', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDIAS */
	HB_P_PUSHSYMNEAR, 16,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00650) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00651) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 17, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00669 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 12,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 15,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MDOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00714) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00719) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MDOC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 17, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 14, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00768 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 18,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 14, 0,	/* GETLIST */
/* 00790 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 19,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00811) */
	HB_P_PUSHLOCALNEAR, 8,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00825) */
/* 00813 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00820 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00825 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ' ', 'a', 'c', 'i', 'm', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* MOP */
/* 00871 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHLOCALNEAR, 13,	/* MOP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00892) */
	HB_P_PUSHSYMNEAR, 19,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00906) */
/* 00894 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00901 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00906 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 21,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', 's', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00941 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'1', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'C', 'A', 'I', 'X', 'A', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01025 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01086 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'2', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'M', 'O', 'V', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01168 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01231 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'3', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01315 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01380 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'6', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'P', 'E', 'D', '_', 'E', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01464 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01528 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'7', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'P', 'E', 'D', '_', 'S', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01612 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', 'a', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01706 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'8', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'T', 'O', 'T', 'N', 'T', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01790 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'o', 't', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01854 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHLOCALNEAR, 12,	/* MDOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 88, 1,	/* 344 (abs: 02207) */
/* 01866 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 20, 0,	/* 20*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'9', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'R', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 01949 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02036 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'1', '0', '>', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'D', 'U', 'P', 'P', '.', 'D', 'B', 'F', '.', '.', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 02120 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 24,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDIAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02207 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_MESSAGE, 22, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 23,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02231 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 5,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'F', ' ', 'I', ' ', 'M', ' ', ' ', ' ', 'D', ' ', 'A', ' ', ' ', ' ', 'A', ' ', 'T', ' ', 'U', ' ', 'A', ' ', 'L', ' ', 'I', ' ', 'Z', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'O', ' ', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 02297 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 25,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02306 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02313 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02318 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

