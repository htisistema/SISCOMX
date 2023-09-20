/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sac_email.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sac_email.prg /q /oC:\hti\SISCOM\sac_email.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:14:53 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sac_email.prg"

HB_FUNC( BLAT );
HB_FUNC( RMEMOWRIT );
HB_FUNC( WINEXEC );
HB_FUNC( FORMHTML );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( LOWER );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( __RUN );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC_EMAIL )
{ "BLAT", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( BLAT )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLATCMD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "LOWER", {HB_FS_PUBLIC}, {HB_FUNCNAME( LOWER )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "NELE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "RMEMOWRIT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RMEMOWRIT )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "CMACRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WINEXEC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( WINEXEC )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "BLATLOG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "NHANDLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "__RUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( __RUN )}, NULL },
{ "FORMHTML", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FORMHTML )}, NULL },
{ "CCLOSE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHTML", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC_EMAIL )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC_EMAIL
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC_EMAIL = hb_vm_SymbolInit_SAC_EMAIL;
   #pragma data_seg()
#endif

HB_FUNC( BLAT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 9,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 41, 0,	/* 41 */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'B', 'L', 'A', 'T', '.', 'E', 'X', 'E', ' ', '-', 'i', 'n', 's', 't', 'a', 'l', 'l', ' ', 's', 'm', 't', 'p', '.', 'H', 'T', 'I', 's', 'i', 's', 't', 'e', 'm', 'a', 's', '.', 'c', 'o', 'm', '.', 'b', 'r', ' ', 's', 'u', 'p', 'o', 'r', 't', 'e', '@', 'H', 'T', 'I', 's', 'i', 's', 't', 'e', 'm', 'a', 's', '.', 'c', 'o', 'm', '.', 'b', 'r', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* BLATCMD */
/* 00084 */ HB_P_LINEOFFSET, 30,	/* 71 */
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'B', 'L', 'A', 'T', '.', 'E', 'X', 'E', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', 'b', 'o', 'd', 'y', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CBODY */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', '-', 't', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', 's', 'e', 'r', 'v', 'e', 'r', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CSERVER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', '-', 'f', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', '-', 's', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CSUBJECT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', '-', 'u', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* LOWER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CU */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', 'p', 'w', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* LOWER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CPW */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', '-', 'l', 'o', 'g', ' ', 34, 'e', 'm', 'a', 'i', 'l', '.', 'l', 'o', 'g', 34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* BLATCMD */
/* 00298 */ HB_P_LINEOFFSET, 31,	/* 72 */
	HB_P_PUSHSYMNEAR, 5,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CATTACH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 122,	/* 122 (abs: 00429) */
/* 00309 */ HB_P_LINEOFFSET, 32,	/* 73 */
	HB_P_PUSHSYMNEAR, 6,	/* VALTYPE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CATTACH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 00394) */
/* 00325 */ HB_P_LINEOFFSET, 33,	/* 74 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 7, 0,	/* NELE */
	HB_P_PUSHVARIABLE, 7, 0,	/* NELE */
	HB_P_PUSHSYMNEAR, 8,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CATTACH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 00429) */
/* 00344 */ HB_P_LINEOFFSET, 34,	/* 75 */
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', 'a', 't', 't', 'a', 'c', 'h', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CATTACH */
	HB_P_PUSHVARIABLE, 7, 0,	/* NELE */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* BLATCMD */
/* 00383 */ HB_P_LINEOFFSET, 35,	/* 76 */
	HB_P_PUSHVARIABLE, 7, 0,	/* NELE */
	HB_P_INC,
	HB_P_POPVARIABLE, 7, 0,	/* NELE */
	HB_P_JUMPNEAR, 195,	/* -61 (abs: 00331) */
