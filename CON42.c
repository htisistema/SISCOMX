/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON42.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\CON42.PRG /q /oC:\hti\SISCOM\CON42.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:52:28 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON42.PRG"

HB_FUNC( CON42 );
HB_FUNC( CHEQ_RES );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( CON420 );
HB_FUNC_EXTERN( CON421 );
HB_FUNC_EXTERN( CON423 );
HB_FUNC_EXTERN( CON424 );
HB_FUNC_EXTERN( CON428 );
HB_FUNC_EXTERN( CON419 );
HB_FUNC_EXTERN( CON429 );
HB_FUNC_EXTERN( CON425 );
HB_FUNC_EXTERN( CON252 );
HB_FUNC_EXTERN( CON422 );
HB_FUNC_EXTERN( CON4201 );
HB_FUNC_EXTERN( CON4202 );
HB_FUNC_EXTERN( CON426 );
HB_FUNC_EXTERN( CON4231 );
HB_FUNC_EXTERN( CON427 );
HB_FUNC_EXTERN( CON4203 );
HB_FUNC_EXTERN( CON4204 );
HB_FUNC_EXTERN( CON4205 );
HB_FUNC_EXTERN( CON4191 );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON42 )
{ "CON42", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON42 )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "CON420", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON420 )}, NULL },
{ "CON421", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON421 )}, NULL },
{ "CON423", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON423 )}, NULL },
{ "CON424", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON424 )}, NULL },
{ "CON428", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON428 )}, NULL },
{ "CON419", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON419 )}, NULL },
{ "CON429", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON429 )}, NULL },
{ "CON425", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON425 )}, NULL },
{ "CON252", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON252 )}, NULL },
{ "CON422", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON422 )}, NULL },
{ "CON4201", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4201 )}, NULL },
{ "CON4202", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4202 )}, NULL },
{ "CON426", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON426 )}, NULL },
{ "CON4231", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4231 )}, NULL },
{ "CHEQ_RES", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHEQ_RES )}, NULL },
{ "CON427", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON427 )}, NULL },
{ "CON4203", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4203 )}, NULL },
{ "CON4204", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4204 )}, NULL },
{ "CON4205", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4205 )}, NULL },
{ "CON4191", {HB_FS_PUBLIC}, {HB_FUNCNAME( CON4191 )}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON42 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON42
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON42 = hb_vm_SymbolInit_CON42;
   #pragma data_seg()
#endif

HB_FUNC( CON42 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 0,	/* 5 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'C', 'O', 'N', '4', '2', 0, 
/* 00016 */ HB_P_LINEOFFSET, 1,	/* 6 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'D', 'o', 'c', '.', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00060 */ HB_P_LINEOFFSET, 3,	/* 8 */
	HB_P_PUSHSYMNEAR, 2,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00069 */ HB_P_LINEOFFSET, 4,	/* 9 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00078 */ HB_P_LINEOFFSET, 5,	/* 10 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '0', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'E', 'm', 'i', 't', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00131 */ HB_P_LINEOFFSET, 6,	/* 11 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '1', '-', '>', ' ', 'A', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00184 */ HB_P_LINEOFFSET, 7,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '2', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'a', ' ', 'V', 'e', 'n', 'c', 'e', 'r', '/', 'V', 'e', 'n', 'c', 'i', 'd', 'a', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00238 */ HB_P_LINEOFFSET, 8,	/* 13 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '3', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'a', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00292 */ HB_P_LINEOFFSET, 9,	/* 14 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '4', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00346 */ HB_P_LINEOFFSET, 10,	/* 15 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '5', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'X', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00400 */ HB_P_LINEOFFSET, 11,	/* 16 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '6', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'F', 'a', 't', 'u', 'r', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00454 */ HB_P_LINEOFFSET, 12,	/* 17 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '7', '-', '>', ' ', 'C', 'a', 'r', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00508 */ HB_P_LINEOFFSET, 13,	/* 18 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '8', '-', '>', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00562 */ HB_P_LINEOFFSET, 14,	/* 19 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', '9', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'c', '/', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00616 */ HB_P_LINEOFFSET, 15,	/* 20 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'A', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 's', 'e', 'm', ' ', 'D', 'E', 'B', 'I', 'T', 'O', 'S', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00670 */ HB_P_LINEOFFSET, 16,	/* 21 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'B', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'x', ' ', 'D', 'o', 'c', '.', ' ', 'Q', 'u', 'i', 't', 'a', 'd', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00724 */ HB_P_LINEOFFSET, 17,	/* 22 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'C', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'T', 'r', 'a', 'n', 's', 'f', 'e', 'r', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00778 */ HB_P_LINEOFFSET, 18,	/* 23 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'D', '-', '>', ' ', 'C', 'o', 'n', 't', 'r', 'o', 'l', 'e', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00832 */ HB_P_LINEOFFSET, 19,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'E', '-', '>', ' ', 'R', 'e', 's', 'u', 'm', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'p', '/', 'C', 'h', 'e', 'q', 's', '.', 'e', ' ', 'D', 'u', 'p', '.', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00886 */ HB_P_LINEOFFSET, 20,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'F', '-', '>', ' ', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00940 */ HB_P_LINEOFFSET, 21,	/* 26 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'G', '-', '>', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'A', 'c', 'o', 'r', 'd', 'o', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00994 */ HB_P_LINEOFFSET, 22,	/* 27 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'H', '-', '>', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'P', 'a', 'g', 'o', 's', ' ', '(', 'D', 'A', 'T', 'A', ' ', 'O', 'P', 'E', 'R', 'A', 'C', 'A', 'O', ')', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01048 */ HB_P_LINEOFFSET, 23,	/* 28 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'I', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'M', 'e', 'd', 'i', 'a', ' ', 'd', 'e', ' ', 'D', 'i', 'a', 's', ' ', 'e', 'm', ' ', 'A', 't', 'r', 'a', 's', 'o', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01102 */ HB_P_LINEOFFSET, 24,	/* 29 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'J', '-', '>', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'c', 'o', 'm', ' ', 'L', 'I', 'M', 'I', 'T', 'E', ' ', 'E', 'S', 'T', 'O', 'U', 'R', 'A', 'D', 'O', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01156 */ HB_P_LINEOFFSET, 25,	/* 30 */
	HB_P_PUSHSYMNEAR, 4,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', ' ', 'L', '-', '>', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01210 */ HB_P_LINEOFFSET, 26,	/* 31 */
	HB_P_PUSHSYMNEAR, 5,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* OP42 */
	HB_P_PUSHSYMNEAR, 6,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01237) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01242) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'o', 'p', '4', '2', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OP42 */
