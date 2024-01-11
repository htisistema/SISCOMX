/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC610.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC610.PRG /q /oC:\hti\SISCOM\SAC610.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2024.01.09 09:27:21 (Borland C++ 5.5.1)
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
/* 00531 */ HB_P_LINEOFFSET, 20,	/* 30 */
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
/* 00627 */ HB_P_LINEOFFSET, 21,	/* 31 */
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
/* 00723 */ HB_P_LINEOFFSET, 22,	/* 32 */
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
/* 00819 */ HB_P_LINEOFFSET, 23,	/* 33 */
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
/* 00915 */ HB_P_LINEOFFSET, 24,	/* 34 */
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
/* 00997 */ HB_P_LINEOFFSET, 25,	/* 35 */
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
/* 01079 */ HB_P_LINEOFFSET, 26,	/* 36 */
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
/* 01161 */ HB_P_LINEOFFSET, 28,	/* 38 */
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
/* 01243 */ HB_P_LINEOFFSET, 29,	/* 39 */
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
/* 01325 */ HB_P_LINEOFFSET, 30,	/* 40 */
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
/* 01407 */ HB_P_LINEOFFSET, 31,	/* 41 */
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
/* 01489 */ HB_P_LINEOFFSET, 32,	/* 42 */
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
/* 01571 */ HB_P_LINEOFFSET, 33,	/* 43 */
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
/* 01664 */ HB_P_LINEOFFSET, 34,	/* 44 */
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
/* 01746 */ HB_P_LINEOFFSET, 35,	/* 45 */
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
/* 01828 */ HB_P_LINEOFFSET, 36,	/* 46 */
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
/* 01911 */ HB_P_LINEOFFSET, 37,	/* 47 */
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
/* 01993 */ HB_P_LINEOFFSET, 38,	/* 48 */
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
/* 02075 */ HB_P_LINEOFFSET, 39,	/* 49 */
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
/* 02157 */ HB_P_LINEOFFSET, 40,	/* 50 */
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
/* 02240 */ HB_P_LINEOFFSET, 41,	/* 51 */
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
/* 02323 */ HB_P_LINEOFFSET, 42,	/* 52 */
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
/* 02406 */ HB_P_LINEOFFSET, 43,	/* 53 */
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
/* 02498 */ HB_P_LINEOFFSET, 44,	/* 54 */
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
/* 02581 */ HB_P_LINEOFFSET, 45,	/* 55 */
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
/* 02663 */ HB_P_LINEOFFSET, 46,	/* 56 */
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
/* 02745 */ HB_P_LINEOFFSET, 47,	/* 57 */
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
/* 02827 */ HB_P_LINEOFFSET, 48,	/* 58 */
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
/* 02910 */ HB_P_LINEOFFSET, 49,	/* 59 */
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
/* 02992 */ HB_P_LINEOFFSET, 50,	/* 60 */
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
/* 03084 */ HB_P_LINEOFFSET, 51,	/* 61 */
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
/* 03166 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03224 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'N', ' ', 'o', ' ', 't', ' ', 'a', ' ', ' ', ' ', 'F', ' ', 'i', ' ', 's', ' ', 'c', ' ', 'a', ' ', 'l', 0, 
	HB_P_DOSHORT, 2,
/* 03285 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03343 */ HB_P_LINEOFFSET, 55,	/* 65 */
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
/* 03426 */ HB_P_LINEOFFSET, 57,	/* 67 */
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
/* 03508 */ HB_P_LINEOFFSET, 60,	/* 70 */
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
/* 03590 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03648 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', ' ', ' ', 'P', ' ', 'e', ' ', 'd', ' ', 'i', ' ', 'd', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 03701 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 03759 */ HB_P_LINEOFFSET, 64,	/* 74 */
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
/* 03912 */ HB_P_LINEOFFSET, 65,	/* 75 */
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
/* 03994 */ HB_P_LINEOFFSET, 66,	/* 76 */
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
/* 04076 */ HB_P_LINEOFFSET, 67,	/* 77 */
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
/* 04159 */ HB_P_LINEOFFSET, 68,	/* 78 */
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
/* 04241 */ HB_P_LINEOFFSET, 69,	/* 79 */
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
/* 04323 */ HB_P_LINEOFFSET, 70,	/* 80 */
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
/* 04405 */ HB_P_LINEOFFSET, 71,	/* 81 */
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
/* 04487 */ HB_P_LINEOFFSET, 72,	/* 82 */
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
/* 04569 */ HB_P_LINEOFFSET, 73,	/* 83 */
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
/* 04651 */ HB_P_LINEOFFSET, 74,	/* 84 */
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
/* 04733 */ HB_P_LINEOFFSET, 75,	/* 85 */
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
/* 04815 */ HB_P_LINEOFFSET, 76,	/* 86 */
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
/* 04897 */ HB_P_LINEOFFSET, 77,	/* 87 */
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
/* 04979 */ HB_P_LINEOFFSET, 78,	/* 88 */
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
/* 05072 */ HB_P_LINEOFFSET, 79,	/* 89 */
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
/* 05169 */ HB_P_LINEOFFSET, 80,	/* 90 */
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
/* 05270 */ HB_P_LINEOFFSET, 81,	/* 91 */
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
/* 05359 */ HB_P_LINEOFFSET, 82,	/* 92 */
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
/* 05441 */ HB_P_LINEOFFSET, 83,	/* 93 */
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
/* 05523 */ HB_P_LINEOFFSET, 84,	/* 94 */
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
/* 05619 */ HB_P_LINEOFFSET, 85,	/* 95 */
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
/* 05701 */ HB_P_LINEOFFSET, 86,	/* 96 */
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
/* 05794 */ HB_P_LINEOFFSET, 87,	/* 97 */
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
/* 05876 */ HB_P_LINEOFFSET, 88,	/* 98 */
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
/* 05958 */ HB_P_LINEOFFSET, 89,	/* 99 */
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
/* 06040 */ HB_P_LINEOFFSET, 90,	/* 100 */
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
/* 06123 */ HB_P_LINEOFFSET, 91,	/* 101 */
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
/* 06205 */ HB_P_LINEOFFSET, 92,	/* 102 */
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
/* 06287 */ HB_P_LINEOFFSET, 93,	/* 103 */
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
/* 06369 */ HB_P_LINEOFFSET, 94,	/* 104 */
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
/* 06461 */ HB_P_LINEOFFSET, 95,	/* 105 */
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
/* 06554 */ HB_P_LINEOFFSET, 96,	/* 106 */
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
/* 06647 */ HB_P_LINEOFFSET, 97,	/* 107 */
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
/* 06729 */ HB_P_LINEOFFSET, 98,	/* 108 */
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
/* 06811 */ HB_P_LINEOFFSET, 99,	/* 109 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 06869 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'I', ' ', 'm', ' ', 'p', ' ', 'r', ' ', 'e', ' ', 's', ' ', 's', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'P', ' ', 'e', ' ', 'd', ' ', 'i', ' ', 'd', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 06946 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 07004 */ HB_P_LINEOFFSET, 102,	/* 112 */
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
/* 07086 */ HB_P_LINEOFFSET, 103,	/* 113 */
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
/* 07168 */ HB_P_LINEOFFSET, 104,	/* 114 */
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
/* 07250 */ HB_P_LINEOFFSET, 105,	/* 115 */
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
/* 07332 */ HB_P_LINEOFFSET, 106,	/* 116 */
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
/* 07414 */ HB_P_LINEOFFSET, 107,	/* 117 */
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
/* 07496 */ HB_P_LINEOFFSET, 108,	/* 118 */
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
/* 07579 */ HB_P_LINEOFFSET, 109,	/* 119 */
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
/* 07661 */ HB_P_LINEOFFSET, 110,	/* 120 */
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
/* 07743 */ HB_P_LINEOFFSET, 111,	/* 121 */
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
/* 07826 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 07884 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'R', ' ', 'e', ' ', 'c', ' ', 'e', ' ', 'b', ' ', 'i', ' ', 'm', ' ', 'e', ' ', 'n', ' ', 't', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 07948 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08006 */ HB_P_LINEOFFSET, 115,	/* 125 */
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
/* 08088 */ HB_P_LINEOFFSET, 116,	/* 126 */
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
/* 08170 */ HB_P_LINEOFFSET, 117,	/* 127 */
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
/* 08252 */ HB_P_LINEOFFSET, 118,	/* 128 */
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
/* 08334 */ HB_P_LINEOFFSET, 119,	/* 129 */
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
/* 08416 */ HB_P_LINEOFFSET, 120,	/* 130 */
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
/* 08498 */ HB_P_LINEOFFSET, 121,	/* 131 */
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
/* 08580 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08638 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'B', ' ', 'o', ' ', 'l', ' ', 'e', ' ', 't', ' ', 'o', ' ', ' ', ' ', '(', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', 0, 
	HB_P_DOSHORT, 2,
/* 08709 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 08767 */ HB_P_LINEOFFSET, 125,	/* 135 */
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
/* 08850 */ HB_P_LINEOFFSET, 126,	/* 136 */
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
/* 08946 */ HB_P_LINEOFFSET, 127,	/* 137 */
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
/* 09042 */ HB_P_LINEOFFSET, 128,	/* 138 */
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
/* 09135 */ HB_P_LINEOFFSET, 129,	/* 139 */
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
/* 09231 */ HB_P_LINEOFFSET, 130,	/* 140 */
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
/* 09313 */ HB_P_LINEOFFSET, 131,	/* 141 */
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
/* 09395 */ HB_P_LINEOFFSET, 132,	/* 142 */
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
/* 09477 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 09535 */ HB_P_LINEOFFSET, 134,	/* 144 */
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
/* 09617 */ HB_P_LINEOFFSET, 135,	/* 145 */
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
/* 09699 */ HB_P_LINEOFFSET, 136,	/* 146 */
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
/* 09781 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 09839 */ HB_P_LINEOFFSET, 138,	/* 148 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	' ', ' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'O', ' ', 'r', ' ', 'd', ' ', 'e', ' ', 'm', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'S', ' ', 'e', ' ', 'r', ' ', 'v', ' ', 'i', ' ', 'c', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 09910 */ HB_P_LINEOFFSET, 139,	/* 149 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 09968 */ HB_P_LINEOFFSET, 140,	/* 150 */
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
/* 10050 */ HB_P_LINEOFFSET, 141,	/* 151 */
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
/* 10132 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 10190 */ HB_P_LINEOFFSET, 143,	/* 153 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'a', ' ', ' ', ' ', 'C', ' ', 'o', ' ', 'm', ' ', 'i', ' ', 's', ' ', 's', ' ', 'a', ' ', 'o', 0, 
	HB_P_DOSHORT, 2,
/* 10250 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 10308 */ HB_P_LINEOFFSET, 145,	/* 155 */
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
/* 10404 */ HB_P_LINEOFFSET, 146,	/* 156 */
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
/* 10500 */ HB_P_LINEOFFSET, 147,	/* 157 */
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
/* 10582 */ HB_P_LINEOFFSET, 148,	/* 158 */
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
/* 10678 */ HB_P_LINEOFFSET, 149,	/* 159 */
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
/* 10772 */ HB_P_LINEOFFSET, 150,	/* 160 */
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
/* 10866 */ HB_P_LINEOFFSET, 151,	/* 161 */
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
/* 10964 */ HB_P_LINEOFFSET, 152,	/* 162 */
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
/* 11046 */ HB_P_LINEOFFSET, 153,	/* 163 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11104 */ HB_P_LINEOFFSET, 154,	/* 164 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'e', ' ', ' ', ' ', 'E', ' ', 'M', ' ', 'A', ' ', 'I', ' ', 'L', 0, 
	HB_P_DOSHORT, 2,
/* 11158 */ HB_P_LINEOFFSET, 155,	/* 165 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11216 */ HB_P_LINEOFFSET, 156,	/* 166 */
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
/* 11299 */ HB_P_LINEOFFSET, 157,	/* 167 */
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
/* 11382 */ HB_P_LINEOFFSET, 158,	/* 168 */
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
/* 11465 */ HB_P_LINEOFFSET, 159,	/* 169 */
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
/* 11548 */ HB_P_LINEOFFSET, 160,	/* 170 */
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
/* 11631 */ HB_P_LINEOFFSET, 161,	/* 171 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'9', '9', '1', ' ', '-', ' ', 'O', 'u', 't', 'r', 'a', 's', ' ', 'C', 'o', 'n', 'f', 'i', 'g', 'u', 'r', 'a', 'c', 'o', 'e', 's', ' ', 'd', 'o', ' ', 'E', 'M', 'A', 'I', 'L', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', 'C', 'O', 'N', 'F', 'I', 'G', 'U', 'R', 'A', 'C', 'A', 'O', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11715 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11773 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'C', ' ', 'o', ' ', 'n', ' ', 'f', ' ', 'i', ' ', 'g', ' ', 'u', ' ', 'r', ' ', 'a', ' ', 'c', ' ', 'a', ' ', 'o', ' ', ' ', ' ', 'd', ' ', 'o', ' ', ' ', ' ', 'A', ' ', 'P', ' ', 'P', 0, 
	HB_P_DOSHORT, 2,
/* 11823 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 13,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 2,
/* 11881 */ HB_P_LINEOFFSET, 165,	/* 175 */
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
/* 11963 */ HB_P_LINEOFFSET, 166,	/* 176 */
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
/* 12045 */ HB_P_LINEOFFSET, 167,	/* 177 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 12092 */ HB_P_LINEOFFSET, 168,	/* 178 */
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
/* 12126 */ HB_P_LINEOFFSET, 170,	/* 180 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSEFAR, 97, 131, 0,	/* 33633 (abs: 00045769) */
/* 12140 */ HB_P_LINEOFFSET, 171,	/* 181 */
	HB_P_PUSHSYMNEAR, 19,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* DEMO_SET */
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 20, 0,	/* MOP */
/* 12158 */ HB_P_LINEOFFSET, 172,	/* 182 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 12402) */
/* 12173 */ HB_P_LINEOFFSET, 173,	/* 183 */
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
/* 12227 */ HB_P_LINEOFFSET, 174,	/* 184 */
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
/* 12293 */ HB_P_LINEOFFSET, 175,	/* 185 */
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
/* 12370 */ HB_P_LINEOFFSET, 176,	/* 186 */
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
/* 12392 */ HB_P_LINEOFFSET, 177,	/* 187 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 103, 208,	/* -12185 (abs: 00214) */
/* 12402 */ HB_P_LINEOFFSET, 179,	/* 189 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 1,	/* 302 (abs: 12716) */
/* 12417 */ HB_P_LINEOFFSET, 180,	/* 190 */
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
/* 12464 */ HB_P_LINEOFFSET, 181,	/* 191 */
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
/* 12530 */ HB_P_LINEOFFSET, 182,	/* 192 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 12602) */
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
/* 12684 */ HB_P_LINEOFFSET, 183,	/* 193 */
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
/* 12706 */ HB_P_LINEOFFSET, 184,	/* 194 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 45, 207,	/* -12499 (abs: 00214) */
/* 12716 */ HB_P_LINEOFFSET, 186,	/* 196 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 223, 0,	/* 223 (abs: 12951) */
/* 12731 */ HB_P_LINEOFFSET, 187,	/* 197 */
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
/* 12776 */ HB_P_LINEOFFSET, 188,	/* 198 */
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
/* 12842 */ HB_P_LINEOFFSET, 189,	/* 199 */
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
/* 12919 */ HB_P_LINEOFFSET, 190,	/* 200 */
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
/* 12941 */ HB_P_LINEOFFSET, 191,	/* 201 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 66, 206,	/* -12734 (abs: 00214) */
/* 12951 */ HB_P_LINEOFFSET, 193,	/* 203 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 13183) */
/* 12966 */ HB_P_LINEOFFSET, 194,	/* 204 */
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
/* 13008 */ HB_P_LINEOFFSET, 195,	/* 205 */
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
/* 13074 */ HB_P_LINEOFFSET, 196,	/* 206 */
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
/* 13151 */ HB_P_LINEOFFSET, 197,	/* 207 */
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
/* 13173 */ HB_P_LINEOFFSET, 198,	/* 208 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 90, 205,	/* -12966 (abs: 00214) */
/* 13183 */ HB_P_LINEOFFSET, 200,	/* 210 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 13419) */
/* 13198 */ HB_P_LINEOFFSET, 201,	/* 211 */
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
/* 13244 */ HB_P_LINEOFFSET, 202,	/* 212 */
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
/* 13310 */ HB_P_LINEOFFSET, 203,	/* 213 */
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
/* 13387 */ HB_P_LINEOFFSET, 204,	/* 214 */
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
/* 13409 */ HB_P_LINEOFFSET, 205,	/* 215 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 110, 204,	/* -13202 (abs: 00214) */
/* 13419 */ HB_P_LINEOFFSET, 207,	/* 217 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 13667) */
/* 13434 */ HB_P_LINEOFFSET, 208,	/* 218 */
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
/* 13491 */ HB_P_LINEOFFSET, 209,	/* 219 */
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
/* 13557 */ HB_P_LINEOFFSET, 210,	/* 220 */
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
/* 13635 */ HB_P_LINEOFFSET, 211,	/* 221 */
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
/* 13657 */ HB_P_LINEOFFSET, 212,	/* 222 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 118, 203,	/* -13450 (abs: 00214) */
/* 13667 */ HB_P_LINEOFFSET, 214,	/* 224 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 0,	/* 246 (abs: 13925) */
/* 13682 */ HB_P_LINEOFFSET, 215,	/* 225 */
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
/* 13730 */ HB_P_LINEOFFSET, 216,	/* 226 */
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
/* 13796 */ HB_P_LINEOFFSET, 217,	/* 227 */
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
/* 13893 */ HB_P_LINEOFFSET, 218,	/* 228 */
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
/* 13915 */ HB_P_LINEOFFSET, 219,	/* 229 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 116, 202,	/* -13708 (abs: 00214) */
/* 13925 */ HB_P_LINEOFFSET, 221,	/* 231 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 240, 0,	/* 240 (abs: 14177) */
/* 13940 */ HB_P_LINEOFFSET, 222,	/* 232 */
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
/* 13982 */ HB_P_LINEOFFSET, 223,	/* 233 */
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
/* 14048 */ HB_P_LINEOFFSET, 224,	/* 234 */
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
/* 14145 */ HB_P_LINEOFFSET, 225,	/* 235 */
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
/* 14167 */ HB_P_LINEOFFSET, 226,	/* 236 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 120, 201,	/* -13960 (abs: 00214) */
/* 14177 */ HB_P_LINEOFFSET, 228,	/* 238 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 14447) */
/* 14192 */ HB_P_LINEOFFSET, 229,	/* 239 */
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
/* 14252 */ HB_P_LINEOFFSET, 230,	/* 240 */
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
/* 14318 */ HB_P_LINEOFFSET, 231,	/* 241 */
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
/* 14415 */ HB_P_LINEOFFSET, 232,	/* 242 */
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
/* 14437 */ HB_P_LINEOFFSET, 233,	/* 243 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 106, 200,	/* -14230 (abs: 00214) */
/* 14447 */ HB_P_LINEOFFSET, 235,	/* 245 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 14763) */
/* 14462 */ HB_P_LINEOFFSET, 236,	/* 246 */
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
/* 14507 */ HB_P_LINEOFFSET, 237,	/* 247 */
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
/* 14567 */ HB_P_LINEOFFSET, 238,	/* 248 */
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
/* 14731 */ HB_P_LINEOFFSET, 239,	/* 249 */
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
/* 14753 */ HB_P_LINEOFFSET, 240,	/* 250 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 46, 199,	/* -14546 (abs: 00214) */
/* 14763 */ HB_P_LINEOFFSET, 242,	/* 252 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 38, 1,	/* 294 (abs: 15069) */
/* 14778 */ HB_P_LINEOFFSET, 243,	/* 253 */
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
/* 14822 */ HB_P_LINEOFFSET, 244,	/* 254 */
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
/* 14888 */ HB_P_LINEOFFSET, 245,	/* 255 */
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
/* 15037 */ HB_P_LINEOFFSET, 246,	/* 256 */
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
/* 15059 */ HB_P_LINEOFFSET, 247,	/* 257 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 252, 197,	/* -14852 (abs: 00214) */
/* 15069 */ HB_P_LINEOFFSET, 249,	/* 259 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 13, 1,	/* 269 (abs: 15350) */
/* 15084 */ HB_P_LINEOFFSET, 250,	/* 260 */
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
/* 15155 */ HB_P_LINEOFFSET, 251,	/* 261 */
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
/* 15221 */ HB_P_LINEOFFSET, 252,	/* 262 */
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
/* 15318 */ HB_P_LINEOFFSET, 253,	/* 263 */
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
/* 15340 */ HB_P_LINEOFFSET, 254,	/* 264 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 227, 196,	/* -15133 (abs: 00214) */
/* 15350 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 15628) */
/* 15366 */ HB_P_LINE, 11, 1,	/* 267 */
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
/* 15429 */ HB_P_LINE, 12, 1,	/* 268 */
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
/* 15496 */ HB_P_LINE, 13, 1,	/* 269 */
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
/* 15594 */ HB_P_LINE, 14, 1,	/* 270 */
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
/* 15617 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 205, 195,	/* -15411 (abs: 00214) */
/* 15628 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 15906) */
/* 15644 */ HB_P_LINE, 18, 1,	/* 274 */
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
/* 15705 */ HB_P_LINE, 19, 1,	/* 275 */
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
/* 15772 */ HB_P_LINE, 20, 1,	/* 276 */
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
/* 15872 */ HB_P_LINE, 21, 1,	/* 277 */
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
/* 15895 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 183, 194,	/* -15689 (abs: 00214) */
/* 15906 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 64, 1,	/* 320 (abs: 16239) */
/* 15922 */ HB_P_LINE, 25, 1,	/* 281 */
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
/* 15973 */ HB_P_LINE, 26, 1,	/* 282 */
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
/* 16040 */ HB_P_LINE, 27, 1,	/* 283 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 16117) */
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
/* 16205 */ HB_P_LINE, 28, 1,	/* 284 */
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
/* 16228 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 106, 193,	/* -16022 (abs: 00214) */
/* 16239 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 16497) */
/* 16255 */ HB_P_LINE, 32, 1,	/* 288 */
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
/* 16319 */ HB_P_LINE, 33, 1,	/* 289 */
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
/* 16386 */ HB_P_LINE, 34, 1,	/* 290 */
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
/* 16463 */ HB_P_LINE, 35, 1,	/* 291 */
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
/* 16486 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 104, 192,	/* -16280 (abs: 00214) */
/* 16497 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 16786) */
/* 16513 */ HB_P_LINE, 39, 1,	/* 295 */
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
/* 16587 */ HB_P_LINE, 40, 1,	/* 296 */
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
/* 16654 */ HB_P_LINE, 41, 1,	/* 297 */
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
/* 16752 */ HB_P_LINE, 42, 1,	/* 298 */
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
/* 16775 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 71, 191,	/* -16569 (abs: 00214) */
/* 16786 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 17073) */
/* 16802 */ HB_P_LINE, 46, 1,	/* 302 */
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
/* 16874 */ HB_P_LINE, 47, 1,	/* 303 */
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
/* 16941 */ HB_P_LINE, 48, 1,	/* 304 */
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
/* 17039 */ HB_P_LINE, 49, 1,	/* 305 */
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
/* 17062 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 40, 190,	/* -16856 (abs: 00214) */
/* 17073 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '4', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 20, 1,	/* 276 (abs: 17362) */
/* 17089 */ HB_P_LINE, 53, 1,	/* 309 */
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
/* 17155 */ HB_P_LINE, 54, 1,	/* 310 */
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
/* 17226 */ HB_P_LINE, 55, 1,	/* 311 */
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
/* 17328 */ HB_P_LINE, 56, 1,	/* 312 */
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
/* 17351 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 7, 189,	/* -17145 (abs: 00214) */
/* 17362 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 17616) */
/* 17378 */ HB_P_LINE, 60, 1,	/* 316 */
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
/* 17417 */ HB_P_LINE, 61, 1,	/* 317 */
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
/* 17484 */ HB_P_LINE, 62, 1,	/* 318 */
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
/* 17582 */ HB_P_LINE, 63, 1,	/* 319 */
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
/* 17605 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 9, 188,	/* -17399 (abs: 00214) */
/* 17616 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 17868) */
/* 17632 */ HB_P_LINE, 67, 1,	/* 323 */
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
/* 17669 */ HB_P_LINE, 68, 1,	/* 324 */
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
/* 17736 */ HB_P_LINE, 69, 1,	/* 325 */
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
/* 17834 */ HB_P_LINE, 70, 1,	/* 326 */
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
/* 17857 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 13, 187,	/* -17651 (abs: 00214) */
/* 17868 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 18137) */
/* 17884 */ HB_P_LINE, 74, 1,	/* 330 */
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
/* 17938 */ HB_P_LINE, 75, 1,	/* 331 */
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
/* 18005 */ HB_P_LINE, 76, 1,	/* 332 */
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
/* 18103 */ HB_P_LINE, 77, 1,	/* 333 */
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
/* 18126 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 0, 186,	/* -17920 (abs: 00214) */
/* 18137 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 18395) */
/* 18153 */ HB_P_LINE, 81, 1,	/* 337 */
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
/* 18196 */ HB_P_LINE, 82, 1,	/* 338 */
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
/* 18263 */ HB_P_LINE, 83, 1,	/* 339 */
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
/* 18361 */ HB_P_LINE, 84, 1,	/* 340 */
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
/* 18384 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 254, 184,	/* -18178 (abs: 00214) */
/* 18395 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 212, 0,	/* 212 (abs: 18620) */
/* 18411 */ HB_P_LINE, 88, 1,	/* 344 */
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
/* 18451 */ HB_P_LINE, 89, 1,	/* 345 */
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
/* 18511 */ HB_P_LINE, 90, 1,	/* 346 */
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
/* 18586 */ HB_P_LINE, 91, 1,	/* 347 */
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
/* 18609 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 29, 184,	/* -18403 (abs: 00214) */
/* 18620 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 61, 1,	/* 317 (abs: 18950) */
/* 18636 */ HB_P_LINE, 95, 1,	/* 351 */
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
/* 18675 */ HB_P_LINE, 96, 1,	/* 352 */
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
/* 18742 */ HB_P_LINE, 97, 1,	/* 353 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 18821) */
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
/* 18916 */ HB_P_LINE, 98, 1,	/* 354 */
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
/* 18939 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 211, 182,	/* -18733 (abs: 00214) */
/* 18950 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 19221) */
/* 18966 */ HB_P_LINE, 102, 1,	/* 358 */
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
/* 19022 */ HB_P_LINE, 103, 1,	/* 359 */
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
/* 19089 */ HB_P_LINE, 104, 1,	/* 360 */
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
/* 19187 */ HB_P_LINE, 105, 1,	/* 361 */
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
/* 19210 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 196, 181,	/* -19004 (abs: 00214) */
/* 19221 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 19492) */
/* 19237 */ HB_P_LINE, 109, 1,	/* 365 */
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
/* 19293 */ HB_P_LINE, 110, 1,	/* 366 */
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
/* 19360 */ HB_P_LINE, 111, 1,	/* 367 */
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
/* 19458 */ HB_P_LINE, 112, 1,	/* 368 */
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
/* 19481 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 181, 180,	/* -19275 (abs: 00214) */
/* 19492 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 19752) */
/* 19508 */ HB_P_LINE, 116, 1,	/* 372 */
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
/* 19553 */ HB_P_LINE, 117, 1,	/* 373 */
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
/* 19620 */ HB_P_LINE, 118, 1,	/* 374 */
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
/* 19718 */ HB_P_LINE, 119, 1,	/* 375 */
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
/* 19741 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 177, 179,	/* -19535 (abs: 00214) */
/* 19752 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 20012) */
/* 19768 */ HB_P_LINE, 123, 1,	/* 379 */
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
/* 19826 */ HB_P_LINE, 124, 1,	/* 380 */
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
/* 19880 */ HB_P_LINE, 125, 1,	/* 381 */
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
/* 19978 */ HB_P_LINE, 126, 1,	/* 382 */
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
/* 20001 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 173, 178,	/* -19795 (abs: 00214) */
/* 20012 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 1,	/* 262 (abs: 20287) */
/* 20028 */ HB_P_LINE, 130, 1,	/* 386 */
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
/* 20088 */ HB_P_LINE, 131, 1,	/* 387 */
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
/* 20155 */ HB_P_LINE, 132, 1,	/* 388 */
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
/* 20253 */ HB_P_LINE, 133, 1,	/* 389 */
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
/* 20276 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 154, 177,	/* -20070 (abs: 00214) */
/* 20287 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 20538) */
/* 20303 */ HB_P_LINE, 137, 1,	/* 393 */
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
/* 20359 */ HB_P_LINE, 138, 1,	/* 394 */
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
/* 20430 */ HB_P_LINE, 139, 1,	/* 395 */
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
/* 20504 */ HB_P_LINE, 140, 1,	/* 396 */
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
/* 20527 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 159, 176,	/* -20321 (abs: 00214) */
/* 20538 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 20802) */
/* 20554 */ HB_P_LINE, 144, 1,	/* 400 */
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
/* 20603 */ HB_P_LINE, 145, 1,	/* 401 */
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
/* 20670 */ HB_P_LINE, 146, 1,	/* 402 */
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
/* 20768 */ HB_P_LINE, 147, 1,	/* 403 */
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
/* 20791 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 151, 175,	/* -20585 (abs: 00214) */
/* 20802 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 1, 1,	/* 257 (abs: 21072) */
/* 20818 */ HB_P_LINE, 151, 1,	/* 407 */
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
/* 20873 */ HB_P_LINE, 152, 1,	/* 408 */
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
/* 20940 */ HB_P_LINE, 153, 1,	/* 409 */
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
/* 21038 */ HB_P_LINE, 154, 1,	/* 410 */
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
/* 21061 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 137, 174,	/* -20855 (abs: 00214) */
/* 21072 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 21340) */
/* 21088 */ HB_P_LINE, 158, 1,	/* 414 */
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
/* 21142 */ HB_P_LINE, 159, 1,	/* 415 */
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
/* 21208 */ HB_P_LINE, 160, 1,	/* 416 */
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
/* 21306 */ HB_P_LINE, 161, 1,	/* 417 */
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
/* 21329 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 125, 173,	/* -21123 (abs: 00214) */
/* 21340 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 21606) */
/* 21356 */ HB_P_LINE, 165, 1,	/* 421 */
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
/* 21407 */ HB_P_LINE, 166, 1,	/* 422 */
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
/* 21474 */ HB_P_LINE, 167, 1,	/* 423 */
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
/* 21572 */ HB_P_LINE, 168, 1,	/* 424 */
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
/* 21595 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 115, 172,	/* -21389 (abs: 00214) */
/* 21606 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 21875) */
/* 21622 */ HB_P_LINE, 172, 1,	/* 428 */
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
/* 21676 */ HB_P_LINE, 173, 1,	/* 429 */
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
/* 21743 */ HB_P_LINE, 174, 1,	/* 430 */
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
/* 21841 */ HB_P_LINE, 175, 1,	/* 431 */
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
/* 21864 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 102, 171,	/* -21658 (abs: 00214) */
/* 21875 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 22144) */
/* 21891 */ HB_P_LINE, 179, 1,	/* 435 */
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
/* 21945 */ HB_P_LINE, 180, 1,	/* 436 */
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
/* 22012 */ HB_P_LINE, 181, 1,	/* 437 */
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
/* 22110 */ HB_P_LINE, 182, 1,	/* 438 */
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
/* 22133 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 89, 170,	/* -21927 (abs: 00214) */
/* 22144 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 11, 1,	/* 267 (abs: 22424) */
/* 22160 */ HB_P_LINE, 186, 1,	/* 442 */
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
/* 22225 */ HB_P_LINE, 187, 1,	/* 443 */
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
/* 22292 */ HB_P_LINE, 188, 1,	/* 444 */
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
/* 22390 */ HB_P_LINE, 189, 1,	/* 445 */
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
/* 22413 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 65, 169,	/* -22207 (abs: 00214) */
/* 22424 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 22696) */
/* 22440 */ HB_P_LINE, 193, 1,	/* 449 */
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
/* 22491 */ HB_P_LINE, 194, 1,	/* 450 */
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
/* 22564 */ HB_P_LINE, 195, 1,	/* 451 */
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
/* 22662 */ HB_P_LINE, 196, 1,	/* 452 */
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
/* 22685 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 49, 168,	/* -22479 (abs: 00214) */
/* 22696 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 227, 0,	/* 227 (abs: 22936) */
/* 22712 */ HB_P_LINE, 200, 1,	/* 456 */
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
/* 22760 */ HB_P_LINE, 201, 1,	/* 457 */
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
/* 22827 */ HB_P_LINE, 202, 1,	/* 458 */
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
/* 22902 */ HB_P_LINE, 203, 1,	/* 459 */
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
/* 22925 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 65, 167,	/* -22719 (abs: 00214) */
/* 22936 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 221, 0,	/* 221 (abs: 23170) */
/* 22952 */ HB_P_LINE, 207, 1,	/* 463 */
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
/* 22997 */ HB_P_LINE, 208, 1,	/* 464 */
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
/* 23061 */ HB_P_LINE, 209, 1,	/* 465 */
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
/* 23136 */ HB_P_LINE, 210, 1,	/* 466 */
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
/* 23159 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 87, 166,	/* -22953 (abs: 00214) */
/* 23170 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 23438) */
/* 23186 */ HB_P_LINE, 214, 1,	/* 470 */
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
/* 23239 */ HB_P_LINE, 215, 1,	/* 471 */
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
/* 23306 */ HB_P_LINE, 216, 1,	/* 472 */
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
/* 23404 */ HB_P_LINE, 217, 1,	/* 473 */
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
/* 23427 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 75, 165,	/* -23221 (abs: 00214) */
/* 23438 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 46, 1,	/* 302 (abs: 23753) */
/* 23454 */ HB_P_LINE, 221, 1,	/* 477 */
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
/* 23496 */ HB_P_LINE, 222, 1,	/* 478 */
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
/* 23563 */ HB_P_LINE, 223, 1,	/* 479 */
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
/* 23719 */ HB_P_LINE, 224, 1,	/* 480 */
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
/* 23742 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 164,	/* -23536 (abs: 00214) */
/* 23753 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 24007) */
/* 23769 */ HB_P_LINE, 228, 1,	/* 484 */
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
/* 23808 */ HB_P_LINE, 229, 1,	/* 485 */
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
/* 23875 */ HB_P_LINE, 230, 1,	/* 486 */
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
/* 23973 */ HB_P_LINE, 231, 1,	/* 487 */
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
/* 23996 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 18, 163,	/* -23790 (abs: 00214) */
/* 24007 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 24254) */
/* 24023 */ HB_P_LINE, 235, 1,	/* 491 */
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
/* 24055 */ HB_P_LINE, 236, 1,	/* 492 */
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
/* 24122 */ HB_P_LINE, 237, 1,	/* 493 */
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
/* 24220 */ HB_P_LINE, 238, 1,	/* 494 */
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
/* 24243 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 27, 162,	/* -24037 (abs: 00214) */
/* 24254 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 24518) */
/* 24270 */ HB_P_LINE, 242, 1,	/* 498 */
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
/* 24319 */ HB_P_LINE, 243, 1,	/* 499 */
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
/* 24386 */ HB_P_LINE, 244, 1,	/* 500 */
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
/* 24484 */ HB_P_LINE, 245, 1,	/* 501 */
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
/* 24507 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 19, 161,	/* -24301 (abs: 00214) */
/* 24518 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 13, 1,	/* 269 (abs: 24800) */
/* 24534 */ HB_P_LINE, 249, 1,	/* 505 */
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
/* 24601 */ HB_P_LINE, 250, 1,	/* 506 */
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
/* 24668 */ HB_P_LINE, 251, 1,	/* 507 */
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
/* 24766 */ HB_P_LINE, 252, 1,	/* 508 */
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
/* 24789 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 249, 159,	/* -24583 (abs: 00214) */
/* 24800 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 0,	/* 255 (abs: 25068) */
/* 24816 */ HB_P_LINE, 0, 2,	/* 512 */
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
/* 24869 */ HB_P_LINE, 1, 2,	/* 513 */
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
/* 24936 */ HB_P_LINE, 2, 2,	/* 514 */
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
/* 25034 */ HB_P_LINE, 3, 2,	/* 515 */
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
/* 25057 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 237, 158,	/* -24851 (abs: 00214) */
/* 25068 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 123, 1,	/* 379 (abs: 25460) */
/* 25084 */ HB_P_LINE, 7, 2,	/* 519 */
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
/* 25139 */ HB_P_LINE, 8, 2,	/* 520 */
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
/* 25200 */ HB_P_LINE, 9, 2,	/* 521 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 25277) */
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
/* 25426 */ HB_P_LINE, 10, 2,	/* 522 */
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
/* 25449 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 101, 157,	/* -25243 (abs: 00214) */
/* 25460 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 0,	/* 245 (abs: 25718) */
/* 25476 */ HB_P_LINE, 14, 2,	/* 526 */
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
/* 25519 */ HB_P_LINE, 15, 2,	/* 527 */
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
/* 25586 */ HB_P_LINE, 16, 2,	/* 528 */
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
/* 25684 */ HB_P_LINE, 17, 2,	/* 529 */
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
/* 25707 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 99, 156,	/* -25501 (abs: 00214) */
/* 25718 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 1,	/* 390 (abs: 26121) */
/* 25734 */ HB_P_LINE, 21, 2,	/* 533 */
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
/* 25772 */ HB_P_LINE, 22, 2,	/* 534 */
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
/* 25839 */ HB_P_LINE, 23, 2,	/* 535 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 25920) */
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
/* 26087 */ HB_P_LINE, 24, 2,	/* 536 */
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
/* 26110 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 208, 154,	/* -25904 (abs: 00214) */
/* 26121 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 248, 0,	/* 248 (abs: 26382) */
/* 26137 */ HB_P_LINE, 28, 2,	/* 540 */
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
/* 26184 */ HB_P_LINE, 29, 2,	/* 541 */
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
/* 26250 */ HB_P_LINE, 30, 2,	/* 542 */
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
/* 26348 */ HB_P_LINE, 31, 2,	/* 543 */
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
/* 26371 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 203, 153,	/* -26165 (abs: 00214) */
/* 26382 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 26651) */
/* 26398 */ HB_P_LINE, 35, 2,	/* 547 */
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
/* 26453 */ HB_P_LINE, 36, 2,	/* 548 */
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
/* 26519 */ HB_P_LINE, 37, 2,	/* 549 */
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
/* 26617 */ HB_P_LINE, 38, 2,	/* 550 */
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
/* 26640 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 190, 152,	/* -26434 (abs: 00214) */
/* 26651 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 251, 0,	/* 251 (abs: 26915) */
/* 26667 */ HB_P_LINE, 42, 2,	/* 554 */
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
/* 26713 */ HB_P_LINE, 43, 2,	/* 555 */
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
/* 26779 */ HB_P_LINE, 44, 2,	/* 556 */
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
/* 26881 */ HB_P_LINE, 45, 2,	/* 557 */
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
/* 26904 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 182, 151,	/* -26698 (abs: 00214) */
/* 26915 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 27170) */
/* 26931 */ HB_P_LINE, 49, 2,	/* 561 */
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
/* 26991 */ HB_P_LINE, 50, 2,	/* 562 */
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
/* 27058 */ HB_P_LINE, 51, 2,	/* 563 */
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
/* 27136 */ HB_P_LINE, 52, 2,	/* 564 */
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
/* 27159 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 183, 150,	/* -26953 (abs: 00214) */
/* 27170 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 27437) */
/* 27186 */ HB_P_LINE, 56, 2,	/* 568 */
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
/* 27249 */ HB_P_LINE, 57, 2,	/* 569 */
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
/* 27316 */ HB_P_LINE, 58, 2,	/* 570 */
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
/* 27403 */ HB_P_LINE, 59, 2,	/* 571 */
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
/* 27426 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 172, 149,	/* -27220 (abs: 00214) */
/* 27437 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 27699) */
/* 27453 */ HB_P_LINE, 63, 2,	/* 575 */
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
/* 27511 */ HB_P_LINE, 64, 2,	/* 576 */
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
/* 27578 */ HB_P_LINE, 65, 2,	/* 577 */
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
/* 27665 */ HB_P_LINE, 66, 2,	/* 578 */
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
/* 27688 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 166, 148,	/* -27482 (abs: 00214) */
/* 27699 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 80, 1,	/* 336 (abs: 28048) */
/* 27715 */ HB_P_LINE, 71, 2,	/* 583 */
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
/* 27780 */ HB_P_LINE, 72, 2,	/* 584 */
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
/* 27859 */ HB_P_LINE, 73, 2,	/* 585 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 27936) */
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
/* 28014 */ HB_P_LINE, 74, 2,	/* 586 */
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
/* 28037 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 73, 147,	/* -27831 (abs: 00214) */
/* 28048 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 28326) */
/* 28064 */ HB_P_LINE, 78, 2,	/* 590 */
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
/* 28117 */ HB_P_LINE, 79, 2,	/* 591 */
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
/* 28184 */ HB_P_LINE, 80, 2,	/* 592 */
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
/* 28292 */ HB_P_LINE, 81, 2,	/* 593 */
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
/* 28315 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 51, 146,	/* -28109 (abs: 00214) */
/* 28326 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 0,	/* 252 (abs: 28591) */
/* 28342 */ HB_P_LINE, 85, 2,	/* 597 */
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
/* 28392 */ HB_P_LINE, 86, 2,	/* 598 */
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
/* 28459 */ HB_P_LINE, 87, 2,	/* 599 */
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
/* 28557 */ HB_P_LINE, 88, 2,	/* 600 */
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
/* 28580 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 42, 145,	/* -28374 (abs: 00214) */
/* 28591 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 91, 1,	/* 347 (abs: 28951) */
/* 28607 */ HB_P_LINE, 92, 2,	/* 604 */
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
/* 28651 */ HB_P_LINE, 93, 2,	/* 605 */
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
/* 28718 */ HB_P_LINE, 94, 2,	/* 606 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 28803) */
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
	'0', '3', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 29196) */
