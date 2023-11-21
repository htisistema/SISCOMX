/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACCHK_NF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SACCHK_NF.PRG /q /oC:\hti\SISCOM\SACCHK_NF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:54:03 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACCHK_NF.PRG"

HB_FUNC( SACCHK_NF );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( INICIA_ACBR );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( IBR_COMANDO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ATENCAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACCHK_NF )
{ "SACCHK_NF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACCHK_NF )}, NULL },
{ "MCHNFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDOCUMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAMNFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "INICIA_ACBR", {HB_FS_PUBLIC}, {HB_FUNCNAME( INICIA_ACBR )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "P", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MMDFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAMINHO2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOTA_XML", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IBR_COMANDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_COMANDO )}, NULL },
{ "MRETORNO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACCHK_NF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACCHK_NF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACCHK_NF = hb_vm_SymbolInit_SACCHK_NF;
   #pragma data_seg()
#endif

HB_FUNC( SACCHK_NF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_DEMO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_CAMINHO */
	HB_P_LOCALNEARSETSTR, 4, 1, 0,	/* MCAMINHO 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* MCAMINHO1 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* MCAM_NOTA 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* MCAM_NOTA1 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_AUX1 */
/* 00046 */ HB_P_LINEOFFSET, 1,	/* 7 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSYMNEAR, 4,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCHNFE */
	HB_P_PUSHSYMNEAR, 2,	/* MDOCUMENTO */
	HB_P_PUSHSYMNEAR, 3,	/* MCAMNFE */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MCAMNFE */
	HB_P_POPVARIABLE, 2, 0,	/* MDOCUMENTO */
	HB_P_POPVARIABLE, 1, 0,	/* MCHNFE */
/* 00077 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'H', 'E', 'C', 'A', 'G', 'E', 'M', ' ', 'D', 'A', 'S', ' ', 'N', 'F', 'C', 'e', ' ', 'n', 'a', ' ', 's', 'e', 'f', 'a', 'z', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00122 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 6,	/* INICIA_ACBR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 00144) */
/* 00132 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00139 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00144 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 8,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'A', 'C', 'C', 'H', 'K', '_', 'N', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 00163 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 9,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00176 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'A', 'N', 'O', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00214 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'M', 'E', 'S', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00253 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', 's', ' ', 'X', 'M', 'L', ' ', 'N', 'F', 'C', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00292 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00307 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00316 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	' ', 'N', '.', 'N', 'o', 't', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'X', 'M', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00423 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00431 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00446 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 14,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00458 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* MANO */
/* 00479 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* MMES */
/* 00500 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 14,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 00513 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_LOCALNEARSETSTR, 8, 4, 0,	/* MCAM_NOTA 4*/
	'N', 'F', 'E', 0, 
/* 00523 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_LOCALNEARSETSTR, 9, 5, 0,	/* MCAM_NOTA1 5*/
	'N', 'F', 'C', 'E', 0, 
/* 00534 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_LOCALNEARSETSTR, 5, 1, 0,	/* MCAMINHO1 1*/
	0, 
	HB_P_PUSHLOCALNEAR, 5,	/* MCAMINHO1 */
	HB_P_POPLOCALNEAR, 4,	/* MCAMINHO */
/* 00545 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MANO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00583) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00588) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'a', 'n', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00621 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MMES */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00660) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00665) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'm', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00696 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 20, 0,	/* GETLIST */
/* 00718 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00733) */
	HB_P_JUMP, 184, 4,	/* 1208 (abs: 01938) */
/* 00733 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 25,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 26, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 123,	/* 123 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	92, 'N', 'F', 'C', 'E', 92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* MANO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* MMES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MCAM_NOTA1 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 28,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MCAMINHO1 */
/* 00804 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 18,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 21,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MCAMINHO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00843) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00848) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'a', 'm', 'i', 'n', 'h', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 20, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00884 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHSYMNEAR, 23,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 20, 0,	/* GETLIST */
/* 00906 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 24,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00928) */
/* 00918 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 221, 252,	/* -803 (abs: 00122) */
/* 00928 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHSYMNEAR, 30,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 20, 0,	/* GETLIST */
/* 00942 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHSYMNEAR, 31,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'l', 'e', 't', 'a', 'n', 't', 'o', ' ', 'o', 's', ' ', 'X', 'M', 'L', 's', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00973 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 32, 0,	/* P */
	HB_P_POPVARIABLE, 33, 0,	/* I */
