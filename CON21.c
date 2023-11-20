/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON21.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\CON21.PRG /q /oC:\hti\SISCOM\CON21.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:27 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON21.PRG"

HB_FUNC( CON21 );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( CON211 );
HB_FUNC_EXTERN( CON212 );
HB_FUNC_EXTERN( CON214 );
HB_FUNC_EXTERN( CON22 );
HB_FUNC_EXTERN( CON221 );
HB_FUNC_EXTERN( CON41 );
HB_FUNC_EXTERN( CON2111 );
HB_FUNC_EXTERN( SAC4FLU );
HB_FUNC_EXTERN( CON215 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON21 )
{ "CON21", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON21 )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "CON211", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON211 )}, NULL },
{ "CON212", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON212 )}, NULL },
{ "CON214", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON214 )}, NULL },
{ "CON22", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON22 )}, NULL },
{ "CON221", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON221 )}, NULL },
{ "CON41", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON41 )}, NULL },
{ "CON2111", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON2111 )}, NULL },
{ "SAC4FLU", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC4FLU )}, NULL },
{ "CON215", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON215 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON21 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON21
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON21 = hb_vm_SymbolInit_CON21;
   #pragma data_seg()
#endif

HB_FUNC( CON21 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '2', '1', 0, 
/* 00016 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00045) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'p', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00074) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00074 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'c', 'd', 'e', 's', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00104) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00104 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00133) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00133 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00142 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 98, 3,	/* 866 (abs: 01014) */
/* 00151 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'P', 'C', 'O', 'E', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00175 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00184 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00226 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00269 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00312 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00355 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'E', 's', 't', 'o', 'r', 'n', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00398 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00441 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', ' ', 'G', 'e', 'r', 'a', 'l', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00484 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00527 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', ' ', 'V', 'a', 'r', 'i', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00570 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'F', 'l', 'u', 'x', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'i', 'x', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00613 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'A', 'g', 'r', 'u', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00656 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00699 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 00713 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00740) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00745) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 00758 */ HB_P_LINEOFFSET, 26,	/* 32 */
	HB_P_PUSHSYMNEAR, 4,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00766 */ HB_P_LINEOFFSET, 27,	/* 33 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00781) */
	HB_P_JUMP, 243, 0,	/* 243 (abs: 01021) */
/* 00781 */ HB_P_LINEOFFSET, 30,	/* 36 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00799) */
/* 00789 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 10,	/* CON211 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 225, 0,	/* 225 (abs: 01021) */
/* 00799 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00818) */
/* 00808 */ HB_P_LINEOFFSET, 33,	/* 39 */
	HB_P_PUSHSYMNEAR, 11,	/* CON212 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 206, 0,	/* 206 (abs: 01021) */
/* 00818 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00841) */
/* 00827 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHSYMNEAR, 11,	/* CON212 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 183, 0,	/* 183 (abs: 01021) */
/* 00841 */ HB_P_LINEOFFSET, 36,	/* 42 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00860) */
/* 00850 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHSYMNEAR, 12,	/* CON214 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 164, 0,	/* 164 (abs: 01021) */
/* 00860 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00883) */
/* 00869 */ HB_P_LINEOFFSET, 39,	/* 45 */
	HB_P_PUSHSYMNEAR, 13,	/* CON22 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 141, 0,	/* 141 (abs: 01021) */
/* 00883 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00901) */
/* 00892 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHSYMNEAR, 13,	/* CON22 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 122,	/* 122 (abs: 01021) */
/* 00901 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00924) */
/* 00910 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_PUSHSYMNEAR, 14,	/* CON221 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 99,	/* 99 (abs: 01021) */
/* 00924 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00942) */
/* 00933 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_PUSHSYMNEAR, 15,	/* CON41 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 81,	/* 81 (abs: 01021) */
/* 00942 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00960) */
/* 00951 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHSYMNEAR, 16,	/* CON2111 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 01021) */
/* 00960 */ HB_P_LINEOFFSET, 48,	/* 54 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00978) */
/* 00969 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC4FLU */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 01021) */
/* 00978 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00996) */
/* 00987 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHSYMNEAR, 14,	/* CON221 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 01021) */
/* 00996 */ HB_P_LINEOFFSET, 52,	/* 58 */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 01021) */
/* 01005 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHSYMNEAR, 18,	/* CON215 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01021) */
/* 01014 */ HB_P_LINEOFFSET, 56,	/* 62 */
	HB_P_PUSHSYMNEAR, 12,	/* CON214 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01021 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_PUSHSYMNEAR, 19,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01028 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01033 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