/* 28967 */ HB_P_LINE, 99, 2,	/* 611 */
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
/* 29016 */ HB_P_LINE, 100, 2,	/* 612 */
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
/* 29083 */ HB_P_LINE, 101, 2,	/* 613 */
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
/* 29162 */ HB_P_LINE, 102, 2,	/* 614 */
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
/* 29185 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 205, 142,	/* -28979 (abs: 00214) */
/* 29196 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 29459) */
/* 29212 */ HB_P_LINE, 106, 2,	/* 618 */
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
/* 29260 */ HB_P_LINE, 107, 2,	/* 619 */
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
/* 29327 */ HB_P_LINE, 108, 2,	/* 620 */
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
/* 29425 */ HB_P_LINE, 109, 2,	/* 621 */
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
/* 29448 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 198, 141,	/* -29242 (abs: 00214) */
/* 29459 */ HB_P_LINE, 112, 2,	/* 624 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 209, 0,	/* 209 (abs: 29681) */
/* 29475 */ HB_P_LINE, 113, 2,	/* 625 */
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
/* 29504 */ HB_P_LINE, 114, 2,	/* 626 */
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
/* 29571 */ HB_P_LINE, 115, 2,	/* 627 */
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
/* 29647 */ HB_P_LINE, 116, 2,	/* 628 */
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
/* 29670 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 232, 140,	/* -29464 (abs: 00214) */
/* 29681 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 73, 1,	/* 329 (abs: 30023) */
/* 29697 */ HB_P_LINE, 120, 2,	/* 632 */
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
/* 29762 */ HB_P_LINE, 121, 2,	/* 633 */
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
/* 29829 */ HB_P_LINE, 122, 2,	/* 634 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 29906) */
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
/* 29989 */ HB_P_LINE, 123, 2,	/* 635 */
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
/* 30012 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 146, 139,	/* -29806 (abs: 00214) */
/* 30023 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 30302) */
/* 30039 */ HB_P_LINE, 127, 2,	/* 639 */
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
/* 30103 */ HB_P_LINE, 128, 2,	/* 640 */
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
/* 30170 */ HB_P_LINE, 129, 2,	/* 641 */
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
/* 30268 */ HB_P_LINE, 130, 2,	/* 642 */
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
/* 30291 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 123, 138,	/* -30085 (abs: 00214) */
/* 30302 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 88, 1,	/* 344 (abs: 30659) */
/* 30318 */ HB_P_LINE, 134, 2,	/* 646 */
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
/* 30383 */ HB_P_LINE, 135, 2,	/* 647 */
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
/* 30450 */ HB_P_LINE, 136, 2,	/* 648 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 30527) */
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
/* 30625 */ HB_P_LINE, 137, 2,	/* 649 */
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
/* 30648 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 22, 137,	/* -30442 (abs: 00214) */
/* 30659 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 53, 1,	/* 309 (abs: 30981) */
/* 30675 */ HB_P_LINE, 141, 2,	/* 653 */
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
/* 30731 */ HB_P_LINE, 142, 2,	/* 654 */
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
/* 30794 */ HB_P_LINE, 143, 2,	/* 655 */
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
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 30871) */
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
/* 30947 */ HB_P_LINE, 144, 2,	/* 656 */
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
/* 30970 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 212, 135,	/* -30764 (abs: 00214) */
/* 30981 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 224, 0,	/* 224 (abs: 31218) */
/* 30997 */ HB_P_LINE, 148, 2,	/* 660 */
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
/* 31045 */ HB_P_LINE, 149, 2,	/* 661 */
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
/* 31084 */ HB_P_LINE, 150, 2,	/* 662 */
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
/* 31184 */ HB_P_LINE, 151, 2,	/* 663 */
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
/* 31207 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 231, 134,	/* -31001 (abs: 00214) */
/* 31218 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 229, 0,	/* 229 (abs: 31460) */
/* 31234 */ HB_P_LINE, 155, 2,	/* 667 */
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
/* 31286 */ HB_P_LINE, 156, 2,	/* 668 */
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
/* 31328 */ HB_P_LINE, 157, 2,	/* 669 */
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
/* 31426 */ HB_P_LINE, 158, 2,	/* 670 */
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
/* 31449 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 245, 133,	/* -31243 (abs: 00214) */
/* 31460 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 6, 1,	/* 262 (abs: 31735) */
/* 31476 */ HB_P_LINE, 162, 2,	/* 674 */
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
/* 31536 */ HB_P_LINE, 163, 2,	/* 675 */
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
/* 31603 */ HB_P_LINE, 164, 2,	/* 676 */
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
/* 31701 */ HB_P_LINE, 165, 2,	/* 677 */
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
/* 31724 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 226, 132,	/* -31518 (abs: 00214) */
/* 31735 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 32023) */
/* 31751 */ HB_P_LINE, 169, 2,	/* 681 */
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
/* 31824 */ HB_P_LINE, 170, 2,	/* 682 */
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
/* 31891 */ HB_P_LINE, 171, 2,	/* 683 */
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
/* 31989 */ HB_P_LINE, 172, 2,	/* 684 */
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
/* 32012 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 131,	/* -31806 (abs: 00214) */
/* 32023 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 32307) */
/* 32039 */ HB_P_LINE, 176, 2,	/* 688 */
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
/* 32108 */ HB_P_LINE, 177, 2,	/* 689 */
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
/* 32175 */ HB_P_LINE, 178, 2,	/* 690 */
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
/* 32273 */ HB_P_LINE, 179, 2,	/* 691 */
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
/* 32296 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 166, 130,	/* -32090 (abs: 00214) */
/* 32307 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 10, 1,	/* 266 (abs: 32586) */
/* 32323 */ HB_P_LINE, 183, 2,	/* 695 */
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
/* 32408 */ HB_P_LINE, 184, 2,	/* 696 */
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
/* 32475 */ HB_P_LINE, 185, 2,	/* 697 */
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
/* 32552 */ HB_P_LINE, 186, 2,	/* 698 */
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
/* 32575 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 143, 129,	/* -32369 (abs: 00214) */
/* 32586 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 1,	/* 265 (abs: 32864) */
/* 32602 */ HB_P_LINE, 190, 2,	/* 702 */
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
/* 32655 */ HB_P_LINE, 191, 2,	/* 703 */
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
/* 32730 */ HB_P_LINE, 192, 2,	/* 704 */
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
/* 32830 */ HB_P_LINE, 193, 2,	/* 705 */
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
/* 32853 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 121, 128,	/* -32647 (abs: 00214) */
/* 32864 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 33133) */
/* 32880 */ HB_P_LINE, 197, 2,	/* 709 */
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
/* 32933 */ HB_P_LINE, 198, 2,	/* 710 */
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
/* 33000 */ HB_P_LINE, 199, 2,	/* 711 */
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
/* 33098 */ HB_P_LINE, 200, 2,	/* 712 */
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
/* 33121 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 109, 127, 255,	/* -32915 (abs: 00000214) */
/* 33133 */ HB_P_LINE, 203, 2,	/* 715 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 33404) */
/* 33149 */ HB_P_LINE, 204, 2,	/* 716 */
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
/* 33204 */ HB_P_LINE, 205, 2,	/* 717 */
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
/* 33271 */ HB_P_LINE, 206, 2,	/* 718 */
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
/* 33369 */ HB_P_LINE, 207, 2,	/* 719 */
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
/* 33392 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 94, 126, 255,	/* -33186 (abs: 00000214) */
/* 33404 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 252, 0,	/* 252 (abs: 33669) */
/* 33420 */ HB_P_LINE, 211, 2,	/* 723 */
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
/* 33477 */ HB_P_LINE, 212, 2,	/* 724 */
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
/* 33536 */ HB_P_LINE, 213, 2,	/* 725 */
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
/* 33634 */ HB_P_LINE, 214, 2,	/* 726 */
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
/* 33657 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 85, 125, 255,	/* -33451 (abs: 00000214) */
/* 33669 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 41, 1,	/* 297 (abs: 33979) */
/* 33685 */ HB_P_LINE, 218, 2,	/* 730 */
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
/* 33772 */ HB_P_LINE, 219, 2,	/* 731 */
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
/* 33844 */ HB_P_LINE, 220, 2,	/* 732 */
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
/* 33944 */ HB_P_LINE, 221, 2,	/* 733 */
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
/* 33967 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 31, 124, 255,	/* -33761 (abs: 00000214) */
/* 33979 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '6', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 34226) */
/* 33995 */ HB_P_LINE, 225, 2,	/* 737 */
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
/* 34043 */ HB_P_LINE, 226, 2,	/* 738 */
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
/* 34093 */ HB_P_LINE, 227, 2,	/* 739 */
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
/* 34191 */ HB_P_LINE, 228, 2,	/* 740 */
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
/* 34214 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 40, 123, 255,	/* -34008 (abs: 00000214) */
/* 34226 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '9', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 34493) */
/* 34242 */ HB_P_LINE, 232, 2,	/* 744 */
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
/* 34293 */ HB_P_LINE, 233, 2,	/* 745 */
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
/* 34360 */ HB_P_LINE, 234, 2,	/* 746 */
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
/* 34458 */ HB_P_LINE, 235, 2,	/* 747 */
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
/* 34481 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 29, 122, 255,	/* -34275 (abs: 00000214) */
/* 34493 */ HB_P_LINE, 238, 2,	/* 750 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 34748) */
/* 34509 */ HB_P_LINE, 239, 2,	/* 751 */
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
/* 34574 */ HB_P_LINE, 240, 2,	/* 752 */
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
/* 34615 */ HB_P_LINE, 241, 2,	/* 753 */
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
/* 34713 */ HB_P_LINE, 242, 2,	/* 754 */
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
/* 34736 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 30, 121, 255,	/* -34530 (abs: 00000214) */
/* 34748 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 238, 0,	/* 238 (abs: 34999) */
/* 34764 */ HB_P_LINE, 246, 2,	/* 758 */
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
/* 34816 */ HB_P_LINE, 247, 2,	/* 759 */
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
/* 34866 */ HB_P_LINE, 248, 2,	/* 760 */
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
/* 34964 */ HB_P_LINE, 249, 2,	/* 761 */
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
/* 34987 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 35, 120, 255,	/* -34781 (abs: 00000214) */
/* 34999 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 35255) */
/* 35015 */ HB_P_LINE, 253, 2,	/* 765 */
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
/* 35074 */ HB_P_LINE, 254, 2,	/* 766 */
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
/* 35122 */ HB_P_LINE, 255, 2,	/* 767 */
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
/* 35220 */ HB_P_LINE, 0, 3,	/* 768 */
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
/* 35243 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 35, 119, 255,	/* -35037 (abs: 00000214) */
/* 35255 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 35526) */
/* 35271 */ HB_P_LINE, 4, 3,	/* 772 */
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
/* 35338 */ HB_P_LINE, 5, 3,	/* 773 */
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
/* 35393 */ HB_P_LINE, 6, 3,	/* 774 */
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
/* 35491 */ HB_P_LINE, 7, 3,	/* 775 */
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
/* 35514 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 20, 118, 255,	/* -35308 (abs: 00000214) */
/* 35526 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 35782) */
/* 35542 */ HB_P_LINE, 11, 3,	/* 779 */
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
/* 35601 */ HB_P_LINE, 12, 3,	/* 780 */
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
/* 35649 */ HB_P_LINE, 13, 3,	/* 781 */
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
/* 35747 */ HB_P_LINE, 14, 3,	/* 782 */
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
/* 35770 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 20, 117, 255,	/* -35564 (abs: 00000214) */
/* 35782 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 3, 1,	/* 259 (abs: 36054) */
/* 35798 */ HB_P_LINE, 18, 3,	/* 786 */
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
/* 35865 */ HB_P_LINE, 19, 3,	/* 787 */
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
/* 35921 */ HB_P_LINE, 20, 3,	/* 788 */
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
/* 36019 */ HB_P_LINE, 21, 3,	/* 789 */
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
/* 36042 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 4, 116, 255,	/* -35836 (abs: 00000214) */
/* 36054 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '4', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 24, 1,	/* 280 (abs: 36347) */
/* 36070 */ HB_P_LINE, 25, 3,	/* 793 */
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
/* 36154 */ HB_P_LINE, 26, 3,	/* 794 */
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
/* 36214 */ HB_P_LINE, 27, 3,	/* 795 */
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
/* 36312 */ HB_P_LINE, 28, 3,	/* 796 */
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
/* 36335 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 223, 114, 255,	/* -36129 (abs: 00000214) */
/* 36347 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '3', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 36591) */
/* 36363 */ HB_P_LINE, 32, 3,	/* 800 */
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
/* 36414 */ HB_P_LINE, 33, 3,	/* 801 */
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
/* 36458 */ HB_P_LINE, 34, 3,	/* 802 */
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
/* 36556 */ HB_P_LINE, 35, 3,	/* 803 */
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
/* 36579 */ HB_P_LINE, 36, 3,	/* 804 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 235, 113, 255,	/* -36373 (abs: 00000214) */
/* 36591 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 102, 1,	/* 358 (abs: 36962) */
/* 36607 */ HB_P_LINE, 39, 3,	/* 807 */
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
/* 36647 */ HB_P_LINE, 40, 3,	/* 808 */
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
/* 36682 */ HB_P_LINE, 41, 3,	/* 809 */
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
/* 36747 */ HB_P_LINE, 42, 3,	/* 810 */
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
/* 36807 */ HB_P_LINE, 43, 3,	/* 811 */
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
/* 36867 */ HB_P_LINE, 44, 3,	/* 812 */
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
/* 36927 */ HB_P_LINE, 45, 3,	/* 813 */
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
/* 36950 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 120, 112, 255,	/* -36744 (abs: 00000214) */
/* 36962 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 18, 1,	/* 274 (abs: 37249) */
/* 36978 */ HB_P_LINE, 49, 3,	/* 817 */
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
/* 37042 */ HB_P_LINE, 50, 3,	/* 818 */
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
/* 37114 */ HB_P_LINE, 51, 3,	/* 819 */
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
/* 37214 */ HB_P_LINE, 52, 3,	/* 820 */
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
/* 37237 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 89, 111, 255,	/* -37031 (abs: 00000214) */
/* 37249 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 37506) */
/* 37265 */ HB_P_LINE, 56, 3,	/* 824 */
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
/* 37325 */ HB_P_LINE, 57, 3,	/* 825 */
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
/* 37373 */ HB_P_LINE, 58, 3,	/* 826 */
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
/* 37471 */ HB_P_LINE, 59, 3,	/* 827 */
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
/* 37494 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 88, 110, 255,	/* -37288 (abs: 00000214) */
/* 37506 */ HB_P_LINE, 62, 3,	/* 830 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 2, 1,	/* 258 (abs: 37777) */
/* 37522 */ HB_P_LINE, 63, 3,	/* 831 */
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
/* 37588 */ HB_P_LINE, 64, 3,	/* 832 */
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
/* 37644 */ HB_P_LINE, 65, 3,	/* 833 */
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
/* 37742 */ HB_P_LINE, 66, 3,	/* 834 */
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
/* 37765 */ HB_P_LINE, 67, 3,	/* 835 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 73, 109, 255,	/* -37559 (abs: 00000214) */
/* 37777 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 38029) */
/* 37793 */ HB_P_LINE, 70, 3,	/* 838 */
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
/* 37844 */ HB_P_LINE, 71, 3,	/* 839 */
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
/* 37896 */ HB_P_LINE, 72, 3,	/* 840 */
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
/* 37994 */ HB_P_LINE, 73, 3,	/* 841 */
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
/* 38017 */ HB_P_LINE, 74, 3,	/* 842 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 77, 108, 255,	/* -37811 (abs: 00000214) */
/* 38029 */ HB_P_LINE, 76, 3,	/* 844 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 38245) */
/* 38045 */ HB_P_LINE, 77, 3,	/* 845 */
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
/* 38090 */ HB_P_LINE, 78, 3,	/* 846 */
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
/* 38131 */ HB_P_LINE, 79, 3,	/* 847 */
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
/* 38210 */ HB_P_LINE, 80, 3,	/* 848 */
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
/* 38233 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 117, 107, 255,	/* -38027 (abs: 00000214) */
/* 38245 */ HB_P_LINE, 83, 3,	/* 851 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 38448) */
/* 38261 */ HB_P_LINE, 84, 3,	/* 852 */
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
/* 38297 */ HB_P_LINE, 85, 3,	/* 853 */
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
/* 38334 */ HB_P_LINE, 86, 3,	/* 854 */
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
/* 38413 */ HB_P_LINE, 87, 3,	/* 855 */
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
/* 38436 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 170, 106, 255,	/* -38230 (abs: 00000214) */
/* 38448 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '0', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 38657) */
/* 38464 */ HB_P_LINE, 91, 3,	/* 859 */
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
/* 38506 */ HB_P_LINE, 92, 3,	/* 860 */
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
/* 38545 */ HB_P_LINE, 93, 3,	/* 861 */
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
/* 38622 */ HB_P_LINE, 94, 3,	/* 862 */
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
/* 38645 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 217, 105, 255,	/* -38439 (abs: 00000214) */
/* 38657 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 223, 0,	/* 223 (abs: 38893) */
/* 38673 */ HB_P_LINE, 98, 3,	/* 866 */
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
/* 38727 */ HB_P_LINE, 99, 3,	/* 867 */
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
/* 38779 */ HB_P_LINE, 100, 3,	/* 868 */
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
/* 38858 */ HB_P_LINE, 101, 3,	/* 869 */
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
/* 38881 */ HB_P_LINE, 102, 3,	/* 870 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 237, 104, 255,	/* -38675 (abs: 00000214) */
/* 38893 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 0, 1,	/* 256 (abs: 39162) */
/* 38909 */ HB_P_LINE, 105, 3,	/* 873 */
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
/* 38958 */ HB_P_LINE, 106, 3,	/* 874 */
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
/* 39002 */ HB_P_LINE, 107, 3,	/* 875 */
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
/* 39067 */ HB_P_LINE, 108, 3,	/* 876 */
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
/* 39127 */ HB_P_LINE, 109, 3,	/* 877 */
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
/* 39150 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 224, 103, 255,	/* -38944 (abs: 00000214) */
/* 39162 */ HB_P_LINE, 112, 3,	/* 880 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '5', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 246, 1,	/* 502 (abs: 39677) */
/* 39178 */ HB_P_LINE, 113, 3,	/* 881 */
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
/* 39233 */ HB_P_LINE, 114, 3,	/* 882 */
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
/* 39283 */ HB_P_LINE, 115, 3,	/* 883 */
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
/* 39342 */ HB_P_LINE, 116, 3,	/* 884 */
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
/* 39402 */ HB_P_LINE, 117, 3,	/* 885 */
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
/* 39462 */ HB_P_LINE, 118, 3,	/* 886 */
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
/* 39522 */ HB_P_LINE, 119, 3,	/* 887 */
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
/* 39582 */ HB_P_LINE, 120, 3,	/* 888 */
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
/* 39642 */ HB_P_LINE, 121, 3,	/* 889 */
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
/* 39665 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 221, 101, 255,	/* -39459 (abs: 00000214) */
/* 39677 */ HB_P_LINE, 124, 3,	/* 892 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 134, 1,	/* 390 (abs: 40080) */
/* 39693 */ HB_P_LINE, 125, 3,	/* 893 */
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
/* 39749 */ HB_P_LINE, 126, 3,	/* 894 */
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
/* 39800 */ HB_P_LINE, 127, 3,	/* 895 */
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
/* 39865 */ HB_P_LINE, 128, 3,	/* 896 */
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
/* 39925 */ HB_P_LINE, 129, 3,	/* 897 */
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
/* 39985 */ HB_P_LINE, 130, 3,	/* 898 */
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
/* 40045 */ HB_P_LINE, 131, 3,	/* 899 */
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
/* 40068 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 74, 100, 255,	/* -39862 (abs: 00000214) */
/* 40080 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '4', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 0,	/* 235 (abs: 40328) */
/* 40096 */ HB_P_LINE, 135, 3,	/* 903 */
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
/* 40144 */ HB_P_LINE, 136, 3,	/* 904 */
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
/* 40195 */ HB_P_LINE, 137, 3,	/* 905 */
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
/* 40293 */ HB_P_LINE, 138, 3,	/* 906 */
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
/* 40316 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 82, 99, 255,	/* -40110 (abs: 00000214) */
/* 40328 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 1,	/* 425 (abs: 40766) */
/* 40344 */ HB_P_LINE, 142, 3,	/* 910 */
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
/* 40397 */ HB_P_LINE, 143, 3,	/* 911 */
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
/* 40426 */ HB_P_LINE, 144, 3,	/* 912 */
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
/* 40491 */ HB_P_LINE, 145, 3,	/* 913 */
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
/* 40551 */ HB_P_LINE, 146, 3,	/* 914 */
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
/* 40611 */ HB_P_LINE, 147, 3,	/* 915 */
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
/* 40671 */ HB_P_LINE, 148, 3,	/* 916 */
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
/* 40731 */ HB_P_LINE, 149, 3,	/* 917 */
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
/* 40754 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 156, 97, 255,	/* -40548 (abs: 00000214) */
/* 40766 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 234, 0,	/* 234 (abs: 41013) */
/* 40782 */ HB_P_LINE, 153, 3,	/* 921 */
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
/* 40842 */ HB_P_LINE, 154, 3,	/* 922 */
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
/* 40899 */ HB_P_LINE, 155, 3,	/* 923 */
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
/* 40978 */ HB_P_LINE, 156, 3,	/* 924 */
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
/* 41001 */ HB_P_LINE, 157, 3,	/* 925 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 165, 96, 255,	/* -40795 (abs: 00000214) */
/* 41013 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 41258) */
/* 41029 */ HB_P_LINE, 160, 3,	/* 928 */
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
/* 41087 */ HB_P_LINE, 161, 3,	/* 929 */
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
/* 41144 */ HB_P_LINE, 162, 3,	/* 930 */
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
/* 41223 */ HB_P_LINE, 163, 3,	/* 931 */
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
/* 41246 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 176, 95, 255,	/* -41040 (abs: 00000214) */
/* 41258 */ HB_P_LINE, 166, 3,	/* 934 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 244, 0,	/* 244 (abs: 41515) */
/* 41274 */ HB_P_LINE, 167, 3,	/* 935 */
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
/* 41327 */ HB_P_LINE, 168, 3,	/* 936 */
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
/* 41382 */ HB_P_LINE, 169, 3,	/* 937 */
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
/* 41480 */ HB_P_LINE, 170, 3,	/* 938 */
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
/* 41503 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 175, 94, 255,	/* -41297 (abs: 00000214) */
/* 41515 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '1', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 254, 0,	/* 254 (abs: 41782) */
/* 41531 */ HB_P_LINE, 174, 3,	/* 942 */
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
/* 41590 */ HB_P_LINE, 175, 3,	/* 943 */
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
/* 41643 */ HB_P_LINE, 176, 3,	/* 944 */
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
/* 41722 */ HB_P_LINE, 177, 3,	/* 945 */
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
/* 41745 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 41770) */
/* 41758 */ HB_P_LINE, 179, 3,	/* 947 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 176, 93, 255,	/* -41552 (abs: 00000214) */
/* 41770 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 164, 93, 255,	/* -41564 (abs: 00000214) */
/* 41782 */ HB_P_LINE, 184, 3,	/* 952 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 42044) */
/* 41798 */ HB_P_LINE, 185, 3,	/* 953 */
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
/* 41866 */ HB_P_LINE, 186, 3,	/* 954 */
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
/* 41933 */ HB_P_LINE, 187, 3,	/* 955 */
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
/* 42009 */ HB_P_LINE, 188, 3,	/* 956 */
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
/* 42032 */ HB_P_LINE, 189, 3,	/* 957 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 158, 92, 255,	/* -41826 (abs: 00000214) */
/* 42044 */ HB_P_LINE, 191, 3,	/* 959 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 247, 0,	/* 247 (abs: 42304) */
/* 42060 */ HB_P_LINE, 192, 3,	/* 960 */
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
/* 42126 */ HB_P_LINE, 193, 3,	/* 961 */
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
/* 42193 */ HB_P_LINE, 194, 3,	/* 962 */
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
/* 42269 */ HB_P_LINE, 195, 3,	/* 963 */
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
/* 42292 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 154, 91, 255,	/* -42086 (abs: 00000214) */
/* 42304 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 250, 0,	/* 250 (abs: 42567) */
/* 42320 */ HB_P_LINE, 199, 3,	/* 967 */
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
/* 42385 */ HB_P_LINE, 200, 3,	/* 968 */
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
/* 42452 */ HB_P_LINE, 201, 3,	/* 969 */
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
/* 42532 */ HB_P_LINE, 202, 3,	/* 970 */
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
/* 42555 */ HB_P_LINE, 203, 3,	/* 971 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 147, 90, 255,	/* -42349 (abs: 00000214) */
/* 42567 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 203, 0,	/* 203 (abs: 42783) */
/* 42583 */ HB_P_LINE, 206, 3,	/* 974 */
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
/* 42629 */ HB_P_LINE, 207, 3,	/* 975 */
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
/* 42677 */ HB_P_LINE, 208, 3,	/* 976 */
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
/* 42748 */ HB_P_LINE, 209, 3,	/* 977 */
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
/* 42771 */ HB_P_LINE, 210, 3,	/* 978 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 187, 89, 255,	/* -42565 (abs: 00000214) */
/* 42783 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 195, 0,	/* 195 (abs: 42991) */
/* 42799 */ HB_P_LINE, 213, 3,	/* 981 */
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
/* 42837 */ HB_P_LINE, 214, 3,	/* 982 */
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
/* 42885 */ HB_P_LINE, 215, 3,	/* 983 */
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
/* 42956 */ HB_P_LINE, 216, 3,	/* 984 */
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
/* 42979 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 235, 88, 255,	/* -42773 (abs: 00000214) */
/* 42991 */ HB_P_LINE, 219, 3,	/* 987 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 43194) */
/* 43007 */ HB_P_LINE, 220, 3,	/* 988 */
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
/* 43045 */ HB_P_LINE, 221, 3,	/* 989 */
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
/* 43088 */ HB_P_LINE, 222, 3,	/* 990 */
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
/* 43159 */ HB_P_LINE, 223, 3,	/* 991 */
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
/* 43182 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 32, 88, 255,	/* -42976 (abs: 00000214) */
/* 43194 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '6', '8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 190, 0,	/* 190 (abs: 43397) */
/* 43210 */ HB_P_LINE, 227, 3,	/* 995 */
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
/* 43248 */ HB_P_LINE, 228, 3,	/* 996 */
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
/* 43291 */ HB_P_LINE, 229, 3,	/* 997 */
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
/* 43362 */ HB_P_LINE, 230, 3,	/* 998 */
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
/* 43385 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 85, 87, 255,	/* -43179 (abs: 00000214) */
/* 43397 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '7', '5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 43598) */
/* 43413 */ HB_P_LINE, 234, 3,	/* 1002 */
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
/* 43450 */ HB_P_LINE, 235, 3,	/* 1003 */
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
/* 43492 */ HB_P_LINE, 236, 3,	/* 1004 */
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
/* 43563 */ HB_P_LINE, 237, 3,	/* 1005 */
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
/* 43586 */ HB_P_LINE, 238, 3,	/* 1006 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 140, 86, 255,	/* -43380 (abs: 00000214) */
/* 43598 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '8', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 196, 0,	/* 196 (abs: 43807) */
/* 43614 */ HB_P_LINE, 241, 3,	/* 1009 */
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
/* 43655 */ HB_P_LINE, 242, 3,	/* 1010 */
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
/* 43701 */ HB_P_LINE, 243, 3,	/* 1011 */
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
/* 43772 */ HB_P_LINE, 244, 3,	/* 1012 */
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
/* 43795 */ HB_P_LINE, 245, 3,	/* 1013 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 187, 85, 255,	/* -43589 (abs: 00000214) */
/* 43807 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '7', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 44073) */
/* 43823 */ HB_P_LINE, 248, 3,	/* 1016 */
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
/* 43876 */ HB_P_LINE, 249, 3,	/* 1017 */
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
/* 43940 */ HB_P_LINE, 250, 3,	/* 1018 */
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
/* 44038 */ HB_P_LINE, 251, 3,	/* 1019 */
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
/* 44061 */ HB_P_LINE, 252, 3,	/* 1020 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 177, 84, 255,	/* -43855 (abs: 00000214) */
/* 44073 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '8', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 243, 0,	/* 243 (abs: 44329) */
/* 44089 */ HB_P_LINE, 255, 3,	/* 1023 */
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
/* 44152 */ HB_P_LINE, 0, 4,	/* 1024 */
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
/* 44220 */ HB_P_LINE, 1, 4,	/* 1025 */
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
/* 44294 */ HB_P_LINE, 2, 4,	/* 1026 */
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
/* 44317 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 177, 83, 255,	/* -44111 (abs: 00000214) */
/* 44329 */ HB_P_LINE, 5, 4,	/* 1029 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MOP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 228, 23,	/* 6116 (abs: 50458) */
/* 44345 */ HB_P_LINE, 6, 4,	/* 1030 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* M_EMAIL */
/* 44353 */ HB_P_LINE, 7, 4,	/* 1031 */
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
/* 44397 */ HB_P_LINE, 8, 4,	/* 1032 */
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
/* 44422 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHSYMNEAR, 33,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* M_EMAIL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 44509) */
/* 44436 */ HB_P_LINE, 10, 4,	/* 1034 */
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
/* 44509 */ HB_P_LINE, 12, 4,	/* 1036 */
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
/* 44554 */ HB_P_LINE, 13, 4,	/* 1037 */
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
/* 44594 */ HB_P_LINE, 14, 4,	/* 1038 */
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
/* 44635 */ HB_P_LINE, 15, 4,	/* 1039 */
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
/* 44676 */ HB_P_LINE, 16, 4,	/* 1040 */
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
/* 44742 */ HB_P_LINE, 17, 4,	/* 1041 */
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
/* 44837 */ HB_P_LINE, 18, 4,	/* 1042 */
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
/* 44905 */ HB_P_LINE, 19, 4,	/* 1043 */
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
/* 44973 */ HB_P_LINE, 20, 4,	/* 1044 */
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
/* 45041 */ HB_P_LINE, 21, 4,	/* 1045 */
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
/* 45109 */ HB_P_LINE, 22, 4,	/* 1046 */
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
/* 45177 */ HB_P_LINE, 23, 4,	/* 1047 */
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
/* 45245 */ HB_P_LINE, 24, 4,	/* 1048 */
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
/* 45313 */ HB_P_LINE, 25, 4,	/* 1049 */
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
/* 45336 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 45361) */
/* 45349 */ HB_P_LINE, 27, 4,	/* 1051 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 169, 79, 255,	/* -45143 (abs: 00000214) */
/* 45361 */ HB_P_LINE, 30, 4,	/* 1054 */
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
	HB_P_JUMPFALSE, 94, 1,	/* 350 (abs: 45757) */
