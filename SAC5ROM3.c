/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5ROM3.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5ROM3.PRG /q /oC:\hti\SISCOM\SAC5ROM3.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:06 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5ROM3.PRG"

HB_FUNC( SAC5ROM3 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( MENSAGEM1 );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5ROM3 )
{ "SAC5ROM3", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5ROM3 )}, NULL },
{ "M_PEDIDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_NUM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_TEMPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TOTAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_ROMA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MARQ_ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIP_CONS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "CONS_ROMA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5ROM3 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5ROM3
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5ROM3 = hb_vm_SymbolInit_SAC5ROM3;
   #pragma data_seg()
#endif

HB_FUNC( SAC5ROM3 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 21, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_LOCALNEARSETSTR, 3, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'R', 'O', 'M', '3', 0, 
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* P 0*/
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* R 0*/
/* 00027 */ HB_P_LINEOFFSET, 3,	/* 13 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* M_PEDIDO */
	HB_P_PUSHSYMNEAR, 2,	/* M_NUM */
	HB_P_PUSHSYMNEAR, 3,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 4,	/* MTOT_TEMPO */
	HB_P_PUSHSYMNEAR, 5,	/* OP_TOTAL */
	HB_P_PUSHSYMNEAR, 6,	/* MNUM_ROMA */
	HB_P_PUSHSYMNEAR, 7,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 8,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MARQ */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ_ALI */
	HB_P_PUSHSYMNEAR, 12,	/* MTIP_CONS */
	HB_P_PUSHSYMNEAR, 13,	/* MAL */
	HB_P_PUSHSYMNEAR, 14,	/* MNO */
	HB_P_PUSHSYMNEAR, 15,	/* ALI */
	HB_P_DOSHORT, 14,
	HB_P_POPVARIABLE, 9, 0,	/* MARQ */
	HB_P_POPVARIABLE, 8, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 6, 0,	/* MNUM_ROMA */
	HB_P_POPVARIABLE, 2, 0,	/* M_NUM */
	HB_P_POPVARIABLE, 1, 0,	/* M_PEDIDO */
/* 00092 */ HB_P_LINEOFFSET, 5,	/* 15 */
	HB_P_PUSHSYMNEAR, 17,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPRG */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'A', 'N', 'C', 'E', 'L', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', ' ', 'D', 'E', ' ', 'C', 'A', 'R', 'G', 'A', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '2', '3', '4', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00162) */
/* 00157 */ HB_P_LINEOFFSET, 6,	/* 16 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00162 */ HB_P_LINEOFFSET, 8,	/* 18 */
	HB_P_PUSHLOCALNEAR, 1,	/* ML */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 13, 0,	/* MAL */
	HB_P_POPVARIABLE, 15, 0,	/* ALI */
/* 00173 */ HB_P_LINEOFFSET, 9,	/* 19 */
	HB_P_PUSHLOCALNEAR, 2,	/* MN */
	HB_P_POPVARIABLE, 14, 0,	/* MNO */
/* 00180 */ HB_P_LINEOFFSET, 11,	/* 21 */
	HB_P_LOCALNEARSETINT, 5, 10, 0,	/* CCI 10*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00190 */ HB_P_LINEOFFSET, 12,	/* 22 */
	HB_P_LOCALNEARSETINT, 6, 12, 0,	/* LBA 12*/
/* 00196 */ HB_P_LINEOFFSET, 13,	/* 23 */
	HB_P_LOCALNEARSETINT, 7, 42, 0,	/* CBA 42*/
/* 00202 */ HB_P_LINEOFFSET, 15,	/* 25 */
	HB_P_LOCALNEARSETINT, 18, 11, 0,	/* LC 11*/
/* 00208 */ HB_P_LINEOFFSET, 16,	/* 26 */
	HB_P_LOCALNEARSETINT, 19, 10, 0,	/* CC 10*/
/* 00214 */ HB_P_LINEOFFSET, 17,	/* 27 */
	HB_P_LOCALNEARSETINT, 20, 16, 0,	/* LA 16*/
/* 00220 */ HB_P_LINEOFFSET, 18,	/* 28 */
	HB_P_LOCALNEARSETINT, 21, 42, 0,	/* CA 42*/
/* 00226 */ HB_P_LINEOFFSET, 20,	/* 30 */
	HB_P_LOCALNEARSETINT, 8, 4, 0,	/* LI 4*/
/* 00232 */ HB_P_LINEOFFSET, 21,	/* 31 */
	HB_P_LOCALNEARSETINT, 9, 45, 0,	/* CI 45*/
/* 00238 */ HB_P_LINEOFFSET, 22,	/* 32 */
	HB_P_LOCALNEARSETINT, 10, 21, 0,	/* LB 21*/
/* 00244 */ HB_P_LINEOFFSET, 23,	/* 33 */
	HB_P_LOCALNEARSETINT, 11, 75, 0,	/* CB 75*/
/* 00250 */ HB_P_LINEOFFSET, 26,	/* 36 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00277) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00277 */ HB_P_LINEOFFSET, 28,	/* 38 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00308) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00308 */ HB_P_LINEOFFSET, 29,	/* 39 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00339) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00339 */ HB_P_LINEOFFSET, 30,	/* 40 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 't', 'r', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	't', 'r', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00368) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00368 */ HB_P_LINEOFFSET, 31,	/* 41 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'r', 'o', 'd', 'u', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'r', 'o', 'd', 'u', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00399) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00399 */ HB_P_LINEOFFSET, 32,	/* 42 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'r', 'o', 'm', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'o', 'm', 'a', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00428) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00428 */ HB_P_LINEOFFSET, 33,	/* 43 */
	HB_P_PUSHSYMNEAR, 19,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'n', 'o', 'r', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'n', 'o', 'r', 'o', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00459) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00459 */ HB_P_LINEOFFSET, 35,	/* 45 */
	HB_P_PUSHMEMVAR, 20, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 7, 0,	/* MTIPO_IMP */
/* 00472 */ HB_P_LINEOFFSET, 36,	/* 46 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_POPVARIABLE, 12, 0,	/* MTIP_CONS */
/* 00481 */ HB_P_LINEOFFSET, 37,	/* 47 */
	HB_P_PUSHSYMNEAR, 21,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'C', 'A', 'N', 'C', 'E', 'L', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00524 */ HB_P_LINEOFFSET, 38,	/* 48 */
	HB_P_PUSHSYMNEAR, 22,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00560 */ HB_P_LINEOFFSET, 39,	/* 49 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00601 */ HB_P_LINEOFFSET, 40,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00669 */ HB_P_LINEOFFSET, 41,	/* 51 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 00691 */ HB_P_LINEOFFSET, 42,	/* 52 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00715) */
/* 00703 */ HB_P_LINEOFFSET, 43,	/* 53 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00710 */ HB_P_LINEOFFSET, 44,	/* 54 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00715 */ HB_P_LINEOFFSET, 47,	/* 57 */
	HB_P_LOCALNEARSETINT, 17, 2, 0,	/* I 2*/
/* 00721 */ HB_P_LINEOFFSET, 48,	/* 58 */
	HB_P_PUSHSYMNEAR, 22,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'N', 'o', '.', 'd', 'o', ' ', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00756 */ HB_P_LINEOFFSET, 49,	/* 59 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'N', 'o', '.', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00787 */ HB_P_LINEOFFSET, 50,	/* 60 */
	HB_P_PUSHSYMNEAR, 22,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* LI */
	HB_P_PUSHLOCALNEAR, 9,	/* CI */
	HB_P_PUSHLOCALNEAR, 10,	/* LB */
	HB_P_PUSHLOCALNEAR, 11,	/* CB */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'd', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00827 */ HB_P_LINEOFFSET, 51,	/* 61 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'N', 'o', '.', 'P', 'e', 'd', '.', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00874 */ HB_P_LINEOFFSET, 52,	/* 62 */
	HB_P_PUSHSYMNEAR, 22,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_PUSHLOCALNEAR, 20,	/* LA */
	HB_P_PUSHLOCALNEAR, 21,	/* CA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'T', ' ', 'O', ' ', 'T', ' ', 'A', ' ', 'I', ' ', 'S', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 00906 */ HB_P_LINEOFFSET, 53,	/* 63 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'P', 'e', 'd', 'i', 'd', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00943 */ HB_P_LINEOFFSET, 54,	/* 64 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'a', 'l', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00980 */ HB_P_LINEOFFSET, 55,	/* 65 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 's', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01017 */ HB_P_LINEOFFSET, 56,	/* 66 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', 'a', 'l', ' ', 'T', 'e', 'm', 'p', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01054 */ HB_P_LINEOFFSET, 57,	/* 67 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MTOT_QTD 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* MTOT_QTD */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MTOT_TEMPO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_GER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_P */
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PED */
/* 01074 */ HB_P_LINEOFFSET, 58,	/* 68 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_PEDIDO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01085 */ HB_P_LINEOFFSET, 59,	/* 69 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_NUM */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01096 */ HB_P_LINEOFFSET, 60,	/* 70 */
	HB_P_PUSHSYMNEAR, 34,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'd', 'o', ' ', 'N', 'o', '.', 'R', 'o', 'm', 'a', 'n', 'e', 'i', 'o', ' ', 'd', 'e', 's', 'e', 'j', 'a', 'd', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01148 */ HB_P_LINEOFFSET, 61,	/* 71 */
	HB_P_PUSHSYMNEAR, 25,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 28,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 29, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01208 */ HB_P_LINEOFFSET, 62,	/* 72 */
	HB_P_PUSHSYMNEAR, 30,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 27, 0,	/* GETLIST */
/* 01230 */ HB_P_LINEOFFSET, 63,	/* 73 */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01245) */
	HB_P_JUMP, 194, 6,	/* 1730 (abs: 02972) */
