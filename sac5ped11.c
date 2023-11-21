/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac5ped11.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\sac5ped11.prg /q /oC:\hti\SISCOM\sac5ped11.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:33 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac5ped11.prg"

HB_FUNC( SAC5PED11 );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( BOLETO2 );
HB_FUNC_EXTERN( BOLETO );
HB_FUNC_EXTERN( BOLE_TERM );
HB_FUNC_EXTERN( FORMULA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5PED11 )
{ "SAC5PED11", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5PED11 )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "M_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_POS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MTIPO_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_DIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "MPONTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "BOLETO2", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOLETO2 )}, NULL },
{ "MFLAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BOLETO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOLETO )}, NULL },
{ "BOLE_TERM", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOLE_TERM )}, NULL },
{ "FORMULA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FORMULA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5PED11 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5PED11
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5PED11 = hb_vm_SymbolInit_SAC5PED11;
   #pragma data_seg()
#endif

HB_FUNC( SAC5PED11 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 10, 0,	/* MPRG 10*/
	'S', 'A', 'C', '5', 'P', 'E', 'D', '1', '1', 0, 
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* MPOINT 0*/
	HB_P_PUSHSYMNEAR, 1,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 1,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MDATA2 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MQUANTD_DOC 0*/
	HB_P_LOCALNEARSETSTR, 6, 2, 0,	/* MPED_ORC 2*/
	'P', 0, 
	HB_P_LOCALNEARSETSTR, 7, 2, 0,	/* MPOCKET 2*/
	'N', 0, 
/* 00076 */ HB_P_LINEOFFSET, 3,	/* 10 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'2', 'a', '.', 'v', 'i', 'a', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* M_PED */
	HB_P_PUSHSYMNEAR, 3,	/* M_POS */
	HB_P_PUSHSYMNEAR, 4,	/* MNUM_PED */
	HB_P_PUSHSYMNEAR, 5,	/* ALI */
	HB_P_PUSHSYMNEAR, 6,	/* MQUANTD */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* MTIPO_PG */
	HB_P_PUSHSYMNEAR, 12,	/* MVIA */
	HB_P_PUSHSYMNEAR, 13,	/* M_DIA */
	HB_P_DOSHORT, 11,
	HB_P_POPVARIABLE, 13, 0,	/* M_DIA */
	HB_P_POPVARIABLE, 12, 0,	/* MVIA */
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 6, 0,	/* MQUANTD */
	HB_P_POPVARIABLE, 5, 0,	/* ALI */
	HB_P_POPVARIABLE, 4, 0,	/* MNUM_PED */
	HB_P_POPVARIABLE, 3, 0,	/* M_POS */
	HB_P_POPVARIABLE, 2, 0,	/* M_PED */
/* 00163 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'V', 'A', 'R', 'I', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', '/', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00237) */
/* 00232 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00237 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_POPVARIABLE, 17, 0,	/* LI */
/* 00244 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_POPVARIABLE, 18, 0,	/* CI */
/* 00251 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_POPVARIABLE, 19, 0,	/* LA */
/* 00258 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_POPVARIABLE, 20, 0,	/* CA */
/* 00265 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'v', 'a', 'r', 'i', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00310 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00323 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 23,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00336 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 24,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00345 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 1,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 4,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 3,	/* MDATA1 */
/* 00368 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00408 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00451 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00495 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', 'o', 'u', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00539 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'A', 'P', 'P', '.', '.', '.', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00583 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 28,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_PUSHVARIABLE, 20, 0,	/* CA */
	HB_P_DOSHORT, 4,
/* 00602 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00611 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00647 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00681 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00712 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 35, 0,	/* 35*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00744 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'N', '.', 'A', 'P', 'P', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00779 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSYMNEAR, 30,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'S', 'e', 'l', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00812 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHVARIABLE, 20, 0,	/* CA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00838 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00846 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHVARIABLE, 20, 0,	/* CA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00872 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', '.', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00915 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00953) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00958) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 34, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00987 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01026) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01031) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* MDATA2 */
	3, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01063) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01064) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 34, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01082 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MPED_ORC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01121) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01126) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'e', 'd', '_', 'o', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MPED_ORC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 34, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01179 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 35,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01218) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01223) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'p', 'o', 'c', 'k', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MPOCKET */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 36, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 34, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01275 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSYMNEAR, 37,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 34, 0,	/* GETLIST */