/* 01254 */ HB_P_LINEOFFSET, 27,	/* 32 */
	HB_P_PUSHSYMNEAR, 3,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01262 */ HB_P_LINEOFFSET, 29,	/* 34 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01282) */
/* 01270 */ HB_P_LINEOFFSET, 30,	/* 35 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01277 */ HB_P_LINEOFFSET, 31,	/* 36 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01282 */ HB_P_LINEOFFSET, 32,	/* 37 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01300) */
/* 01290 */ HB_P_LINEOFFSET, 34,	/* 39 */
	HB_P_PUSHSYMNEAR, 8,	/* CON420 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 43, 251,	/* -1237 (abs: 00060) */
/* 01300 */ HB_P_LINEOFFSET, 35,	/* 40 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01319) */
/* 01309 */ HB_P_LINEOFFSET, 37,	/* 42 */
	HB_P_PUSHSYMNEAR, 9,	/* CON421 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 24, 251,	/* -1256 (abs: 00060) */
/* 01319 */ HB_P_LINEOFFSET, 38,	/* 43 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01338) */
/* 01328 */ HB_P_LINEOFFSET, 40,	/* 45 */
	HB_P_PUSHSYMNEAR, 10,	/* CON423 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 5, 251,	/* -1275 (abs: 00060) */
