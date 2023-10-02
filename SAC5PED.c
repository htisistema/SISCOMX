/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5PED.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5PED.PRG /q /oC:\hti\SISCOM\SAC5PED.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:00 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5PED.PRG"

HB_FUNC( SAC5PED );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC5PED1 );
HB_FUNC_EXTERN( SAC5PED2 );
HB_FUNC_EXTERN( SAC5PED3 );
HB_FUNC_EXTERN( SAC5PED5 );
HB_FUNC_EXTERN( SAC5PED6 );
HB_FUNC_EXTERN( SAC5PED9 );
HB_FUNC_EXTERN( SAC5PED8 );
HB_FUNC_EXTERN( SAC5P10 );
HB_FUNC_EXTERN( SAC5P11 );
HB_FUNC_EXTERN( SAC5PE10 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SAC5PE12 );
HB_FUNC_EXTERN( SAC5ORC2 );
HB_FUNC_EXTERN( SAC5PE14 );
HB_FUNC_EXTERN( SAC5PE15 );
HB_FUNC_EXTERN( SAC5PED10 );
HB_FUNC_EXTERN( SAC5COM1 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5PED )
{ "SAC5PED", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5PED )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC5PED1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED1 )}, NULL },
{ "SAC5PED2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED2 )}, NULL },
{ "SAC5PED3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED3 )}, NULL },
{ "SAC5PED5", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED5 )}, NULL },
{ "SAC5PED6", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED6 )}, NULL },
{ "SAC5PED9", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED9 )}, NULL },
{ "SAC5PED8", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED8 )}, NULL },
{ "SAC5P10", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5P10 )}, NULL },
{ "SAC5P11", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5P11 )}, NULL },
{ "SAC5PE10", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PE10 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "NOPED", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SAC5PE12", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PE12 )}, NULL },
{ "SAC5ORC2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ORC2 )}, NULL },
{ "SAC5PE14", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PE14 )}, NULL },
{ "SAC5PE15", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PE15 )}, NULL },
{ "SAC5PED10", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED10 )}, NULL },
{ "SAC5COM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5COM1 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5PED )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5PED
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5PED = hb_vm_SymbolInit_SAC5PED;
   #pragma data_seg()
#endif

HB_FUNC( SAC5PED )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'P', 'E', 'D', 0, 
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00028 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_LOCALNEARSETINT, 5, 14, 0,	/* LBA 14*/
/* 00034 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_LOCALNEARSETINT, 6, 25, 0,	/* CBA 25*/
/* 00040 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00078 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00087 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00096 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '0', '-', '>', ' ', '2', 'a', '.', 'V', 'i', 'a', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00143 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '1', '-', '>', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00193 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '2', '-', '>', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00243 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '4', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00293 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '5', '-', '>', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '/', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00343 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '6', '-', '>', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '/', ' ', 'E', 'n', 'v', 'e', 'l', 'o', 'p', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00393 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '7', '-', '>', ' ', 'M', 'o', 'n', 't', 'a', 'g', 'e', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00443 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '8', '-', '>', ' ', 'M', 'o', 'v', '.', 'P', 'e', 'd', 'i', 'd', 'o', '/', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00493 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', '9', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00543 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', 'A', '-', '>', ' ', 'V', 'e', 'n', 'd', 'a', 's', ' ', 'a', ' ', 'M', 'e', 'n', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00592 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'B', '-', '>', ' ', 'U', 'l', 't', 'i', 'm', 'o', ' ', 'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00642 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'C', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', 's', ' ', 'E', 's', 't', 'a', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00692 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'D', '-', '>', ' ', 'M', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00742 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'E', '-', '>', ' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00792 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'F', '-', '>', ' ', 'C', 'l', 'a', 's', 's', 'i', 'f', 'i', 'c', 'a', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00842 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 16, 0,	/* 16*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'G', '-', '>', ' ', 'P', 'r', 'e', 'v', 'i', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'E', 'n', 't', 'r', 'e', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00892 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', ' ', 'H', '-', '>', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00942 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00969) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00974) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00987 */ HB_P_LINEOFFSET, 28,	/* 34 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00995 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01010) */
	HB_P_JUMP, 1, 2,	/* 513 (abs: 01520) */
/* 01010 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01028) */
/* 01018 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHSYMNEAR, 8,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 77, 252,	/* -947 (abs: 00078) */
/* 01028 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01047) */
/* 01037 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHSYMNEAR, 9,	/* SAC5PED2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 58, 252,	/* -966 (abs: 00078) */
/* 01047 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01066) */
/* 01056 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC5PED3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 39, 252,	/* -985 (abs: 00078) */
/* 01066 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01085) */
/* 01075 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC5PED5 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 20, 252,	/* -1004 (abs: 00078) */
/* 01085 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01104) */
/* 01094 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC5PED6 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 1, 252,	/* -1023 (abs: 00078) */
/* 01104 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01123) */
/* 01113 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC5PED9 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 238, 251,	/* -1042 (abs: 00078) */
/* 01123 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01142) */
/* 01132 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC5PED8 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 219, 251,	/* -1061 (abs: 00078) */
/* 01142 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01161) */
/* 01151 */ HB_P_LINEOFFSET, 48,	/* 54 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC5P10 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 200, 251,	/* -1080 (abs: 00078) */
/* 01161 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01180) */
/* 01170 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC5P11 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 181, 251,	/* -1099 (abs: 00078) */
/* 01180 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01199) */
/* 01189 */ HB_P_LINEOFFSET, 52,	/* 58 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC5PE10 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 162, 251,	/* -1118 (abs: 00078) */
/* 01199 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 198, 0,	/* 198 (abs: 01404) */
/* 01209 */ HB_P_LINEOFFSET, 54,	/* 60 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'N', 'O', 'P', 'E', 'D', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'N', 'O', 'P', 'E', 'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01240) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01240 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 4,
/* 01253 */ HB_P_LINEOFFSET, 56,	/* 62 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'U', 'l', 't', 'i', 'm', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01292 */ HB_P_LINEOFFSET, 57,	/* 63 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'N', 'o', '.', ' ', 'd', 'o', ' ', 'U', 'l', 't', 'i', 'm', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01331 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01340 */ HB_P_LINEOFFSET, 59,	/* 65 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* NOPED */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* DATA_PED */
	HB_P_DOSHORT, 1,
/* 01359 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_PUSHSYMNEAR, 19,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* NOPED */
	HB_P_PUSHALIASEDFIELDNEAR, 23,	/* NUMERO */
	HB_P_DOSHORT, 1,
/* 01378 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01386 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHSYMNEAR, 24,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01394 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 213, 250,	/* -1323 (abs: 00078) */
/* 01404 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01423) */
/* 01413 */ HB_P_LINEOFFSET, 65,	/* 71 */
	HB_P_PUSHSYMNEAR, 26,	/* SAC5PE12 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 194, 250,	/* -1342 (abs: 00078) */
/* 01423 */ HB_P_LINEOFFSET, 66,	/* 72 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01442) */
/* 01432 */ HB_P_LINEOFFSET, 67,	/* 73 */
	HB_P_PUSHSYMNEAR, 27,	/* SAC5ORC2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 175, 250,	/* -1361 (abs: 00078) */
/* 01442 */ HB_P_LINEOFFSET, 68,	/* 74 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01461) */
/* 01451 */ HB_P_LINEOFFSET, 69,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* SAC5PE14 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 156, 250,	/* -1380 (abs: 00078) */
/* 01461 */ HB_P_LINEOFFSET, 70,	/* 76 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01480) */
/* 01470 */ HB_P_LINEOFFSET, 71,	/* 77 */
	HB_P_PUSHSYMNEAR, 29,	/* SAC5PE15 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 137, 250,	/* -1399 (abs: 00078) */
/* 01480 */ HB_P_LINEOFFSET, 72,	/* 78 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01499) */
/* 01489 */ HB_P_LINEOFFSET, 73,	/* 79 */
	HB_P_PUSHSYMNEAR, 30,	/* SAC5PED10 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 118, 250,	/* -1418 (abs: 00078) */
/* 01499 */ HB_P_LINEOFFSET, 74,	/* 80 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 108, 250,	/* -1428 (abs: 00078) */
/* 01509 */ HB_P_LINEOFFSET, 75,	/* 81 */
	HB_P_PUSHSYMNEAR, 31,	/* SAC5COM1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 97, 250,	/* -1439 (abs: 00078) */
/* 01520 */ HB_P_LINEOFFSET, 78,	/* 84 */
	HB_P_PUSHSYMNEAR, 25,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01527 */ HB_P_LINEOFFSET, 79,	/* 85 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01532 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