/* 01297 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 38,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01321) */
/* 01309 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHSYMNEAR, 39,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01316 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01321 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 40,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 69,	/* 69 (abs: 01399) */
/* 01332 */ HB_P_LINEOFFSET, 46,	/* 53 */
	HB_P_PUSHSYMNEAR, 1,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '9', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MDATA1 */
/* 01352 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_PUSHVARIABLE, 41, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 109, 1,	/* 365*/
	HB_P_POPLOCALNEAR, 4,	/* MDATA2 */
/* 01362 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01380 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01399 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01450 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 'p', 'o', 's', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 6,	/* MPED_ORC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 01542) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 01553) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 01669 */ HB_P_LINEOFFSET, 54,	/* 61 */
	HB_P_PUSHLOCALNEAR, 7,	/* MPOCKET */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 01756) */
/* 01680 */ HB_P_LINEOFFSET, 55,	/* 62 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	' ', 'A', 'N', 'D', ' ', 'p', 'o', 's', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'o', 's', ' ', '=', ' ', 39, ' ', ' ', ' ', ' ', 39, ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'o', 's', ' ', '=', ' ', 39, '0', '0', '0', '0', '0', '0', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 01756 */ HB_P_LINEOFFSET, 57,	/* 64 */
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 71,	/* 71 */
	'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'o', 's', ',', 'p', 'o', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* CCOMM */
/* 01838 */ HB_P_LINEOFFSET, 58,	/* 65 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 44, 0,	/* ARET */
/* 01846 */ HB_P_LINEOFFSET, 59,	/* 66 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 43, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 44, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01867 */ HB_P_LINEOFFSET, 60,	/* 67 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01891 */ HB_P_LINEOFFSET, 61,	/* 68 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01959) */
/* 01905 */ HB_P_LINEOFFSET, 62,	/* 69 */
	HB_P_PUSHSYMNEAR, 48,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'b', 'a', 'i', 'x', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 146, 249,	/* -1646 (abs: 00310) */
/* 01959 */ HB_P_LINEOFFSET, 65,	/* 72 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 49, 0,	/* I */
/* 01965 */ HB_P_LINEOFFSET, 66,	/* 73 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 2, 0,	/* M_PED */
/* 01973 */ HB_P_LINEOFFSET, 67,	/* 74 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 44, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 151, 0,	/* 151 (abs: 02142) */
/* 01994 */ HB_P_LINEOFFSET, 68,	/* 75 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 50,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02104 */ HB_P_LINEOFFSET, 69,	/* 76 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_POS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 44, 0,	/* ARET */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_DOSHORT, 2,
/* 02130 */ HB_P_LINEOFFSET, 70,	/* 77 */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_JUMP, 96, 255,	/* -160 (abs: 01979) */
/* 02142 */ HB_P_LINEOFFSET, 71,	/* 78 */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02203) */
/* 02156 */ HB_P_LINEOFFSET, 72,	/* 79 */
	HB_P_PUSHSYMNEAR, 48,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 158, 248,	/* -1890 (abs: 00310) */
/* 02203 */ HB_P_LINEOFFSET, 75,	/* 82 */
	HB_P_PUSHSYMNEAR, 40,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 02266) */
/* 02215 */ HB_P_LINEOFFSET, 76,	/* 83 */
	HB_P_PUSHSYMNEAR, 52,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'm', 'a', 'r', 'c', 'a', 'r', ' ', 't', 'o', 'd', 'a', 's', ' ', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 53, 0,	/* OPCAO */
/* 02266 */ HB_P_LINEOFFSET, 78,	/* 85 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* MQUANTD_DOC 0*/
/* 02272 */ HB_P_LINEOFFSET, 79,	/* 86 */
	HB_P_PUSHVARIABLE, 53, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 90,	/* 90 (abs: 02372) */