/* 01338 */ HB_P_LINEOFFSET, 41,	/* 46 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01357) */
/* 01347 */ HB_P_LINEOFFSET, 43,	/* 48 */
	HB_P_PUSHSYMNEAR, 11,	/* CON424 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 242, 250,	/* -1294 (abs: 00060) */
/* 01357 */ HB_P_LINEOFFSET, 44,	/* 49 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01376) */
/* 01366 */ HB_P_LINEOFFSET, 45,	/* 50 */
	HB_P_PUSHSYMNEAR, 12,	/* CON428 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 223, 250,	/* -1313 (abs: 00060) */
/* 01376 */ HB_P_LINEOFFSET, 46,	/* 51 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01395) */
/* 01385 */ HB_P_LINEOFFSET, 47,	/* 52 */
	HB_P_PUSHSYMNEAR, 13,	/* CON419 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 204, 250,	/* -1332 (abs: 00060) */
/* 01395 */ HB_P_LINEOFFSET, 48,	/* 53 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01414) */
/* 01404 */ HB_P_LINEOFFSET, 49,	/* 54 */
	HB_P_PUSHSYMNEAR, 14,	/* CON429 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 185, 250,	/* -1351 (abs: 00060) */
/* 01414 */ HB_P_LINEOFFSET, 50,	/* 55 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01433) */
/* 01423 */ HB_P_LINEOFFSET, 51,	/* 56 */
	HB_P_PUSHSYMNEAR, 15,	/* CON425 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 166, 250,	/* -1370 (abs: 00060) */
/* 01433 */ HB_P_LINEOFFSET, 52,	/* 57 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01457) */
/* 01442 */ HB_P_LINEOFFSET, 53,	/* 58 */
	HB_P_PUSHSYMNEAR, 16,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 142, 250,	/* -1394 (abs: 00060) */
/* 01457 */ HB_P_LINEOFFSET, 54,	/* 59 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01481) */
/* 01466 */ HB_P_LINEOFFSET, 55,	/* 60 */
	HB_P_PUSHSYMNEAR, 17,	/* CON422 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 118, 250,	/* -1418 (abs: 00060) */
/* 01481 */ HB_P_LINEOFFSET, 56,	/* 61 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01500) */
/* 01490 */ HB_P_LINEOFFSET, 57,	/* 62 */
	HB_P_PUSHSYMNEAR, 18,	/* CON4201 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 99, 250,	/* -1437 (abs: 00060) */
/* 01500 */ HB_P_LINEOFFSET, 58,	/* 63 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01519) */
/* 01509 */ HB_P_LINEOFFSET, 59,	/* 64 */
	HB_P_PUSHSYMNEAR, 19,	/* CON4202 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 80, 250,	/* -1456 (abs: 00060) */
/* 01519 */ HB_P_LINEOFFSET, 60,	/* 65 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01538) */
/* 01528 */ HB_P_LINEOFFSET, 61,	/* 66 */
	HB_P_PUSHSYMNEAR, 20,	/* CON426 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 61, 250,	/* -1475 (abs: 00060) */
/* 01538 */ HB_P_LINEOFFSET, 62,	/* 67 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01557) */
/* 01547 */ HB_P_LINEOFFSET, 63,	/* 68 */
	HB_P_PUSHSYMNEAR, 21,	/* CON4231 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 42, 250,	/* -1494 (abs: 00060) */
/* 01557 */ HB_P_LINEOFFSET, 64,	/* 69 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01576) */
/* 01566 */ HB_P_LINEOFFSET, 65,	/* 70 */
	HB_P_PUSHSYMNEAR, 22,	/* CHEQ_RES */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 23, 250,	/* -1513 (abs: 00060) */
/* 01576 */ HB_P_LINEOFFSET, 66,	/* 71 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01595) */
/* 01585 */ HB_P_LINEOFFSET, 67,	/* 72 */
	HB_P_PUSHSYMNEAR, 23,	/* CON427 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 4, 250,	/* -1532 (abs: 00060) */
