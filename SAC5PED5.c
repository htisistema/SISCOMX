/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC5PED5.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC5PED5.PRG /q /oC:\hti\SISCOM\SAC5PED5.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:43 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC5PED5.PRG"

HB_FUNC( SAC5PED5 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( BOTAO1 );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( SAC5PED1 );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC5PED5 )
{ "SAC5PED5", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC5PED5 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_PROM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "BOTAO1", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO1 )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "SAC5PED1", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED1 )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "Y", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "H", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC5PED5 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC5PED5
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC5PED5 = hb_vm_SymbolInit_SAC5PED5;
   #pragma data_seg()
#endif

HB_FUNC( SAC5PED5 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 37, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 2, 9, 0,	/* MPRG 9*/
	'S', 'A', 'C', '5', 'P', 'E', 'D', '5', 0, 
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MQTD_PED 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 20,	/* M_PED */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 21,	/* M_POS */
	HB_P_LOCALNEARSETSTR, 23, 2, 0,	/* MTIPO_CONS 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* MCOD_VEND 0*/
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MCONT_CLI 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 35,	/* M_MES */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 36,	/* M_MES1 */
/* 00057 */ HB_P_LINEOFFSET, 3,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 12,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 14,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 2,	/* MTIT */
	HB_P_PUSHSYMNEAR, 3,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 4,	/* MPAG */
	HB_P_PUSHSYMNEAR, 5,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 6,	/* MCGC */
	HB_P_PUSHSYMNEAR, 7,	/* MCPF */
	HB_P_PUSHSYMNEAR, 8,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 9,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 10,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 11,	/* MARQ */
	HB_P_PUSHSYMNEAR, 13,	/* CONS_CLI */
	HB_P_DOSHORT, 12,
	HB_P_POPVARIABLE, 13, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 11, 0,	/* MARQ */
	HB_P_POPVARIABLE, 10, 0,	/* MIMP_TIPO */
/* 00108 */ HB_P_LINEOFFSET, 5,	/* 18 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', ' ', 'P', '/', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00173) */
/* 00168 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00173 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 1, 0,	/* MTRACO */
/* 00190 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_LOCALNEARSETINT, 4, 20, 0,	/* LBA 20*/
/* 00196 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_LOCALNEARSETINT, 5, 79, 0,	/* CBA 79*/
/* 00202 */ HB_P_LINEOFFSET, 14,	/* 27 */
	HB_P_LOCALNEARSETINT, 30, 10, 0,	/* LA 10*/
/* 00208 */ HB_P_LINEOFFSET, 15,	/* 28 */
	HB_P_LOCALNEARSETINT, 31, 75, 0,	/* CA 75*/
/* 00214 */ HB_P_LINEOFFSET, 17,	/* 30 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00243) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00243 */ HB_P_LINEOFFSET, 18,	/* 31 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00274) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00274 */ HB_P_LINEOFFSET, 19,	/* 32 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00305) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00305 */ HB_P_LINEOFFSET, 20,	/* 33 */
	HB_P_PUSHSYMNEAR, 18,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00332) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00332 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_LOCALNEARSETSTR, 23, 2, 0,	/* MTIPO_CONS 2*/
	'P', 0, 
/* 00340 */ HB_P_LINEOFFSET, 23,	/* 36 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 30,	/* LA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 31,	/* CA */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00385 */ HB_P_LINEOFFSET, 25,	/* 38 */
	HB_P_PUSHSYMNEAR, 20,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00394 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 00407 */ HB_P_LINEOFFSET, 29,	/* 42 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 28,	/* MCOD_VEND */
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00423 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00438) */
/* 00431 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCOD */
	HB_P_POPVARIABLE, 8, 0,	/* MCOD_CLI */
/* 00438 */ HB_P_LINEOFFSET, 33,	/* 46 */
	HB_P_PUSHMEMVAR, 21, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 9, 0,	/* MTIPO_IMP */
/* 00451 */ HB_P_LINEOFFSET, 34,	/* 47 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_POPLOCALNEAR, 7,	/* MDATA1 */
/* 00461 */ HB_P_LINEOFFSET, 35,	/* 48 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 8,	/* MDATA2 */
/* 00468 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 12,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCLIENTE */
/* 00480 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00490 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_LOCALNEARSETSTR, 38, 2, 0,	/* MSO_RESUMO 2*/
	'N', 0, 