/* 01245 */ HB_P_LINEOFFSET, 66,	/* 76 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 35, 0,	/* CONS_ROMA */
/* 01253 */ HB_P_LINEOFFSET, 67,	/* 77 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MAL */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'o', 'm', 'a', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 01414) */
/* 01269 */ HB_P_LINEOFFSET, 68,	/* 78 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'o', 'm', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNUM_ROMA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'A', 'N', 'D', ' ', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 35, 0,	/* CONS_ROMA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMP, 146, 0,	/* 146 (abs: 01557) */
/* 01414 */ HB_P_LINEOFFSET, 70,	/* 80 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'r', 'o', 'd', 'u', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNUM_ROMA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'A', 'N', 'D', ' ', '(', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 'A', 'N', 'D', ' ', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 35, 0,	/* CONS_ROMA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01557 */ HB_P_LINEOFFSET, 72,	/* 82 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01581 */ HB_P_LINEOFFSET, 73,	/* 83 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* CONS_ROMA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 01668) */
/* 01595 */ HB_P_LINEOFFSET, 74,	/* 84 */
	HB_P_PUSHSYMNEAR, 41,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'e', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', 's', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'o', 'u', ' ', 'f', 'o', 'i', ' ', 'C', 'A', 'N', 'C', 'E', 'L', 'A', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 74, 252,	/* -950 (abs: 00715) */
