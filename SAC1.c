/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC1.PRG /q /oC:\hti\SISCOM\SAC1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:10 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC1.PRG"

HB_FUNC( SAC1 );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SACREG );
HB_FUNC_EXTERN( SACCID );
HB_FUNC_EXTERN( SACCLF );
HB_FUNC_EXTERN( SAC20 );
HB_FUNC_EXTERN( SACOBS );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC1 )
{ "SAC1", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC1 )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SACREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACREG )}, NULL },
{ "SACCID", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCID )}, NULL },
{ "SACCLF", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACCLF )}, NULL },
{ "SAC20", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC20 )}, NULL },
{ "SACOBS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACOBS )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC1 = hb_vm_SymbolInit_SAC1;
   #pragma data_seg()
#endif

HB_FUNC( SAC1 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 5, 0,	/* MPRG 5*/
	'S', 'A', 'C', '1', 0, 
/* 00015 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_LOCALNEARSETINT, 5, 4, 0,	/* LCI 4*/
/* 00021 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_LOCALNEARSETINT, 6, 37, 0,	/* CCI 37*/
/* 00027 */ HB_P_LINEOFFSET, 6,	/* 13 */
	HB_P_LOCALNEARSETINT, 7, 10, 0,	/* LBA 10*/
/* 00033 */ HB_P_LINEOFFSET, 7,	/* 14 */
	HB_P_LOCALNEARSETINT, 8, 71, 0,	/* CBA 71*/
/* 00039 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_PUSHSYMNEAR, 1,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 3,	/* TELA */
/* 00054 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00060 */ HB_P_LINEOFFSET, 11,	/* 18 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00069 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_PUSHLOCALNEAR, 7,	/* LBA */
	HB_P_PUSHLOCALNEAR, 8,	/* CBA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'c', 'a', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00113 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00122 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', '0', ' ', '-', '>', ' ', 'R', 'e', 'g', 'i', 'o', 'e', 's', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'g', 'i', 'o', 'e', 's', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 'e', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00260 */ HB_P_LINEOFFSET, 15,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', '1', ' ', '-', '>', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', 'd', 'e', ' ', 'C', 'i', 'd', 'a', 'd', 'e', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'i', 'd', 'a', 'd', 'e', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00384 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', '2', ' ', '-', '>', ' ', 'C', 'l', 'a', 's', 's', 'i', 'f', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'a', 's', 's', 'i', 'f', 'i', 'c', 'a', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00519 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', '3', ' ', '-', '>', ' ', 'T', 'a', 'b', 'e', 'l', 'a', ' ', 'C', 'o', 'n', 'd', 'i', 'c', 'o', 'e', 's', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 'd', 'i', 'c', 'o', 'e', 's', ' ', 'd', 'e', ' ', 'P', 'G', '.', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00652 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 6,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', '4', ' ', '-', '>', ' ', 'M', 'e', 'n', 's', 'a', 'g', 'e', 'n', 's', ' ', 'p', '/', 'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'*', '*', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ',', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'e', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'M', 'E', 'N', 'S', 'A', 'G', 'E', 'M', ' ', 'P', '/', 'O', 'B', 'S', '.', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00784 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00798 */ HB_P_LINEOFFSET, 20,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00825) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00830) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00843 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00851 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 9,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* TELA */
	HB_P_DOSHORT, 5,
/* 00866 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00883) */
/* 00878 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00883 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00901) */
/* 00891 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 11,	/* SACREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 186, 252,	/* -838 (abs: 00060) */
/* 00901 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00924) */
/* 00910 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* SACCID */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 163, 252,	/* -861 (abs: 00060) */
/* 00924 */ HB_P_LINEOFFSET, 34,	/* 41 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00943) */
/* 00933 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 13,	/* SACCLF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 144, 252,	/* -880 (abs: 00060) */
/* 00943 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00966) */
/* 00952 */ HB_P_LINEOFFSET, 37,	/* 44 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC20 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 121, 252,	/* -903 (abs: 00060) */
/* 00966 */ HB_P_LINEOFFSET, 38,	/* 45 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 111, 252,	/* -913 (abs: 00060) */
/* 00976 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_PUSHSYMNEAR, 15,	/* SACOBS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 97, 252,	/* -927 (abs: 00060) */
	HB_P_ENDPROC
/* 00991 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

