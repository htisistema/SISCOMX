/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACREPR2.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HELIO\SIACHB\SACREPR2.PRG /q /oC:\helio\siachb\SACREPR2.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2021.04.05 09:02:51 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACREPR2.PRG"

HB_FUNC( SACREPR2 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( DBDELETE );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( SR_GETCONNECTION );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACREPR2 )
{ "SACREPR2", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACREPR2 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "MTITULO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "REPRO", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_PRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRODUTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "DBDELETE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBDELETE )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACREPR2 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACREPR2
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACREPR2 = hb_vm_SymbolInit_SACREPR2;
   #pragma data_seg()
#endif

HB_FUNC( SACREPR2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', 'R', 'E', 'P', 'R', '2', 0, 
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* LCI 0*/
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_LOCALNEARSETINT, 5, 5, 0,	/* LBA 5*/
	HB_P_LOCALNEARSETINT, 6, 60, 0,	/* CBA 60*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MVALOR 0*/
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MQTD 0*/
/* 00051 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_MERC */
/* 00064 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00093) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00093 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'r', 'e', 'p', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'p', 'r', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00124) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00124 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00151) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00151 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 95,	/* 95 (abs: 00255) */
/* 00162 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* MTITULO */
/* 00212 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '2', '3', '5', 0, 
	HB_P_PUSHVARIABLE, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 99,	/* 99 (abs: 00347) */
/* 00250 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00255 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'P', 'A', 'R', 'A', ' ', 'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'P', 'A', 'R', 'C', 'I', 'A', 'L', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* MTITULO */
/* 00304 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '2', '3', '5', 0, 
	HB_P_PUSHVARIABLE, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00347) */
/* 00342 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00347 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_PUSHLOCALNEAR, 5,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 6,	/* CBA */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTITULO */
	HB_P_DOSHORT, 5,
/* 00368 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'p', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 10,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00389 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 11,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00398 */ HB_P_LINEOFFSET, 29,	/* 37 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MQTD 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MVALOR */
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_MERC */
/* 00412 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00452 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00492 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'P', 'r', 'e', 'c', 'o', ' ', 'V', 'e', 'n', 'd', 'a', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00532 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 13,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'S', 'a', 'l', 'd', 'o', ' ', 'F', 'i', 's', 'i', 'c', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00572 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 18,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_FALSE,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00668 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* GETLIST */
/* 00690 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00714) */
/* 00702 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 22,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00709 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00714 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 9,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'r', 'e', 'p', 'r', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 10,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00735 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 23,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00742 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 25,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 26,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 63,	/* 63 (abs: 00834) */
/* 00773 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 27,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'E', 's', 't', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', 'o', ' ', 's', 'e', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 49, 254,	/* -463 (abs: 00368) */
/* 00834 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTIP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 127, 1,	/* 383 (abs: 01226) */
/* 00846 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* VALOR */
	HB_P_POPLOCALNEAR, 8,	/* MVALOR */
/* 00854 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00899) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00904) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 29,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00947) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00948) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00966 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 14,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 17,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MQTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01011) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01016) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'q', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 19, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 16, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01055 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 20,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* GETLIST */
/* 01077 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01092) */
	HB_P_JUMP, 47, 253,	/* -721 (abs: 00368) */
/* 01092 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 30,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01135 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01156) */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01161) */
	HB_P_JUMP, 234, 252,	/* -790 (abs: 00368) */
/* 01161 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01168 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 32,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 33,	/* DATA */
/* 01179 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHVARIABLE, 34, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 35,	/* OPE */
/* 01188 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 36,	/* COD_PRO */
/* 01197 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 37,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 37,	/* MERC */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 38,	/* PRODUTO */
/* 01207 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHLOCALNEAR, 8,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 28,	/* VALOR */
/* 01215 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD */
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_POPALIASEDFIELDNEAR, 39,	/* QTD */
	HB_P_JUMP, 140, 0,	/* 140 (abs: 01363) */
/* 01226 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 40,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01235 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 12,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 17, 0,	/* 17*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* REPRO */
	HB_P_PUSHALIASEDFIELDNEAR, 28,	/* VALOR */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01273 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 40,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01281 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 30,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'E', 'x', 'c', 'l', 'u', 's', 'a', 'o', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01323 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01344) */
	HB_P_PUSHSYMNEAR, 21,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01349) */
	HB_P_JUMP, 46, 252,	/* -978 (abs: 00368) */
/* 01349 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 31,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01356 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 42,	/* DBDELETE */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01363 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 43,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01370 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 44,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01377 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'e', 'p', 'r', 'o', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01438 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_MESSAGE, 45, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 46,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 186, 251,	/* -1094 (abs: 00368) */
	HB_P_ENDPROC
/* 01466 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