/* 01668 */ HB_P_LINEOFFSET, 100,	/* 110 */
	HB_P_LOCALNEARSETINT, 23, 0, 0,	/* R 0*/
	HB_P_PUSHLOCALNEAR, 23,	/* R */
	HB_P_POPLOCALNEAR, 17,	/* I */
/* 01678 */ HB_P_LINEOFFSET, 101,	/* 111 */
	HB_P_LOCALNEARSETINT, 17, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 35, 0,	/* CONS_ROMA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 80, 3,	/* 848 (abs: 02543) */
/* 01698 */ HB_P_LINEOFFSET, 102,	/* 112 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 42, 0,	/* CONS_PED */
/* 01706 */ HB_P_LINEOFFSET, 103,	/* 113 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 01818) */
/* 01718 */ HB_P_LINEOFFSET, 104,	/* 114 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* CONS_ROMA */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 42, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 01916) */
/* 01818 */ HB_P_LINEOFFSET, 106,	/* 116 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* CONS_ROMA */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 42, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01916 */ HB_P_LINEOFFSET, 108,	/* 118 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01940 */ HB_P_LINEOFFSET, 109,	/* 119 */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01957) */
	HB_P_JUMP, 70, 2,	/* 582 (abs: 02536) */
/* 01957 */ HB_P_LINEOFFSET, 112,	/* 122 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_NUM */
	HB_P_PUSHMEMVAR, 35, 0,	/* CONS_ROMA */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01976 */ HB_P_LINEOFFSET, 113,	/* 123 */
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* P 0*/
/* 01982 */ HB_P_LINEOFFSET, 114,	/* 124 */
	HB_P_LOCALNEARSETINT, 22, 1, 0,	/* P 1*/
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_PUSHSYMNEAR, 40,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 216, 0,	/* 216 (abs: 02215) */
/* 02002 */ HB_P_LINEOFFSET, 116,	/* 126 */
	HB_P_PUSHSYMNEAR, 26,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_PEDIDO */
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 10, 0,	/* 10 */
	HB_P_DOSHORT, 2,
/* 02105 */ HB_P_LINEOFFSET, 117,	/* 127 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PED */
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 13,	/* MTOT_PED */
/* 02131 */ HB_P_LINEOFFSET, 118,	/* 128 */
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_GER */
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* MTOT_GER */
/* 02157 */ HB_P_LINEOFFSET, 119,	/* 129 */
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_P */
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* MTOT_P */
/* 02183 */ HB_P_LINEOFFSET, 120,	/* 130 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MTOT_TEMPO */
	HB_P_PUSHSYMNEAR, 43,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 42, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* P */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 92,	/* 92 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 4, 0,	/* MTOT_TEMPO */