/* 45410 */ HB_P_LINE, 40, 4,	/* 1064 */
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
/* 45732 */ HB_P_LINE, 41, 4,	/* 1065 */
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
/* 45757 */ HB_P_LINE, 43, 4,	/* 1067 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPFAR, 17, 78, 255,	/* -45551 (abs: 00000214) */
/* 45769 */ HB_P_LINE, 50, 4,	/* 1074 */
	HB_P_PUSHSYMNEAR, 18,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSEFAR, 2, 78, 255,	/* -45566 (abs: 00000214) */
/* 45784 */ HB_P_LINE, 51, 4,	/* 1075 */
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
	HB_P_JUMPFALSE, 188, 17,	/* 4540 (abs: 50370) */
/* 45833 */ HB_P_LINE, 183, 4,	/* 1207 */
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
/* 50345 */ HB_P_LINE, 184, 4,	/* 1208 */
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
/* 50370 */ HB_P_LINE, 186, 4,	/* 1210 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* M_SET */
/* 50379 */ HB_P_LINE, 187, 4,	/* 1211 */
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
/* 50423 */ HB_P_LINE, 188, 4,	/* 1212 */
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
/* 50448 */ HB_P_LINE, 189, 4,	/* 1213 */
	HB_P_PUSHSYMNEAR, 29,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 50462) */
	HB_P_JUMPFAR, 188, 59, 255,	/* -50244 (abs: 00000214) */
/* 50462 */ HB_P_LINE, 193, 4,	/* 1217 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 50468 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

