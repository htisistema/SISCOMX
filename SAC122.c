/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC122.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC122.PRG /q /oC:\hti\SISCOM\SAC122.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:11 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC122.PRG"

HB_FUNC( SAC122 );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCK );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC122 )
{ "SAC122", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC122 )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "TRAN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CPOSTAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEL1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEL2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FAX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "CGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INSC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CARTEIRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRAZO_PAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CT_GERENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CT_FATURA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CT_COBRAN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CT_VENDEDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC122 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC122
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC122 = hb_vm_SymbolInit_SAC122;
   #pragma data_seg()
#endif

HB_FUNC( SAC122 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '1', '2', '2', 0, 
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHSYMNEAR, 1,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'T', 'R', 'A', 'N', 'S', 'P', 'O', 'R', 'T', 'A', 'D', 'O', 'R', 'A', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 2, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00079) */
/* 00074 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00079 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_LOCALNEARSETINT, 4, 5, 0,	/* LCI 5*/
/* 00085 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
/* 00091 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_LOCALNEARSETINT, 6, 23, 0,	/* LBA 23*/
/* 00097 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_LOCALNEARSETINT, 7, 79, 0,	/* CBA 79*/
/* 00103 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 3,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_PUSHLOCALNEAR, 6,	/* LBA */
	HB_P_PUSHLOCALNEAR, 7,	/* CBA */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 2,	/* TELA */
/* 00120 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_LOCALNEARSETSTR, 3, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00128 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_DOSHORT, 4,
/* 00142 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00170 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00205 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00234 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00268 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', '.', 'S', 'o', 'c', 'i', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00297 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'L', 'o', 'g', 'r', 'a', 'd', 'o', 'u', 'r', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00328 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00386 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00415 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'U', 'F', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00440 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'E', 'P', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00469 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', '.', 'P', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00494 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', 's', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00524 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', 'o', 'n', 'e', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00549 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'o', 'n', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00574 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'F', 'a', 'x', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00599 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00630 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'I', 'd', 'e', 'n', 't', 'i', 'd', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00664 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'G', 'C', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00690 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'I', 'n', 's', 'c', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00716 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00745 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'B', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00775 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'a', 'r', 't', 'e', 'i', 'r', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00805 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'r', 'a', 'z', 'o', ' ', 'P', 'a', 'g', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00835 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'C', 'o', 'n', 't', 'a', 't', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00864 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'G', 'e', 'r', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00896 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00928 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00960 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00992 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01001 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_TRAN */
	HB_P_DOSHORT, 1,
/* 01019 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 10,	/* DATA_CAD */
	HB_P_DOSHORT, 1,
/* 01039 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 11,	/* RAZAO */
	HB_P_DOSHORT, 1,
/* 01059 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 12,	/* ENDERECO */
	HB_P_DOSHORT, 1,
/* 01079 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 13,	/* BAIRRO */
	HB_P_DOSHORT, 1,
/* 01099 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 14,	/* CIDADE */
	HB_P_DOSHORT, 1,
/* 01119 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 15,	/* UF */
	HB_P_DOSHORT, 1,
/* 01139 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 16,	/* CEP */
	HB_P_DOSHORT, 1,
/* 01159 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 17,	/* CPOSTAL */
	HB_P_DOSHORT, 1,
/* 01179 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 18,	/* TEL1 */
	HB_P_DOSHORT, 1,
/* 01199 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 19,	/* TEL2 */
	HB_P_DOSHORT, 1,
/* 01219 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 20,	/* FAX */
	HB_P_DOSHORT, 1,
/* 01239 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 22,	/* CGC */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'9', '9', '.', '9', '9', '9', '.', '9', '9', '9', '/', '9', '9', '9', '9', '-', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01280 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 23,	/* INSC */
	HB_P_DOSHORT, 1,
/* 01300 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 24,	/* BANCO */
	HB_P_DOSHORT, 1,
/* 01320 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 25,	/* CARTEIRA */
	HB_P_DOSHORT, 1,
/* 01340 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 63,	/* 63 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 26,	/* PRAZO_PAG */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'@', 'R', ' ', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01368 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 27,	/* CT_GERENTE */
	HB_P_DOSHORT, 1,
/* 01388 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* CT_FATURA */
	HB_P_DOSHORT, 1,
/* 01408 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* CT_COBRAN */
	HB_P_DOSHORT, 1,
/* 01428 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 30,	/* CT_VENDEDO */
	HB_P_DOSHORT, 1,
/* 01448 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 6,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 7,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 9,	/* TRAN */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* OBS */
	HB_P_DOSHORT, 1,
/* 01468 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 8,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01476 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 32,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 01534 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 33,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* TELA */
	HB_P_DOSHORT, 5,
/* 01549 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 34,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01570) */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 01577) */
/* 01572 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01577 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 35,	/* DBDELETE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01584 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHSYMNEAR, 36,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01591 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 37,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01598 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01603 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