/* 02206 */ HB_P_LINEOFFSET, 121,	/* 131 */
	HB_P_LOCALNEARADDINT, 22, 1, 0,	/* P 1*/
	HB_P_JUMP, 32, 255,	/* -224 (abs: 01988) */
/* 02215 */ HB_P_LINEOFFSET, 122,	/* 132 */
	HB_P_PUSHSYMNEAR, 44,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02224 */ HB_P_LINEOFFSET, 123,	/* 133 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PED */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02270 */ HB_P_LINEOFFSET, 124,	/* 134 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MTOT_GER */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02316 */ HB_P_LINEOFFSET, 125,	/* 135 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MTOT_P */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02364 */ HB_P_LINEOFFSET, 126,	/* 136 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* LC */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 19,	/* CC */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTOT_TEMPO */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02413 */ HB_P_LINEOFFSET, 127,	/* 137 */
	HB_P_PUSHSYMNEAR, 44,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02421 */ HB_P_LINEOFFSET, 128,	/* 138 */
	HB_P_PUSHLOCALNEAR, 23,	/* R */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 02460) */
/* 02430 */ HB_P_LINEOFFSET, 129,	/* 139 */
	HB_P_PUSHSYMNEAR, 46,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* LI */
	HB_P_PUSHLOCALNEAR, 23,	/* R */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* LB */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 11,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 02466) */
/* 02460 */ HB_P_LINEOFFSET, 131,	/* 141 */
	HB_P_LOCALNEARADDINT, 23, 1, 0,	/* R 1*/
/* 02466 */ HB_P_LINEOFFSET, 133,	/* 143 */
	HB_P_PUSHSYMNEAR, 23,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* LI */
	HB_P_PUSHLOCALNEAR, 23,	/* R */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* CONS_ROMA */
	HB_P_PUSHLOCALNEAR, 17,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 45,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTOT_PED */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02528 */ HB_P_LINEOFFSET, 134,	/* 144 */
	HB_P_LOCALNEARSETINT, 13, 0, 0,	/* MTOT_PED 0*/
/* 02534 */ HB_P_LINEOFFSET, 135,	/* 145 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* I 1*/
	HB_P_JUMP, 168, 252,	/* -856 (abs: 01684) */
/* 02543 */ HB_P_LINEOFFSET, 136,	/* 146 */
	HB_P_PUSHSYMNEAR, 47,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'a', 'n', 'c', 'e', 'l', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', ' ', 'R', 'O', 'M', 'A', 'N', 'E', 'I', 'O', ':', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPVARIABLE, 3, 0,	/* OPCAO */
/* 02605 */ HB_P_LINEOFFSET, 137,	/* 147 */
	HB_P_PUSHVARIABLE, 3, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02627) */
	HB_P_PUSHSYMNEAR, 31,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02632) */
	HB_P_JUMP, 134, 248,	/* -1914 (abs: 00715) */
/* 02632 */ HB_P_LINEOFFSET, 140,	/* 150 */
	HB_P_PUSHVARIABLE, 3, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 121, 248,	/* -1927 (abs: 00715) */
/* 02645 */ HB_P_LINEOFFSET, 141,	/* 151 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MAL */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'r', 'o', 'm', 'a', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 02790) */
/* 02661 */ HB_P_LINEOFFSET, 142,	/* 152 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'r', 'o', 'm', 'a', ' ', 'S', 'E', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 'C', 39, ',', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 39, ' ', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNUM_ROMA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 130, 0,	/* 130 (abs: 02917) */
/* 02790 */ HB_P_LINEOFFSET, 144,	/* 154 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'p', 'r', 'o', 'd', 'u', ' ', 'S', 'E', 'T', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', '=', ' ', 39, 'C', 39, ',', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 39, ' ', 39, ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'u', 'm', '_', 'r', 'o', 'm', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MNUM_ROMA */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'e', 'd', '_', 'o', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 38,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIP_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02917 */ HB_P_LINEOFFSET, 146,	/* 156 */
	HB_P_MESSAGE, 36, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 37,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02941 */ HB_P_LINEOFFSET, 162,	/* 172 */
	HB_P_LOCALNEARSETINT, 17, 2, 0,	/* I 2*/
/* 02947 */ HB_P_LINEOFFSET, 163,	/* 173 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* M_PEDIDO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02958 */ HB_P_LINEOFFSET, 164,	/* 174 */
	HB_P_PUSHSYMNEAR, 33,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* M_NUM */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 50, 247,	/* -2254 (abs: 00715) */
/* 02972 */ HB_P_LINEOFFSET, 168,	/* 178 */
	HB_P_PUSHSYMNEAR, 32,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02979 */ HB_P_LINEOFFSET, 169,	/* 179 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02984 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