/* 00394 */ HB_P_LINEOFFSET, 37,	/* 78 */
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', 'a', 't', 't', 'a', 'c', 'h', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 3,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CATTACH */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* BLATCMD */
/* 00429 */ HB_P_LINEOFFSET, 46,	/* 87 */
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'a', 'u', 's', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 2, 0,	/* BLATCMD */
/* 00450 */ HB_P_LINEOFFSET, 50,	/* 91 */
	HB_P_PUSHSYMNEAR, 9,	/* RMEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'l', 'a', 't', '.', 'b', 'a', 't', 0, 
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_DOSHORT, 2,
/* 00471 */ HB_P_LINEOFFSET, 51,	/* 92 */
	HB_P_PUSHSYMNEAR, 10,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'm', 'a', 'i', 'l', '.', 'l', 'o', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 00490 */ HB_P_LINEOFFSET, 55,	/* 96 */
	HB_P_PUSHVARIABLE, 2, 0,	/* BLATCMD */
	HB_P_POPVARIABLE, 11, 0,	/* CMACRO */
/* 00498 */ HB_P_LINEOFFSET, 57,	/* 98 */
	HB_P_PUSHSYMNEAR, 9,	/* RMEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'b', 'l', 'a', 't', '.', 'b', 'a', 't', 0, 
	HB_P_PUSHVARIABLE, 11, 0,	/* CMACRO */
	HB_P_DOSHORT, 2,
/* 00519 */ HB_P_LINEOFFSET, 59,	/* 100 */
	HB_P_PUSHSYMNEAR, 12,	/* WINEXEC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* CMACRO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
/* 00531 */ HB_P_LINEOFFSET, 63,	/* 104 */
	HB_P_PUSHSYMNEAR, 13,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 2,	/* 0.10, 10, 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00551 */ HB_P_LINEOFFSET, 65,	/* 106 */
	HB_P_PUSHSYMNEAR, 14,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'm', 'a', 'i', 'l', '.', 'l', 'o', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 171, 0,	/* 171 (abs: 00741) */
/* 00573 */ HB_P_LINEOFFSET, 66,	/* 107 */
	HB_P_PUSHSYMNEAR, 15,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'e', 'm', 'a', 'i', 'l', '.', 'l', 'o', 'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 16, 0,	/* BLATLOG */
/* 00595 */ HB_P_LINEOFFSET, 67,	/* 108 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'R', 'R', 'O', 'R', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* BLATLOG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00631) */
/* 00616 */ HB_P_LINEOFFSET, 68,	/* 109 */
	HB_P_PUSHSYMNEAR, 18,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* BLATLOG */
	HB_P_DOSHORT, 1,
/* 00626 */ HB_P_LINEOFFSET, 69,	/* 110 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00631 */ HB_P_LINEOFFSET, 71,	/* 112 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'5', '3', '5', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* BLATLOG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 00741) */
/* 00650 */ HB_P_LINEOFFSET, 72,	/* 113 */
	HB_P_PUSHSYMNEAR, 18,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'E', 'r', 'r', 'o', ':', ' ', 'A', 'u', 't', 'h', 'e', 'n', 't', 'i', 'c', 'a', 't', 'i', 'o', 'n', ' ', 'F', 'a', 'i', 'l', 'e', 'd', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'e', 'n', 'h', 'a', '/', 'L', 'o', 'g', 'i', 'n', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'e', 'n', 't', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'c', 'o', 'm', ' ', 'e', 'r', 'r', 'o', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00736 */ HB_P_LINEOFFSET, 73,	/* 114 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00741 */ HB_P_LINEOFFSET, 76,	/* 117 */
	HB_P_PUSHSYMNEAR, 18,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'E', 'M', 'A', 'I', 'L', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00783 */ HB_P_LINEOFFSET, 77,	/* 118 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00788 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( RMEMOWRIT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 122, 0,	/* 122 */
	HB_P_PUSHSYMNEAR, 19,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* _AQUIVO_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 20, 0,	/* NHANDLE */
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 123 */
	HB_P_PUSHSYMNEAR, 21,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* NHANDLE */
	HB_P_PUSHLOCALNEAR, 2,	/* _CONTEUDO_ */
	HB_P_PUSHSYMNEAR, 8,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* _CONTEUDO_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 124 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* NHANDLE */
	HB_P_DOSHORT, 1,
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 125 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00050 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( WINEXEC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 129, 0,	/* 129 */
	HB_P_PUSHSYMNEAR, 23,	/* __RUN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OQUE */
	HB_P_PUSHLOCALNEAR, 2,	/* NUM */
	HB_P_DOSHORT, 2,
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 130 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00020 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FORMHTML )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 135, 0,	/* 135 */
	HB_P_PUSHSTRSHORT, 123,	/* 123 */
	'<', '!', 'D', 'O', 'C', 'T', 'Y', 'P', 'E', ' ', 'h', 't', 'm', 'l', ' ', 'P', 'U', 'B', 'L', 'I', 'C', ' ', 34, '-', '/', '/', 'W', '3', 'C', '/', '/', 'D', 'T', 'D', ' ', 'H', 'T', 'M', 'L', ' ', '4', '.', '0', '1', ' ', 'T', 'r', 'a', 'n', 's', 'i', 't', 'i', 'o', 'n', 'a', 'l', '/', '/', 'E', 'N', 34, ' ', 34, 'h', 't', 't', 'p', ':', '/', '/', 'w', 'w', 'w', '.', 'w', '3', '.', 'o', 'r', 'g', '/', 'T', 'R', '/', '1', '9', '9', '9', '/', 'R', 'E', 'C', '-', 'h', 't', 'm', 'l', '4', '0', '1', '-', '1', '9', '9', '9', '1', '2', '2', '4', '/', 'l', 'o', 'o', 's', 'e', '.', 'd', 't', 'd', 34, '>', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* COPEN */