/* 01595 */ HB_P_LINEOFFSET, 68,	/* 73 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01619) */
/* 01604 */ HB_P_LINEOFFSET, 69,	/* 74 */
	HB_P_PUSHSYMNEAR, 16,	/* CON252 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 236, 249,	/* -1556 (abs: 00060) */
/* 01619 */ HB_P_LINEOFFSET, 70,	/* 75 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01638) */
/* 01628 */ HB_P_LINEOFFSET, 71,	/* 76 */
	HB_P_PUSHSYMNEAR, 24,	/* CON4203 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 249,	/* -1575 (abs: 00060) */
/* 01638 */ HB_P_LINEOFFSET, 72,	/* 77 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01657) */
/* 01647 */ HB_P_LINEOFFSET, 73,	/* 78 */
	HB_P_PUSHSYMNEAR, 25,	/* CON4204 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 198, 249,	/* -1594 (abs: 00060) */
/* 01657 */ HB_P_LINEOFFSET, 74,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01676) */
/* 01666 */ HB_P_LINEOFFSET, 75,	/* 80 */
	HB_P_PUSHSYMNEAR, 26,	/* CON4205 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 179, 249,	/* -1613 (abs: 00060) */
/* 01676 */ HB_P_LINEOFFSET, 76,	/* 81 */
	HB_P_PUSHLOCALNEAR, 3,	/* OP42 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 249,	/* -1623 (abs: 00060) */
/* 01686 */ HB_P_LINEOFFSET, 77,	/* 82 */
	HB_P_PUSHSYMNEAR, 27,	/* CON4191 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 159, 249,	/* -1633 (abs: 00060) */
	HB_P_ENDPROC
/* 01697 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CHEQ_RES )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 30, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 93, 0,	/* 93 */
	HB_P_LOCALNEARSETSTR, 1, 9, 0,	/* MPRG 9*/
	'C', 'H', 'E', 'Q', '_', 'R', 'E', 'S', 0, 
/* 00019 */ HB_P_LINEOFFSET, 4,	/* 97 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* M_VEND */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_DUP 0*/
	HB_P_LOCALNEARSETINT, 22, 0, 0,	/* MVLR_DUP 0*/
	HB_P_LOCALNEARSETSTR, 23, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MPONTO 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 00060 */ HB_P_LINEOFFSET, 6,	/* 99 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 29,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 30,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 31,	/* MCPF */
	HB_P_PUSHSYMNEAR, 32,	/* MCGC */
	HB_P_DOSHORT, 5,
/* 00077 */ HB_P_LINEOFFSET, 7,	/* 100 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 37,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 37,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 34,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 35,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 36,	/* MARQ */
	HB_P_PUSHSYMNEAR, 38,	/* MCODEMP */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 36, 0,	/* MARQ */
	HB_P_POPVARIABLE, 35, 0,	/* MIMP_TIPO */
/* 00116 */ HB_P_LINEOFFSET, 9,	/* 102 */
	HB_P_PUSHSYMNEAR, 39,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'C', 'H', 'E', 'Q', 'U', 'E', ' ', 'S', 'E', 'M', ' ', 'F', 'U', 'N', 'D', 'O', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'P', 'O', 'R', ' ', 'V', 'E', 'N', 'D', 'E', 'D', 'O', 'R', ')', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '4', '5', '6', 0, 
	HB_P_PUSHVARIABLE, 40, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00192) */
/* 00187 */ HB_P_LINEOFFSET, 10,	/* 103 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00192 */ HB_P_LINEOFFSET, 12,	/* 105 */
	HB_P_PUSHSYMNEAR, 41,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* MTRACO */
/* 00208 */ HB_P_LINEOFFSET, 14,	/* 107 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_POPLOCALNEAR, 4,	/* LCI */
/* 00218 */ HB_P_LINEOFFSET, 15,	/* 108 */
	HB_P_LOCALNEARSETINT, 6, 5, 0,	/* LBA 5*/