/* 00983 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_DEMO */
/* 00990 */ HB_P_LINEOFFSET, 48,	/* 54 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_DEMOSORT */
/* 00997 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_CAMINHO */
/* 01004 */ HB_P_LINEOFFSET, 86,	/* 92 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_CAMINHO */
/* 01011 */ HB_P_LINEOFFSET, 87,	/* 93 */
	HB_P_PUSHSYMNEAR, 34,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCAMINHO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'*', '-', 'n', 'f', 'e', '.', 'x', 'm', 'l', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 10,	/* M_AUX1 */
/* 01044 */ HB_P_LINEOFFSET, 88,	/* 94 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 163, 0,	/* 163 (abs: 01218) */
/* 01058 */ HB_P_LINEOFFSET, 89,	/* 95 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 33, 0,	/* I */
/* 01064 */ HB_P_LINEOFFSET, 90,	/* 96 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 33, 0,	/* I */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 137, 0,	/* 137 (abs: 01218) */
/* 01084 */ HB_P_LINEOFFSET, 91,	/* 97 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 36, 0,	/* MMDFE */
/* 01093 */ HB_P_LINEOFFSET, 92,	/* 98 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 16,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 36, 0,	/* MMDFE */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01189 */ HB_P_LINEOFFSET, 93,	/* 99 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_CAMINHO */
	HB_P_PUSHLOCALNEAR, 10,	/* M_AUX1 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01206 */ HB_P_LINEOFFSET, 94,	/* 100 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 33, 0,	/* I */
	HB_P_JUMP, 111, 255,	/* -145 (abs: 01070) */
/* 01218 */ HB_P_LINEOFFSET, 96,	/* 102 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 33, 0,	/* I */
/* 01224 */ HB_P_LINEOFFSET, 97,	/* 103 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 33, 0,	/* I */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 104, 2,	/* 616 (abs: 01857) */
/* 01244 */ HB_P_LINEOFFSET, 98,	/* 104 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 37, 0,	/* MCAMINHO2 */
/* 01252 */ HB_P_LINEOFFSET, 99,	/* 105 */
	HB_P_PUSHSYMNEAR, 25,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 38, 0,	/* MNOTA_XML */
/* 01277 */ HB_P_LINEOFFSET, 100,	/* 106 */
	HB_P_PUSHSYMNEAR, 15,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MNOTA_XML */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 2, 0,	/* MDOCUMENTO */
/* 01294 */ HB_P_LINEOFFSET, 101,	/* 107 */
	HB_P_PUSHSYMNEAR, 25,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCAMINHO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 38, 0,	/* MNOTA_XML */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 37, 0,	/* MCAMINHO2 */
/* 01310 */ HB_P_LINEOFFSET, 103,	/* 109 */
	HB_P_PUSHSYMNEAR, 31,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'n', 'd', 'o', ' ', 'a', ' ', 'C', 'U', 'P', 'O', 'M', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', 'N', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* MDOCUMENTO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01356 */ HB_P_LINEOFFSET, 104,	/* 110 */
	HB_P_PUSHSYMNEAR, 39,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'N', 'F', 'E', '.', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 'r', 'N', 'F', 'e', '(', 0, 
	HB_P_PUSHVARIABLE, 37, 0,	/* MCAMINHO2 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 40, 0,	/* MRETORNO */
/* 01398 */ HB_P_LINEOFFSET, 105,	/* 111 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'A', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'd', 'o', ' ', 'o', ' ', 'u', 's', 'o', ' ', 'd', 'a', ' ', 'N', 'F', '-', 'e', 0, 
	HB_P_PUSHVARIABLE, 40, 0,	/* MRETORNO */
	HB_P_INSTRING,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 01575) */
