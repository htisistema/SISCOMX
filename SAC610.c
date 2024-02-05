/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC610.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC610.PRG /q /oC:\hti\SISCOM\SAC610.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2024.02.05 15:27:48 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC610.PRG"

HB_FUNC( SAC610 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC610 )
{ "SAC610", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC610 )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MOP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC610 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC610
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC610 = hb_vm_SymbolInit_SAC610;
   #pragma data_seg()
#endif

HB_FUNC( SAC610 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '6', '1', '0', 0, 
	HB_P_LOCALNEARSETSTR, 3, 24, 0,	/* MTITULO 24*/
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* POINT 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_EMAIL */
/* 00059 */ HB_P_LINEOFFSET, 1,	/* 11 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 2,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CONS_CLI */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* CONS_CLI */
/* 00074 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 4, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00108) */
/* 00103 */ HB_P_LINEOFFSET, 4,	/* 14 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00108 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 00122 */ HB_P_LINEOFFSET, 7,	/* 17 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00139 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* M_SET */
/* 00147 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* M_SET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00190 */ HB_P_LINEOFFSET, 10,	/* 20 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00214 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_PUSHSYMNEAR, 11,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00223 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_PUSHSYMNEAR, 12,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00231 */ HB_P_LINEOFFSET, 14,	/* 24 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* DEMO_SET */
/* 00238 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'N', ' ', 'F', ' ', 'I', ' ', 'G', ' ', 'U', ' ', 'R', ' ', 'A', ' ', 'C', ' ', 'A', ' ', 'O', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00296 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 00354 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '0', ' ', '-', ' ', 'I', '.', 'C', '.', 'M', '.', ' ', 'd', 'o', ' ', 'e', 's', 't', 'a', 'd', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00449 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '9', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'L', 'u', 'c', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00531 */ HB_P_LINEOFFSET, 19,	/* 29 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '3', ' ', '-', ' ', 'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'o', 'f', 'i', 'n', 's', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00627 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '2', ' ', '-', ' ', 'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'd', 'o', ' ', 'P', 'I', 'S', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00723 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '4', ' ', '-', ' ', 'I', 'm', 'p', 'o', 's', 't', 'o', 's', ' ', 'A', 'd', 'i', 'c', 'i', 'o', 'n', 'a', 'i', 's', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00819 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '7', ' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'e', ' ', 'j', 'u', 's', 't', 'e', ' ', 'e', 'n', 't', 'r', 'a', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00915 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '2', ' ', '-', ' ', 'L', 'u', 'c', 'r', 'o', ' ', '<', 'F', '>', 'a', 't', 'o', 'r', ' ', '<', 'P', '>', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00997 */ HB_P_LINEOFFSET, 24,	/* 34 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '2', ' ', '-', ' ', 'D', 'o', 'l', 'a', 'r', ' ', 'p', '/', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 102,	/* 102 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01079 */ HB_P_LINEOFFSET, 25,	/* 35 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '2', '6', ' ', '-', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'f', 'a', 'z', ' ', 'p', 'a', 'r', 't', 'e', ' ', 'd', 'o', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01161 */ HB_P_LINEOFFSET, 27,	/* 37 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '7', ' ', '-', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'N', 'U', 'M', 'E', 'R', 'O', 'S', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01243 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '9', ' ', '-', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01325 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '3', ' ', '-', ' ', 'I', 'A', 'T', '-', '[', 'A', ']', 'r', 'r', 'e', 'd', 'o', 'n', 'd', 'a', 'r', ' ', '[', 'T', ']', 'r', 'u', 'n', 'c', 'a', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01407 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '2', ' ', '-', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '[', 'S', '/', 'N', '/', 'U', ']', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01489 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '3', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '[', 'N', '/', 'A', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01571 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '5', ' ', '-', ' ', 'Q', 'u', 'a', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01664 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '1', ' ', '-', ' ', 'B', 'l', 'o', 'q', 'u', 'e', 'a', 'r', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01746 */ HB_P_LINEOFFSET, 34,	/* 44 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '8', ' ', '-', ' ', 'R', 'e', 'c', 'i', 'b', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '[', 'S', '/', 'N', ']', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01828 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '4', '9', ' ', '-', ' ', 'A', 'U', 'T', 'E', 'N', 'T', 'I', 'C', 'A', 'R', ' ', 'O', 'U', ' ', 'R', 'E', 'C', 'I', 'B', 'O', ' ', 'n', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ' ', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', '[', 'A', '/', 'S', '/', 'N', ']', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 149, 0,	/* 149 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01911 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '3', ' ', '-', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'D', 'e', 's', 'p', 'e', 's', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01993 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '5', ' ', '-', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'V', 'a', 'l', 'e', 's', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02075 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '7', ' ', '-', ' ', 'R', 'e', 't', 'i', 'r', 'a', 'd', 'a', ' ', 'p', '/', 'D', 'e', 'p', 'o', 's', 'i', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02157 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '5', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 155, 0,	/* 155 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02240 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '7', '9', ' ', '-', ' ', 'M', 'a', 'r', 'c', 'a', ' ', 'd', 'a', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', ' ', '[', 'F', 'I', 'L', 'I', 'Z', 'O', 'L', 'A', ']', ' ', 'o', 'u', ' ', '[', 'T', 'O', 'L', 'E', 'D', 'O', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 179, 0,	/* 179 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02323 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '9', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', ' ', '[', 'P', ']', 'e', 's', 'o', ' ', '[', 'V', ']', 'a', 'l', 'o', 'r', ' ', '[', 'N', ']', 'a', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 159, 0,	/* 159 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02406 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '8', '1', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'T', 'a', 'm', 'a', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'n', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 181, 0,	/* 181 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02498 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '5', ' ', '-', ' ', 'H', 'o', 's', 't', ' ', 'd', 'o', ' ', 'S', 'e', 'r', 'v', 'i', 'd', 'o', 'r', ' ', 'd', 'e', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 165, 0,	/* 165 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02581 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '6', ' ', '-', ' ', 'E', 'n', 'v', 'i', 'a', 'r', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02663 */ HB_P_LINEOFFSET, 45,	/* 55 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '7', ' ', '-', ' ', 'E', 'n', 'v', 'i', 'a', 'r', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'n', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02745 */ HB_P_LINEOFFSET, 46,	/* 56 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '9', ' ', '-', ' ', 'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'T', 'E', 'L', 'E', 'M', 'A', 'R', 'K', 'E', 'T', 'I', 'N', 'G', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02827 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '7', '3', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'S', 'E', 'F', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'B', ']', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 173, 0,	/* 173 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02910 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '1', ' ', '-', ' ', 'B', 'l', 'o', 'q', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 'g', 'i', 's', 't', 'r', 'a', 'd', 'o', ' ', 'R', 'e', 'l', 'o', 'g', 'i', 'o', ' ', 'P', 'o', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 101,	/* 101 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 02992 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '9', ' ', '-', ' ', 'C', 'o', 'l', 'o', 'c', 'a', ' ', 'a', ' ', 'S', 'E', 'N', 'H', 'A', ' ', 'n', 'a', ' ', 't', 'e', 'l', 'a', ' ', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', ' ', '[', '1', '-', 'S', 'i', 'm', ' ', '2', '-', 'N', 'a', 'o', ']', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 169, 0,	/* 169 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03084 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '8', ' ', '-', ' ', 'G', 'e', 'r', 'a', 'r', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03166 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03224 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'N', ' ', 'o', ' ', 't', ' ', 'a', ' ', ' ', ' ', 'F', ' ', 'i', ' ', 's', ' ', 'c', ' ', 'a', ' ', 'l', 0, 
	HB_P_DOSHORT, 2,
/* 03285 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03343 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '1', ' ', '-', ' ', 'R', 'a', 't', 'e', 'a', 'r', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'F', 'R', 'E', 'T', 'E', ' ', 'n', 'a', ' ', 'N', 'F', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 151, 0,	/* 151 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03426 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '6', ' ', '-', ' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'F', '/', 'C', 'U', 'P', 'O', 'M', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03508 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '4', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'n', 'a', ' ', 'N', 'F', 'E', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03590 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03648 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', ' ', ' ', 'P', ' ', 'e', ' ', 'd', ' ', 'i', ' ', 'd', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 03701 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03759 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '8', ' ', '-', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', '[', 'J', ']', 'P', 'G', ' ', '6', '2', '0', 'X', '1', '9', '0', ' ', 'p', 'i', 'x', 'e', 'l', ' ', 'o', 'u', ' ', '[', 'N', ']', 'o', 'r', 'm', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 'H', 'T', 'I', 'C', 'A', 'B', 'E', '.', 'J', 'P', 'G', ' ', 'n', 'o', ' ', 'P', 'A', 'I', 'N', 'T', ' ', '(', '1', '.', '2', '3', '0', ' ', 'x', ' ', '2', '0', '7', ' ', 'f', 'o', 'r', 'm', 'u', 'l', 'a', 'r', 'i', 'o', ')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03912 */ HB_P_LINEOFFSET, 64,	/* 74 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '4', ' ', '-', ' ', 'N', 'o', 'm', 'e', 'c', 'l', 'a', 't', 'u', 'r', 'a', ' ', 'd', 'o', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03994 */ HB_P_LINEOFFSET, 65,	/* 75 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '3', ' ', '-', ' ', 'N', 'o', 'm', 'e', 'c', 'l', 'a', 't', 'u', 'r', 'a', ' ', 'd', 'o', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04076 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '0', ' ', '-', ' ', 'U', 's', 'a', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '/', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04159 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '8', ' ', '-', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 's', ' ', 'E', 'X', '.', ':', ' ', '(', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04241 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '4', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', '[', 'S', ']', 'i', 's', 't', 'e', 'm', 'a', ' ', '[', 'U', ']', 'n', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04323 */ HB_P_LINEOFFSET, 69,	/* 79 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '5', ' ', '-', ' ', 'V', 'e', 'n', 'd', 'a', 's', ' ', 'n', 'o', ' ', 'A', 't', 'a', 'c', 'a', 'd', 'o', '/', 'V', 'a', 'r', 'e', 'j', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04405 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '6', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'o', 'n', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'A', 'b', 'e', 'r', 't', 'u', 'r', 'a', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '[', 'S', '/', 'N', ']', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04487 */ HB_P_LINEOFFSET, 71,	/* 81 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '2', ' ', '-', ' ', 'P', 'r', 'e', 'v', 'i', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04569 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '0', ' ', '-', ' ', 'S', 'E', 'N', 'H', 'A', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04651 */ HB_P_LINEOFFSET, 73,	/* 83 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '8', ' ', '-', ' ', 'B', 'l', 'o', 'q', 'u', 'e', 'a', 'r', ' ', 'p', 'r', 'e', 'c', 'o', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'C', ']', 'u', 's', 't', 'o', ' ', '[', 'N', ']', 'e', 'n', 'h', 'u', 'm', ' ', '[', 'P', ']', 'u', 'l', 'a', 'r', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04733 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '4', ' ', '-', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 'r', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04815 */ HB_P_LINEOFFSET, 75,	/* 85 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '2', '5', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'p', 'o', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'a', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 125,	/* 125 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04897 */ HB_P_LINEOFFSET, 76,	/* 86 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '7', ' ', '-', ' ', 'B', 'l', 'o', 'q', '.', 'S', 'l', 'd', '.', ' ', 'a', ' ', 'M', 'e', 'n', 'o', 'r', ' ', '[', 'F', ']', 'i', 's', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', '2', ']', 'S', 'a', 'l', 'd', 'o', ' ', '[', 'N', ']', 'a', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 107,	/* 107 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04979 */ HB_P_LINEOFFSET, 77,	/* 87 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '4', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'n', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05072 */ HB_P_LINEOFFSET, 78,	/* 88 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '3', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 153, 0,	/* 153 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05169 */ HB_P_LINEOFFSET, 79,	/* 89 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '4', ' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 154, 0,	/* 154 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05270 */ HB_P_LINEOFFSET, 80,	/* 90 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '4', ' ', '-', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 15,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05359 */ HB_P_LINEOFFSET, 81,	/* 91 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '0', ' ', '-', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'l', 'i', 'g', 'a', 'd', 'o', ' ', 'a', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05441 */ HB_P_LINEOFFSET, 82,	/* 92 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '9', ' ', '-', ' ', 'O', 'B', 'S', '.', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'P', '/', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05523 */ HB_P_LINEOFFSET, 83,	/* 93 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '3', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05619 */ HB_P_LINEOFFSET, 84,	/* 94 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '5', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'v', 'e', 'n', 'd', 'a', ' ', 'A', 'P', 'R', 'A', 'Z', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05701 */ HB_P_LINEOFFSET, 85,	/* 95 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '9', ' ', '-', ' ', 'P', 'r', 'a', 'z', 'o', ' ', 'd', 'e', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'I', 'A', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05794 */ HB_P_LINEOFFSET, 86,	/* 96 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '8', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05876 */ HB_P_LINEOFFSET, 87,	/* 97 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '7', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05958 */ HB_P_LINEOFFSET, 88,	/* 98 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '7', ' ', '-', ' ', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'C', 'a', 'r', 'r', 'o', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06040 */ HB_P_LINEOFFSET, 89,	/* 99 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '5', '2', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'R', 'E', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 'N', 'A', 'T', 'E', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 152, 0,	/* 152 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06123 */ HB_P_LINEOFFSET, 90,	/* 100 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '6', ' ', '-', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'D', 'O', ' ', 'C', 'A', 'I', 'X', 'A', ' ', '[', 'S', '/', 'N', '/', 'T', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06205 */ HB_P_LINEOFFSET, 91,	/* 101 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '7', ' ', '-', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'D', 'O', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06287 */ HB_P_LINEOFFSET, 92,	/* 102 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '8', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'C', ']', 'a', 'i', 'x', 'a', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06369 */ HB_P_LINEOFFSET, 93,	/* 103 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'1', '2', '0', ' ', '-', ' ', 'B', 'l', 'o', 'q', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'c', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'N', 'A', 'O', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'd', 'o', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06461 */ HB_P_LINEOFFSET, 94,	/* 104 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '2', '1', ' ', '-', ' ', 'B', 'l', 'o', 'q', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'c', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'E', 'X', 'E', 'D', 'I', 'D', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 121,	/* 121 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06554 */ HB_P_LINEOFFSET, 95,	/* 105 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '2', '2', ' ', '-', ' ', 'Q', 't', 'd', ' ', 'd', 'i', 'a', 's', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'r', 'a', 'z', 'o', ' ', 'E', 's', 't', 'i', 'p', 'u', 'l', 'a', 'd', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 122,	/* 122 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06647 */ HB_P_LINEOFFSET, 96,	/* 106 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '9', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'N', 'O', ' ', 'T', 'O', 'T', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06729 */ HB_P_LINEOFFSET, 97,	/* 107 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '5', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 06811 */ HB_P_LINEOFFSET, 98,	/* 108 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 06869 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'I', ' ', 'm', ' ', 'p', ' ', 'r', ' ', 'e', ' ', 's', ' ', 's', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'P', ' ', 'e', ' ', 'd', ' ', 'i', ' ', 'd', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 06946 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 07004 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '1', '1', ' ', '-', ' ', 'P', 'a', 'g', '.', '<', 'I', '>', 'n', 't', 'e', 'i', 'r', 'a', ' ', '<', 'M', '>', 'e', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07086 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '2', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07168 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '9', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07250 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '0', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07332 */ HB_P_LINEOFFSET, 105,	/* 115 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '1', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07414 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '0', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'D', 'e', 'v', 'e', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07496 */ HB_P_LINEOFFSET, 107,	/* 117 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '4', '7', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'o', 'u', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'B', ']', 'a', 'r', 'r', 'a', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 147, 0,	/* 147 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07579 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '3', '6', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07661 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '5', ' ', '-', ' ', 'R', 'o', 'd', 'a', 'p', 'e', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07743 */ HB_P_LINEOFFSET, 110,	/* 120 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '7', '4', ' ', '-', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '[', 'A', ']', 'A', 'l', 'f', '.', '[', 'C', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'D', ']', 'D', 'i', 'g', 'i', 't', 'a', 'c', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 174, 0,	/* 174 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07826 */ HB_P_LINEOFFSET, 111,	/* 121 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '0', '6', ' ', '-', ' ', 'M', 'a', 'r', 'g', 'e', 'm', ' ', 'e', 's', 'q', 'u', 'e', 'r', 'd', 'a', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', '1', '(', 'M', 'o', 'v', 'e', 'i', 's', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 07919 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 07977 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', 'e', ' ', 'c', ' ', 'e', ' ', 'b', ' ', 'i', ' ', 'm', ' ', 'e', ' ', 'n', ' ', 't', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 08041 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08099 */ HB_P_LINEOFFSET, 115,	/* 125 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '3', ' ', '-', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'o', 'u', ' ', '[', 'S', '/', 'N', ']', 'e', '[', 'I', ']', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08181 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '8', ' ', '-', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08263 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '9', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'o', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08345 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '4', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 94,	/* 94 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08427 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '1', ' ', '-', ' ', 'A', 'u', 't', '.', 'P', 'e', 'd', 'i', 'd', 'o', '[', 'S', ']', '/', 'I', 'm', 'p', '.', '[', 'R', ']', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', '/', 'R', ']', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08509 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '6', '2', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'a', 'r', 'n', 'e', 's', ' ', 'n', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08591 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '9', '1', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'A', ']', 'n', 't', 'i', 'g', 'o', ' ', '[', 'N', ']', 'o', 'v', 'o', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08673 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08731 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'B', ' ', 'o', ' ', 'l', ' ', 'e', ' ', 't', ' ', 'o', ' ', ' ', ' ', '(', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', 0, 
	HB_P_DOSHORT, 2,
/* 08802 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08860 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '7', '2', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'O', 'L', 'E', 'T', 'O', ' ', '[', 'A', ']', 'C', 'B', 'R', ' ', '[', 'S', ']', 'i', 's', 't', 'e', 'm', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 172, 0,	/* 172 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 08943 */ HB_P_LINEOFFSET, 126,	/* 136 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '0', ' ', '-', ' ', 'M', 'u', 'l', 't', 'a', ' ', 'a', 'p', 'o', 's', ' ', 'V', 'e', 'n', 'c', '.', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09039 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '1', ' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'a', 'o', ' ', 'd', 'i', 'a', ' ', '[', '%', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09135 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '6', ' ', '-', ' ', 'T', 'o', 'l', 'e', 'r', 'a', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'd', 'i', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09228 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '8', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', '%', ']', ' ', 'p', '/', 'D', 'i', 'a', 's', ' ', 'A', 'n', 't', 'e', 'c', 'i', 'p', 'a', 'd', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09324 */ HB_P_LINEOFFSET, 130,	/* 140 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '2', ' ', '-', ' ', 'R', 'o', 'd', 'a', 'p', 'e', ' ', 'd', 'o', ' ', 'B', 'o', 'l', 'e', 't', 'o', ' ', 'B', 'a', 'n', 'c', 'a', 'r', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09406 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '5', '6', ' ', '-', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'B', 'o', 'l', 'e', 't', 'o', ' ', 'B', 'a', 'n', 'c', 'a', 'r', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09488 */ HB_P_LINEOFFSET, 132,	/* 142 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '9', ' ', '-', ' ', 'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'A', 'c', 'o', 'r', 'd', 'o', ' ', 'd', 'e', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09570 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 09628 */ HB_P_LINEOFFSET, 134,	/* 144 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '5', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'a', 's', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09710 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '7', ' ', '-', ' ', 'I', 'm', 'p', '.', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', 'a', 'p', 'o', 's', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'C', ']', 'a', 'i', 'x', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09792 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '0', ' ', '-', ' ', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'R', 'O', 'M', 'I', 'S', 'S', 'O', 'R', 'I', 'A', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 'n', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 09874 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 09932 */ HB_P_LINEOFFSET, 138,	/* 148 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'O', ' ', 'r', ' ', 'd', ' ', 'e', ' ', 'm', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'S', ' ', 'e', ' ', 'r', ' ', 'v', ' ', 'i', ' ', 'c', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 10003 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 10061 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '4', '2', ' ', '-', ' ', 'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10143 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '7', '1', ' ', '-', ' ', 'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ' ', 'D', 'A', ' ', 'O', '.', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10225 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 10283 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'a', ' ', ' ', ' ', 'C', ' ', 'o', ' ', 'm', ' ', 'i', ' ', 's', ' ', 's', ' ', 'a', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 10343 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 10401 */ HB_P_LINEOFFSET, 145,	/* 155 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '4', ' ', '-', ' ', 'T', 'o', 'l', 'e', 'r', 'a', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10497 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '3', ' ', '-', ' ', '[', '%', ']', ' ', 'o', 'u', ' ', 'F', 'a', 't', 'o', 'r', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'a', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 113,	/* 113 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10593 */ HB_P_LINEOFFSET, 147,	/* 157 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '5', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10675 */ HB_P_LINEOFFSET, 148,	/* 158 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '1', '6', ' ', '-', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'p', '/', 'o', ' ', 'T', 'e', 'l', 'e', 'm', 'a', 'r', 'k', 'e', 't', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10771 */ HB_P_LINEOFFSET, 149,	/* 159 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '2', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 162, 0,	/* 162 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10865 */ HB_P_LINEOFFSET, 150,	/* 160 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '3', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'I', 'T', 'E', 'N', 'S', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 163, 0,	/* 163 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10959 */ HB_P_LINEOFFSET, 151,	/* 161 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '4', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'E', 'S', 'O', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 14,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 164, 0,	/* 164 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11057 */ HB_P_LINEOFFSET, 152,	/* 162 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '2', '1', ' ', '-', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'R', ']', 'e', 'c', '.', 'D', 'o', 'c', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11139 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11197 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'E', ' ', 'M', ' ', 'A', ' ', 'I', ' ', 'L', 0, 
	HB_P_DOSHORT, 2,
/* 11251 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11309 */ HB_P_LINEOFFSET, 156,	/* 166 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '5', ' ', '-', ' ', 'H', 'O', 'S', 'T', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 165, 0,	/* 165 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11392 */ HB_P_LINEOFFSET, 157,	/* 167 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '6', ' ', '-', ' ', 'P', 'O', 'R', 'T', 'A', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 166, 0,	/* 166 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11475 */ HB_P_LINEOFFSET, 158,	/* 168 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '7', ' ', '-', ' ', 'L', 'O', 'G', 'I', 'N', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 167, 0,	/* 167 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11558 */ HB_P_LINEOFFSET, 159,	/* 169 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '6', '8', ' ', '-', ' ', 'S', 'E', 'N', 'H', 'A', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 168, 0,	/* 168 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11641 */ HB_P_LINEOFFSET, 160,	/* 170 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '7', '5', ' ', '-', ' ', 'F', 'R', 'O', 'M', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 175, 0,	/* 175 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 11724 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'9', '9', '1', ' ', '-', ' ', 'O', 'u', 't', 'r', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ' ', 'd', 'o', ' ', 'E', 'M', 'A', 'I', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', 'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11808 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11866 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'o', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'P', 0, 
	HB_P_DOSHORT, 2,
/* 11916 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11974 */ HB_P_LINEOFFSET, 165,	/* 175 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'1', '0', '0', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'A', 'P', 'P', ' ', '[', 'H', ']', 't', 'i', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', '[', 'O', ']', 'u', 't', 'r', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 12056 */ HB_P_LINEOFFSET, 166,	/* 176 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'0', '8', '9', ' ', '-', ' ', 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'P', 'C', 'O', 'K', 'E', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 12138 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 12185 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHSYMNEAR, 12,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 17,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 6,	/* POINT */
	HB_P_PUSHSYMNEAR, 12,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 12219 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSEFAR, 109, 132, 0,	/* 33901 (abs: 00046130) */
/* 12233 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_PUSHSYMNEAR, 19,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 20, 0,	/* MOP */
/* 12251 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 12495) */
/* 12266 */ HB_P_LINEOFFSET, 173,	/* 183 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'I', '.', 'C', '.', 'M', '.', ' ', 'D', 'O', ' ', 'E', 'S', 'T', 'A', 'D', 'O', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', ' ', '(', '%', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 12320 */ HB_P_LINEOFFSET, 174,	/* 184 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', '.', 'C', '.', 'M', '.', ' ', 'd', 'o', ' ', 'e', 's', 't', 'a', 'd', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12386 */ HB_P_LINEOFFSET, 175,	/* 185 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12463 */ HB_P_LINEOFFSET, 176,	/* 186 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 12485 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 10, 208,	/* -12278 (abs: 00214) */
/* 12495 */ HB_P_LINEOFFSET, 179,	/* 189 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 1,	/* 302 (abs: 12809) */
/* 12510 */ HB_P_LINEOFFSET, 180,	/* 190 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'C', 'A', 'L', 'C', 'U', 'L', 'O', ' ', 'D', 'O', ' ', 'L', 'U', 'C', 'R', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 12557 */ HB_P_LINEOFFSET, 181,	/* 191 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'l', 'c', 'u', 'l', 'o', ' ', 'd', 'o', ' ', 'L', 'u', 'c', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12623 */ HB_P_LINEOFFSET, 182,	/* 192 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 29,	/* 29 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', ',', 'M', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 12695) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 53,	/* 53 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'u', 's', 't', 'o', ' ', '[', 'R', ']', 'e', 'a', 'l', ',', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '[', 'M', ']', 'e', 'd', 'i', 'o', ' ', 'o', 'u', ' ', '[', 'O', ']', 'u', 't', 'r', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 12777 */ HB_P_LINEOFFSET, 183,	/* 193 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 12799 */ HB_P_LINEOFFSET, 184,	/* 194 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 208, 206,	/* -12592 (abs: 00214) */
/* 12809 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 223, 0,	/* 223 (abs: 13044) */
/* 12824 */ HB_P_LINEOFFSET, 187,	/* 197 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'A', 'L', 'I', 'Q', 'U', 'O', 'T', 'A', ' ', 'D', 'O', ' ', 'C', 'O', 'F', 'I', 'N', 'S', ' ', '(', '%', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 12869 */ HB_P_LINEOFFSET, 188,	/* 198 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'd', 'o', ' ', 'C', 'o', 'f', 'i', 'n', 's', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 12935 */ HB_P_LINEOFFSET, 189,	/* 199 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13012 */ HB_P_LINEOFFSET, 190,	/* 200 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 13034 */ HB_P_LINEOFFSET, 191,	/* 201 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 229, 205,	/* -12827 (abs: 00214) */
/* 13044 */ HB_P_LINEOFFSET, 193,	/* 203 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 13276) */
/* 13059 */ HB_P_LINEOFFSET, 194,	/* 204 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'A', 'L', 'I', 'Q', 'U', 'O', 'T', 'A', ' ', 'D', 'O', ' ', 'P', 'I', 'S', ' ', '(', '%', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 13101 */ HB_P_LINEOFFSET, 195,	/* 205 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'd', 'o', ' ', 'P', 'I', 'S', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13167 */ HB_P_LINEOFFSET, 196,	/* 206 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13244 */ HB_P_LINEOFFSET, 197,	/* 207 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 13266 */ HB_P_LINEOFFSET, 198,	/* 208 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 253, 204,	/* -13059 (abs: 00214) */
/* 13276 */ HB_P_LINEOFFSET, 200,	/* 210 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 13512) */
/* 13291 */ HB_P_LINEOFFSET, 201,	/* 211 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'M', 'P', 'O', 'S', 'T', 'O', 'S', ' ', 'A', 'D', 'I', 'C', 'I', 'O', 'N', 'A', 'I', 'S', ' ', '(', '%', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 13337 */ HB_P_LINEOFFSET, 202,	/* 212 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'm', 'p', 'o', 's', 't', 'o', 's', ' ', 'A', 'd', 'i', 'c', 'i', 'o', 'n', 'a', 'i', 's', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13403 */ HB_P_LINEOFFSET, 203,	/* 213 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13480 */ HB_P_LINEOFFSET, 204,	/* 214 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 13502 */ HB_P_LINEOFFSET, 205,	/* 215 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 17, 204,	/* -13295 (abs: 00214) */
/* 13512 */ HB_P_LINEOFFSET, 207,	/* 217 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 13773) */
/* 13527 */ HB_P_LINEOFFSET, 208,	/* 218 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'0', '0', '6', ' ', '-', ' ', 'M', 'a', 'r', 'g', 'e', 'm', ' ', 'e', 's', 'q', 'u', 'e', 'r', 'd', 'a', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', '1', '(', 'M', 'o', 'v', 'e', 'i', 's', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 13595 */ HB_P_LINEOFFSET, 209,	/* 219 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'0', '0', '6', ' ', '-', ' ', 'M', 'a', 'r', 'g', 'e', 'm', ' ', 'e', 's', 'q', 'u', 'e', 'r', 'd', 'a', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'M', 'U', 'L', 'A', 'R', 'I', 'O', ' ', '1', '(', 'M', 'o', 'v', 'e', 'i', 's', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13667 */ HB_P_LINEOFFSET, 210,	/* 220 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13741 */ HB_P_LINEOFFSET, 211,	/* 221 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 13763 */ HB_P_LINEOFFSET, 212,	/* 222 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 12, 203,	/* -13556 (abs: 00214) */
/* 13773 */ HB_P_LINEOFFSET, 214,	/* 224 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 14021) */
/* 13788 */ HB_P_LINEOFFSET, 215,	/* 225 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'V', 'A', 'L', 'O', 'R', ' ', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'E', 'N', 'T', 'R', 'A', 'D', 'A', ' ', 'D', 'E', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 13845 */ HB_P_LINEOFFSET, 216,	/* 226 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'V', 'l', 'r', '.', 'a', 'j', 'u', 's', 't', 'e', ' ', 'e', 'n', 't', 'r', 'a', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 13911 */ HB_P_LINEOFFSET, 217,	/* 227 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 13989 */ HB_P_LINEOFFSET, 218,	/* 228 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 14011 */ HB_P_LINEOFFSET, 219,	/* 229 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 20, 202,	/* -13804 (abs: 00214) */
/* 14021 */ HB_P_LINEOFFSET, 221,	/* 231 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 0,	/* 246 (abs: 14279) */
/* 14036 */ HB_P_LINEOFFSET, 222,	/* 232 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'F', 'O', 'R', 'M', 'A', ' ', 'D', 'E', ' ', 'C', 'A', 'L', 'C', 'U', 'L', 'A', 'R', ' ', 'O', ' ', 'L', 'U', 'C', 'R', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 14084 */ HB_P_LINEOFFSET, 223,	/* 233 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'L', 'u', 'c', 'r', 'o', ' ', '<', 'F', '>', 'a', 't', 'o', 'r', ' ', '<', 'P', '>', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14150 */ HB_P_LINEOFFSET, 224,	/* 234 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'F', ',', 'P', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14247 */ HB_P_LINEOFFSET, 225,	/* 235 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 14269 */ HB_P_LINEOFFSET, 226,	/* 236 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 18, 201,	/* -14062 (abs: 00214) */
/* 14279 */ HB_P_LINEOFFSET, 228,	/* 238 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 240, 0,	/* 240 (abs: 14531) */
/* 14294 */ HB_P_LINEOFFSET, 229,	/* 239 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'O', 'L', 'A', 'R', ' ', 'P', 'A', 'R', 'A', ' ', 'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 14336 */ HB_P_LINEOFFSET, 230,	/* 240 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'D', 'o', 'l', 'a', 'r', ' ', 'p', '/', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14402 */ HB_P_LINEOFFSET, 231,	/* 241 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14499 */ HB_P_LINEOFFSET, 232,	/* 242 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 14521 */ HB_P_LINEOFFSET, 233,	/* 243 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 22, 200,	/* -14314 (abs: 00214) */
/* 14531 */ HB_P_LINEOFFSET, 235,	/* 245 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 14801) */
/* 14546 */ HB_P_LINEOFFSET, 236,	/* 246 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 'M', 'P', 'R', 'E', 'S', 'A', ' ', 'F', 'A', 'Z', ' ', 'P', 'A', 'R', 'T', 'E', ' ', 'D', 'O', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 14606 */ HB_P_LINEOFFSET, 237,	/* 247 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'f', 'a', 'z', ' ', 'p', 'a', 'r', 't', 'e', ' ', 'd', 'o', ' ', 'S', 'I', 'M', 'P', 'L', 'E', 'S', ' ', 'N', 'A', 'C', 'I', 'O', 'N', 'A', 'L', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14672 */ HB_P_LINEOFFSET, 238,	/* 248 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 14769 */ HB_P_LINEOFFSET, 239,	/* 249 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 14791 */ HB_P_LINEOFFSET, 240,	/* 250 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 8, 199,	/* -14584 (abs: 00214) */
/* 14801 */ HB_P_LINEOFFSET, 242,	/* 252 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 15117) */
/* 14816 */ HB_P_LINEOFFSET, 243,	/* 253 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'A', 'S', 'C', 'A', 'R', 'A', ' ', 'D', 'E', ' ', 'N', 'U', 'M', 'E', 'R', 'O', 'S', '(', 'R', '$', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 14861 */ HB_P_LINEOFFSET, 244,	/* 254 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'N', 'U', 'M', 'E', 'R', 'O', 'S', ' ', ' ', 'E', 'x', '.', ':', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '.', '.', '.', '.', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 14921 */ HB_P_LINEOFFSET, 245,	/* 255 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 84,	/* 84 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '9', ' ', 'p', '/', 'r', 'e', 'p', 'r', 'e', 's', 'e', 'n', 't', 'a', 'r', ' ', 'o', 's', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 's', ' ', '(', ',', ')', ' ', 'p', '/', 'c', 'e', 'n', 't', 'e', 'n', 'a', 's', ' ', 'e', ' ', '(', '.', ')', ' ', 'c', 'a', 's', 'a', ' ', 'd', 'e', 'c', 'i', 'm', 'a', 'l', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15085 */ HB_P_LINEOFFSET, 246,	/* 256 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 15107 */ HB_P_LINEOFFSET, 247,	/* 257 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 204, 197,	/* -14900 (abs: 00214) */
/* 15117 */ HB_P_LINEOFFSET, 249,	/* 259 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 38, 1,	/* 294 (abs: 15423) */
/* 15132 */ HB_P_LINEOFFSET, 250,	/* 260 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'M', 'A', 'S', 'C', 'A', 'R', 'A', ' ', 'D', 'E', ' ', 'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 15176 */ HB_P_LINEOFFSET, 251,	/* 261 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'E', 'x', '.', ':', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15242 */ HB_P_LINEOFFSET, 252,	/* 262 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '9', ' ', 'p', '/', 'r', 'e', 'p', 'r', 'e', 's', 'e', 'n', 't', 'a', 'r', ' ', 'o', 's', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 's', ' ', 'e', ' ', '(', '.', ')', ' ', 'c', 'a', 's', 'a', ' ', 'd', 'e', 'c', 'i', 'm', 'a', 'l', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15391 */ HB_P_LINEOFFSET, 253,	/* 263 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 15413 */ HB_P_LINEOFFSET, 254,	/* 264 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 154, 196,	/* -15206 (abs: 00214) */
/* 15423 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 15710) */
/* 15439 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', ' ', 'N', 'A', 'O', ' ', 'R', 'E', 'G', 'I', 'S', 'T', 'R', 'A', 'D', 'O', ' ', 'R', 'E', 'L', 'O', 'G', 'I', 'O', ' ', 'P', 'O', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 15511 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'O', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', ' ', 'N', 'A', 'O', ' ', 'R', 'E', 'G', 'I', 'S', 'T', 'R', 'A', 'D', 'O', ' ', 'R', 'E', 'L', 'O', 'G', 'I', 'O', ' ', 'P', 'O', 'N', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15578 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15676 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 15699 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 123, 195,	/* -15493 (abs: 00214) */
/* 15710 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 15988) */
/* 15726 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'I', 'A', 'T', ' ', '(', 'I', 'n', 'd', 'i', 'c', 'e', ' ', 'd', 'e', ' ', 'A', 'r', 'r', 'e', 'd', 'o', 'n', 'd', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'o', 'u', ' ', 'T', 'r', 'u', 'c', 'a', 'r', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 15789 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'A', 'T', '-', '[', 'A', ']', 'r', 'r', 'e', 'd', 'o', 'n', 'd', 'a', 'r', ' ', '[', 'T', ']', 'r', 'u', 'n', 'c', 'a', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 15856 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 15954 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 15977 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 101, 194,	/* -15771 (abs: 00214) */
/* 15988 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 16266) */
/* 16004 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'N', 'A', ' ', 'I', 'N', 'C', 'L', 'U', 'S', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 16065 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'C', 'o', 'd', '.', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', '[', 'S', '/', 'N', '/', 'U', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16132 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 26,	/* 26 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'U', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16232 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 16255 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 79, 193,	/* -16049 (abs: 00214) */
/* 16266 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 64, 1,	/* 320 (abs: 16599) */
/* 16282 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 16333 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '[', 'N', '/', 'A', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16400 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', ',', 'A', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 16477) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 59,	/* 59 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'N', ']', 'o', 'v', 'a', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'S', 'e', 'r', 'v', 'i', 'd', 'o', 'r', ' ', 'o', 'u', ' ', '[', 'A', ']', 'n', 't', 'e', 'r', 'i', 'o', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16565 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 16588 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 2, 192,	/* -16382 (abs: 00214) */
/* 16599 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 16857) */
/* 16615 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'M', 'A', 'X', 'I', 'M', 'A', ' ', 'D', 'E', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', ' ', 'P', 'A', 'R', 'A', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 16679 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 't', 'd', '.', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'C', 'H', 'E', 'Q', '.', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 16746 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 16823 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 16846 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 0, 191,	/* -16640 (abs: 00214) */
/* 16857 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 17146) */
/* 16873 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'F', 'E', 'C', 'H', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'C', 'A', 'I', 'X', 'A', ' ', 'A', 'P', 'O', 'S', ' ', 'E', 'M', 'I', 'T', 'I', '-', 'L', 'O', ' ', 'U', 'M', 'A', ' ', 'V', 'E', 'Z', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 16947 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'l', 'o', 'q', '.', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'S', '/', 'N', ']', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17014 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17112 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 17135 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 189,	/* -16929 (abs: 00214) */
/* 17146 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 17433) */
/* 17162 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'R', 'E', 'C', 'I', 'B', 'O', ' ', 'D', 'E', ' ', 'C', 'O', 'M', 'P', 'R', 'O', 'V', 'A', 'N', 'T', 'E', ' ', 'D', 'E', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 17234 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'R', 'e', 'c', 'i', 'b', 'o', ' ', 'd', 'e', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17301 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17399 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 17422 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 192, 188,	/* -17216 (abs: 00214) */
/* 17433 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '4', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 17722) */
/* 17449 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'U', 'T', 'E', 'N', 'T', 'I', 'C', 'A', 'R', ' ', 'O', 'U', ' ', 'R', 'E', 'C', 'I', 'B', 'O', ' ', 'N', 'A', ' ', 'B', 'A', 'I', 'X', 'A', ' ', 'D', 'A', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 17515 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'A', 'U', 'T', 'E', 'N', 'T', 'I', 'C', 'A', 'R', ' ', 'O', 'U', ' ', 'R', 'E', 'C', 'I', 'B', 'O', ' ', 'n', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'a', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', '[', 'S', '/', 'R', '/', 'A', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17586 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', ',', 'R', ',', 'N', ',', 'A', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17688 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 17711 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 159, 187,	/* -17505 (abs: 00214) */
/* 17722 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 17976) */
/* 17738 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'E', 'S', 'P', 'E', 'S', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 17777 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'A', ' ', 'D', 'E', 'S', 'P', 'E', 'S', 'A', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 17844 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 17942 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 17965 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 161, 186,	/* -17759 (abs: 00214) */
/* 17976 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 18228) */
/* 17992 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'V', 'A', 'L', 'E', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 18029 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'A', ' ', 'V', 'A', 'L', 'E', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 18096 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18194 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 18217 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 165, 185,	/* -18011 (abs: 00214) */
/* 18228 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 18497) */
/* 18244 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'R', 'E', 'T', 'I', 'R', 'A', 'D', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'D', 'E', 'P', 'O', 'S', 'I', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 18298 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'R', 'E', 'T', 'I', 'R', 'A', 'D', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'D', 'E', 'P', 'O', 'S', 'I', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 18365 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18463 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 18486 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 152, 184,	/* -18280 (abs: 00214) */
/* 18497 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 18755) */
/* 18513 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 18556 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 18623 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18721 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 18744 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 150, 183,	/* -18538 (abs: 00214) */
/* 18755 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 212, 0,	/* 212 (abs: 18980) */
/* 18771 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'M', 'A', 'R', 'C', 'A', ' ', 'D', 'A', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 18811 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'M', 'a', 'r', 'c', 'a', ' ', 'd', 'a', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', ' ', 'E', 'x', ':', ' ', 'F', 'I', 'L', 'I', 'Z', 'O', 'L', 'A', ' ', 'o', 'u', ' ', 'T', 'O', 'L', 'E', 'D', 'O', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 18871 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 18946 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 18969 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 181, 182,	/* -18763 (abs: 00214) */
/* 18980 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 61, 1,	/* 317 (abs: 19310) */
/* 18996 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 19035 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'A', ' ', '[', 'P', ']', 'e', 's', 'o', ' ', '[', 'V', ']', 'a', 'l', 'o', 'r', ' ', '[', 'N', ']', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 19102 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 35,	/* 35 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', ',', 'V', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 19181) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 66,	/* 66 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'n', 'o', ' ', '[', 'P', ']', 'e', 's', 'o', ' ', '-', ' ', 'e', 'm', ' ', '[', 'V', ']', 'a', 'l', 'o', 'r', ' ', 'o', 'u', ' ', '[', 'N', ']', 'a', 'o', ' ', 't', 'e', 'm', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 19276 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 19299 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 107, 181,	/* -19093 (abs: 00214) */
/* 19310 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 19581) */
/* 19326 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'E', 'N', 'V', 'I', 'A', 'R', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', 'O', 'R', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'N', 'A', ' ', 'V', 'E', 'N', 'D', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 19382 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'n', 'v', 'i', 'a', 'r', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 19449 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 19547 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 19570 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 92, 180,	/* -19364 (abs: 00214) */
/* 19581 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 19852) */
/* 19597 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'E', 'N', 'V', 'I', 'A', 'R', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', 'O', 'R', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'N', 'O', ' ', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 19653 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'n', 'v', 'i', 'a', 'r', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'n', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 19720 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 19818 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 19841 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 77, 179,	/* -19635 (abs: 00214) */
/* 19852 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 20112) */
/* 19868 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'U', 'T', 'I', 'L', 'I', 'Z', 'A', ' ', 'T', 'E', 'L', 'E', 'M', 'A', 'R', 'K', 'E', 'T', 'I', 'N', 'G', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 19913 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'T', 'E', 'L', 'E', 'M', 'A', 'R', 'K', 'E', 'T', 'I', 'N', 'G', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 19980 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 20078 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 20101 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 73, 178,	/* -19895 (abs: 00214) */
/* 20112 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 20372) */
/* 20128 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'G', 'e', 'r', 'a', 'r', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 20186 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'G', 'e', 'r', 'a', 'r', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'E', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'p', 'e', 'l', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 20240 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 20338 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 20361 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 69, 177,	/* -20155 (abs: 00214) */
/* 20372 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 1,	/* 262 (abs: 20647) */
/* 20388 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'I', 'P', 'O', ' ', 'D', 'O', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'S', 'E', 'F', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 20448 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'S', 'E', 'F', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'B', ']', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 20515 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 20613 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 20636 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 50, 176,	/* -20430 (abs: 00214) */
/* 20647 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 20898) */
/* 20663 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'l', 'o', 'c', 'a', ' ', 'a', ' ', 'S', 'E', 'N', 'H', 'A', ' ', 'n', 'a', ' ', 't', 'e', 'l', 'a', ' ', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 20719 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'o', 'l', 'o', 'c', 'a', ' ', 'a', ' ', 'S', 'E', 'N', 'H', 'A', ' ', 'n', 'a', ' ', 't', 'e', 'l', 'a', ' ', 'P', 'r', 'i', 'n', 'c', 'i', 'p', 'a', 'l', ' ', '[', '1', '-', 'S', 'i', 'm', ' ', '2', '-', 'N', 'a', 'o', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 20790 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 20864 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 20887 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 55, 175,	/* -20681 (abs: 00214) */
/* 20898 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 21162) */
/* 20914 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 'T', 'I', 'L', 'I', 'Z', 'A', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 20963 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'O', 'R', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 21030 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 21128 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 21151 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 47, 174,	/* -20945 (abs: 00214) */
/* 21162 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 21432) */
/* 21178 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'O', ' ', 'F', 'E', 'C', 'H', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'C', 'U', 'P', 'O', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 21233 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'C', 'U', 'P', 'O', 'M', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 21300 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 21398 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 21421 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 33, 173,	/* -21215 (abs: 00214) */
/* 21432 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 21700) */
/* 21448 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'R', 'a', 't', 'e', 'a', 'r', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'F', 'R', 'E', 'T', 'E', ' ', 'n', 'a', ' ', 'N', 'F', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 21502 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'R', 'a', 't', 'e', 'a', 'r', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'o', ' ', 'F', 'R', 'E', 'T', 'E', ' ', 'n', 'a', ' ', 'N', 'F', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 21568 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 21666 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 21689 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 21, 172,	/* -21483 (abs: 00214) */
/* 21700 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 21966) */
/* 21716 */ HB_P_LINE, 172, 1,	/* 428 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', '(', 'J', 'P', 'G', ')', ' ', 'o', 'u', ' ', '[', 'N', ']', 'o', 'r', 'm', 'a', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 21767 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', '(', 'J', 'P', 'G', ')', ' ', 'o', 'u', ' ', '[', 'N', ']', 'o', 'r', 'm', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 21834 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'J', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 21932 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 21955 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 11, 171,	/* -21749 (abs: 00214) */
/* 21966 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 22235) */
/* 21982 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 22036 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'l', 'o', 'q', '.', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', ' ', 'F', 'i', 's', 'c', 'a', 'l', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 22103 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 22201 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 22224 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 254, 169,	/* -22018 (abs: 00214) */
/* 22235 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 22504) */
/* 22251 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'D', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 22305 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'F', '.', '.', '.', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 22372 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 22470 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 22493 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 241, 168,	/* -22287 (abs: 00214) */
/* 22504 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 11, 1,	/* 267 (abs: 22784) */
/* 22520 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'M', 'O', 'D', 'O', ' ', 'D', 'E', ' ', 'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', 'E', 'L', 'E', 'T', 'R', 'O', 'N', 'I', 'C', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 22585 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'N', 'F', 'E', ' ', '[', '1', ']', 'N', 'o', 'r', 'm', 'a', 'l', ' ', '[', '2', ']', 'S', 'C', 'A', 'N', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 22652 */ HB_P_LINE, 195, 1,	/* 451 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', ',', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 22750 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 22773 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 167,	/* -22567 (abs: 00214) */
/* 22784 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 23056) */
/* 22800 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'N', 'F', 'O', 'M', 'A', 'R', ' ', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'N', 'A', ' ', 'N', 'F', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 22851 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'0', '1', '4', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'n', 'a', ' ', 'N', 'F', 'E', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 22924 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 23022 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 23045 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 201, 166,	/* -22839 (abs: 00214) */
/* 23056 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 23296) */
/* 23072 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'O', 'M', 'E', 'C', 'L', 'A', 'T', 'U', 'R', 'A', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 23120 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'N', 'o', 'm', 'e', 'c', 'l', 'a', 't', 'u', 'r', 'a', ' ', 'd', 'o', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'O', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 23187 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 23262 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 23285 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 165,	/* -23079 (abs: 00214) */
/* 23296 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 221, 0,	/* 221 (abs: 23530) */
/* 23312 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'O', 'M', 'E', 'C', 'L', 'A', 'T', 'U', 'R', 'A', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 23357 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'N', 'o', 'm', 'e', 'c', 'l', 'a', 't', 'u', 'r', 'a', ' ', 'd', 'o', ' ', 'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 23421 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 23496 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 23519 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 239, 164,	/* -23313 (abs: 00214) */
/* 23530 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 23798) */
/* 23546 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'L', 'I', 'B', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '/', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 23599 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'U', 's', 'a', ' ', 'L', 'i', 'b', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '/', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 23666 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 23764 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 23787 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 227, 163,	/* -23581 (abs: 00214) */
/* 23798 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 1,	/* 302 (abs: 24113) */
/* 23814 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'M', 'A', 'S', 'C', 'A', 'R', 'A', ' ', 'D', 'E', ' ', 'N', 'U', 'M', 'E', 'R', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 23856 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'n', 'u', 'm', 'e', 'r', 'o', 's', ' ', 'E', 'X', '.', ':', ' ', '(', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 23923 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '9', ' ', 'p', '/', 'r', 'e', 'p', 'r', 'e', 's', 'e', 'n', 't', 'a', 'r', ' ', 'u', 's', 'a', 'r', ' ', '(', ',', ')', 'p', '/', 'c', 'e', 'n', 't', 'e', 'n', 'a', 's', ' ', 'e', ' ', '(', '.', ')', ' ', 'c', 'a', 's', 'a', ' ', 'd', 'e', 'c', 'i', 'm', 'a', 'l', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 24079 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 24102 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 168, 162,	/* -23896 (abs: 00214) */
/* 24113 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 24367) */
/* 24129 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'M', 'A', 'S', 'C', 'A', 'R', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 24168 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'i', 'p', 'o', ' ', 'M', 'a', 's', 'c', 'a', 'r', 'a', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', '[', 'S', ']', 'i', 's', 't', 'e', 'm', 'a', ' ', '[', 'U', ']', 'n', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 24235 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'U', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 24333 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 24356 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 170, 161,	/* -24150 (abs: 00214) */
/* 24367 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 24614) */
/* 24383 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 24415 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'R', ']', 'e', 'c', '.', 'D', 'o', 'c', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 24482 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'V', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 24580 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 24603 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 179, 160,	/* -24397 (abs: 00214) */
/* 24614 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 24878) */
/* 24630 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'V', 'E', 'N', 'D', 'A', ' ', 'N', 'O', ' ', 'A', 'T', 'A', 'C', 'A', 'D', 'O', ' ', 'E', ' ', 'V', 'A', 'R', 'E', 'J', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 24679 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'V', 'e', 'n', 'd', 'a', 's', ' ', 'n', 'o', ' ', 'A', 't', 'a', 'c', 'a', 'd', 'o', '/', 'V', 'a', 'r', 'e', 'j', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 24746 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 24844 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 24867 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 171, 159,	/* -24661 (abs: 00214) */
/* 24878 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 13, 1,	/* 269 (abs: 25160) */
/* 24894 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'D', 'I', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'N', 'A', ' ', 'A', 'B', 'E', 'R', 'T', 'U', 'R', 'A', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 24961 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'o', 'n', 'd', 'i', 'c', 'a', 'o', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'A', 'b', 'e', 'r', 't', 'u', 'r', 'a', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 25028 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 25126 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 25149 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 145, 158,	/* -24943 (abs: 00214) */
/* 25160 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 25428) */
/* 25176 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'P', 'R', 'E', 'V', 'I', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'E', 'N', 'T', 'R', 'E', 'G', 'A', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 25229 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'P', 'r', 'e', 'v', 'i', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 25296 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 25394 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 25417 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 133, 157,	/* -25211 (abs: 00214) */
/* 25428 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 123, 1,	/* 379 (abs: 25820) */
/* 25444 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 's', 'o', ' ', 'n', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 25499 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 's', 'o', ' ', 'n', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 25560 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 25637) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 120,	/* 120 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '[', 'S', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'q', 'u', 'e', ' ', 'n', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'f', 'a', 'c', 'a', ' ', 'a', ' ', 'p', 'e', 'r', 'g', 'u', 'n', 't', 'a', ' ', 's', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'o', 'u', ' ', '[', 'N', ']', ' ', 'p', '/', 'n', 'a', 'o', ' ', 'p', 'e', 'r', 'g', 'u', 'n', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 25786 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 25809 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 253, 155,	/* -25603 (abs: 00214) */
/* 25820 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 26078) */
/* 25836 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'E', 'N', 'H', 'A', ' ', 'A', 'P', 'O', 'S', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 25879 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'S', 'E', 'N', 'H', 'A', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 25946 */ HB_P_LINE, 23, 2,	/* 535 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 26044 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 26067 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 251, 154,	/* -25861 (abs: 00214) */
/* 26078 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 1,	/* 390 (abs: 26481) */
/* 26094 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'P', 'R', 'E', 'C', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 26132 */ HB_P_LINE, 29, 2,	/* 541 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'l', 'o', 'q', '.', 'p', 'r', 'e', 'c', 'o', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'C', ']', 'u', 's', 't', 'o', ' ', '[', 'N', ']', 'e', 'n', 'h', 'u', 'm', ' ', '[', 'P', ']', 'u', 'l', 'a', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 26199 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 37,	/* 37 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', ',', 'C', ',', 'N', ',', 'P', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 26280) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 138,	/* 138 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 124,	/* 124 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '[', 'V', ']', '-', 'B', 'l', 'o', 'q', 'u', 'e', 'a', ' ', 'a', 't', 'e', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'E', 'N', 'D', 'A', ' ', '[', 'C', ']', '-', 'B', 'l', 'o', 'q', 'u', 'e', 'a', ' ', 'a', 't', 'e', ' ', 'o', ' ', 'p', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'C', 'U', 'S', 'T', 'O', ' ', '[', 'N', ']', 'a', 'o', ' ', 'b', 'l', 'o', 'q', 'u', 'e', 'a', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'e', 'c', 'o', ' ', '[', 'P', ']', 'u', 'l', 'a', ' ', 'o', ' ', 'p', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 26447 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 26470 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 104, 153,	/* -26264 (abs: 00214) */
/* 26481 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 248, 0,	/* 248 (abs: 26742) */
/* 26497 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 26544 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'D', 'u', 'p', 'l', 'i', 'c', 'a', 'r', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 26610 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 26708 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 26731 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 99, 152,	/* -26525 (abs: 00214) */
/* 26742 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 27011) */
/* 26758 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'P', 'O', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'A', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 26813 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'p', 'o', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'a', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 26879 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 26977 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 27000 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 86, 151,	/* -26794 (abs: 00214) */
/* 27011 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 27275) */
/* 27027 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'A', ' ', 'M', 'E', 'N', 'O', 'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 27073 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'B', 'l', 'o', 'q', '.', 'S', 'l', 'd', '.', ' ', 'a', ' ', 'M', 'e', 'n', 'o', 'r', ' ', '[', 'F', ']', 'i', 's', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', '2', ']', 'S', 'a', 'l', 'd', 'o', ' ', '[', 'N', ']', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 27139 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', ',', 'P', ',', '2', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 27241 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 27264 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 78, 150,	/* -27058 (abs: 00214) */
/* 27275 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 27530) */
/* 27291 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'M', 'A', 'X', 'I', 'M', 'A', ' ', 'D', 'E', ' ', 'I', 'T', 'E', 'N', 'S', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 27351 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'n', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 27418 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 27496 */ HB_P_LINE, 59, 2,	/* 571 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 27519 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 79, 149,	/* -27313 (abs: 00214) */
/* 27530 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 27797) */
/* 27546 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'M', 'A', 'X', 'I', 'M', 'A', ' ', 'P', 'O', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 27609 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'a', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 27676 */ HB_P_LINE, 65, 2,	/* 577 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 27763 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 27786 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 68, 148,	/* -27580 (abs: 00214) */
/* 27797 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 28059) */
/* 27813 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'V', 'A', 'L', 'O', 'R', ' ', 'M', 'A', 'X', 'I', 'M', 'O', ' ', 'P', 'O', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 27871 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', 'p', 'o', 'r', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 27938 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 28025 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 28048 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 62, 147,	/* -27842 (abs: 00214) */
/* 28059 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 80, 1,	/* 336 (abs: 28408) */
/* 28075 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'1', '0', '0', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'A', 'P', 'P', ' ', '[', 'H', ']', 't', 'i', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', '[', 'O', ']', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 28140 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'1', '0', '0', ' ', '-', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'A', 'P', 'P', ' ', '[', 'H', ']', 't', 'i', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', 's', ' ', '[', 'O', ']', 'u', 't', 'r', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 28219 */ HB_P_LINE, 80, 2,	/* 592 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'H', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 28296) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 49,	/* 49 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'A', 'P', 'P', ' ', 'p', 'a', 'r', 'a', ' ', 'f', 'o', 'r', 'c', 'a', ' ', 'd', 'e', ' ', 'v', 'e', 'n', 'd', 'a', '.', '.', '.', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 28374 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 28397 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 225, 145,	/* -28191 (abs: 00214) */
/* 28408 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 28686) */
/* 28424 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'D', 'E', 'F', 'A', 'U', 'L', 'T', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 28477 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'D', 'e', 'f', 'a', 'u', 'l', 't', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 28544 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 31,	/* 31 */
	HB_P_PUSHSYMNEAR, 32,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 28652 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 28675 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 203, 144,	/* -28469 (abs: 00214) */
/* 28686 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 0,	/* 252 (abs: 28951) */
/* 28702 */ HB_P_LINE, 92, 2,	/* 604 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', ' ', 'L', 'I', 'G', 'A', 'D', 'O', ' ', 'A', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 28752 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'l', 'i', 'g', 'a', 'd', 'o', ' ', 'a', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 28819 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 28917 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 28940 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 143,	/* -28734 (abs: 00214) */
/* 28951 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 91, 1,	/* 347 (abs: 29311) */
/* 28967 */ HB_P_LINE, 99, 2,	/* 611 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 29011 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'O', 'B', 'S', '.', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'P', '/', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 29078 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 41,	/* 41 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'S', ' ', ',', 'N', ' ', ',', 'P', ' ', ',', 'P', 'S', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 29163) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 85,	/* 85 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 71,	/* 71 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', '[', 'S', ']', 'i', 'm', ' ', '-', ' ', '[', 'N', ']', 'a', 'o', ' ', '-', ' ', '[', 'P', ']', ' ', 'S', 'o', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'o', 'u', ' ', '[', 'P', 'S', ']', ' ', 'N', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 29277 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 29300 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 90, 142,	/* -29094 (abs: 00214) */
/* 29311 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 29556) */
/* 29327 */ HB_P_LINE, 106, 2,	/* 618 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'M', 'A', 'X', 'I', 'M', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 29376 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 29443 */ HB_P_LINE, 108, 2,	/* 620 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 29522 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 29545 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 101, 141,	/* -29339 (abs: 00214) */
/* 29556 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 29819) */
/* 29572 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'A', ' ', 'V', 'E', 'N', 'D', 'A', ' ', 'A', 'P', 'R', 'A', 'Z', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 29620 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'v', 'e', 'n', 'd', 'a', ' ', 'A', 'P', 'R', 'A', 'Z', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 29687 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 29785 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 29808 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 94, 140,	/* -29602 (abs: 00214) */
/* 29819 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 209, 0,	/* 209 (abs: 30041) */
/* 29835 */ HB_P_LINE, 120, 2,	/* 632 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'R', 'A', 'Z', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 29864 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'P', 'r', 'a', 'z', 'o', ' ', 'd', 'e', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'I', 'A', 'S', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 29931 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 30007 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 30030 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 128, 139,	/* -29824 (abs: 00214) */
/* 30041 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 30383) */
/* 30057 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'N', 'F', 'O', 'R', 'M', 'A', 'R', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', ' ', 'N', 'O', ' ', 'F', 'E', 'C', 'H', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 30122 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 30189 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 30266) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 54,	/* 54 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'P', 'e', 'd', 'i', 'r', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'o', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'n', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 30349 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 30372 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 42, 138,	/* -30166 (abs: 00214) */
/* 30383 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 30662) */
/* 30399 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'I', 'N', 'F', 'O', 'R', 'M', 'A', 'R', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'N', 'O', ' ', 'F', 'E', 'C', 'H', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 30463 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 30530 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 30628 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 30651 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 19, 137,	/* -30445 (abs: 00214) */
/* 30662 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 88, 1,	/* 344 (abs: 31019) */
/* 30678 */ HB_P_LINE, 141, 2,	/* 653 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'D', 'E', 'N', 'T', 'I', 'F', 'I', 'C', 'A', 'R', ' ', 'C', 'A', 'R', 'R', 'O', ' ', 'N', 'O', ' ', 'F', 'E', 'C', 'H', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 30743 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'C', 'a', 'r', 'r', 'o', ' ', 'n', 'o', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 30810 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 30887) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 'a', ' ', 'P', 'l', 'a', 'c', 'a', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', ' ', 'n', 'o', ' ', 'f', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 30985 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 31008 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 174, 135,	/* -30802 (abs: 00214) */
/* 31019 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 53, 1,	/* 309 (abs: 31341) */
/* 31035 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'N', 'F', 'O', 'R', 'M', 'A', ' ', 'R', 'E', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 'N', 'A', 'T', 'E', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 31091 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'1', '5', '2', ' ', '-', ' ', 'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'R', 'E', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 'N', 'A', 'T', 'E', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 31154 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 33,	/* 33 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 31231) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 30,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 47,	/* 47 */
	HB_P_PUSHSYMNEAR, 31,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'R', 'E', 'P', 'R', 'E', 'S', 'E', 'N', 'T', 'E', 'N', 'A', 'T', 'E', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 31307 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 31330 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 108, 134,	/* -31124 (abs: 00214) */
/* 31341 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 31578) */
/* 31357 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'D', 'O', ' ', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 31405 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'I', 'C', 'K', 'E', 'T', ' ', 'C', 'A', 'I', 'X', 'A', ' ', '[', 'S', '/', 'N', '/', 'T', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 31444 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 26,	/* 26 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 31544 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 31567 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 127, 133,	/* -31361 (abs: 00214) */
/* 31578 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 229, 0,	/* 229 (abs: 31820) */
/* 31594 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'D', 'A', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 31646 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'I', 'C', 'K', 'E', 'T', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 31688 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 31786 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 31809 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 141, 132,	/* -31603 (abs: 00214) */
/* 31820 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 1,	/* 262 (abs: 32095) */
/* 31836 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'L', 'O', 'C', 'A', 'L', ' ', 'P', '/', 'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'D', 'A', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 31896 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'T', 'I', 'C', 'K', 'E', 'T', ' ', 'E', 'M', 'B', 'A', 'L', 'A', 'G', 'E', 'M', ' ', 'n', 'o', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'C', ']', 'a', 'i', 'x', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 31963 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 32061 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 32084 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 122, 131,	/* -31878 (abs: 00214) */
/* 32095 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 32383) */
/* 32111 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', ' ', 'C', 'O', 'M', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'N', 'A', 'O', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 32184 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'l', 'o', 'q', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'c', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'N', 'A', 'O', ' ', 'E', 'x', 'p', 'e', 'd', 'i', 'd', 'o', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 32251 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 32349 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 32372 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 90, 130,	/* -32166 (abs: 00214) */
/* 32383 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 32667) */
/* 32399 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'O', 'P', 'E', 'R', 'A', 'D', 'O', 'R', ' ', 'C', 'O', 'M', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 32468 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'B', 'l', 'o', 'q', '.', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'c', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'P', 'E', 'D', 'E', 'N', 'T', 'E', ' ', 'E', 'X', 'E', 'D', 'I', 'D', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 32535 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 32633 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 32656 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 62, 129,	/* -32450 (abs: 00214) */
/* 32667 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 32946) */
/* 32683 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'D', 'I', 'A', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'A', 'P', 'O', 'S', ' ', 'P', 'R', 'A', 'Z', 'O', ' ', 'E', 'S', 'T', 'I', 'P', 'U', 'L', 'A', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 32768 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 't', 'd', ' ', 'd', 'i', 'a', 's', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'r', 'a', 'z', 'o', ' ', 'E', 's', 't', 'i', 'p', 'u', 'l', 'a', 'd', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 32835 */ HB_P_LINE, 192, 2,	/* 704 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 32912 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 32935 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 39, 128,	/* -32729 (abs: 00214) */
/* 32946 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 33225) */
/* 32962 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'F', 'A', 'Z', 'E', 'R', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'A', 'P', 'O', 'S', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 33015 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'F', 'a', 'z', 'e', 'r', ' ', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'a', 'p', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', ' ', 'e', ' ', '[', 'I', ']', 'm', 'p', 'r', 'i', 'm', 'i', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 33090 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 26,	/* 26 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'I', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 33190 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 33213 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 17, 127, 255,	/* -33007 (abs: 00000214) */
/* 33225 */ HB_P_LINE, 203, 2,	/* 715 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 33494) */
/* 33241 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 33294 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 33361 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 33459 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 33482 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 4, 126, 255,	/* -33276 (abs: 00000214) */
/* 33494 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 33765) */
/* 33510 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'O', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'I', 'N', 'F', 'O', 'R', 'M', 'A', 'R', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 33565 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'N', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 33632 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 33730 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 33753 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 245, 124, 255,	/* -33547 (abs: 00000214) */
/* 33765 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 0,	/* 252 (abs: 34030) */
/* 33781 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'O', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 33838 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 33897 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 33995 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 34018 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 236, 123, 255,	/* -33812 (abs: 00000214) */
/* 34030 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 41, 1,	/* 297 (abs: 34340) */
/* 34046 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'A', 'U', 'T', 'E', 'N', 'T', 'I', 'C', 'A', 'R', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'N', 'O', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', '/', 'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'D', 'O', ' ', 'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 34133 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'A', 'u', 't', '.', 'P', 'e', 'd', 'i', 'd', 'o', '[', 'S', ']', '/', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', '/', 'R', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 34205 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 26,	/* 26 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 34305 */ HB_P_LINE, 228, 2,	/* 740 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 34328 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 182, 122, 255,	/* -34122 (abs: 00000214) */
/* 34340 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 34587) */
/* 34356 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'C', 'A', 'R', 'N', 'E', 'S', ' ', 'N', 'O', ' ', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 34404 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'a', 'r', 'n', 'e', 's', ' ', 'n', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 34454 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 34552 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 34575 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 191, 121, 255,	/* -34369 (abs: 00000214) */
/* 34587 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 34854) */
/* 34603 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 34654 */ HB_P_LINE, 240, 2,	/* 752 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'F', 'e', 'c', 'h', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'i', 'x', 'a', ' ', '[', 'A', ']', 'n', 't', 'i', 'g', 'o', ' ', '[', 'N', ']', 'o', 'v', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 34721 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 34819 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 34842 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 180, 120, 255,	/* -34636 (abs: 00000214) */
/* 34854 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 35109) */
/* 34870 */ HB_P_LINE, 246, 2,	/* 758 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'P', 'A', 'G', 'I', 'N', 'A', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'I', 'N', 'T', 'E', 'I', 'R', 'A', ' ', 'O', 'U', ' ', 'M', 'E', 'I', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 34935 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'a', 'g', '.', '<', 'I', '>', 'n', 't', 'e', 'i', 'r', 'a', ' ', '<', 'M', '>', 'e', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 34976 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'I', ',', 'M', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 35074 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 35097 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 181, 119, 255,	/* -34891 (abs: 00000214) */
/* 35109 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 35360) */
/* 35125 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'C', 'A', 'B', 'E', 'C', 'A', 'L', 'H', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 35177 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'I', 'm', 'p', '.', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 35227 */ HB_P_LINE, 255, 2,	/* 767 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 35325 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 35348 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 186, 118, 255,	/* -35142 (abs: 00000214) */
/* 35360 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 35616) */
/* 35376 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'D', 'A', 'D', 'O', 'S', ' ', 'D', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 35435 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'm', 'p', '.', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 35483 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 35581 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 35604 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 186, 117, 255,	/* -35398 (abs: 00000214) */
/* 35616 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 35887) */
/* 35632 */ HB_P_LINE, 11, 3,	/* 779 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', ' ', 'D', 'A', ' ', 'E', 'M', 'P', 'R', 'E', 'S', 'A', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 35699 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'I', 'm', 'p', '.', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 35754 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 35852 */ HB_P_LINE, 14, 3,	/* 782 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 35875 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 171, 116, 255,	/* -35669 (abs: 00000214) */
/* 35887 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 36143) */
/* 35903 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'N', 'O', 'M', 'E', ' ', 'D', 'O', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 35962 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'm', 'p', '.', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 36010 */ HB_P_LINE, 20, 3,	/* 788 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 36108 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 36131 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 171, 115, 255,	/* -35925 (abs: 00000214) */
/* 36143 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 36415) */
/* 36159 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', ' ', 'D', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 36226 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'm', 'p', '.', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'D', 'e', 'v', 'e', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 36282 */ HB_P_LINE, 27, 3,	/* 795 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 36380 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 36403 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 155, 114, 255,	/* -36197 (abs: 00000214) */
/* 36415 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '4', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 36708) */
/* 36431 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'C', 'O', 'M', ' ', 'C', 'O', 'D', '.', ' ', 'D', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', 'O', 'U', ' ', 'C', 'O', 'D', '.', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 36515 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'I', 'm', 'p', '.', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'o', 'u', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'B', ']', 'a', 'r', 'r', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 36575 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 36673 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 36696 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 118, 113, 255,	/* -36490 (abs: 00000214) */
/* 36708 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 36952) */
/* 36724 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 36775 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 36819 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 36917 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 36940 */ HB_P_LINE, 43, 3,	/* 811 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 130, 112, 255,	/* -36734 (abs: 00000214) */
/* 36952 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 102, 1,	/* 358 (abs: 37323) */
/* 36968 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', 'O', 'D', 'A', 'P', 'E', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 37008 */ HB_P_LINE, 47, 3,	/* 815 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'R', 'o', 'd', 'a', 'p', 'e', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 37043 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37108 */ HB_P_LINE, 49, 3,	/* 817 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37168 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37228 */ HB_P_LINE, 51, 3,	/* 819 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37288 */ HB_P_LINE, 52, 3,	/* 820 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 37311 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 15, 111, 255,	/* -37105 (abs: 00000214) */
/* 37323 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 37610) */
/* 37339 */ HB_P_LINE, 56, 3,	/* 824 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'I', 'M', 'P', 'R', 'E', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'E', ' ', 'O', 'R', 'C', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 37403 */ HB_P_LINE, 57, 3,	/* 825 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'a', ' ', '[', 'A', ']', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', '[', 'C', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '[', 'D', ']', 'D', 'i', 'g', 'i', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 37475 */ HB_P_LINE, 58, 3,	/* 826 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 26,	/* 26 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', ',', 'C', ',', 'D', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37575 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 37598 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 240, 109, 255,	/* -37392 (abs: 00000214) */
/* 37610 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 37867) */
/* 37626 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'A', 'S', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', 'P', 'O', 'S', ' ', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 37686 */ HB_P_LINE, 64, 3,	/* 832 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'a', 's', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 37734 */ HB_P_LINE, 65, 3,	/* 833 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 37832 */ HB_P_LINE, 66, 3,	/* 834 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 37855 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 239, 108, 255,	/* -37649 (abs: 00000214) */
/* 37867 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 38138) */
/* 37883 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', ' ', 'A', 'S', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', 'P', 'O', 'S', ' ', 'V', 'E', 'N', 'D', 'A', ' ', 'O', 'U', ' ', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 37949 */ HB_P_LINE, 71, 3,	/* 839 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'm', 'p', '.', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'a', 'p', 'o', 's', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', '[', 'C', ']', 'a', 'i', 'x', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 38005 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'V', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 38103 */ HB_P_LINE, 73, 3,	/* 841 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 38126 */ HB_P_LINE, 74, 3,	/* 842 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 224, 107, 255,	/* -37920 (abs: 00000214) */
/* 38138 */ HB_P_LINE, 76, 3,	/* 844 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 38390) */
/* 38154 */ HB_P_LINE, 77, 3,	/* 845 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'T', 'I', 'P', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 38205 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'B', 'O', 'L', 'E', 'T', 'O', ' ', '[', 'A', ']', 'C', 'B', 'R', ' ', '[', 'S', ']', 'i', 's', 't', 'e', 'm', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 38257 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', ',', 'S', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 38355 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 38378 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 228, 106, 255,	/* -38172 (abs: 00000214) */
/* 38390 */ HB_P_LINE, 83, 3,	/* 851 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 38606) */
/* 38406 */ HB_P_LINE, 84, 3,	/* 852 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'M', 'U', 'L', 'T', 'A', ' ', 'A', 'P', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'I', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 38451 */ HB_P_LINE, 85, 3,	/* 853 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'M', 'u', 'l', 't', 'a', ' ', 'a', 'p', 'o', 's', ' ', 'V', 'e', 'n', 'c', '.', ' ', '[', '%', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 38492 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 38571 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 38594 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 12, 106, 255,	/* -38388 (abs: 00000214) */
/* 38606 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 38809) */
/* 38622 */ HB_P_LINE, 91, 3,	/* 859 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'J', 'U', 'R', 'O', 'S', ' ', 'A', 'O', ' ', 'D', 'I', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 38658 */ HB_P_LINE, 92, 3,	/* 860 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'J', 'u', 'r', 'o', 's', ' ', 'a', 'o', ' ', 'd', 'i', 'a', ' ', '[', '%', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 38695 */ HB_P_LINE, 93, 3,	/* 861 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 38774 */ HB_P_LINE, 94, 3,	/* 862 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 38797 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 65, 105, 255,	/* -38591 (abs: 00000214) */
/* 38809 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 39018) */
/* 38825 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'O', 'L', 'E', 'R', 'A', 'N', 'C', 'I', 'A', ' ', 'D', 'E', ' ', 'D', 'I', 'A', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 38867 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'T', 'o', 'l', 'e', 'r', 'a', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'd', 'i', 'a', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 38906 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 38983 */ HB_P_LINE, 101, 3,	/* 869 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 39006 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 112, 104, 255,	/* -38800 (abs: 00000214) */
/* 39018 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 223, 0,	/* 223 (abs: 39254) */
/* 39034 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'D', 'I', 'A', 'S', ' ', 'A', 'N', 'T', 'E', 'C', 'I', 'P', 'A', 'D', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 39088 */ HB_P_LINE, 106, 3,	/* 874 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '[', '%', ']', ' ', 'p', '/', 'D', 'i', 'a', 's', ' ', 'A', 'n', 't', 'e', 'c', 'i', 'p', 'a', 'd', 'o', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 39140 */ HB_P_LINE, 107, 3,	/* 875 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39219 */ HB_P_LINE, 108, 3,	/* 876 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 39242 */ HB_P_LINE, 109, 3,	/* 877 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 132, 103, 255,	/* -39036 (abs: 00000214) */
/* 39254 */ HB_P_LINE, 111, 3,	/* 879 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 39523) */
/* 39270 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'R', 'O', 'D', 'A', 'P', 'E', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', ' ', 'B', 'A', 'N', 'C', 'A', 'R', 'I', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 39319 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'R', 'o', 'd', 'a', 'p', 'e', ' ', 'd', 'o', ' ', 'B', 'o', 'l', 'e', 't', 'o', ' ', 'B', 'a', 'n', 'c', 'a', 'r', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 39363 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39428 */ HB_P_LINE, 115, 3,	/* 883 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39488 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 39511 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 119, 102, 255,	/* -39305 (abs: 00000214) */
/* 39523 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 1,	/* 502 (abs: 40038) */
/* 39539 */ HB_P_LINE, 120, 3,	/* 888 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'B', 'O', 'L', 'E', 'T', 'O', ' ', 'B', 'A', 'N', 'C', 'A', 'R', 'I', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 39594 */ HB_P_LINE, 121, 3,	/* 889 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'B', 'o', 'l', 'e', 't', 'o', ' ', 'B', 'a', 'n', 'c', 'a', 'r', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 39644 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39703 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39763 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39823 */ HB_P_LINE, 125, 3,	/* 893 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39883 */ HB_P_LINE, 126, 3,	/* 894 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 39943 */ HB_P_LINE, 127, 3,	/* 895 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40003 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 40026 */ HB_P_LINE, 129, 3,	/* 897 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 116, 100, 255,	/* -39820 (abs: 00000214) */
/* 40038 */ HB_P_LINE, 131, 3,	/* 899 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 1,	/* 390 (abs: 40441) */
/* 40054 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'D', 'E', 'S', 'C', 'R', 'I', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'A', 'C', 'O', 'R', 'D', 'O', ' ', 'D', 'E', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 40110 */ HB_P_LINE, 133, 3,	/* 901 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'A', 'c', 'o', 'r', 'd', 'o', ' ', 'd', 'e', ' ', 'P', 'A', 'G', 'A', 'M', 'E', 'N', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 40161 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40226 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40286 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40346 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40406 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 40429 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 225, 98, 255,	/* -40223 (abs: 00000214) */
/* 40441 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 0,	/* 235 (abs: 40689) */
/* 40457 */ HB_P_LINE, 142, 3,	/* 910 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'U', 'T', 'I', 'L', 'I', 'Z', 'A', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 40505 */ HB_P_LINE, 143, 3,	/* 911 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'U', 't', 'i', 'l', 'i', 'z', 'a', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 40556 */ HB_P_LINE, 144, 3,	/* 912 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40654 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 40677 */ HB_P_LINE, 146, 3,	/* 914 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 233, 97, 255,	/* -40471 (abs: 00000214) */
/* 40689 */ HB_P_LINE, 148, 3,	/* 916 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 1,	/* 425 (abs: 41127) */
/* 40705 */ HB_P_LINE, 149, 3,	/* 917 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ' ', 'D', 'A', ' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'E', ' ', 'S', 'E', 'R', 'V', 'I', 'C', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 40758 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 40787 */ HB_P_LINE, 151, 3,	/* 919 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40852 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40912 */ HB_P_LINE, 153, 3,	/* 921 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 40972 */ HB_P_LINE, 154, 3,	/* 922 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 41032 */ HB_P_LINE, 155, 3,	/* 923 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 41092 */ HB_P_LINE, 156, 3,	/* 924 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 41115 */ HB_P_LINE, 157, 3,	/* 925 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 51, 96, 255,	/* -40909 (abs: 00000214) */
/* 41127 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 41374) */
/* 41143 */ HB_P_LINE, 160, 3,	/* 928 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'O', 'L', 'E', 'R', 'A', 'N', 'C', 'I', 'A', ' ', 'D', 'E', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 41203 */ HB_P_LINE, 161, 3,	/* 929 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'T', 'o', 'l', 'e', 'r', 'a', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 41260 */ HB_P_LINE, 162, 3,	/* 930 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 41339 */ HB_P_LINE, 163, 3,	/* 931 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 41362 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 60, 95, 255,	/* -41156 (abs: 00000214) */
/* 41374 */ HB_P_LINE, 166, 3,	/* 934 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 41619) */
/* 41390 */ HB_P_LINE, 167, 3,	/* 935 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'%', ' ', 'O', 'U', ' ', 'F', 'A', 'T', 'O', 'R', ' ', 'D', 'E', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'N', 'A', ' ', 'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 41448 */ HB_P_LINE, 168, 3,	/* 936 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'[', '%', ']', ' ', 'o', 'u', ' ', 'F', 'a', 't', 'o', 'r', ' ', 'd', 'e', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'n', 'a', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 41505 */ HB_P_LINE, 169, 3,	/* 937 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 41584 */ HB_P_LINE, 170, 3,	/* 938 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 41607 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 71, 94, 255,	/* -41401 (abs: 00000214) */
/* 41619 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 41876) */
/* 41635 */ HB_P_LINE, 174, 3,	/* 942 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'I', 'N', 'F', 'O', 'R', 'M', 'A', 'R', ' ', 'A', ' ', 'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'N', 'O', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 41688 */ HB_P_LINE, 175, 3,	/* 943 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'n', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 41743 */ HB_P_LINE, 176, 3,	/* 944 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 41841 */ HB_P_LINE, 177, 3,	/* 945 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 41864 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 70, 93, 255,	/* -41658 (abs: 00000214) */
/* 41876 */ HB_P_LINE, 180, 3,	/* 948 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 42143) */
/* 41892 */ HB_P_LINE, 181, 3,	/* 949 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'C', 'O', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'O', ' ', 'T', 'E', 'L', 'E', 'M', 'A', 'R', 'K', 'E', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 41951 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'p', '/', 'o', ' ', 'T', 'e', 'l', 'e', 'm', 'a', 'r', 'k', 'e', 't', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 42004 */ HB_P_LINE, 183, 3,	/* 951 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 42083 */ HB_P_LINE, 184, 3,	/* 952 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 42106 */ HB_P_LINE, 185, 3,	/* 953 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 42131) */
/* 42119 */ HB_P_LINE, 186, 3,	/* 954 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 71, 92, 255,	/* -41913 (abs: 00000214) */
/* 42131 */ HB_P_LINE, 189, 3,	/* 957 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 59, 92, 255,	/* -41925 (abs: 00000214) */
/* 42143 */ HB_P_LINE, 191, 3,	/* 959 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 42405) */
/* 42159 */ HB_P_LINE, 192, 3,	/* 960 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'P', 'O', 'R', ' ', 'D', 'I', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 42227 */ HB_P_LINE, 193, 3,	/* 961 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 42294 */ HB_P_LINE, 194, 3,	/* 962 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 42370 */ HB_P_LINE, 195, 3,	/* 963 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 42393 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 53, 91, 255,	/* -42187 (abs: 00000214) */
/* 42405 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 42665) */
/* 42421 */ HB_P_LINE, 199, 3,	/* 967 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'I', 'T', 'E', 'N', 'S', ' ', 'P', 'O', 'R', ' ', 'D', 'I', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 42487 */ HB_P_LINE, 200, 3,	/* 968 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'I', 'T', 'E', 'N', 'S', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 42554 */ HB_P_LINE, 201, 3,	/* 969 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 42630 */ HB_P_LINE, 202, 3,	/* 970 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 42653 */ HB_P_LINE, 203, 3,	/* 971 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 49, 90, 255,	/* -42447 (abs: 00000214) */
/* 42665 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 42928) */
/* 42681 */ HB_P_LINE, 206, 3,	/* 974 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'Q', 'U', 'A', 'N', 'T', 'I', 'D', 'A', 'D', 'E', ' ', 'D', 'E', ' ', 'P', 'E', 'S', 'O', ' ', 'P', 'O', 'R', ' ', 'D', 'I', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 42746 */ HB_P_LINE, 207, 3,	/* 975 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'E', 'S', 'O', ' ', 'p', 'o', 'r', ' ', 'D', 'i', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'E', 'X', 'P', 'E', 'D', 'I', 'C', 'A', 'O', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 42813 */ HB_P_LINE, 208, 3,	/* 976 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 42893 */ HB_P_LINE, 209, 3,	/* 977 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 42916 */ HB_P_LINE, 210, 3,	/* 978 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 42, 89, 255,	/* -42710 (abs: 00000214) */
/* 42928 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 43144) */
/* 42944 */ HB_P_LINE, 213, 3,	/* 981 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'H', 'O', 'S', 'T', ' ', 'D', 'A', ' ', 'C', 'O', 'N', 'T', 'A', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 42990 */ HB_P_LINE, 214, 3,	/* 982 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'H', 'O', 'S', 'T', ' ', 'd', 'a', ' ', 'C', 'o', 'n', 't', 'a', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 43038 */ HB_P_LINE, 215, 3,	/* 983 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 43109 */ HB_P_LINE, 216, 3,	/* 984 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 43132 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 82, 88, 255,	/* -42926 (abs: 00000214) */
/* 43144 */ HB_P_LINE, 219, 3,	/* 987 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 195, 0,	/* 195 (abs: 43352) */
/* 43160 */ HB_P_LINE, 220, 3,	/* 988 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'P', 'O', 'R', 'T', 'A', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 43198 */ HB_P_LINE, 221, 3,	/* 989 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'P', 'O', 'R', 'T', 'A', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 43246 */ HB_P_LINE, 222, 3,	/* 990 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 43317 */ HB_P_LINE, 223, 3,	/* 991 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 43340 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 130, 87, 255,	/* -43134 (abs: 00000214) */
/* 43352 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 43555) */
/* 43368 */ HB_P_LINE, 227, 3,	/* 995 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'L', 'O', 'G', 'I', 'N', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 43406 */ HB_P_LINE, 228, 3,	/* 996 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'L', 'O', 'G', 'I', 'N', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 43449 */ HB_P_LINE, 229, 3,	/* 997 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 43520 */ HB_P_LINE, 230, 3,	/* 998 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 43543 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 183, 86, 255,	/* -43337 (abs: 00000214) */
/* 43555 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 43758) */
/* 43571 */ HB_P_LINE, 234, 3,	/* 1002 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'N', 'H', 'A', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 43609 */ HB_P_LINE, 235, 3,	/* 1003 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'S', 'E', 'N', 'H', 'A', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 43652 */ HB_P_LINE, 236, 3,	/* 1004 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 43723 */ HB_P_LINE, 237, 3,	/* 1005 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 43746 */ HB_P_LINE, 238, 3,	/* 1006 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 236, 85, 255,	/* -43540 (abs: 00000214) */
/* 43758 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 43959) */
/* 43774 */ HB_P_LINE, 241, 3,	/* 1009 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'F', 'R', 'O', 'M', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 43811 */ HB_P_LINE, 242, 3,	/* 1010 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'F', 'R', 'O', 'M', ' ', 'd', 'o', ' ', 'E', 'm', 'a', 'i', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 43853 */ HB_P_LINE, 243, 3,	/* 1011 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 43924 */ HB_P_LINE, 244, 3,	/* 1012 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 43947 */ HB_P_LINE, 245, 3,	/* 1013 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 35, 85, 255,	/* -43741 (abs: 00000214) */
/* 43959 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 44168) */
/* 43975 */ HB_P_LINE, 248, 3,	/* 1016 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'A', 'M', 'I', 'N', 'H', 'O', ' ', 'D', 'O', ' ', 'A', 'P', 'P', '.', '.', '.', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 44016 */ HB_P_LINE, 249, 3,	/* 1017 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'A', 'P', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 44062 */ HB_P_LINE, 250, 3,	/* 1018 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 44133 */ HB_P_LINE, 251, 3,	/* 1019 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 44156 */ HB_P_LINE, 252, 3,	/* 1020 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 82, 84, 255,	/* -43950 (abs: 00000214) */
/* 44168 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 44434) */
/* 44184 */ HB_P_LINE, 255, 3,	/* 1023 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'R', 'O', 'M', 'I', 'S', 'S', 'O', 'R', 'I', 'A', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 'n', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 44237 */ HB_P_LINE, 0, 4,	/* 1024 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'R', 'O', 'M', 'I', 'S', 'S', 'O', 'R', 'I', 'A', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 'n', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 44301 */ HB_P_LINE, 1, 4,	/* 1025 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 44399 */ HB_P_LINE, 2, 4,	/* 1026 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 44422 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 72, 83, 255,	/* -44216 (abs: 00000214) */
/* 44434 */ HB_P_LINE, 5, 4,	/* 1029 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '8', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 44690) */
/* 44450 */ HB_P_LINE, 6, 4,	/* 1030 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'T', 'a', 'm', 'a', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 44513 */ HB_P_LINE, 7, 4,	/* 1031 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'T', 'a', 'm', 'a', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', ' ', 'B', 'a', 'l', 'a', 'n', 'c', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 44581 */ HB_P_LINE, 8, 4,	/* 1032 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 24,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 8, 0,	/* M_SET */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', '_', 's', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 26,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 44655 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 44678 */ HB_P_LINE, 10, 4,	/* 1034 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 72, 82, 255,	/* -44472 (abs: 00000214) */
/* 44690 */ HB_P_LINE, 12, 4,	/* 1036 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 24,	/* 6150 (abs: 50853) */
/* 44706 */ HB_P_LINE, 13, 4,	/* 1037 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_EMAIL */
/* 44714 */ HB_P_LINE, 14, 4,	/* 1038 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 7, 0,	/* M_EMAIL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 44758 */ HB_P_LINE, 15, 4,	/* 1039 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 44783 */ HB_P_LINE, 16, 4,	/* 1040 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 44870) */
/* 44797 */ HB_P_LINE, 17, 4,	/* 1041 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 9, 0,	/* 9 */
	HB_P_DOSHORT, 2,
/* 44870 */ HB_P_LINE, 19, 4,	/* 1043 */
	HB_P_PUSHSYMNEAR, 7,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'E', 'M', 'A', 'I', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 44915 */ HB_P_LINE, 20, 4,	/* 1044 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'p', 'i', 'a', ' ', 'd', 'e', ' ', 'E', 'M', 'A', 'I', 'L', ' ', 'O', 'c', 'u', 'l', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 44955 */ HB_P_LINE, 21, 4,	/* 1045 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'L', 'e', 'i', 't', 'u', 'r', 'a', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 44996 */ HB_P_LINE, 22, 4,	/* 1046 */
	HB_P_PUSHSYMNEAR, 21,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'A', 's', 's', 'i', 'n', 'a', 't', 'u', 'r', 'a', ' ', 'd', 'o', ' ', 'E', 'M', 'A', 'I', 'L', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 45037 */ HB_P_LINE, 23, 4,	/* 1047 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45103 */ HB_P_LINE, 24, 4,	/* 1048 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 24, 0,	/* 24 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45198 */ HB_P_LINE, 25, 4,	/* 1049 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45266 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45334 */ HB_P_LINE, 27, 4,	/* 1051 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45402 */ HB_P_LINE, 28, 4,	/* 1052 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45470 */ HB_P_LINE, 29, 4,	/* 1053 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45538 */ HB_P_LINE, 30, 4,	/* 1054 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45606 */ HB_P_LINE, 31, 4,	/* 1055 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* M_EMAIL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'e', 'm', 'a', 'i', 'l', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 27, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 6, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 45674 */ HB_P_LINE, 32, 4,	/* 1056 */
	HB_P_PUSHSYMNEAR, 28,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 6, 0,	/* GETLIST */
/* 45697 */ HB_P_LINE, 33, 4,	/* 1057 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 45722) */
/* 45710 */ HB_P_LINE, 34, 4,	/* 1058 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 64, 78, 255,	/* -45504 (abs: 00000214) */
/* 45722 */ HB_P_LINE, 37, 4,	/* 1061 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 46118) */
/* 45771 */ HB_P_LINE, 47, 4,	/* 1071 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'e', 'm', 'a', 'i', 'l', ' ', 'S', 'E', 'T', ' ', ' ', 'c', 'o', 'p', 'i', 'a', '_', 'e', 'm', 'a', 'i', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'c', 'o', 'n', 'f', '_', 'l', 'e', 'i', 't', 'u', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '1', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '2', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '3', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '4', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '5', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '6', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	',', 'a', 's', 's', 'i', 'n', 'a', '7', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 46093 */ HB_P_LINE, 48, 4,	/* 1072 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 46118 */ HB_P_LINE, 50, 4,	/* 1074 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 168, 76, 255,	/* -45912 (abs: 00000214) */
/* 46130 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSEFAR, 153, 76, 255,	/* -45927 (abs: 00000214) */
/* 46145 */ HB_P_LINE, 58, 4,	/* 1082 */
	HB_P_PUSHSYMNEAR, 35,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 222, 17,	/* 4574 (abs: 50765) */
/* 46194 */ HB_P_LINE, 191, 4,	/* 1215 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', ' ', 'S', 'E', 'T', ' ', ' ', 'p', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'n', 'f', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'm', 'p', 'o', 's', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'f', 'a', 't', 'u', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'v', 'l', 'r', '_', 'e', 'n', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'e', 'd', '_', 'o', 'b', 's', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'v', 'e', 'n', '_', 'c', 'l', 'i', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'a', 'g', 'i', 'n', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'f', 'e', '_', 'e', 'a', 'n', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'a', 'l', 'd', 'o', 'n', 'f', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'l', 'i', '_', 'f', 'e', 'c', 'h', 'a', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'c', 'a', 'b', 'e', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'c', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'c', 'o', 'm', 'i', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'b', '_', 'p', 'e', 'd', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'b', '_', 'o', 'r', 'c', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', 'p', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', 'p', '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', 'p', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', 'p', '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'c', 'o', 'r', 'd', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'c', 'o', 'r', 'd', '2', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'c', 'o', 'r', 'd', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'c', 'o', 'r', 'd', '4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'm', 'a', 'x', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 't', 'e', 'm', '_', 'm', 'a', 'x', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'a', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'p', 'e', 'd', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 's', 'a', '_', 'c', 'a', 'r', 'r', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'l', 'o', '_', 'v', 'e', 'n', 'd', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'a', 'd', 'o', '_', 'c', 'l', 'i', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'o', 'm', 'e', '_', 'f', 'a', 'n', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 't', 'i', '_', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'p', 'd', 'v', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'm', 'a', 's', 'c', 'a', 'r', 'a', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'r', 'z', 'a', 'n', 't', 'p', 'e', 'd', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'u', 'p', '_', 'i', 'm', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'e', 'c', 'b', 'x', 'd', 'u', 'p', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 't', 'e', 'r', 'v', 'a', 'l', 'o', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'u', 'l', 't', 'a', '_', 'd', 'u', 'p', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'j', 'u', 'r', 'o', 's', '_', 'd', 'u', 'p', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', '_', 'd', 'u', 'p', '1', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 'd', 'a', '_', 'd', 'u', 'p', '2', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'o', 'c', 'a', 'l', '_', 'b', 'o', 'l', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '1', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '2', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '3', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '4', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'e', 'n', 's', '_', 'b', 'o', 'l', '5', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'f', 'e', 'c', 'h', 'a', '_', 'c', 'x', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'r', 'n', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 't', 'i', '_', 't', 'e', 'l', 'e', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 69,	/* 69 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'r', 'o', 'm', 'i', 's', 's', 'o', 'r', 'i', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'o', 's', '1', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'o', 's', '2', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'o', 's', '3', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 73,	/* 73 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'o', 's', '4', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 74,	/* 74 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'b', 's', '_', 'o', 's', '5', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'e', 'd', '_', 'e', 'm', 'a', 'i', 'l', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'x', '_', 'e', 'm', 'a', 'i', 'l', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 77,	/* 77 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'e', 'c', '_', 'p', 'a', 'r', 'c', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'n', 'h', 'a', '_', 'p', 'd', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'o', 'm', 'e', '_', 'v', 'e', 'n', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'e', 'c', 'e', 'b', 'e', 'r', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'l', 'i', '_', 'd', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', 'c', 'h', 'c', 'l', 'i', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'a', 'i', 'x', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 86,	/* 86 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'e', 'm', 'b', 'a', 'l', 'a', 'g', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 87,	/* 87 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'o', 'c', '_', 'e', 'm', 'b', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'f', 'e', '_', 'p', '_', 'h', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'e', 'c', 'u', 'l', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'c', 'a', 'x', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 94,	/* 94 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'f', 'e', '_', 'm', 'o', 'd', 'o', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'a', 's', 'c', '_', 'n', 'u', 'm', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'a', 's', 'c', '_', 'n', 'u', 'm', 't', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 98,	/* 98 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'a', 's', 'c', '_', 'q', 't', 'd', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'l', 'i', '_', 'p', 'e', 'd', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'r', 'o', 't', 'i', 'n', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 101,	/* 101 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'u', 's', 'a', '_', 'd', 'o', 'l', 'a', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 102,	/* 102 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'r', 'e', 'd', 'o', 'n', 'd', 'a', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 103,	/* 103 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'D', 'U', 'P', 'L', '_', 'P', 'R', 'O', 'D', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'e', 'c', 'f', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 105,	/* 105 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'i', 'a', '_', 'v', 'e', 'n', 'c', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'S', 'A', 'L', 'D', 'O', '_', 'M', 'E', 'N', 'O', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 107,	/* 107 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 'f', '_', 'v', 'e', 'n', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 108,	/* 108 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'e', 'r', 'g', 'i', 'm', 'p', 'p', 'e', 'd', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 109,	/* 109 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'm', 'p', 's', 'l', 'd', 'd', 'e', 'v', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'u', 't', '_', 'p', 'e', 'd', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 111,	/* 111 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'l', 't', 'c', 'o', 'd', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 112,	/* 112 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'c', 'o', 'm', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 113,	/* 113 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'o', 'l', 'e', '_', 'c', 'o', 'm', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 114,	/* 114 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'n', 'f', 'o', '_', 'c', 'o', 'm', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', '_', 'c', 'o', 'm', 't', 'e', 'l', 'e', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 116,	/* 116 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'l', 'o', 'q', 'n', 'n', 'f', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 117,	/* 117 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'd', 'e', 's', 'c', '_', 'd', 'u', 'p', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'l', 'i', '_', 'c', 'x', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'n', 'a', 'o', '_', 'e', 'x', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'i', 'm', '_', 'e', 'x', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 121,	/* 121 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'p', 'r', 'z', '_', 'r', 'e', 'c', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 122,	/* 122 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'D', 'E', 'S', 'C', '_', 'P', 'R', 'O', 'D', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 125,	/* 125 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 's', 'i', 'm', 'p', '_', 'n', 'a', 'c', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 126,	/* 126 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'i', 'm', 'p', '_', 'c', 'o', 'd', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 147, 0,	/* 147 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'a', 'u', 't', '_', 'd', 'u', 'p', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 149, 0,	/* 149 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'l', 'i', 'b', '_', 'p', 'd', '_', 'o', 'r', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 150, 0,	/* 150 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', '_', 'e', 'c', 'f', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 151, 0,	/* 151 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'I', 'N', 'F', '_', 'R', 'E', 'P', 'R', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 152, 0,	/* 152 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', 'm', 'a', 'x', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 153, 0,	/* 153 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'v', 'l', 'r', 'm', 'a', 'x', 'p', 'r', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 154, 0,	/* 154 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 155, 0,	/* 155 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'b', 'a', 'l', 'a', 'n', 'c', 'a', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 159, 0,	/* 159 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', '_', 'p', 'e', 'd', '_', 'e', 'x', 'p', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 162, 0,	/* 162 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', '_', 'i', 't', 'e', 'm', '_', 'e', 'x', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 163, 0,	/* 163 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', '_', 'p', 'e', 's', 'o', '_', 'e', 'x', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 164, 0,	/* 164 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'H', 'O', 'S', 'T', '_', 'E', 'M', 'A', 'I', 'L', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 165, 0,	/* 165 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'P', 'O', 'R', 'T', 'A', '_', 'E', 'M', 'A', 'I', 'L', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 166, 0,	/* 166 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'L', 'O', 'G', 'I', 'N', '_', 'E', 'M', 'A', 'I', 'L', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 167, 0,	/* 167 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'S', 'E', 'N', 'H', 'A', '_', 'E', 'M', 'A', 'I', 'L', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 168, 0,	/* 168 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'm', 'i', 'n', 'r', 'e', 't', 'p', 'a', 'l', 'm', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 169, 0,	/* 169 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'i', 'p', '_', 'b', 'o', 'l', 'e', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 172, 0,	/* 172 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 't', 'p', '_', 'c', 'o', 'd', '_', 's', 'e', 'f', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 173, 0,	/* 173 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'o', 'r', 'd', '_', 'p', 'e', 'd', ' ', ' ', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 174, 0,	/* 174 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'F', 'R', 'O', 'M', '_', 'E', 'M', 'A', 'I', 'L', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 175, 0,	/* 175 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'T', 'I', 'P', 'O', '_', 'B', 'A', 'L', 'A', 'N', 'C', 'A', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 179, 0,	/* 179 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	',', 'q', 't', 'd', '_', 'b', 'a', 'l', 'a', 'n', 'c', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 181, 0,	/* 181 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 50740 */ HB_P_LINE, 192, 4,	/* 1216 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 50765 */ HB_P_LINE, 194, 4,	/* 1218 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* M_SET */
/* 50774 */ HB_P_LINE, 195, 4,	/* 1219 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 's', 'e', 't', 'u', 'p', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* M_SET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 50818 */ HB_P_LINE, 196, 4,	/* 1220 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 50843 */ HB_P_LINE, 197, 4,	/* 1221 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 50857) */
	HB_P_JUMPFAR, 49, 58, 255,	/* -50639 (abs: 00000214) */
/* 50857 */ HB_P_LINE, 201, 4,	/* 1225 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 50863 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

