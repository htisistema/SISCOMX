/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACDASCH.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\siachb\SACDASCH.PRG /q /oC:\helio\siachb\SACDASCH.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2022.08.02 16:00:34 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACDASCH.PRG"

HB_FUNC( SACDASCH );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SR_SHOWVECTOR );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACDASCH )
{ "SACDASCH", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACDASCH )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "SR_SHOWVECTOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SHOWVECTOR )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACDASCH )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACDASCH
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACDASCH = hb_vm_SymbolInit_SACDASCH;
   #pragma data_seg()
#endif

HB_FUNC( SACDASCH )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 9, 0,	/* 9 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'D', 'A', 'S', 'H', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* MCONS_VEND */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_VEND */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'V', 'I', 'S', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'D', 'A', 'S', 'C', 'H', 'B', 'O', 'R', 'A', 'D', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00089) */
/* 00084 */ HB_P_LINEOFFSET, 3,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00089 */ HB_P_LINEOFFSET, 5,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
/* 00106 */ HB_P_LINEOFFSET, 6,	/* 15 */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'V', 'I', 'S', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', ' ', 'D', 'A', 'S', 'C', 'H', 'B', 'O', 'R', 'A', 'D', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00150 */ HB_P_LINEOFFSET, 8,	/* 17 */
	HB_P_PUSHSYMNEAR, 6,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 7, 0,	/* MDATA */