/* 00224 */ HB_P_LINEOFFSET, 16,	/* 109 */
	HB_P_LOCALNEARSETINT, 7, 75, 0,	/* CBA 75*/
/* 00230 */ HB_P_LINEOFFSET, 17,	/* 110 */
	HB_P_PUSHSYMNEAR, 1,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'C', 'o', 'm', 'i', 's', 's', 'a', 'o', '/', 'V', 'e', 'n', 'd', 'a', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00275 */ HB_P_LINEOFFSET, 20,	/* 113 */
	HB_P_PUSHMEMVAR, 42, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 34, 0,	/* MTIPO_IMP */
/* 00288 */ HB_P_LINEOFFSET, 22,	/* 115 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 225, 255,	/* -31*/
	HB_P_POPLOCALNEAR, 15,	/* MDATA1 */
/* 00298 */ HB_P_LINEOFFSET, 23,	/* 116 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 16,	/* MDATA2 */
/* 00305 */ HB_P_LINEOFFSET, 24,	/* 117 */
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MTOT_DUP 0*/
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_POPLOCALNEAR, 14,	/* MCOD_VEND */
/* 00324 */ HB_P_LINEOFFSET, 25,	/* 118 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* MIMP_TIPO */
/* 00330 */ HB_P_LINEOFFSET, 26,	/* 119 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 17,	/* M_MATRIZ */
/* 00337 */ HB_P_LINEOFFSET, 27,	/* 120 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 18,	/* M_VEND */
/* 00344 */ HB_P_LINEOFFSET, 28,	/* 121 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00386 */ HB_P_LINEOFFSET, 29,	/* 122 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00429 */ HB_P_LINEOFFSET, 30,	/* 123 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00472 */ HB_P_LINEOFFSET, 31,	/* 124 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'D', 'a', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00515 */ HB_P_LINEOFFSET, 32,	/* 125 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00558 */ HB_P_LINEOFFSET, 34,	/* 127 */
	HB_P_PUSHSYMNEAR, 47,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 50,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	4, 0,	/* LCI */
	5, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 51,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 52, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 53, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 49, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00663 */ HB_P_LINEOFFSET, 35,	/* 128 */
	HB_P_PUSHSYMNEAR, 47,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 50,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00708) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00713) */
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
	15, 0,	/* MDATA1 */
	HB_P_PUSHSYMNEAR, 54,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00755) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00756) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 53, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 49, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00774 */ HB_P_LINEOFFSET, 36,	/* 129 */
	HB_P_PUSHSYMNEAR, 47,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 50,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00819) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00824) */
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
	16, 0,	/* MDATA2 */
	15, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00866) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00867) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 53, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 49, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00885 */ HB_P_LINEOFFSET, 37,	/* 130 */
	HB_P_PUSHSYMNEAR, 47,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 5,	/* CCI */
	HB_P_ADDINT, 21, 0,	/* 21*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 50,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00930) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00935) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MTIPO_DOC */
	HB_P_PUSHSYMNEAR, 55,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 53, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 49, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00991 */ HB_P_LINEOFFSET, 38,	/* 131 */
	HB_P_PUSHSYMNEAR, 56,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 49, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 49, 0,	/* GETLIST */
/* 01013 */ HB_P_LINEOFFSET, 39,	/* 132 */
	HB_P_PUSHSYMNEAR, 57,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01037) */
/* 01025 */ HB_P_LINEOFFSET, 40,	/* 133 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01032 */ HB_P_LINEOFFSET, 41,	/* 134 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01037 */ HB_P_LINEOFFSET, 43,	/* 136 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 28,	/* CONS_SENHA */
/* 01044 */ HB_P_LINEOFFSET, 44,	/* 137 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 's', 'n', 'o', 'm', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 28, 0,	/* CONS_SENHA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01102 */ HB_P_LINEOFFSET, 45,	/* 138 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01126 */ HB_P_LINEOFFSET, 46,	/* 139 */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 01179) */
/* 01139 */ HB_P_LINEOFFSET, 47,	/* 140 */
	HB_P_PUSHSYMNEAR, 61,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01179 */ HB_P_LINEOFFSET, 49,	/* 142 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', ' ', 'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01215 */ HB_P_LINEOFFSET, 50,	/* 143 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 01221 */ HB_P_LINEOFFSET, 51,	/* 144 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 155, 1,	/* 411 (abs: 01648) */