/* 02284 */ HB_P_LINEOFFSET, 80,	/* 87 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 49, 0,	/* I */
/* 02290 */ HB_P_LINEOFFSET, 81,	/* 88 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 02372) */
/* 02310 */ HB_P_LINEOFFSET, 82,	/* 89 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_PED */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', 'X', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_PED */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPOP,
/* 02340 */ HB_P_LINEOFFSET, 83,	/* 90 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 02355 */ HB_P_LINEOFFSET, 84,	/* 91 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* MQUANTD_DOC 1*/
/* 02361 */ HB_P_LINEOFFSET, 85,	/* 92 */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_JUMPNEAR, 182,	/* -74 (abs: 02296) */
/* 02372 */ HB_P_LINEOFFSET, 87,	/* 94 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* MPOINT 0*/
/* 02378 */ HB_P_LINEOFFSET, 90,	/* 97 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02425 */ HB_P_LINEOFFSET, 91,	/* 98 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02434 */ HB_P_LINEOFFSET, 92,	/* 99 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 51,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MQUANTD_DOC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02473 */ HB_P_LINEOFFSET, 93,	/* 100 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02481 */ HB_P_LINEOFFSET, 94,	/* 101 */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 55,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHVARIABLE, 18, 0,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHVARIABLE, 19, 0,	/* LA */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHVARIABLE, 20, 0,	/* CA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 56, 0,	/* MPONTO */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 2,	/* MPOINT */
	HB_P_PUSHSYMNEAR, 29,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02538 */ HB_P_LINEOFFSET, 96,	/* 103 */
	HB_P_PUSHSYMNEAR, 38,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 120,	/* 120 (abs: 02668) */
/* 02550 */ HB_P_LINEOFFSET, 97,	/* 104 */
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 02617) */
/* 02567 */ HB_P_LINEOFFSET, 98,	/* 105 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPOP,
/* 02595 */ HB_P_LINEOFFSET, 99,	/* 106 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 02609 */ HB_P_LINEOFFSET, 100,	/* 107 */
	HB_P_LOCALNEARADDINT, 5, 255, 255,	/* MQUANTD_DOC -1*/
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 02683) */
/* 02617 */ HB_P_LINEOFFSET, 102,	/* 109 */
	HB_P_PUSHSYMNEAR, 54,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', 'X', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 2, 0,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPOP,
/* 02645 */ HB_P_LINEOFFSET, 103,	/* 110 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 2,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 02659 */ HB_P_LINEOFFSET, 104,	/* 111 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* MQUANTD_DOC 1*/
	HB_P_JUMP, 225, 254,	/* -287 (abs: 02378) */
/* 02668 */ HB_P_LINEOFFSET, 106,	/* 113 */
	HB_P_PUSHSYMNEAR, 38,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 212, 254,	/* -300 (abs: 02378) */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 02686) */
	HB_P_JUMP, 207, 254,	/* -305 (abs: 02378) */
/* 02686 */ HB_P_LINEOFFSET, 110,	/* 117 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 49, 0,	/* I */
/* 02692 */ HB_P_LINEOFFSET, 111,	/* 118 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02743) */
/* 02712 */ HB_P_LINEOFFSET, 112,	/* 119 */
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 02732) */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 02743) */
/* 02732 */ HB_P_LINEOFFSET, 115,	/* 122 */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_JUMPNEAR, 213,	/* -43 (abs: 02698) */
/* 02743 */ HB_P_LINEOFFSET, 116,	/* 123 */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 02775) */
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 02822) */
/* 02777 */ HB_P_LINEOFFSET, 117,	/* 124 */
	HB_P_PUSHSYMNEAR, 48,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'N', 'a', 'o', ' ', 't', 'e', 'm', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'm', 'a', 'r', 'c', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 51, 246,	/* -2509 (abs: 00310) */
/* 02822 */ HB_P_LINEOFFSET, 120,	/* 127 */
	HB_P_PUSHSYMNEAR, 52,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', '/', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 53, 0,	/* OPCAO */