/* 01434 */ HB_P_LINEOFFSET, 107,	/* 113 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'K', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPOPPLUS,
/* 01448 */ HB_P_LINEOFFSET, 108,	/* 114 */
	HB_P_MESSAGE, 41, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 42,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'S', 'E', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, ' ', 39, ',', 'c', 'o', 'n', 'j', 'u', 'n', 't', 'a', ' ', ' ', '=', ' ', 39, '*', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* MDOCUMENTO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01548 */ HB_P_LINEOFFSET, 109,	/* 115 */
	HB_P_MESSAGE, 41, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 42,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 218, 0,	/* 218 (abs: 01790) */
/* 01575 */ HB_P_LINEOFFSET, 110,	/* 116 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'R', 'e', 'j', 'e', 'i', 'c', 'a', 'o', ':', ' ', 'N', 'F', '-', 'e', ' ', 'n', 'a', 'o', ' ', 'c', 'o', 'n', 's', 't', 'a', ' ', 'n', 'a', ' ', 'b', 'a', 's', 'e', ' ', 'd', 'e', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'S', 'E', 'F', 'A', 'Z', 0, 
	HB_P_PUSHVARIABLE, 40, 0,	/* MRETORNO */
	HB_P_INSTRING,
	HB_P_JUMPFALSE, 145, 0,	/* 145 (abs: 01780) */
/* 01638 */ HB_P_LINEOFFSET, 111,	/* 117 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'A', 'N', 'C', 0, 
	HB_P_PUSHLOCALREF, 2, 0,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPOPPLUS,
/* 01654 */ HB_P_LINEOFFSET, 112,	/* 118 */
	HB_P_MESSAGE, 41, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 42,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'S', 'E', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 'C', 39, ',', 'c', 'o', 'n', 'j', 'u', 'n', 't', 'a', ' ', ' ', '=', ' ', 39, '*', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 43,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* MDOCUMENTO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01754 */ HB_P_LINEOFFSET, 113,	/* 119 */
	HB_P_MESSAGE, 41, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 42,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 01790) */
/* 01780 */ HB_P_LINEOFFSET, 115,	/* 121 */
	HB_P_PUSHSYMNEAR, 44,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MRETORNO */
	HB_P_DOSHORT, 1,
/* 01790 */ HB_P_LINEOFFSET, 117,	/* 123 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALREF, 2, 0,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPOP,
/* 01811 */ HB_P_LINEOFFSET, 118,	/* 124 */
	HB_P_PUSHVARIABLE, 32, 0,	/* P */
	HB_P_INC,
	HB_P_POPVARIABLE, 32, 0,	/* P */
/* 01820 */ HB_P_LINEOFFSET, 119,	/* 125 */
	HB_P_PUSHSYMNEAR, 10,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHVARIABLE, 32, 0,	/* P */
	HB_P_PLUS,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 11,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_DEMOSORT */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01845 */ HB_P_LINEOFFSET, 120,	/* 126 */
	HB_P_PUSHVARIABLE, 33, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 33, 0,	/* I */
	HB_P_JUMP, 144, 253,	/* -624 (abs: 01230) */
/* 01857 */ HB_P_LINEOFFSET, 121,	/* 127 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_CAMINHO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 01910) */
/* 01870 */ HB_P_LINEOFFSET, 122,	/* 128 */
	HB_P_PUSHSYMNEAR, 44,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', 'a', ' ', 'N', 'O', 'T', 'A', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 7, 249,	/* -1785 (abs: 00122) */
/* 01910 */ HB_P_LINEOFFSET, 125,	/* 131 */
	HB_P_PUSHSYMNEAR, 44,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'F', 'o', 'i', ' ', 'a', ' ', 'c', 'h', 'e', 'c', 'a', 'g', 'e', 'm', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01938 */ HB_P_LINEOFFSET, 128,	/* 134 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01945 */ HB_P_LINEOFFSET, 129,	/* 135 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01950 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}