/* 00498 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00540 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'T', 'i', 'p', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'P', ']', 'e', 'd', 'i', 'd', 'o', ' ', 'o', 'u', ' ', '[', 'O', ']', 'r', 'c', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00596 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00631 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00666 */ HB_P_LINEOFFSET, 43,	/* 56 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00701 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'R', 'e', 's', 'p', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00736 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'm', 'o', 't', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00771 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', '[', 'S', '/', 'N', ']', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00806 */ HB_P_LINEOFFSET, 47,	/* 60 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00844) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00849) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'P', ',', 'O', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00904 */ HB_P_LINEOFFSET, 48,	/* 61 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00943) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00948) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00990) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00991) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01009 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01048) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01053) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '/', '9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	8, 0,	/* MDATA2 */
	7, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01095) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01096) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01114 */ HB_P_LINEOFFSET, 50,	/* 63 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01199 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 35,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 01221 */ HB_P_LINEOFFSET, 52,	/* 65 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01236) */
	HB_P_JUMP, 82, 23,	/* 5970 (abs: 07203) */
/* 01236 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01275) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01280) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	28, 0,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 37,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01350 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'm', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 37,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MCOD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01434 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 31,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MSO_RESUMO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01473) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01478) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'o', '_', 'r', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* MSO_RESUMO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 32, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01543 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 35,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 30, 0,	/* GETLIST */
/* 01565 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01580) */
	HB_P_JUMP, 250, 21,	/* 5626 (abs: 07203) */
/* 01580 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 3,
/* 01594 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_PUSHSYMNEAR, 38,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 4,
/* 01609 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 38,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_DOSHORT, 4,
/* 01624 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 38,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 4,
/* 01639 */ HB_P_LINEOFFSET, 67,	/* 80 */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 01648 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'A', 'b', 'e', 'r', 't', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'e', 'm', ' ', 'A', 'b', 'e', 'r', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01726 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'P', 'a', 'g', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01799 */ HB_P_LINEOFFSET, 70,	/* 83 */
	HB_P_PUSHSYMNEAR, 40,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'G', 'e', 'r', 'a', 'l', ' ', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'*', '*', ' ', 'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'e', 'm', ' ', 'G', 'e', 'r', 'a', 'l', ' ', '(', 'A', 'b', 'e', 'r', 't', 'o', ' ', 'e', ' ', 'P', 'a', 'g', 'o', 's', ')', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', '*', '*', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01892 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01906 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHSYMNEAR, 42,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 43,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01933) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01938) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 01951 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01959 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01974) */
	HB_P_JUMP, 206, 249,	/* -1586 (abs: 00385) */
/* 01974 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_POPLOCALNEAR, 16,	/* MCOD_AUX */
/* 01981 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSTRSHORT, 77,	/* 77 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'p', 'a', 'g', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 02084) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 02095) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02174 */ HB_P_LINEOFFSET, 80,	/* 93 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 02223) */
/* 02186 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02223 */ HB_P_LINEOFFSET, 83,	/* 96 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02278) */
/* 02231 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 02314) */
/* 02278 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 02314) */
/* 02287 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02314 */ HB_P_LINEOFFSET, 91,	/* 104 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 79,	/* 79 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'p', 'a', 'g', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 02404 */ HB_P_LINEOFFSET, 92,	/* 105 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 46, 0,	/* CONS_PED */
/* 02412 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 46, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02433 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02457 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 02518) */
/* 02471 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSYMNEAR, 50,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', 's', 't', 'e', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 174, 247,	/* -2130 (abs: 00385) */
/* 02518 */ HB_P_LINEOFFSET, 99,	/* 112 */
	HB_P_LOCALNEARSETSTR, 15, 2, 0,	/* MOPCAO 2*/
	'S', 0, 
/* 02526 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 02584) */
/* 02538 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 51,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '/', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 15,	/* MOPCAO */
/* 02584 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_PUSHLOCALNEAR, 15,	/* MOPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02598) */
	HB_P_JUMP, 94, 247,	/* -2210 (abs: 00385) */
