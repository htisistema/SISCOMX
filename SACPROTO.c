/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACPROTO.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SACPROTO.PRG /q /oC:\hti\SISCOM\SACPROTO.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:16 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACPROTO.PRG"

HB_FUNC( SACPROTO );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SACPROT1 );
HB_FUNC_EXTERN( SACPROT2 );
HB_FUNC_EXTERN( SACPROT3 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACPROTO )
{ "SACPROTO", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACPROTO )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SACPROT1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACPROT1 )}, NULL },
{ "SACPROT2", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACPROT2 )}, NULL },
{ "SACPROT3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACPROT3 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACPROTO )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACPROTO
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACPROTO = hb_vm_SymbolInit_SACPROTO;
   #pragma data_seg()
#endif

HB_FUNC( SACPROTO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'P', 'R', 'O', 'T', 'O', 0, 
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* LCI 0*/
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_LOCALNEARSETINT, 4, 3, 0,	/* LBA 3*/
	HB_P_LOCALNEARSETINT, 5, 24, 0,	/* CBA 24*/
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MNITEMMENU 0*/
/* 00039 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MNITEMMENU 0*/
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'P', 'R', 'O', 'T', 'O', 'C', 'O', 'L', 'O', ' ', 'd', 'e', ' ', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00082 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00091 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00100 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', '1', '-', '>', ' ', 'I', 'n', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'N', 'o', 't', 'a', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00141 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', '2', '-', '>', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'N', 'o', 't', 'a', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00185 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', '3', '-', '>', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'N', 'o', 't', 'a', 's', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00229 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', ' ', '4', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'N', 'o', 't', 'a', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00273 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MNITEMMENU */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00300) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00305) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'n', 'i', 't', 'e', 'm', 'm', 'e', 'n', 'u', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* MNITEMMENU */
/* 00323 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00331 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 7,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00345) */
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 00429) */
/* 00345 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHLOCALNEAR, 6,	/* MNITEMMENU */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00363) */
/* 00353 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 8,	/* SACPROT1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 234, 254,	/* -278 (abs: 00082) */
/* 00363 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHLOCALNEAR, 6,	/* MNITEMMENU */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00386) */
/* 00372 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 9,	/* SACPROT2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 211, 254,	/* -301 (abs: 00082) */
/* 00386 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHLOCALNEAR, 6,	/* MNITEMMENU */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00409) */
/* 00395 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 9,	/* SACPROT2 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 188, 254,	/* -324 (abs: 00082) */
/* 00409 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHLOCALNEAR, 6,	/* MNITEMMENU */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 178, 254,	/* -334 (abs: 00082) */
/* 00419 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 10,	/* SACPROT3 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 168, 254,	/* -344 (abs: 00082) */
/* 00429 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 11,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00436 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00441 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

