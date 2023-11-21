/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacmens.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacmens.prg /q /oC:\hti\SISCOM\sacmens.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:41 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacmens.prg"

HB_FUNC( SACMENS );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ROUND );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACMENS )
{ "SACMENS", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACMENS )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIP_TERM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROUND )}, NULL },
{ "Y", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACMENS )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACMENS
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACMENS = hb_vm_SymbolInit_SACMENS;
   #pragma data_seg()
#endif

HB_FUNC( SACMENS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 17, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'M', 'E', 'N', 'S', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MOBS */
	HB_P_LOCALNEARSETSTR, 16, 1, 0,	/* MCPF_CNPJ 1*/
	0, 
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MPERC_REAJ 0*/
/* 00041 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'O', 0, 
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 8,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 3,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MARQ */
	HB_P_PUSHSYMNEAR, 5,	/* MTIP_TERM */
	HB_P_PUSHSYMNEAR, 6,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 7,	/* CONS_CLI */
	HB_P_DOSHORT, 6,
	HB_P_POPVARIABLE, 7, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_POPVARIABLE, 5, 0,	/* MTIP_TERM */
	HB_P_POPVARIABLE, 4, 0,	/* MARQ */
	HB_P_POPVARIABLE, 3, 0,	/* MIMP_TIPO */
/* 00091 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'G', 'E', 'R', 'A', 'R', ' ', 'M', 'E', 'N', 'S', 'A', 'L', 'I', 'D', 'A', 'D', 'E', 'S', ' ', 'D', 'O', 'S', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00156) */
/* 00151 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00156 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00166 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_LOCALNEARSETSTR, 4, 2, 0,	/* OPCAO 2*/
	' ', 0, 
/* 00174 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MVALOR 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* MVALOR */
	HB_P_POPLOCALNEAR, 7,	/* MQUANTD */
/* 00184 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'G', 'E', 'R', 'A', 'R', ' ', 'M', 'E', 'N', 'S', 'A', 'L', 'I', 'D', 'A', 'D', 'E', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00221 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHMEMVAR, 12, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 2, 0,	/* MTIPO_IMP */
/* 00234 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MPERC_REAJ 0*/
	HB_P_PUSHLOCALNEAR, 17,	/* MPERC_REAJ */
	HB_P_POPVARIABLE, 6, 0,	/* MCOD_CLI */
/* 00245 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_LOCALNEARSETSTR, 5, 3, 0,	/* MMES 3*/
	' ', ' ', 0, 
/* 00254 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00323 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'M', 'E', 'S', 'E', 'S', ' ', 'p', '/', 'G', 'e', 'r', 'a', 'r', ' ', 'M', 'e', 'n', 's', 'a', 'l', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00392 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00461 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'd', 'e', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00530 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'a', 'r', 'c', 'e', 'l', 'a', 's', ' ', 'A', ' ', 'S', 'E', 'R', ' ', 'G', 'E', 'R', 'A', 'D', 'A', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00599 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'a', 'r', 'c', 'e', 'l', 'a', 's', ' ', 'G', 'E', 'R', 'A', 'D', 'A', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00668 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'a', 'r', 'c', 'e', 'l', 'a', 's', ' ', 'Q', 'U', 'E', ' ', 'F', 'A', 'L', 'T', 'A', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00737 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', 's', ' ', 'p', 'a', 'r', 'c', 'e', 'l', 'a', 's', ' ', 'g', 'e', 'r', 'a', 'd', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00806 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MQUANTD */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00837 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00881 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 52, 0,	/* 52 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	2, 0,	/* LCI */
	3, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 21,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 00978) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00960) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 20,	/* 20 (abs: 00978) */
	HB_P_PUSHSYMNEAR, 23,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 52, 0,	/* 52*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 73,	/* 73 */
	HB_P_PUSHSYMNEAR, 24,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01068 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 01090 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01105) */
	HB_P_JUMP, 208, 9,	/* 2512 (abs: 03614) */
/* 01105 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 01137) */
/* 01117 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 23,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 52, 0,	/* 52*/
	HB_P_DOSHORT, 3,