/* 01240 */ HB_P_LINEOFFSET, 52,	/* 145 */
	HB_P_PUSHSYMNEAR, 62,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_DOSHORT, 1,
/* 01249 */ HB_P_LINEOFFSET, 53,	/* 146 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 01256 */ HB_P_LINEOFFSET, 54,	/* 147 */
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ',', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'h', 'e', 'q', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'h', 'e', 'q', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', '_', 'o', 'k', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'o', 'k', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01345 */ HB_P_LINEOFFSET, 55,	/* 148 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01406 */ HB_P_LINEOFFSET, 56,	/* 149 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01447 */ HB_P_LINEOFFSET, 57,	/* 150 */
	HB_P_PUSHSYMNEAR, 54,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 01495) */
/* 01459 */ HB_P_LINEOFFSET, 58,	/* 151 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01495 */ HB_P_LINEOFFSET, 60,	/* 153 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_CHEQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01516 */ HB_P_LINEOFFSET, 61,	/* 154 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01540 */ HB_P_LINEOFFSET, 62,	/* 155 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01554) */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 01641) */
/* 01554 */ HB_P_LINEOFFSET, 66,	/* 159 */
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_DOSHORT, 2,
/* 01596 */ HB_P_LINEOFFSET, 67,	/* 160 */
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01612 */ HB_P_LINEOFFSET, 68,	/* 161 */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 20,	/* MTOT_GER */
/* 01625 */ HB_P_LINEOFFSET, 69,	/* 162 */
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* MVLR_GER */
/* 01639 */ HB_P_LINEOFFSET, 70,	/* 163 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 94, 254,	/* -418 (abs: 01227) */
/* 01648 */ HB_P_LINEOFFSET, 71,	/* 164 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 01654 */ HB_P_LINEOFFSET, 72,	/* 165 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 251, 1,	/* 507 (abs: 02177) */
/* 01673 */ HB_P_LINEOFFSET, 73,	/* 166 */
	HB_P_PUSHSYMNEAR, 62,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_DOSHORT, 1,
/* 01682 */ HB_P_LINEOFFSET, 74,	/* 167 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* CONS_CHEQ */
/* 01689 */ HB_P_LINEOFFSET, 75,	/* 168 */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'C', 'O', 'U', 'N', 'T', '(', '*', ')', ',', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'p', 'a', 'g', 'o', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01774 */ HB_P_LINEOFFSET, 76,	/* 169 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01830 */ HB_P_LINEOFFSET, 77,	/* 170 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01871 */ HB_P_LINEOFFSET, 78,	/* 171 */
	HB_P_PUSHSYMNEAR, 54,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 01919) */
/* 01883 */ HB_P_LINEOFFSET, 79,	/* 172 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01919 */ HB_P_LINEOFFSET, 81,	/* 174 */
	HB_P_PUSHSYMNEAR, 54,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 01962) */
/* 01930 */ HB_P_LINEOFFSET, 82,	/* 175 */
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 64,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 63, 0,	/* CCOMM */
/* 01962 */ HB_P_LINEOFFSET, 84,	/* 177 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 63, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 30, 0,	/* CONS_CHEQ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01983 */ HB_P_LINEOFFSET, 85,	/* 178 */
	HB_P_MESSAGE, 58, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 59,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02007 */ HB_P_LINEOFFSET, 86,	/* 179 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02022) */
	HB_P_JUMP, 151, 0,	/* 151 (abs: 02170) */
/* 02022 */ HB_P_LINEOFFSET, 89,	/* 182 */
	HB_P_PUSHSYMNEAR, 65,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 29,	/* MPONTO */
