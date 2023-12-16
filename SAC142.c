/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC142.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC142.PRG /q /oC:\hti\SISCOM\SAC142.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:38 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC142.PRG"

HB_FUNC( SAC142 );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC142 )
{ "SAC142", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC142 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC142 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC142
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC142 = hb_vm_SymbolInit_SAC142;
   #pragma data_seg()
#endif

HB_FUNC( SAC142 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '1', '4', '2', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* MCONS_FORN */
/* 00022 */ HB_P_LINEOFFSET, 3,	/* 9 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', 'e', ' ', 'O', 'U', 'T', 'R', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00059 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 2,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00072 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00116 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 9,	/* DATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00159 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'R', '.', 'S', 'o', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 10,	/* RAZAO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00198 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 11,	/* ENDERECO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00237 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* BAIRRO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00276 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* CIDADE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00315 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'U', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* UF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00354 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* CEP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00393 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'G', 'C', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* CGC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00432 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'I', 'n', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'E', 's', 't', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* INSC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00471 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 3,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 4,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* OBS */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00510 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 3, 0,	/* MCONS_FORN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00584 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00608 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 22,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MCONS_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00742) */
/* 00621 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 23,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 98,	/* 98 */
	'E', 's', 't', 'e', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', 't', 'e', 'm', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'A', 'P', 'A', 'G', 'A', 'R', ' ', 's', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', ' ', 'a', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'v', 'a', 'i', ' ', 's', 'e', 'r', ' ', 'E', 'X', 'C', 'L', 'U', 'I', 'D', 'O', ' ', 'T', 'O', 'D', 'O', 'S', ' ', 'O', 'D', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00742) */
	HB_P_JUMP, 225, 2,	/* 737 (abs: 01476) */
/* 00742 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 23,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00798) */
	HB_P_JUMP, 169, 2,	/* 681 (abs: 01476) */
/* 00798 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 123,	/* 123 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'l', 'o', 'g', ' ', '(', 'd', 'a', 't', 'a', '_', 's', 'i', 's', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 't', 'i', 'p', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'a', 'u', 't', '_', 'o', 'p', 'e', 'r', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'm', 'o', 'd', 'u', 'l', 'o', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'c', 'o', 'd', '_', 'a', 'u', 't', ',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 26,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'E', 'X', 'C', 'L', '.', 'F', 'O', 'R', 'N', '.', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ' ', 'C', 'O', 'D', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* COD_FORN */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 29,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 8,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 10,	/* RAZAO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LEFT, 15, 0,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01180 */ HB_P_LINEOFFSET, 42,	/* 48 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01251 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 'c', '_', 'c', '_', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01323 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'p', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 21,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01392 */ HB_P_LINEOFFSET, 45,	/* 51 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01452 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_MESSAGE, 19, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 20,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01476 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHSYMNEAR, 31,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01483 */ HB_P_LINEOFFSET, 51,	/* 57 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01488 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