/* 02891 */ HB_P_LINEOFFSET, 121,	/* 128 */
	HB_P_PUSHVARIABLE, 53, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 245,	/* -2591 (abs: 00310) */
/* 02904 */ HB_P_LINEOFFSET, 122,	/* 129 */
	HB_P_PUSHLOCALNEAR, 6,	/* MPED_ORC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 02930) */
/* 02915 */ HB_P_LINEOFFSET, 123,	/* 130 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* ALI */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 02943) */
/* 02930 */ HB_P_LINEOFFSET, 125,	/* 132 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* ALI */
/* 02943 */ HB_P_LINEOFFSET, 127,	/* 134 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 49, 0,	/* I */
/* 02949 */ HB_P_LINEOFFSET, 128,	/* 135 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_PUSHSYMNEAR, 47,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 03208) */
/* 02970 */ HB_P_LINEOFFSET, 129,	/* 136 */
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02991) */
	HB_P_JUMP, 210, 0,	/* 210 (abs: 03198) */
/* 02991 */ HB_P_LINEOFFSET, 132,	/* 139 */
	HB_P_PUSHSYMNEAR, 57,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* M_POS */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MNUM_PED */
/* 03011 */ HB_P_LINEOFFSET, 133,	/* 140 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'B', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 03045) */
/* 03029 */ HB_P_LINEOFFSET, 134,	/* 141 */
	HB_P_PUSHSYMNEAR, 58,	/* BOLETO2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03036 */ HB_P_LINEOFFSET, 135,	/* 142 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 59, 0,	/* MFLAG */
	HB_P_JUMP, 154, 0,	/* 154 (abs: 03196) */
/* 03045 */ HB_P_LINEOFFSET, 136,	/* 143 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 03077) */
/* 03062 */ HB_P_LINEOFFSET, 137,	/* 144 */
	HB_P_PUSHSYMNEAR, 60,	/* BOLETO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03069 */ HB_P_LINEOFFSET, 138,	/* 145 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 59, 0,	/* MFLAG */
	HB_P_JUMPNEAR, 121,	/* 121 (abs: 03196) */
/* 03077 */ HB_P_LINEOFFSET, 139,	/* 146 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'L', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 03113) */
/* 03094 */ HB_P_LINEOFFSET, 140,	/* 147 */
	HB_P_PUSHSYMNEAR, 60,	/* BOLETO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
/* 03105 */ HB_P_LINEOFFSET, 141,	/* 148 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 59, 0,	/* MFLAG */
	HB_P_JUMPNEAR, 85,	/* 85 (abs: 03196) */
/* 03113 */ HB_P_LINEOFFSET, 142,	/* 149 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 03145) */
/* 03130 */ HB_P_LINEOFFSET, 143,	/* 150 */
	HB_P_PUSHSYMNEAR, 61,	/* BOLE_TERM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03137 */ HB_P_LINEOFFSET, 144,	/* 151 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 59, 0,	/* MFLAG */
	HB_P_JUMPNEAR, 53,	/* 53 (abs: 03196) */
/* 03145 */ HB_P_LINEOFFSET, 145,	/* 152 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 03171) */
/* 03162 */ HB_P_LINEOFFSET, 146,	/* 153 */
	HB_P_PUSHSYMNEAR, 62,	/* FORMULA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 03196) */
/* 03171 */ HB_P_LINEOFFSET, 147,	/* 154 */
	HB_P_PUSHMEMVAR, 22, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03196) */
/* 03189 */ HB_P_LINEOFFSET, 148,	/* 155 */
	HB_P_PUSHSYMNEAR, 62,	/* FORMULA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03196 */ HB_P_LINEOFFSET, 153,	/* 160 */
	HB_P_PUSHVARIABLE, 49, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 49, 0,	/* I */
	HB_P_JUMP, 6, 255,	/* -250 (abs: 02955) */
	HB_P_JUMP, 174, 244,	/* -2898 (abs: 00310) */
	HB_P_ENDPROC
/* 03212 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

