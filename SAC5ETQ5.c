/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ETQ5.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ETQ5.PRG /q /oC:\hti\SISCOM\SAC5ETQ5.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:02 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ETQ5.PRG"

HB_FUNC( SAC5ETQ5 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ETQ5 )
{ "SAC5ETQ5", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ETQ5 )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "ENDERECO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "COMPLEMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BAIRRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEND_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCID_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFONE_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ETQ5 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ETQ5
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ETQ5 = hb_vm_SymbolInit_SAC5ETQ5;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ETQ5 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 21, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'E', 'T', 'Q', '5', 0, 
/* 00019 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 6,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 2,	/* MCPF */
	HB_P_PUSHSYMNEAR, 3,	/* MCGC */
	HB_P_PUSHSYMNEAR, 4,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 5,	/* CONS_CLI */
	HB_P_DOSHORT, 5,
	HB_P_POPVARIABLE, 5, 0,	/* CONS_CLI */
/* 00042 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_POPLOCALNEAR, 2,	/* LCI */
/* 00052 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_LOCALNEARSETINT, 4, 7, 0,	/* LBA 7*/
/* 00058 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_LOCALNEARSETINT, 5, 78, 0,	/* CBA 78*/
/* 00064 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 9,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00086 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00115) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00115 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 10,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00142) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00142 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 11,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00159 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 12,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00179 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 13,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00186 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHMEMVAR, 14, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 4, 0,	/* MTIPO_IMP */
/* 00199 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 15,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ' ', 'p', '/', ' ', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00249 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MCOD_CLI 0*/
/* 00255 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MEND */
/* 00266 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCIDADE */
	HB_P_POPLOCALNEAR, 10,	/* MBAIRRO */
/* 00280 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 12,	/* MUF */
/* 00291 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MCEP */
/* 00302 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MNF */
/* 00313 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MQUANTD 1*/
/* 00319 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 16,	/* MDATA */
/* 00326 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 16,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 20,	/* MTRANSP */
/* 00337 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MCONT 0*/
/* 00343 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00383 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 't', 'i', 'n', 'o', ':', ' ', ' ', 'E', 'n', 'd', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00423 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'a', 'i', 'r', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00455 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00487 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 61, 0,	/* 61*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 's', 't', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00519 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 't', 'a', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00559 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 30, 0,	/* 30*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'D', 'a', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00589 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00629 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'E', 't', 'i', 'q', 'u', 'e', 't', 'a', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00675 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00720) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00725) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 31, 0,	/* 31 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	8, 0,	/* MCOD_CLI */
	2, 0,	/* LCI */
	3, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 24,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00793 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 00815 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00830) */
	HB_P_JUMP, 162, 6,	/* 1698 (abs: 02525) */
/* 00830 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 29,	/* ENDERECO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 31,	/* NUMERO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 00893) */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'C', 'o', 'm', 'p', 'l', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 33,	/* COMPLEMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00896) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MEND */
/* 00899 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 34,	/* BAIRRO */
	HB_P_POPLOCALNEAR, 10,	/* MBAIRRO */
/* 00907 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* CIDADE */
	HB_P_POPLOCALNEAR, 11,	/* MCIDADE */
/* 00915 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 36,	/* UF */
	HB_P_POPLOCALNEAR, 12,	/* MUF */
/* 00923 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* CEP */
	HB_P_POPLOCALNEAR, 13,	/* MCEP */
/* 00931 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00976) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00981) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01012 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MBAIRRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01057) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01062) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01096 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01141) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01146) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01180 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 69, 0,	/* 69*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01225) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01230) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01260 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MNF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01305) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01310) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'n', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01340 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 36, 0,	/* 36*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01385) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01390) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01418 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MTRANSP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01463) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01468) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'r', 'a', 'n', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01502 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 20,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 3,	/* CCI */
	HB_P_ADDINT, 24, 0,	/* 24*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 23,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01547) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01552) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 25, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01587 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 22, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 22, 0,	/* GETLIST */
/* 01609 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01624) */
	HB_P_JUMP, 164, 250,	/* -1372 (abs: 00249) */
/* 01624 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 38,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'T', 'Q', '_', 'C', 'L', 'I', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 01654) */
	HB_P_JUMP, 134, 250,	/* -1402 (abs: 00249) */
/* 01654 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* I 0*/
/* 01660 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_LOCALNEARSETINT, 18, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHLOCALNEAR, 15,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 35, 3,	/* 803 (abs: 02474) */
/* 01674 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 39,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 01688 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 39,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 01702 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 41, 0,	/* MEMP_RESA */
	HB_P_DOSHORT, 1,
/* 01723 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 39,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 01738 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 42, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 43, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 44, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01782 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 39,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_ONE,
	HB_P_DOSHORT, 3,
/* 01797 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01817 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCLIENTE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01862 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 8,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCLIENTE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01904 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 't', 'i', 'n', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01940 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 9,	/* MEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01973 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'B', 'a', 'i', 'r', 'r', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 10,	/* MBAIRRO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'E', 's', 't', 'a', 'd', 'o', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MUF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02042 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 10,	/* MBAIRRO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MUF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02108 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'N', 'o', 't', 'a', ' ', 'F', 'i', 's', 'c', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* MNF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'V', 'o', 'l', 'u', 'm', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MQUANTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'D', 'a', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02207 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 14,	/* MNF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* I */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MQUANTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 46,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02303 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'd', 'o', 'r', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* MTRANSP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02346 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* MTRANSP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02386 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02418 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 40,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 02443 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* MCONT 1*/
/* 02449 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHLOCALNEAR, 19,	/* MCONT */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02465) */
/* 02458 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02465 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_LOCALNEARADDINT, 18, 1, 0,	/* I 1*/
	HB_P_JUMP, 219, 252,	/* -805 (abs: 01666) */
/* 02474 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 48,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02481 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 49,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 31, 247,	/* -2273 (abs: 00249) */
/* 02525 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 50,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02532 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02537 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