/* 02040 */ HB_P_LINEOFFSET, 90,	/* 183 */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 02083) */
/* 02048 */ HB_P_LINEOFFSET, 91,	/* 184 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPOP,
/* 02065 */ HB_P_LINEOFFSET, 92,	/* 185 */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 29,	/* MPONTO */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 60,	/* 60 (abs: 02141) */
/* 02083 */ HB_P_LINEOFFSET, 94,	/* 187 */
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* M_VEND */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 02099 */ HB_P_LINEOFFSET, 95,	/* 188 */
	HB_P_PUSHSYMNEAR, 48,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 28,	/* CONS_SENHA */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 6, 0,	/* 6 */
	HB_P_DOSHORT, 2,
/* 02141 */ HB_P_LINEOFFSET, 97,	/* 190 */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 21,	/* MTOT_DUP */
/* 02154 */ HB_P_LINEOFFSET, 98,	/* 191 */
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHLOCALNEAR, 30,	/* CONS_CHEQ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 22,	/* MVLR_DUP */
/* 02168 */ HB_P_LINEOFFSET, 99,	/* 192 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 254, 253,	/* -514 (abs: 01660) */
/* 02177 */ HB_P_LINEOFFSET, 100,	/* 193 */
	HB_P_PUSHSYMNEAR, 66,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 02207 */ HB_P_LINEOFFSET, 101,	/* 194 */
	HB_P_PUSHSYMNEAR, 44,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02251 */ HB_P_LINEOFFSET, 102,	/* 195 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'S', '_', 'C', 'H', 'E', 'Q', '.', 'R', 'E', 'L', 0, 
	HB_P_POPVARIABLE, 36, 0,	/* MARQ */
/* 02271 */ HB_P_LINEOFFSET, 103,	/* 196 */
	HB_P_PUSHSYMNEAR, 67,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'S', '_', 'C', 'H', 'E', 'Q', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 02302) */
	HB_P_JUMP, 24, 248,	/* -2024 (abs: 00275) */
/* 02302 */ HB_P_LINEOFFSET, 106,	/* 199 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* MPAG 1*/
/* 02308 */ HB_P_LINEOFFSET, 107,	/* 200 */
	HB_P_LOCALNEARSETSTR, 26, 61, 0,	/* MTIT 61*/
	'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', ' ', 's', '/', 'f', 'u', 'n', 'd', 'o', 's', ' ', 'e', ' ', 'D', 'o', 'c', '.', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ' ', '(', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'G', 'E', 'R', 'A', 'L', ')', 0, 
/* 02375 */ HB_P_LINEOFFSET, 108,	/* 201 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'e', 'r', 'i', 'o', 'd', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 68,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MTIPO */
/* 02414 */ HB_P_LINEOFFSET, 109,	/* 202 */
	HB_P_PUSHSYMNEAR, 69,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MPAG */
	HB_P_PUSHLOCALNEAR, 26,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 27,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHVARIABLE, 38, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 02432 */ HB_P_LINEOFFSET, 110,	/* 203 */
	HB_P_PUSHSYMNEAR, 70,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02446 */ HB_P_LINEOFFSET, 111,	/* 204 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'S', 'E', 'M', ' ', 'F', 'U', 'N', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 02488 */ HB_P_LINEOFFSET, 112,	/* 205 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'D', 'O', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'E', 'M', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 02529 */ HB_P_LINEOFFSET, 113,	/* 206 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 02561 */ HB_P_LINEOFFSET, 114,	/* 207 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'Q', 't', 'd', '.', 'C', 'h', 'e', 'q', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02592 */ HB_P_LINEOFFSET, 115,	/* 208 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', '.', ' ', 'C', 'h', 'e', 'q', 'u', 'e', 's', 0, 
	HB_P_DOSHORT, 1,
/* 02626 */ HB_P_LINEOFFSET, 116,	/* 209 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'M', 'e', 'd', '.', 'C', 'h', 'e', 'q', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02658 */ HB_P_LINEOFFSET, 117,	/* 210 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'(', '%', ')', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02688 */ HB_P_LINEOFFSET, 118,	/* 211 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', 's', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02719 */ HB_P_LINEOFFSET, 119,	/* 212 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'o', 't', '.', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 0, 
	HB_P_DOSHORT, 1,
/* 02753 */ HB_P_LINEOFFSET, 120,	/* 213 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'M', 'e', 'd', '.', 'D', 'o', 'c', 's', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02785 */ HB_P_LINEOFFSET, 121,	/* 214 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'(', '%', ')', 'G', 'e', 'r', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 02815 */ HB_P_LINEOFFSET, 122,	/* 215 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02838 */ HB_P_LINEOFFSET, 123,	/* 216 */
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* I 0*/
/* 02844 */ HB_P_LINEOFFSET, 124,	/* 217 */
	HB_P_LOCALNEARSETINT, 24, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_PUSHSYMNEAR, 60,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 205, 1,	/* 461 (abs: 03321) */
