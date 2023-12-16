/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACDASH.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACDASH.PRG /q /oC:\hti\SISCOM\SACDASH.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:52 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACDASH.PRG"

HB_FUNC( SACDASH );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FECHA_TELA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACDASH )
{ "SACDASH", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACDASH )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MES_4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACDASH )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACDASH
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACDASH = hb_vm_SymbolInit_SACDASH;
   #pragma data_seg()
#endif

HB_FUNC( SACDASH )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 11, 0,	/* 11 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'D', 'A', 'S', 'H', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* POINT 0*/
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MMES1 0*/
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MMES2 0*/
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MMES3 0*/
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOTAL 0*/
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* MP_MES1 0*/
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MP_MES2 0*/
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MP_MES3 0*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MP_TOTAL 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_POSICAO */
/* 00088 */ HB_P_LINEOFFSET, 2,	/* 13 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'V', 'I', 'S', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00150) */
/* 00145 */ HB_P_LINEOFFSET, 3,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00150 */ HB_P_LINEOFFSET, 5,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
/* 00167 */ HB_P_LINEOFFSET, 6,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'V', 'I', 'S', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00214 */ HB_P_LINEOFFSET, 9,	/* 20 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_POSICAO */
/* 00221 */ HB_P_LINEOFFSET, 11,	/* 22 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_MES_1 */
/* 00228 */ HB_P_LINEOFFSET, 12,	/* 23 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 165,	/* 165 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 'c', 'a', 's', 't', '(', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', '(', 'c', 'u', 'r', 'r', 'e', 'n', 't', '_', 'd', 'a', 't', 'e', ' ', 'f', 'r', 'o', 'm', ' ', '1', ' ', 'f', 'o', 'r', ' ', '8', ')', ' ', '|', '|', ' ', 39, '0', '1', 39, ' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ',', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '1', ',', 'c', 'a', 's', 't', '(', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', '(', 'c', 'u', 'r', 'r', 'e', 'n', 't', '_', 'd', 'a', 't', 'e', ' ', 'f', 'r', 'o', 'm', ' ', '1', ' ', 'f', 'o', 'r', ' ', '8', ')', ' ', '|', '|', ' ', 39, '0', '1', 39, ' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ')', ' ', '-', ' ', '1', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'd', 'b', '$', 'd', 'a', 't', 'a', 'b', 'a', 's', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* M_MES_1 */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00413 */ HB_P_LINEOFFSET, 14,	/* 25 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00437 */ HB_P_LINEOFFSET, 16,	/* 27 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_MES_2 */
/* 00444 */ HB_P_LINEOFFSET, 17,	/* 28 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '-', '1', ',', ' ', 'c', 'a', 's', 't', '(', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ')', ',', ' ', 'c', 'a', 's', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ' ', '-', ' ', '1', ' ', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'd', 'b', '$', 'd', 'a', 't', 'a', 'b', 'a', 's', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* M_MES_2 */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00577 */ HB_P_LINEOFFSET, 19,	/* 30 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00601 */ HB_P_LINEOFFSET, 21,	/* 32 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* M_MES_3 */
/* 00608 */ HB_P_LINEOFFSET, 22,	/* 33 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '-', '2', ',', ' ', 'c', 'a', 's', 't', '(', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'a', 's', ' ', 'd', 'a', 't', 'e', ')', ')', ',', ' ', 'c', 'a', 's', 't', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ' ', '-', ' ', '1', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'd', 'b', '$', 'd', 'a', 't', 'a', 'b', 'a', 's', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* M_MES_3 */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00739 */ HB_P_LINEOFFSET, 24,	/* 35 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00763 */ HB_P_LINEOFFSET, 30,	/* 41 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 's', 'e', 'n', '.', 's', 'n', 'o', 'm', 'e', ',', 's', 'e', 'n', '.', 's', 'c', 'o', 't', 'a', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 00810 */ HB_P_LINEOFFSET, 31,	/* 42 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 00922 */ HB_P_LINEOFFSET, 32,	/* 43 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01034 */ HB_P_LINEOFFSET, 33,	/* 44 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01146 */ HB_P_LINEOFFSET, 34,	/* 45 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01258 */ HB_P_LINEOFFSET, 35,	/* 46 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 142,	/* 142 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'm', 'o', 'v', ' ', 'J', 'O', 'I', 'N', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 's', 'e', 'n', ' ', 'O', 'N', ' ', 's', 'e', 'n', '.', 's', 'c', 'o', 'd', '_', 'o', 'p', ' ', '=', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01411 */ HB_P_LINEOFFSET, 36,	/* 47 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01503 */ HB_P_LINEOFFSET, 37,	/* 48 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01569 */ HB_P_LINEOFFSET, 38,	/* 49 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 's', 'e', 'n', '.', 's', 'n', 'o', 'm', 'e', ',', 's', 'e', 'n', '.', 's', 'c', 'o', 't', 'a', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', '7', ' ', 'D', 'E', 'S', 'C', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 01668 */ HB_P_LINEOFFSET, 49,	/* 60 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 10, 0,	/* M_MES_4 */
/* 01676 */ HB_P_LINEOFFSET, 50,	/* 61 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 10, 0,	/* M_MES_4 */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01697 */ HB_P_LINEOFFSET, 51,	/* 62 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01721 */ HB_P_LINEOFFSET, 57,	/* 68 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* MCONS_VEND */
/* 01728 */ HB_P_LINEOFFSET, 58,	/* 69 */
	HB_P_LOCALNEARSETINT, 12, 0, 0,	/* MTOTAL 0*/
	HB_P_PUSHLOCALNEAR, 12,	/* MTOTAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MMES3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MMES2 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MMES1 */
	HB_P_POPLOCALNEAR, 7,	/* I */