/* 02598 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02608 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02618 */ HB_P_LINEOFFSET, 108,	/* 121 */
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_POPLOCALNEAR, 37,	/* MDATA_AUX */
/* 02624 */ HB_P_LINEOFFSET, 109,	/* 122 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 2,
/* 02649 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 02664 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHLOCALNEAR, 37,	/* MDATA_AUX */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 02750) */
/* 02673 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_LOCALNEARADDINT, 37, 1, 0,	/* MDATA_AUX 1*/
/* 02679 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHSYMNEAR, 54,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MDATA_AUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 214,	/* -42 (abs: 02664) */
/* 02708 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MDATA_AUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 2,
/* 02733 */ HB_P_LINEOFFSET, 115,	/* 128 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 172,	/* -84 (abs: 02664) */
/* 02750 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 134, 3,	/* 902 (abs: 03662) */
/* 02763 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_LOCALNEARSETINT, 11, 0, 0,	/* MTOT_GERAL 0*/
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIA */
	HB_P_POPLOCALNEAR, 17,	/* MTOT_VOL */
/* 02779 */ HB_P_LINEOFFSET, 120,	/* 133 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MDATA_DIA */
/* 02791 */ HB_P_LINEOFFSET, 121,	/* 134 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'O', 'K', '.', '.', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02856 */ HB_P_LINEOFFSET, 122,	/* 135 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 02862 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 39, 1,	/* 295 (abs: 03174) */
/* 02882 */ HB_P_LINEOFFSET, 124,	/* 137 */
	HB_P_PUSHSYMNEAR, 55,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02902 */ HB_P_LINEOFFSET, 125,	/* 138 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 02940) */
/* 02920 */ HB_P_LINEOFFSET, 126,	/* 139 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
	HB_P_JUMPNEAR, 52,	/* 52 (abs: 02990) */
/* 02940 */ HB_P_LINEOFFSET, 127,	/* 140 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 02975) */
/* 02958 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_LOCALNEARSETSTR, 14, 9, 0,	/* MSIT 9*/
	'c', 'a', 'n', 'c', 'e', 'l', '.', ' ', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 02990) */
/* 02975 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_LOCALNEARSETSTR, 14, 9, 0,	/* MSIT 9*/
	'a', 'b', 'e', 'r', 't', 'o', ' ', ' ', 0, 
/* 02990 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* M_POS */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 03007 */ HB_P_LINEOFFSET, 136,	/* 149 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03032) */
/* 03024 */ HB_P_LINEOFFSET, 137,	/* 150 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_PED 0*/
	HB_P_JUMPNEAR, 34,	/* 34 (abs: 03064) */
/* 03032 */ HB_P_LINEOFFSET, 139,	/* 152 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIA */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIA */
/* 03048 */ HB_P_LINEOFFSET, 140,	/* 153 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_GERAL */
/* 03064 */ HB_P_LINEOFFSET, 143,	/* 156 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03165 */ HB_P_LINEOFFSET, 144,	/* 157 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMP, 209, 254,	/* -303 (abs: 02868) */
/* 03174 */ HB_P_LINEOFFSET, 145,	/* 158 */
	HB_P_PUSHSYMNEAR, 19,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 34, 'P', 'e', 'd', 'i', 'd', 'o', 's', 34, ' ', 0, 
	HB_P_DOSHORT, 5,
/* 03213 */ HB_P_LINEOFFSET, 147,	/* 160 */
	HB_P_PUSHSYMNEAR, 58,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 03228 */ HB_P_LINEOFFSET, 148,	/* 161 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03254 */ HB_P_LINEOFFSET, 149,	/* 162 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03281 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03309 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'e', 'n', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03332 */ HB_P_LINEOFFSET, 152,	/* 165 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03358 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHSYMNEAR, 58,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 03379 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03407 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03416 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03458 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03466 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 59,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03473 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSYMNEAR, 25,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03517 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 22,	/* POINT */
	HB_P_PUSHSYMNEAR, 39,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03558 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 03572) */
	HB_P_JUMPNEAR, 82,	/* 82 (abs: 03652) */
/* 03572 */ HB_P_LINEOFFSET, 167,	/* 180 */
	HB_P_PUSHSYMNEAR, 36,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 143, 254,	/* -369 (abs: 03213) */
/* 03585 */ HB_P_LINEOFFSET, 169,	/* 182 */
	HB_P_PUSHLOCALNEAR, 24,	/* ALI */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 03623) */