/* 00137 */ HB_P_LINEOFFSET, 2,	/* 137 */
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PUSHSTRSHORT, 117,	/* 117 */
	'N', 'o', 's', 's', 'a', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', 'e', 'n', 'v', 'i', 'a', ' ', '<', 'S', 'P', 'A', 'N', ' ', 'c', 'l', 'a', 's', 's', '=', 'p', 'o', 's', 't', 'h', 'i', 'l', 'i', 't', '>', 'e', 'm', 'a', 'i', 'l', '<', '/', 'S', 'P', 'A', 'N', '>', ' ', 's', 'o', 'm', 'e', 'n', 't', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'e', 's', 's', 'o', 'a', 's', ' ', 'e', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', 's', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'a', 's', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 's', 'i', 's', 't', 'e', 'm', 'a', '.', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	'C', 'a', 's', 'o', ' ', 't', 'e', 'n', 'h', 'a', ' ', 'd', 'u', 'v', 'i', 'd', 'a', 's', ' ', 'f', 'a', 'v', 'o', 'r', ' ', 'e', 'n', 't', 'r', 'a', 'r', ' ', 'e', 'm', ' ', 'c', 'o', 'n', 't', 'a', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'n', 'o', 's', 's', 'a', ' ', 'c', 'e', 'n', 't', 'r', 'a', 'l', ' ', 'd', 'e', ' ', 'a', 't', 'e', 'n', 'd', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'a', 'o', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', '.', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 25, 0,	/* CCLOSE */
/* 00360 */ HB_P_LINEOFFSET, 14,	/* 149 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', 'h', 't', 'm', 'l', '>', 0, 
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', 'h', 'e', 'a', 'd', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', '<', 'm', 'e', 't', 'a', ' ', 'h', 't', 't', 'p', '-', 'e', 'q', 'u', 'i', 'v', '=', 34, 'C', 'o', 'n', 't', 'e', 'n', 't', '-', 'T', 'y', 'p', 'e', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	' ', ' ', ' ', ' ', 'c', 'o', 'n', 't', 'e', 'n', 't', '=', 34, 't', 'e', 'x', 't', '/', 'h', 't', 'm', 'l', ';', ' ', 'c', 'h', 'a', 'r', 's', 'e', 't', '=', 'i', 's', 'o', '-', '8', '8', '5', '9', '-', '1', 34, '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'<', '/', 'h', 'e', 'a', 'd', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', 'b', 'o', 'd', 'y', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'<', 'p', 'r', 'e', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* CBODY */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'<', '/', 'p', 'r', 'e', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'<', '/', 'b', 'o', 'd', 'y', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'<', '/', 'h', 't', 'm', 'l', '>', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 26, 0,	/* CHTML */
/* 00573 */ HB_P_LINEOFFSET, 15,	/* 150 */
	HB_P_PUSHLOCALNEAR, 3,	/* COPEN */
	HB_P_PUSHVARIABLE, 26, 0,	/* CHTML */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 25, 0,	/* CCLOSE */
	HB_P_PLUS,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00587 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

