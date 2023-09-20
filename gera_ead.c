/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <gera_ead.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\siachb\gera_ead.prg /q /oC:\helio\siachb\gera_ead.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2022.06.08 11:23:12 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "gera_ead.prg"

HB_FUNC( GERA_EAD );
HB_FUNC( GERA_MD5 );
HB_FUNC_EXTERN( CURDRIVE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( AT );
HB_FUNC_EXTERN( FOPEN );
HB_FUNC_EXTERN( FSEEK );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( HB_MD5FILE );
HB_FUNC_EXTERN( INKEY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GERA_EAD )
{ "GERA_EAD", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( GERA_EAD )}, NULL },
{ "CURDRIVE", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDRIVE )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "MCHV_PRIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "AT", {HB_FS_PUBLIC}, {HB_FUNCNAME( AT )}, NULL },
{ "FOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOPEN )}, NULL },
{ "FSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( FSEEK )}, NULL },
{ "GERA_MD5", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GERA_MD5 )}, NULL },
{ "CMD5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "HB_MD5FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_MD5FILE )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_GERA_EAD )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_GERA_EAD
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_GERA_EAD = hb_vm_SymbolInit_GERA_EAD;
   #pragma data_seg()
#endif

HB_FUNC( GERA_EAD )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 17, 0,	/* 17 */
	HB_P_LOCALNEARSETSTR, 3, 9, 0,	/* CFILETEMP1 9*/
	'A', 'R', 'Q', '1', '.', 'T', 'M', 'P', 0, 
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 18 */
	HB_P_LOCALNEARSETSTR, 4, 9, 0,	/* CFILETEMP2 9*/
	'A', 'R', 'Q', '2', '.', 'T', 'M', 'P', 0, 
/* 00034 */ HB_P_LINEOFFSET, 3,	/* 20 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* ABUFFER */
/* 00041 */ HB_P_LINEOFFSET, 4,	/* 21 */
	HB_P_LOCALNEARSETSTR, 7, 1, 0,	/* CREPLY 1*/
	0, 
/* 00048 */ HB_P_LINEOFFSET, 5,	/* 22 */
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* CSIGNATURE 1*/
	0, 
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 23 */
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* MCAMINHO 1*/
	0, 
/* 00062 */ HB_P_LINEOFFSET, 12,	/* 29 */
	HB_P_PUSHSYMNEAR, 1,	/* CURDRIVE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	':', 92, 'A', 'C', 'B', 'R', 'M', 'O', 'N', 'I', 'T', 'O', 'R', 92, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MCAMINHO */
/* 00089 */ HB_P_LINEOFFSET, 17,	/* 34 */
	HB_P_PUSHSYMNEAR, 2,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CFILETEMP1 */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* NHANDLE */
/* 00101 */ HB_P_LINEOFFSET, 19,	/* 36 */
	HB_P_PUSHSYMNEAR, 3,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NHANDLE */
	HB_P_PUSHVARIABLE, 4, 0,	/* MCHV_PRIV */
	HB_P_DOSHORT, 2,
/* 00113 */ HB_P_LINEOFFSET, 20,	/* 37 */
	HB_P_PUSHSYMNEAR, 5,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NHANDLE */
	HB_P_DOSHORT, 1,
/* 00122 */ HB_P_LINEOFFSET, 22,	/* 39 */
	HB_P_PUSHSYMNEAR, 6,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCAMINHO */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'O', 'P', 'E', 'N', 'S', 'S', 'L', '.', 'E', 'X', 'E', ' ', 'd', 'g', 's', 't', ' ', '-', 'm', 'd', '5', ' ', '-', 's', 'i', 'g', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CFILETEMP1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', 'o', 'u', 't', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CFILETEMP2 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', 'h', 'e', 'x', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CFILE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00192 */ HB_P_LINEOFFSET, 23,	/* 40 */
	HB_P_PUSHSYMNEAR, 7,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CFILETEMP2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* CREPLY */
/* 00203 */ HB_P_LINEOFFSET, 24,	/* 41 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', 'A', 'D', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CREPLY */
	HB_P_PUSHSYMNEAR, 9,	/* AT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* CREPLY */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	10, 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* CSIGNATURE */