/* 01747 */ HB_P_LINEOFFSET, 59,	/* 70 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* M_MES_4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 175, 1,	/* 431 (abs: 02195) */
/* 01767 */ HB_P_LINEOFFSET, 60,	/* 71 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02122 */ HB_P_LINEOFFSET, 62,	/* 73 */
	HB_P_PUSHLOCALNEAR, 9,	/* MMES1 */
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MMES1 */
/* 02138 */ HB_P_LINEOFFSET, 63,	/* 74 */
	HB_P_PUSHLOCALNEAR, 10,	/* MMES2 */
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MMES2 */
/* 02154 */ HB_P_LINEOFFSET, 64,	/* 75 */
	HB_P_PUSHLOCALNEAR, 11,	/* MMES3 */
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MMES3 */
/* 02170 */ HB_P_LINEOFFSET, 65,	/* 76 */
	HB_P_PUSHLOCALNEAR, 12,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 10, 0,	/* M_MES_4 */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 12,	/* MTOTAL */
/* 02186 */ HB_P_LINEOFFSET, 67,	/* 78 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 73, 254,	/* -439 (abs: 01753) */
/* 02195 */ HB_P_LINEOFFSET, 68,	/* 79 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 92,	/* 92 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02311 */ HB_P_LINEOFFSET, 69,	/* 80 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'T', 'O', 'T', 'A', 'I', 'S', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MMES1 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MMES2 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MMES3 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02489 */ HB_P_LINEOFFSET, 71,	/* 82 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* MCONS_PROD */
/* 02496 */ HB_P_LINEOFFSET, 72,	/* 83 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'm', 'o', 'v', '.', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 02533 */ HB_P_LINEOFFSET, 73,	/* 84 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 02645 */ HB_P_LINEOFFSET, 74,	/* 85 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 02757 */ HB_P_LINEOFFSET, 75,	/* 86 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 02869 */ HB_P_LINEOFFSET, 76,	/* 87 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	',', 's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'm', 'o', 'v', '.', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'a', 'n', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 8,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	',', ' ', '(', 'm', 'o', 'v', '.', 'v', 'l', '_', 'v', 'e', 'n', 'd', ' ', '*', ' ', 'm', 'o', 'v', '.', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', '0', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 02981 */ HB_P_LINEOFFSET, 77,	/* 88 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 94,	/* 94 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'e', 'v', 'o', 'l', 'u', 'c', 'a', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 03086 */ HB_P_LINEOFFSET, 78,	/* 89 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 39, 'C', 'U', 'P', 'O', 'M', 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'P', 'D', '%', 39, ' ', 'O', 'R', ' ', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'l', 'i', 'k', 'e', ' ', 39, 'C', 'P', '%', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 03178 */ HB_P_LINEOFFSET, 79,	/* 90 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'T', 'R', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 03244 */ HB_P_LINEOFFSET, 80,	/* 91 */
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'm', 'o', 'v', '.', 'c', 'o', 'd', 'i', 'g', 'o', ',', 'm', 'o', 'v', '.', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', '6', ' ', 'D', 'E', 'S', 'C', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 9, 0,	/* CCOMM */
/* 03333 */ HB_P_LINEOFFSET, 93,	/* 104 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 9, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 6, 0,	/* MCONS_PROD */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03354 */ HB_P_LINEOFFSET, 94,	/* 105 */
	HB_P_MESSAGE, 6, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 7,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03378 */ HB_P_LINEOFFSET, 95,	/* 106 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSYMNEAR, 3,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 2,
/* 03398 */ HB_P_LINEOFFSET, 96,	/* 107 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 2,
/* 03466 */ HB_P_LINEOFFSET, 97,	/* 108 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03631 */ HB_P_LINEOFFSET, 98,	/* 109 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSYMNEAR, 3,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 2,
/* 03651 */ HB_P_LINEOFFSET, 100,	/* 111 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MP_TOTAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MP_MES3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MP_MES2 */
	HB_P_POPLOCALNEAR, 13,	/* MP_MES1 */
