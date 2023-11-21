/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON243.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON243.PRG /q /oC:\hti\SISCOM\CON243.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:05 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON243.PRG"

HB_FUNC( CON243 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( MCLI );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( SR_GETCONNECTION );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON243 )
{ "CON243", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON243 )}, NULL },
{ "MFORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LBA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CBA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( MCLI )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON243 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON243
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON243 = hb_vm_SymbolInit_CON243;
   #pragma data_seg()
#endif

HB_FUNC( CON243 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '2', '4', '3', 0, 
/* 00017 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 7,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MFORNEC */
	HB_P_PUSHSYMNEAR, 2,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 3,	/* LCI */
	HB_P_PUSHSYMNEAR, 4,	/* CCI */
	HB_P_PUSHSYMNEAR, 5,	/* LBA */
	HB_P_PUSHSYMNEAR, 6,	/* CBA */
	HB_P_DOSHORT, 6,
	HB_P_POPMEMVAR, 6, 0,	/* CBA */
	HB_P_POPMEMVAR, 5, 0,	/* LBA */
	HB_P_POPMEMVAR, 4, 0,	/* CCI */
	HB_P_POPMEMVAR, 3, 0,	/* LCI */
/* 00054 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00081) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00081 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00111) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00111 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00140) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00140 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00169) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00169 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'h', 'e', 'q', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'h', 'e', 'q', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00198) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00198 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00227) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'c', 'r', 'e', 'd', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00256) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00256 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00287) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00287 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00316) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00316 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'i', 'p', 'd', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'i', 'p', 'd', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00347) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00347 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 8,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00374) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00374 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 00524) */
/* 00383 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00458) */
/* 00453 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00458 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 6,
/* 00509 */ HB_P_LINEOFFSET, 24,	/* 32 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MALIAS */
	HB_P_JUMP, 143, 0,	/* 143 (abs: 00664) */
/* 00524 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 9,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 10, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00602) */
/* 00597 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00602 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MALIAS */
/* 00614 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 11,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'D', 'E', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 6,
/* 00664 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00680 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 14,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00689 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', '.', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00740 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00791 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', '.', 'B', 'a', 'n', 'c', 'o', '/', 'C', 'o', 'd', '.', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00842 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00877 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 51, 0,	/* 51*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', '/', 'C', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00908 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00959 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01010 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01061 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01112 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01163 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'P', 'a', 'g', '.', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'r', 'i', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01214 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01265 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', '/', 'N', 'F', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01316 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 12, 0,	/* 12*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'%', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01367 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'r', 'r', 'e', 'n', 't', 'i', 's', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01418 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01450 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MTIPO */
/* 01461 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MDUPLICATA */
/* 01472 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MFORNEC */
/* 01484 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MNUM_BANCO 0*/
/* 01490 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 18,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01545 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01592) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01597) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 23,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01649 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01696) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01701) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 63, 0,	/* 63 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MTIPO */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01791) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'N', 'o', '.', 'd', 'o', ' ', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01808 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MDUPLICATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01855) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01860) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01897 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 01919 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01943) */
	HB_P_PUSHLOCALNEAR, 4,	/* MDUPLICATA */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01954) */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01968) */
/* 01956 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 30,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01963 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01968 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_BANCO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 01999) */
/* 01976 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 31,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 02022) */
/* 01999 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 31,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02022 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 33,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 02070) */
/* 02031 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 's', 't', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 149, 250,	/* -1387 (abs: 00680) */
/* 02070 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 35, 0,	/* PAGO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 02127) */
/* 02085 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'E', 's', 't', 'a', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'f', 'o', 'i', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'a', 'd', 'a', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 92, 250,	/* -1444 (abs: 00680) */
/* 02127 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 36,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02135 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 37, 0,	/* FORNEC */
	HB_P_POPVARIABLE, 1, 0,	/* MFORNEC */
/* 02146 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 19,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 20,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 22,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 32,	/* 32 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 38,	/* MCLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MFORNEC */
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02224) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 25,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 79,	/* 79 */
	HB_P_PUSHSYMNEAR, 26,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'o', 'u', ' ', '<', 'F', '7', '>', 'p', '/', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 's', ' ', 'd', 'e', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 24, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02320 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 21, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 21, 0,	/* GETLIST */
/* 02342 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_BANCO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02389) */
/* 02350 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHSYMNEAR, 31,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 17,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MFORNEC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 41,	/* 41 (abs: 02428) */
/* 02389 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 31,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 32,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MFORNEC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02428 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 33,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 60,	/* 60 (abs: 02495) */
/* 02437 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'E', 's', 't', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', 's', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 236, 248,	/* -1812 (abs: 00680) */
/* 02495 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 39,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 02555) */
/* 02504 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 176, 248,	/* -1872 (abs: 00680) */
/* 02555 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSYMNEAR, 40,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 8,	/* MPOINT */
/* 02564 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 42, 0,	/* EMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02600 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 41,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 43, 0,	/* VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02636 */ HB_P_LINEOFFSET, 103,	/* 111 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 44,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 45, 0,	/* VALOR */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02695 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 46, 0,	/* BANCO */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02728 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 47, 0,	/* VENDEDOR */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02759 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHSYMNEAR, 48,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 49,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 47, 0,	/* VENDEDOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 3,
/* 02789 */ HB_P_LINEOFFSET, 107,	/* 115 */
	HB_P_PUSHSYMNEAR, 15,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* LCI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHMEMVAR, 4, 0,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 16,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 50, 0,	/* NUM_PED */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02820 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02836 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 51,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MPOINT */
	HB_P_DOSHORT, 1,
/* 02845 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 37, 0,	/* FORNEC */
	HB_P_POPLOCALNEAR, 5,	/* LCOD */
/* 02855 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHALIASEDVAR, 45, 0,	/* VALOR */
	HB_P_POPLOCALNEAR, 6,	/* LAST */
/* 02865 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 52,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ' ', '?', ' ', '[', 's', '/', 'N', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 53, 0,	/* OPCAO */
/* 02908 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHVARIABLE, 53, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 222, 0,	/* 222 (abs: 03140) */
/* 02921 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_PUSHMEMVAR, 54, 0,	/* COD_OPERADO */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 55, 0,	/* OPERADOR */
/* 02932 */ HB_P_LINEOFFSET, 117,	/* 125 */
	HB_P_PUSHSYMNEAR, 56,	/* DBDELETE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02939 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHSYMNEAR, 57,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02946 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHSYMNEAR, 58,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02953 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 03030) */
/* 02968 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_MESSAGE, 59, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 60,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMPNEAR, 62,	/* 62 (abs: 03090) */
/* 03030 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_MESSAGE, 59, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 60,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03090 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_MESSAGE, 59, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 60,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03114 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSYMNEAR, 12,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MALIAS */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03130 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_PUSHSYMNEAR, 58,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 103, 246,	/* -2457 (abs: 00680) */
/* 03140 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_PUSHSYMNEAR, 57,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03147 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 58,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 86, 246,	/* -2474 (abs: 00680) */
	HB_P_ENDPROC
/* 03158 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