/* 00160 */ HB_P_LINEOFFSET, 9,	/* 18 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* M_VEND */
/* 00167 */ HB_P_LINEOFFSET, 10,	/* 19 */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'w', 'i', 't', 'h', ' ', 'p', 'd', 'a', 't', 'a', ' ', 'a', 's', ' ', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'c', 'u', 'r', 'r', 'e', 'n', 't', '_', 'd', 'a', 't', 'e', ' ', 'd', 'a', 't', 'a', ' ', 'f', 'r', 'o', 'm', ' ', 'r', 'd', 'b', '$', 'd', 'a', 't', 'a', 'b', 'a', 's', 'e', ')', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00233 */ HB_P_LINEOFFSET, 11,	/* 20 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 85,	/* 85 */
	',', ' ', 'p', 'm', 'e', 's', 'a', 't', 'u', 'a', 'l', ' ', 'a', 's', ' ', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'c', 'a', 's', 't', '(', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', '(', 'p', '.', 'd', 'a', 't', 'a', ' ', 'f', 'r', 'o', 'm', ' ', '1', ' ', 'f', 'o', 'r', ' ', '8', ')', ' ', '|', '|', ' ', 39, '0', '1', 39, ' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ' ', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00329 */ HB_P_LINEOFFSET, 12,	/* 21 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 84,	/* 84 */
	' ', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '1', ',', 'c', 'a', 's', 't', '(', 's', 'u', 'b', 's', 't', 'r', 'i', 'n', 'g', '(', 'p', '.', 'd', 'a', 't', 'a', ' ', 'f', 'r', 'o', 'm', ' ', '1', ' ', 'f', 'o', 'r', ' ', '8', ')', ' ', '|', '|', ' ', 39, '0', '1', 39, ' ', 'a', 's', ' ', 'd', 'a', 't', 'e', ')', ')', ' ', '-', ' ', '1', ' ', 'f', 'i', 'm', '_', 'm', 'e', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00424 */ HB_P_LINEOFFSET, 13,	/* 22 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'f', 'r', 'o', 'm', ' ', 'p', 'd', 'a', 't', 'a', ' ', 'p', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00450 */ HB_P_LINEOFFSET, 14,	/* 23 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 86,	/* 86 */
	',', ' ', 'p', 'm', 'e', 's', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', ' ', 'a', 's', ' ', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '-', '1', ',', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ')', ' ', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ' ', '-', ' ', '1', ' ', 'f', 'i', 'm', '_', 'm', 'e', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00547 */ HB_P_LINEOFFSET, 15,	/* 24 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'f', 'r', 'o', 'm', ' ', 'p', 'm', 'e', 's', 'a', 't', 'u', 'a', 'l', ' ', 'p', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00577 */ HB_P_LINEOFFSET, 16,	/* 25 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	',', ' ', 'p', 'm', 'e', 's', '3', ' ', 'a', 's', ' ', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'd', 'a', 't', 'e', 'a', 'd', 'd', '(', 'm', 'o', 'n', 't', 'h', ',', ' ', '-', '2', ',', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ')', ' ', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ' ', '-', ' ', '1', ' ', 'f', 'i', 'm', '_', 'm', 'e', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00667 */ HB_P_LINEOFFSET, 17,	/* 26 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'f', 'r', 'o', 'm', ' ', 'p', 'm', 'e', 's', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', ' ', 'p', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00700 */ HB_P_LINEOFFSET, 18,	/* 27 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	',', ' ', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'r', 'o', 's', ' ', 'a', 's', ' ', '(', 's', 'e', 'l', 'e', 'c', 't', ' ', 'p', '.', 'd', 'a', 't', 'a', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00743 */ HB_P_LINEOFFSET, 19,	/* 28 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'a', 't', 'u', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00767 */ HB_P_LINEOFFSET, 20,	/* 29 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'a', 't', 'u', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00791 */ HB_P_LINEOFFSET, 21,	/* 30 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'a', 'n', 't', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ' ', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00827 */ HB_P_LINEOFFSET, 22,	/* 31 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'a', 'n', 't', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ' ', 'f', 'i', 'm', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00863 */ HB_P_LINEOFFSET, 23,	/* 32 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'm', '3', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ' ', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00897 */ HB_P_LINEOFFSET, 24,	/* 33 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'm', '3', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ' ', 'f', 'i', 'm', '_', 'm', 'e', 's', '_', 'm', '3', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00930 */ HB_P_LINEOFFSET, 25,	/* 34 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'f', 'r', 'o', 'm', ' ', 'p', 'd', 'a', 't', 'a', ' ', 'p', ',', ' ', 'p', 'm', 'e', 's', 'a', 't', 'u', 'a', 'l', ' ', 'a', 't', 'u', ',', ' ', 'p', 'm', 'e', 's', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', ' ', 'a', 'n', 't', ',', ' ', 'p', 'm', 'e', 's', '3', ' ', 'm', '3', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 00998 */ HB_P_LINEOFFSET, 26,	/* 35 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01047 */ HB_P_LINEOFFSET, 27,	/* 36 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'p', 'e', 'd', '.', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ' ', 'a', 'n', 'd', ' ', 'p', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ',', ' ', 'p', 'e', 'd', '.', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ',', '0', ')', ')', ' ', 'e', 's', 't', 'e', '_', 'm', 'e', 's', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01139 */ HB_P_LINEOFFSET, 28,	/* 37 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01165 */ HB_P_LINEOFFSET, 29,	/* 38 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'p', 'e', 'd', '.', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ' ', 'a', 'n', 'd', ' ', 'p', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ',', ' ', 'p', 'e', 'd', '.', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ',', '0', ')', ')', ' ', 'm', 'e', 's', '_', 'a', 'n', 't', 'e', 'r', 'i', 'o', 'r', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01269 */ HB_P_LINEOFFSET, 30,	/* 39 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01294 */ HB_P_LINEOFFSET, 31,	/* 40 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 84,	/* 84 */
	's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'p', 'e', 'd', '.', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ' ', 'a', 'n', 'd', ' ', 'p', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', '_', 'm', '3', ',', ' ', 'p', 'e', 'd', '.', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ',', '0', ')', ')', ' ', 'm', 'e', 's', '_', '3', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01389 */ HB_P_LINEOFFSET, 32,	/* 41 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	's', 'u', 'm', '(', 'i', 'i', 'f', '(', 'p', 'e', 'd', '.', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ' ', 'a', 'n', 'd', ' ', 'p', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ',', ' ', 'p', 'e', 'd', '.', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ',', '0', ')', ')', ' ', 't', 'o', 't', 'a', 'l', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01480 */ HB_P_LINEOFFSET, 33,	/* 42 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'f', 'r', 'o', 'm', ' ', 'p', 'a', 'r', 'a', 'm', 'e', 't', 'r', 'o', 's', ' ', 'p', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01509 */ HB_P_LINEOFFSET, 34,	/* 43 */
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 171,	/* 171 */
	'j', 'o', 'i', 'n', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'p', 'e', 'd', ' ', 'o', 'n', ' ', 'p', 'e', 'd', '.', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', 'b', 'e', 't', 'w', 'e', 'e', 'n', ' ', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ' ', 'a', 'n', 'd', ' ', 'p', '.', 'f', 'i', 'm', '_', 'm', 'e', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, ' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'a', 'n', 't', ',', 'p', '.', 'i', 'n', 'i', '_', 'm', 'e', 's', '_', 'm', '3', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* CCOMM */
/* 01691 */ HB_P_LINEOFFSET, 35,	/* 44 */
	HB_P_MESSAGE, 9, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 10,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 8, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* M_VEND */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01712 */ HB_P_LINEOFFSET, 36,	/* 45 */
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
/* 01736 */ HB_P_LINEOFFSET, 37,	/* 46 */
	HB_P_PUSHSYMNEAR, 11,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 01801) */
/* 01749 */ HB_P_LINEOFFSET, 38,	/* 47 */
	HB_P_PUSHSYMNEAR, 12,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', 'E', 'S', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 144, 249,	/* -1648 (abs: 00150) */
/* 01801 */ HB_P_LINEOFFSET, 41,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* SR_SHOWVECTOR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* M_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 127, 249,	/* -1665 (abs: 00150) */
	HB_P_ENDPROC
/* 01819 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

