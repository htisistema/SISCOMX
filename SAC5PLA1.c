/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5PLA1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SAC5PLA1.PRG /q /oC:\hti\SISCOM\SAC5PLA1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:51 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5PLA1.PRG"

HB_FUNC( SAC5PLA1 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( MENSAGEM2 );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5PLA1 )
{ "SAC5PLA1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5PLA1 )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM2", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM2 )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5PLA1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5PLA1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5PLA1 = hb_vm_SymbolInit_SAC5PLA1;
   #pragma data_seg()
#endif

HB_FUNC( SAC5PLA1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
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
/* 00031 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_LOCALNEARSETINT, 1, 7, 0,	/* LCI 7*/
/* 00037 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_LOCALNEARSETINT, 2, 8, 0,	/* CCI 8*/
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 13 */
	HB_P_LOCALNEARSETINT, 3, 19, 0,	/* LBA 19*/
/* 00049 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_LOCALNEARSETINT, 4, 74, 0,	/* CBA 74*/
/* 00055 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* OPCAO */
/* 00065 */ HB_P_LINEOFFSET, 7,	/* 16 */
	HB_P_PUSHSYMNEAR, 6,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* TRACO */
/* 00080 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_PUSHSYMNEAR, 7,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 6,	/* TELA1 */
/* 00095 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00108 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* MQUANTD 1*/
/* 00114 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHSYMNEAR, 9,	/* MENSAGEM2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', ':', 0, 
	HB_P_PUSHLOCALNEAR, 7,	/* MQUANTD */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* MQUANTD */
/* 00159 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHSYMNEAR, 10,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00191) */
/* 00171 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHSYMNEAR, 11,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 6,	/* TELA1 */
	HB_P_DOSHORT, 5,
/* 00186 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'L', 'A', 'N', 'I', 'L', 'H', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 00239) */
/* 00219 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHSYMNEAR, 11,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 6,	/* TELA1 */
	HB_P_DOSHORT, 5,
/* 00234 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00239 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* I */
	HB_P_PUSHLOCALNEAR, 7,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 75, 12,	/* 3147 (abs: 03397) */
/* 00253 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHSYMNEAR, 13,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 00267 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00299 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHSYMNEAR, 13,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00313 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHSYMNEAR, 13,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00327 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'E', 'n', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 17,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 133, 0,	/* 133 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 17,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00428 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'I', 'n', 's', 'c', 'r', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 128, 0,	/* 128 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '/', ' ', 'C', '.', 'G', '.', 'C', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00519 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHSYMNEAR, 13,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00533 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00565 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'C', ' ', 'A', ' ', 'D', ' ', 'A', ' ', 'S', ' ', 'T', ' ', 'R', ' ', 'O', ' ', ' ', ' ', 'D', ' ', 'E', ' ', ' ', ' ', 'C', ' ', 'L', ' ', 'I', ' ', 'E', ' ', 'N', ' ', 'T', ' ', 'E', ' ', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00635 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00667 */ HB_P_LINEOFFSET, 36,	/* 45 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ':', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', 'N', 'a', 's', 'c', '.', ':', '.', '.', '.', '/', '.', '.', '.', '/', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00770 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', '.', ':', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', 'T', 'i', 'p', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '.', '.', '.', '.', '.', '.', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00873 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'N', 'P', 'J', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', 'I', 'n', 's', 'c', '.', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00976 */ HB_P_LINEOFFSET, 39,	/* 48 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'P', 'F', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'R', 'G', '.', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', 'O', 'r', 'g', 'a', 'o', ':', '.', '.', '.', '.', '.', '.', '.', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ':', '.', '.', '.', '/', '.', '.', '.', '/', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01079 */ HB_P_LINEOFFSET, 40,	/* 49 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01182 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'B', 'a', 'i', 'r', 'r', 'o', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'U', 'F', ':', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01285 */ HB_P_LINEOFFSET, 42,	/* 51 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'E', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'e', '-', 'm', 'a', 'i', 'l', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01388 */ HB_P_LINEOFFSET, 43,	/* 52 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'F', 'o', 'n', 'e', ' ', ' ', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'o', 'n', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'a', 'x', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01491 */ HB_P_LINEOFFSET, 44,	/* 53 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'o', 'm', 'p', 'r', 'a', 'd', 'o', 'r', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'C', 'o', 'n', 't', 'a', 't', 'o', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'A', 'r', 'e', 'a', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01594 */ HB_P_LINEOFFSET, 45,	/* 54 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'L', 'i', 'm', 'i', 't', 'e', ' ', ' ', ':', ' ', 'R', '$', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'R', 'e', 's', 'p', 'o', 'n', 's', 'a', 'v', 'e', 'l', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01697 */ HB_P_LINEOFFSET, 46,	/* 55 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'p', '/', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01800 */ HB_P_LINEOFFSET, 47,	/* 56 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'B', 'a', 'i', 'r', 'r', 'o', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'U', 'F', ':', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01903 */ HB_P_LINEOFFSET, 48,	/* 57 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'F', 'o', 'n', 'e', ' ', ' ', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02006 */ HB_P_LINEOFFSET, 49,	/* 58 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02038 */ HB_P_LINEOFFSET, 50,	/* 59 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'D', ' ', 'A', ' ', 'D', ' ', 'O', ' ', 'S', ' ', ' ', ' ', 'C', ' ', 'O', ' ', 'M', ' ', 'E', ' ', 'R', ' ', 'C', ' ', 'I', ' ', 'A', ' ', 'I', ' ', 'S', ' ', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02102 */ HB_P_LINEOFFSET, 51,	/* 60 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02134 */ HB_P_LINEOFFSET, 52,	/* 61 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'E', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'o', 'n', 'd', 'e', ' ', 'T', 'r', 'a', 'b', 'a', 'l', 'h', 'a', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02237 */ HB_P_LINEOFFSET, 53,	/* 62 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'a', 'r', 'g', 'o', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', 'S', 'a', 'l', 'a', 'r', 'i', 'o', ' ', 'R', '$', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02340 */ HB_P_LINEOFFSET, 54,	/* 63 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02443 */ HB_P_LINEOFFSET, 55,	/* 64 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'B', 'a', 'i', 'r', 'r', 'o', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'U', 'F', ':', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02546 */ HB_P_LINEOFFSET, 56,	/* 65 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'C', 'E', 'P', ' ', ' ', ' ', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'o', 'n', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'a', 'x', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02649 */ HB_P_LINEOFFSET, 57,	/* 66 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'o', 'n', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02752 */ HB_P_LINEOFFSET, 58,	/* 67 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'P', 'e', 's', 's', 'o', 'a', 'l', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'F', 'o', 'n', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02855 */ HB_P_LINEOFFSET, 59,	/* 68 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'L', 'o', 'j', 'a', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'D', 'e', 's', 'd', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02958 */ HB_P_LINEOFFSET, 60,	/* 69 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'L', 'o', 'j', 'a', ' ', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'D', 'e', 's', 'd', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03061 */ HB_P_LINEOFFSET, 61,	/* 70 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'B', 'a', 'n', 'c', 'o', ' ', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'A', 'g', '.', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'C', '/', 'C', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03164 */ HB_P_LINEOFFSET, 62,	/* 71 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'R', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'N', 'o', '.', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ' ', 'V', 'e', 'n', 'c', '.', ':', '.', '.', '.', '/', '.', '.', '.', '/', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03267 */ HB_P_LINEOFFSET, 63,	/* 72 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', 'D', 'a', 't', 'a', ':', '.', '.', '.', '.', '.', '/', '.', '.', '.', '.', '.', '/', '.', '.', '.', '.', '.', ' ', ' ', 'A', 's', 's', '.', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03372 */ HB_P_LINEOFFSET, 64,	/* 73 */
	HB_P_PUSHSYMNEAR, 20,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03379 */ HB_P_LINEOFFSET, 65,	/* 74 */
	HB_P_PUSHSYMNEAR, 21,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03388 */ HB_P_LINEOFFSET, 66,	/* 75 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* I 1*/
	HB_P_JUMP, 179, 243,	/* -3149 (abs: 00245) */
/* 03397 */ HB_P_LINEOFFSET, 67,	/* 76 */
	HB_P_PUSHSYMNEAR, 22,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 22,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 03438 */ HB_P_LINEOFFSET, 68,	/* 77 */
	HB_P_PUSHSYMNEAR, 23,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'L', 'A', 'N', 'I', 'L', 'H', 'A', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 03460 */ HB_P_LINEOFFSET, 69,	/* 78 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03465 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