/* 01137 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MMES */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01182) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01187) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'm', 'e', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 87, 0,	/* 87 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MMES */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'1', ' ', ',', '2', ' ', ',', '3', ' ', ',', '4', ' ', ',', '5', ' ', ',', '6', ' ', ',', '7', ' ', ',', '8', ' ', ',', '9', ' ', ',', '1', '0', ',', '1', '1', ',', '1', '2', ',', '1', '3', ',', '1', '4', ',', '1', '5', ',', '1', '6', ',', '1', '7', ',', '1', '8', ',', '1', '9', ',', '2', '0', ',', '2', '1', ',', '2', '2', ',', '2', '3', ',', '2', '4', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01304 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MOBS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01349) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01354) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'@', 'S', '3', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01387 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 17,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 18,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 20,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPERC_REAJ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01432) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01437) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'e', 'r', 'c', '_', 'r', 'e', 'a', 'j', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01480 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 01502 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01517) */
	HB_P_JUMP, 52, 8,	/* 2100 (abs: 03614) */
/* 01517 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 28,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 01564 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01578) */
	HB_P_JUMP, 182, 250,	/* -1354 (abs: 00221) */
/* 01578 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_CONTR */
/* 01585 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_LOCALNEARSETSTR, 9, 57, 0,	/* CCOMM 57*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'o', 'n', 't', 'r', 'a', 't', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'a', 't', 'i', 'v', 'o', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'v', 'l', 'r', 'm', 'e', 'n', 's', ' ', '>', ' ', '0', 0, 
/* 01648 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 01693) */
/* 01660 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHLOCALNEAR, 9,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* CCOMM */
/* 01693 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 9,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 10, 0,	/* CONS_CONTR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01713 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01737 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 01796) */
/* 01750 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_PUSHSYMNEAR, 33,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'c', 'o', 'n', 't', 'r', 'a', 't', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'g', 'e', 'r', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 220, 249,	/* -1572 (abs: 00221) */
/* 01796 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01805 */ HB_P_LINEOFFSET, 56,	/* 63 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01853 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01861 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 35, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MVALOR */
	HB_P_POPLOCALNEAR, 7,	/* MQUANTD */
/* 01873 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* I */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 80, 5,	/* 1360 (abs: 03250) */
/* 01893 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_PUSHSYMNEAR, 36,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01912 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* M_MES */
/* 01938 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* M_ANO */
/* 01962 */ HB_P_LINEOFFSET, 63,	/* 70 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* MQUANTD 1*/
/* 01968 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 7, 0,	/* CONS_CLI */
/* 01976 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 7, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02049 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02073 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02090) */
	HB_P_JUMP, 129, 4,	/* 1153 (abs: 03240) */
/* 02090 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERC_REAJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 02137) */
/* 02101 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 41,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERC_REAJ */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPOP,
/* 02137 */ HB_P_LINEOFFSET, 74,	/* 81 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 42, 0,	/* Y */
/* 02143 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 42, 0,	/* Y */
	HB_P_PUSHVARIABLE, 42, 0,	/* Y */
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MMES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 54, 4,	/* 1078 (abs: 03238) */
/* 02163 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 02194) */
/* 02180 */ HB_P_LINEOFFSET, 77,	/* 84 */
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 16,	/* MCPF_CNPJ */
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 02206) */
/* 02194 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 16,	/* MCPF_CNPJ */
/* 02206 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* M_MES 1*/
/* 02212 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHLOCALNEAR, 13,	/* M_MES */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02233) */
/* 02221 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_LOCALNEARADDINT, 13, 244, 255,	/* M_MES -12*/
/* 02227 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* M_ANO 1*/
/* 02233 */ HB_P_LINEOFFSET, 89,	/* 96 */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_MES */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_ANO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MDOCUMENTO */
/* 02275 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_PUSHSYMNEAR, 43,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* M_MES */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 02310) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'3', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02319) */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '8', 0, 
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 02328) */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* M_MES */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_ANO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 15,	/* MVENC */
/* 02368 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_DUPR */
/* 02375 */ HB_P_LINEOFFSET, 92,	/* 99 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'M', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDOCUMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02528 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02552 */ HB_P_LINEOFFSET, 94,	/* 101 */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 151, 2,	/* 663 (abs: 03226) */
/* 02566 */ HB_P_LINEOFFSET, 126,	/* 133 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 225,	/* 225 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', '(', 't', 'i', 'p', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', 9, ',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ' ', ' ', 9, ',', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', ' ', ' ', ' ', 9, ',', 'f', 'o', 'r', 'n', 'e', 'c', ' ', ' ', ' ', ' ', ' ', 9, ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', 9, ',', 'e', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', ' ', 9, ',', 'v', 'e', 'n', 'c', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'v', 'a', 'l', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', ' ', ' ', 9, ',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', ' ', ' ', 9, ',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', ' ', 9, ',', 'c', '_', 'c', 'p', 'f', 'c', 'n', 'p', 'j', ' ', ' ', ' ', 9, ',', 'o', 'b', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'M', 'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDOCUMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 40, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 45, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MCPF_CNPJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MOBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03055 */ HB_P_LINEOFFSET, 127,	/* 134 */
	HB_P_PUSHLOCALNEAR, 8,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MVALOR */