/* 03600 */ HB_P_LINEOFFSET, 171,	/* 184 */
	HB_P_PUSHSYMNEAR, 61,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 03649) */
/* 03623 */ HB_P_LINEOFFSET, 174,	/* 187 */
	HB_P_PUSHSYMNEAR, 61,	/* SAC5PED1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHLOCALNEAR, 22,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHLOCALNEAR, 24,	/* ALI */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 79, 254,	/* -433 (abs: 03213) */
	HB_P_JUMP, 76, 254,	/* -436 (abs: 03213) */
/* 03652 */ HB_P_LINEOFFSET, 178,	/* 191 */
	HB_P_PUSHSYMNEAR, 62,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 54, 243,	/* -3274 (abs: 00385) */
/* 03662 */ HB_P_LINEOFFSET, 180,	/* 193 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03716 */ HB_P_LINEOFFSET, 181,	/* 194 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 03772) */
/* 03728 */ HB_P_LINEOFFSET, 182,	/* 195 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'r', 'o', 'm', 'o', 't', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03772 */ HB_P_LINEOFFSET, 184,	/* 197 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 03828) */
/* 03784 */ HB_P_LINEOFFSET, 185,	/* 198 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'r', 'o', 'm', 'o', 't', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* MCOD_PROM */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03828 */ HB_P_LINEOFFSET, 187,	/* 200 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'o', 'm', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 03854 */ HB_P_LINEOFFSET, 188,	/* 201 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 13, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03875 */ HB_P_LINEOFFSET, 189,	/* 202 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03899 */ HB_P_LINEOFFSET, 190,	/* 203 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 03967) */
/* 03913 */ HB_P_LINEOFFSET, 191,	/* 204 */
	HB_P_PUSHSYMNEAR, 50,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', '.', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 5, 242,	/* -3579 (abs: 00385) */
/* 03967 */ HB_P_LINEOFFSET, 194,	/* 207 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '(', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ')', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MTIT */
/* 04017 */ HB_P_LINEOFFSET, 195,	/* 208 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'p', '/', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* MTIPO */
/* 04082 */ HB_P_LINEOFFSET, 196,	/* 209 */
	HB_P_PUSHSYMNEAR, 64,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'L', 'I', '_', 'P', 'E', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04112) */
	HB_P_JUMP, 116, 241,	/* -3724 (abs: 00385) */
/* 04112 */ HB_P_LINEOFFSET, 199,	/* 212 */
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MCONT_CLI 0*/
	HB_P_PUSHLOCALNEAR, 29,	/* MCONT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MQTD_TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 04129 */ HB_P_LINEOFFSET, 200,	/* 213 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 04135 */ HB_P_LINEOFFSET, 201,	/* 214 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 13, 7,	/* 1805 (abs: 05957) */
/* 04155 */ HB_P_LINEOFFSET, 202,	/* 215 */
	HB_P_PUSHSYMNEAR, 28,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 65,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04204 */ HB_P_LINEOFFSET, 203,	/* 216 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 46, 0,	/* CONS_PED */
/* 04212 */ HB_P_LINEOFFSET, 204,	/* 217 */
	HB_P_PUSHSTRSHORT, 92,	/* 92 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'd', 'a', 't', 'a', 'p', 'a', 'g', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ')', ',', 's', 'u', 'm', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ' ', '*', ' ', 'p', 'v', 'l', 'r', '_', 'f', 'a', 't', ')', ',', 'p', 'p', 'a', 'g', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 04330) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 04341) */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'o', 'r', 'c', 'a', 'm', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 04399 */ HB_P_LINEOFFSET, 205,	/* 218 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 04442 */ HB_P_LINEOFFSET, 206,	/* 219 */
	HB_P_PUSHSYMNEAR, 33,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 46,	/* 46 (abs: 04497) */
