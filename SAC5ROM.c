/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ROM.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\siachb\SAC5ROM.PRG /q /oC:\helio\siachb\SAC5ROM.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2022.07.07 13:01:00 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ROM.PRG"

HB_FUNC( SAC5ROM );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAC5PED4 );
HB_FUNC_EXTERN( SAC5ROM2 );
HB_FUNC_EXTERN( SAC5ROM1 );
HB_FUNC_EXTERN( SAC5ROM3 );
HB_FUNC_EXTERN( SAC5ROM4 );
HB_FUNC_EXTERN( SAC5ROM5 );
HB_FUNC_EXTERN( SAC5ROM6 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ROM )
{ "SAC5ROM", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ROM )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAC5PED4", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED4 )}, NULL },
{ "SAC5ROM2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM2 )}, NULL },
{ "SAC5ROM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM1 )}, NULL },
{ "SAC5ROM3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM3 )}, NULL },
{ "SAC5ROM4", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM4 )}, NULL },
{ "SAC5ROM5", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM5 )}, NULL },
{ "SAC5ROM6", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5ROM6 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ROM )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ROM
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ROM = hb_vm_SymbolInit_SAC5ROM;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ROM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 2, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '5', 'R', 'O', 'M', 0, 
/* 00018 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* LCI 0*/
/* 00024 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
/* 00030 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 6, 5, 0,	/* LBA 5*/
/* 00036 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 7, 27, 0,	/* CBA 27*/
/* 00042 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 00075) */
/* 00050 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETSTR, 9, 6, 0,	/* MNUM 6*/
	'n', 'o', 'r', 'o', 'm', 0, 
/* 00062 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_LOCALNEARSETSTR, 10, 5, 0,	/* MALI 5*/
	'r', 'o', 'm', 'a', 0, 
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 00099) */
/* 00075 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_LOCALNEARSETSTR, 9, 6, 0,	/* MNUM 6*/
	'n', 'o', 'p', 'r', 'o', 0, 
/* 00087 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_LOCALNEARSETSTR, 10, 6, 0,	/* MALI 6*/
	'p', 'r', 'o', 'd', 'u', 0, 
/* 00099 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHLOCALNEAR, 6,	/* LBA */
	HB_P_PUSHLOCALNEAR, 7,	/* CBA */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'r', 'o', 'm', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00154) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'E', ' ', 'C', 'A', 'R', 'G', 'A', 'S', ' ', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00169) */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'C', 'A', 'O', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00172 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00181 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00189 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '0', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00231 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '1', '-', '>', ' ', '2', 'a', '.', ' ', 'V', 'i', 'a', ' ', 'd', 'e', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00276 */ HB_P_LINEOFFSET, 22,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '2', '-', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00321 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '3', '-', '>', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00366 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '4', '-', '>', ' ', 'A', 'g', 'r', 'u', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00411 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '5', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00456 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', '5', '-', '>', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', '/', 'P', 'R', 'O', 'M', 'O', 'T', 'O', 'R', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00501 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00528) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00533) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 00546 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00561) */
	HB_P_JUMP, 160, 0,	/* 160 (abs: 00718) */
/* 00561 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00583) */
/* 00569 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 8,	/* SAC5PED4 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 104, 254,	/* -408 (abs: 00172) */
/* 00583 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00606) */
/* 00592 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 9,	/* SAC5ROM2 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 81, 254,	/* -431 (abs: 00172) */
/* 00606 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00629) */
/* 00615 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 10,	/* SAC5ROM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 58, 254,	/* -454 (abs: 00172) */
/* 00629 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00652) */
/* 00638 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC5ROM3 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 35, 254,	/* -477 (abs: 00172) */
/* 00652 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00675) */
/* 00661 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC5ROM4 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 12, 254,	/* -500 (abs: 00172) */
/* 00675 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00698) */
/* 00684 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC5ROM5 */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MALI */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 245, 253,	/* -523 (abs: 00172) */
/* 00698 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 235, 253,	/* -533 (abs: 00172) */
/* 00708 */ HB_P_LINEOFFSET, 45,	/* 52 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC5ROM6 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 225, 253,	/* -543 (abs: 00172) */
/* 00718 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 15,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00725 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00730 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