/* 03071 */ HB_P_LINEOFFSET, 128,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03080 */ HB_P_LINEOFFSET, 129,	/* 136 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MQUANTD */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03123 */ HB_P_LINEOFFSET, 130,	/* 137 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_CONTR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 7,	/* MQUANTD */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03174 */ HB_P_LINEOFFSET, 131,	/* 138 */
	HB_P_PUSHSYMNEAR, 13,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 46, 0,	/* 46*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 14,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03218 */ HB_P_LINEOFFSET, 132,	/* 139 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03226 */ HB_P_LINEOFFSET, 134,	/* 141 */
	HB_P_PUSHVARIABLE, 42, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 42, 0,	/* Y */
	HB_P_JUMP, 194, 251,	/* -1086 (abs: 02149) */
/* 03238 */ HB_P_LINEOFFSET, 135,	/* 142 */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* I */
	HB_P_JUMP, 168, 250,	/* -1368 (abs: 01879) */
/* 03250 */ HB_P_LINEOFFSET, 136,	/* 143 */
	HB_P_PUSHSYMNEAR, 22,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERC_REAJ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 16, 1,	/* 272 (abs: 03531) */
/* 03262 */ HB_P_LINEOFFSET, 137,	/* 144 */
	HB_P_PUSHSYMNEAR, 46,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'n', 'd', 'o', ' ', 'o', 's', ' ', 'c', 'o', 'n', 't', 'r', 'a', 't', 'o', 's', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03300 */ HB_P_LINEOFFSET, 138,	/* 145 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 7, 0,	/* CONS_CLI */
/* 03308 */ HB_P_LINEOFFSET, 139,	/* 146 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'o', 'n', 't', 'r', 'a', 't', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 7, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03352 */ HB_P_LINEOFFSET, 140,	/* 147 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03376 */ HB_P_LINEOFFSET, 141,	/* 148 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 35, 0,	/* I */
/* 03382 */ HB_P_LINEOFFSET, 142,	/* 149 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* I */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_PUSHSYMNEAR, 32,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 131, 0,	/* 131 (abs: 03531) */
/* 03403 */ HB_P_LINEOFFSET, 143,	/* 150 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'c', 'o', 'n', 't', 'r', 'a', 't', 'o', ' ', 'S', 'E', 'T', ' ', 'v', 'l', 'r', 'm', 'e', 'n', 's', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* ROUND */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERC_REAJ */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 7, 0,	/* CONS_CLI */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03519 */ HB_P_LINEOFFSET, 144,	/* 151 */
	HB_P_PUSHVARIABLE, 35, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* I */
	HB_P_JUMP, 116, 255,	/* -140 (abs: 03388) */
/* 03531 */ HB_P_LINEOFFSET, 146,	/* 153 */
	HB_P_MESSAGE, 30, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 31,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03555 */ HB_P_LINEOFFSET, 147,	/* 154 */
	HB_P_PUSHSYMNEAR, 33,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'F', 'o', 'i', ' ', 'g', 'e', 'r', 'a', 'd', 'a', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'm', 'e', 'n', 's', 'a', 'l', 'i', 'd', 'a', 'd', 'e', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03600 */ HB_P_LINEOFFSET, 148,	/* 155 */
	HB_P_PUSHSYMNEAR, 47,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 19, 0,	/* GETLIST */
/* 03614 */ HB_P_LINEOFFSET, 151,	/* 158 */
	HB_P_PUSHSYMNEAR, 48,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03621 */ HB_P_LINEOFFSET, 152,	/* 159 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03626 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