/* 04453 */ HB_P_LINEOFFSET, 207,	/* 220 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 44,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 63,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 04497 */ HB_P_LINEOFFSET, 209,	/* 222 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 04552) */
/* 04505 */ HB_P_LINEOFFSET, 210,	/* 223 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 04588) */
/* 04552 */ HB_P_LINEOFFSET, 211,	/* 224 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 04588) */
/* 04561 */ HB_P_LINEOFFSET, 212,	/* 225 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, '*', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 04588 */ HB_P_LINEOFFSET, 214,	/* 227 */
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'p', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ',', 'p', 'p', 'a', 'g', ',', 'p', 'd', 'a', 't', 'a', 'p', 'a', 'g', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 45, 0,	/* CCOMM */
/* 04651 */ HB_P_LINEOFFSET, 215,	/* 228 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 45, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 46, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04672 */ HB_P_LINEOFFSET, 216,	/* 229 */
	HB_P_MESSAGE, 47, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 48,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04696 */ HB_P_LINEOFFSET, 217,	/* 230 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04713) */
	HB_P_JUMP, 216, 4,	/* 1240 (abs: 05950) */
/* 04713 */ HB_P_LINEOFFSET, 220,	/* 233 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_PED 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MQTD_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIA */
	HB_P_POPLOCALNEAR, 17,	/* MTOT_VOL */
/* 04729 */ HB_P_LINEOFFSET, 221,	/* 234 */
	HB_P_PUSHSYMNEAR, 24,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04739 */ HB_P_LINEOFFSET, 222,	/* 235 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 67, 0,	/* Y */
/* 04745 */ HB_P_LINEOFFSET, 223,	/* 236 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 67, 0,	/* Y */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 46, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 241, 1,	/* 497 (abs: 05260) */
/* 04766 */ HB_P_LINEOFFSET, 224,	/* 237 */
	HB_P_PUSHSYMNEAR, 55,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 56,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04793 */ HB_P_LINEOFFSET, 225,	/* 238 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MTOT_PED 0*/
/* 04799 */ HB_P_LINEOFFSET, 226,	/* 239 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 04839) */
/* 04818 */ HB_P_LINEOFFSET, 227,	/* 240 */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 14,	/* MSIT */
	HB_P_JUMPNEAR, 53,	/* 53 (abs: 04890) */
/* 04839 */ HB_P_LINEOFFSET, 228,	/* 241 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 04875) */
/* 04858 */ HB_P_LINEOFFSET, 229,	/* 242 */
	HB_P_LOCALNEARSETSTR, 14, 9, 0,	/* MSIT 9*/
	'c', 'a', 'n', 'c', 'e', 'l', '.', ' ', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 04890) */
/* 04875 */ HB_P_LINEOFFSET, 231,	/* 244 */
	HB_P_LOCALNEARSETSTR, 14, 9, 0,	/* MSIT 9*/
	'a', 'b', 'e', 'r', 't', 'o', ' ', ' ', 0, 
/* 04890 */ HB_P_LINEOFFSET, 233,	/* 246 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 9,	/* MTOT_PED */
/* 04904 */ HB_P_LINEOFFSET, 234,	/* 247 */
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_VOL */
/* 04918 */ HB_P_LINEOFFSET, 235,	/* 248 */
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'a', 'n', 'c', 'e', 'l', '.', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 04948) */
/* 04935 */ HB_P_LINEOFFSET, 236,	/* 249 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MTOT_VOL 0*/
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_VOL */
	HB_P_POPLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_JUMP, 189, 0,	/* 189 (abs: 05134) */
/* 04948 */ HB_P_LINEOFFSET, 238,	/* 251 */
	HB_P_LOCALNEARADDINT, 34, 1, 0,	/* MQTD_TOT 1*/
/* 04954 */ HB_P_LINEOFFSET, 239,	/* 252 */
	HB_P_LOCALNEARADDINT, 19, 1, 0,	/* MQTD_PED 1*/
/* 04960 */ HB_P_LINEOFFSET, 240,	/* 253 */
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIA */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIA */
/* 04969 */ HB_P_LINEOFFSET, 241,	/* 254 */
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MTOT_GERAL */
/* 04978 */ HB_P_LINEOFFSET, 242,	/* 255 */
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHSYMNEAR, 54,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHSYMNEAR, 54,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPOP,
/* 05055 */ HB_P_LINEOFFSET, 243,	/* 256 */
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHSYMNEAR, 54,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHSYMNEAR, 54,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHSYMNEAR, 52,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 05134 */ HB_P_LINEOFFSET, 246,	/* 259 */
	HB_P_PUSHSYMNEAR, 29,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHSYMNEAR, 53,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MTOT_PED */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 46, 0,	/* CONS_PED */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 14,	/* MSIT */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 148, 0,	/* 148 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05248 */ HB_P_LINEOFFSET, 247,	/* 260 */
	HB_P_PUSHVARIABLE, 67, 0,	/* Y */
	HB_P_INC,
	HB_P_POPVARIABLE, 67, 0,	/* Y */
	HB_P_JUMP, 6, 254,	/* -506 (abs: 04751) */