/* 03670 */ HB_P_LINEOFFSET, 101,	/* 112 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 03929) */
/* 03689 */ HB_P_LINEOFFSET, 102,	/* 113 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03860 */ HB_P_LINEOFFSET, 103,	/* 114 */
	HB_P_PUSHLOCALNEAR, 13,	/* MP_MES1 */
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MP_MES1 */
/* 03875 */ HB_P_LINEOFFSET, 104,	/* 115 */
	HB_P_PUSHLOCALNEAR, 14,	/* MP_MES2 */
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MP_MES2 */
/* 03890 */ HB_P_LINEOFFSET, 105,	/* 116 */
	HB_P_PUSHLOCALNEAR, 15,	/* MP_MES3 */
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MP_MES3 */
/* 03905 */ HB_P_LINEOFFSET, 106,	/* 117 */
	HB_P_PUSHLOCALNEAR, 16,	/* MP_TOTAL */
	HB_P_PUSHLOCALNEAR, 6,	/* MCONS_PROD */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 16,	/* MP_TOTAL */
/* 03920 */ HB_P_LINEOFFSET, 108,	/* 119 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 6, 255,	/* -250 (abs: 03676) */
/* 03929 */ HB_P_LINEOFFSET, 109,	/* 120 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 100,	/* 100 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 2,
/* 04040 */ HB_P_LINEOFFSET, 110,	/* 121 */
	HB_P_PUSHSYMNEAR, 12,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', ' ', 'T', 'O', 'T', 'A', 'I', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MP_MES1 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MP_MES2 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MP_MES3 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MP_TOTAL */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04207 */ HB_P_LINEOFFSET, 112,	/* 123 */
	HB_P_PUSHSYMNEAR, 17,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 't', 'a', ' ', 'R', '$', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_MES_1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', ' ', ' ', 'D', 'i', 'f', '.', 'C', 'o', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_MES_2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', ' ', ' ', ' ', ' ', 'D', 'i', 'f', '.', 'C', 'o', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 13,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* M_MES_3 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', ' ', ' ', ' ', ' ', 'D', 'i', 'f', '.', 'C', 'o', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04396 */ HB_P_LINEOFFSET, 113,	/* 124 */
	HB_P_PUSHSYMNEAR, 19,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 04411 */ HB_P_LINEOFFSET, 114,	/* 125 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04419 */ HB_P_LINEOFFSET, 115,	/* 126 */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHLOCALNEAR, 5,	/* MCONS_VEND */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 8,	/* POINT */
	HB_P_PUSHSYMNEAR, 20,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04454 */ HB_P_LINEOFFSET, 117,	/* 128 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 04468) */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 04481) */
/* 04468 */ HB_P_LINEOFFSET, 119,	/* 130 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 254,	/* -271 (abs: 04207) */
/* 04481 */ HB_P_LINEOFFSET, 123,	/* 134 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 75, 239,	/* -4277 (abs: 00214) */
/* 04494 */ HB_P_LINEOFFSET, 127,	/* 138 */
	HB_P_PUSHSYMNEAR, 23,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04501 */ HB_P_LINEOFFSET, 128,	/* 139 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04506 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