/* 02863 */ HB_P_LINEOFFSET, 125,	/* 218 */
	HB_P_PUSHSYMNEAR, 62,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 72,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 02882 */ HB_P_LINEOFFSET, 126,	/* 219 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02924 */ HB_P_LINEOFFSET, 127,	/* 220 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02968 */ HB_P_LINEOFFSET, 128,	/* 221 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03015 */ HB_P_LINEOFFSET, 129,	/* 222 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03069 */ HB_P_LINEOFFSET, 130,	/* 223 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03118 */ HB_P_LINEOFFSET, 131,	/* 224 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03162 */ HB_P_LINEOFFSET, 132,	/* 225 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03209 */ HB_P_LINEOFFSET, 133,	/* 226 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03263 */ HB_P_LINEOFFSET, 134,	/* 227 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 115,	/* 115 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* M_MATRIZ */
	HB_P_PUSHLOCALNEAR, 24,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03312 */ HB_P_LINEOFFSET, 135,	/* 228 */
	HB_P_LOCALNEARADDINT, 24, 1, 0,	/* I 1*/
	HB_P_JUMP, 44, 254,	/* -468 (abs: 02850) */
/* 03321 */ HB_P_LINEOFFSET, 136,	/* 229 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03344 */ HB_P_LINEOFFSET, 137,	/* 230 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'T', ' ', 'O', ' ', 'T', ' ', 'A', ' ', 'L', ' ', ' ', ' ', 'G', ' ', 'E', ' ', 'R', ' ', 'A', ' ', 'L', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03390 */ HB_P_LINEOFFSET, 138,	/* 231 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03428 */ HB_P_LINEOFFSET, 139,	/* 232 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03469 */ HB_P_LINEOFFSET, 140,	/* 233 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MVLR_GER */
	HB_P_PUSHLOCALNEAR, 20,	/* MTOT_GER */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03511 */ HB_P_LINEOFFSET, 141,	/* 234 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03549 */ HB_P_LINEOFFSET, 142,	/* 235 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 91,	/* 91 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03590 */ HB_P_LINEOFFSET, 143,	/* 236 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 104,	/* 104 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 73,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MVLR_DUP */
	HB_P_PUSHLOCALNEAR, 21,	/* MTOT_DUP */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03632 */ HB_P_LINEOFFSET, 144,	/* 237 */
	HB_P_PUSHSYMNEAR, 45,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 46,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 03658 */ HB_P_LINEOFFSET, 145,	/* 238 */
	HB_P_PUSHSYMNEAR, 75,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03665 */ HB_P_LINEOFFSET, 146,	/* 239 */
	HB_P_PUSHSYMNEAR, 76,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03674 */ HB_P_LINEOFFSET, 147,	/* 240 */
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 77,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 03715 */ HB_P_LINEOFFSET, 148,	/* 241 */
	HB_P_PUSHSYMNEAR, 78,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 03725 */ HB_P_LINEOFFSET, 151,	/* 244 */
	HB_P_PUSHSYMNEAR, 7,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03732 */ HB_P_LINEOFFSET, 152,	/* 245 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03737 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