/* 05260 */ HB_P_LINEOFFSET, 248,	/* 261 */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 164, 2,	/* 676 (abs: 05947) */
/* 05274 */ HB_P_LINEOFFSET, 249,	/* 262 */
	HB_P_LOCALNEARADDINT, 29, 1, 0,	/* MCONT_CLI 1*/
/* 05280 */ HB_P_LINEOFFSET, 251,	/* 264 */
	HB_P_PUSHLOCALNEAR, 38,	/* MSO_RESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 135, 2,	/* 647 (abs: 05936) */
/* 05292 */ HB_P_LINEOFFSET, 252,	/* 265 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 68, 0,	/* H */
/* 05298 */ HB_P_LINEOFFSET, 253,	/* 266 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 68, 0,	/* H */
	HB_P_PUSHVARIABLE, 68, 0,	/* H */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 190, 1,	/* 446 (abs: 05761) */
/* 05318 */ HB_P_LINEOFFSET, 254,	/* 267 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05337) */
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 68, 1,	/* 324 (abs: 05661) */
/* 05340 */ HB_P_LINEOFFSET, 255,	/* 268 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 05351 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 05369) */
/* 05361 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05369 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 71,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 05388 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 72,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 05403 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 05435 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 05467 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05499 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05535 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 82,	/* 82 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'V', 'e', 'n', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05565 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', ' ', ' ', 'S', 'i', 't', 'u', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05599 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 't', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05636 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05661 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 13, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05716 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* M_PED */
	HB_P_PUSHVARIABLE, 68, 0,	/* H */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 05748 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHVARIABLE, 68, 0,	/* H */
	HB_P_INC,
	HB_P_POPVARIABLE, 68, 0,	/* H */
	HB_P_JUMP, 58, 254,	/* -454 (abs: 05304) */
/* 05761 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MQTD_PED */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05830 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MTOT_DIA */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05902 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05936 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MQTD_PED 0*/
	HB_P_PUSHLOCALNEAR, 19,	/* MQTD_PED */
	HB_P_POPLOCALNEAR, 10,	/* MTOT_DIA */
/* 05947 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMP, 235, 248,	/* -1813 (abs: 04141) */
/* 05957 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 38,	/* MSO_RESUMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 37, 1,	/* 293 (abs: 06260) */
/* 05970 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 06042 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCONT_CLI */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06111 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MQTD_TOT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06180 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06252 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06260 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_POPVARIABLE, 4, 0,	/* MPAG */
/* 06272 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 71,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 2, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 3, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 4,
/* 06291 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 72,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06306 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'M', 'e', 's', '/', 'A', 'n', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06338 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'C', 'l', 'i', 'e', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06377 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'e', 'd', 'i', 'a', ' ', 'C', 'l', 'i', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06416 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'Q', 't', 'd', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06455 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'M', 'e', 'd', 'i', 'a', ' ', 'P', 'e', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06494 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'l', 'r', '.', ' ', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 06533 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 06558 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_LOCALNEARSETINT, 33, 0, 0,	/* I 0*/
/* 06565 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_LOCALNEARSETINT, 33, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_PUSHSYMNEAR, 49,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 70, 1,	/* 326 (abs: 06908) */
/* 06585 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 35,	/* M_MES */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06622 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06674 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06735 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06786 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06846 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 73,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* M_MES1 */
	HB_P_PUSHLOCALNEAR, 33,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06898 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* I 1*/
	HB_P_JUMP, 179, 254,	/* -333 (abs: 06572) */
/* 06908 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCONT_CLI */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06977 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MQTD_TOT */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07046 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 26,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 69,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 27,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 57,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MTOT_GERAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07118 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 70,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07126 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 74,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 07136 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 41,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 07178 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 75,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'L', 'I', '_', 'P', 'E', 'D', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 97, 229,	/* -6815 (abs: 00385) */
/* 07203 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 62,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07211 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07217 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