/* 00240 */ HB_P_LINEOFFSET, 25,	/* 42 */
	HB_P_PUSHSYMNEAR, 10,	/* FOPEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CFILE */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* NHANDLE */
/* 00253 */ HB_P_LINEOFFSET, 26,	/* 43 */
	HB_P_PUSHSYMNEAR, 11,	/* FSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NHANDLE */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 3,
/* 00265 */ HB_P_LINEOFFSET, 27,	/* 44 */
	HB_P_PUSHSYMNEAR, 3,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NHANDLE */
	HB_P_PUSHLOCALNEAR, 8,	/* CSIGNATURE */
	HB_P_DOSHORT, 2,
/* 00276 */ HB_P_LINEOFFSET, 28,	/* 45 */
	HB_P_PUSHSYMNEAR, 5,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* NHANDLE */
	HB_P_DOSHORT, 1,
/* 00285 */ HB_P_LINEOFFSET, 30,	/* 47 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00290 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GERA_MD5 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 98, 0,	/* 98 */
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* CMD5 */
	HB_P_DOSHORT, 1,
/* 00013 */ HB_P_LINEOFFSET, 1,	/* 99 */
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 1,	/* 393 (abs: 00412) */
/* 00022 */ HB_P_LINEOFFSET, 2,	/* 100 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'G', 'e', 'r', 'a', 'r', ' ', 'o', ' ', 'M', 'o', 'd', 'u', 'l', 'o', ' ', 'M', 'D', '5', 0, 
	HB_P_DOSHORT, 5,
/* 00058 */ HB_P_LINEOFFSET, 3,	/* 101 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00094 */ HB_P_LINEOFFSET, 4,	/* 102 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'G', 'e', 'r', 'a', 'd', 'o', ' ', 'o', ' ', 'M', 'D', '5', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00131 */ HB_P_LINEOFFSET, 5,	/* 103 */
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_PUSHSYMNEAR, 18,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSYMNEAR, 19,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* CNOMEARQUIVO */
/* 00153 */ HB_P_LINEOFFSET, 6,	/* 104 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* CNOMEARQUIVO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00191) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00196) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'n', 'o', 'm', 'e', 'a', 'r', 'q', 'u', 'i', 'v', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'S', '8', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* CNOMEARQUIVO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00250 */ HB_P_LINEOFFSET, 7,	/* 105 */
	HB_P_PUSHSYMNEAR, 25,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 22, 0,	/* GETLIST */
/* 00272 */ HB_P_LINEOFFSET, 8,	/* 106 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00298) */
/* 00284 */ HB_P_LINEOFFSET, 9,	/* 107 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00291 */ HB_P_LINEOFFSET, 10,	/* 108 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00298 */ HB_P_LINEOFFSET, 12,	/* 110 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00345) */
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 00447) */
/* 00347 */ HB_P_LINEOFFSET, 13,	/* 111 */
	HB_P_PUSHSYMNEAR, 29,	/* HB_MD5FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* CMD5 */
/* 00359 */ HB_P_LINEOFFSET, 14,	/* 112 */
	HB_P_PUSHSYMNEAR, 16,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* CMD5 */
	HB_P_DOSHORT, 1,
/* 00378 */ HB_P_LINEOFFSET, 15,	/* 113 */
	HB_P_PUSHSYMNEAR, 30,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 2,	/* 0.10, 10, 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00398 */ HB_P_LINEOFFSET, 16,	/* 114 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00405 */ HB_P_LINEOFFSET, 17,	/* 115 */
	HB_P_PUSHVARIABLE, 13, 0,	/* CMD5 */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00412 */ HB_P_LINEOFFSET, 20,	/* 118 */
	HB_P_PUSHSYMNEAR, 29,	/* HB_MD5FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNOMEARQUIVO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* CMD5 */
/* 00424 */ HB_P_LINEOFFSET, 21,	/* 119 */
	HB_P_PUSHSYMNEAR, 8,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* CMD5 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 13, 0,	/* CMD5 */
/* 00440 */ HB_P_LINEOFFSET, 22,	/* 120 */
	HB_P_PUSHVARIABLE, 13, 0,	/* CMD5 */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00447 */ HB_P_LINEOFFSET, 25,	/* 123 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00454 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

