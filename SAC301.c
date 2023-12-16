/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC301.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC301.PRG /q /oC:\hti\SISCOM\SAC301.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:12 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC301.PRG"

HB_FUNC( SAC301 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( F7_CLI );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( MCLI );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FOUND );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DBCOMMITALL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC301 )
{ "SAC301", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC301 )}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "MCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "F7_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( F7_CLI )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "MCLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( MCLI )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "FOUND", {HB_FS_PUBLIC}, {HB_FUNCNAME( FOUND )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "EMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUMERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AGENCIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "C_C", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DUPLICATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR_DUP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIP_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORNEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENC1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTP_241", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESC_CART", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PAGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CORRENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOV_CX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "CAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DOCUMENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRI1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRI2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "HORA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "C_S", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC301 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC301
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC301 = hb_vm_SymbolInit_SAC301;
   #pragma data_seg()
#endif

HB_FUNC( SAC301 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 23, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 12, 0,	/* 12 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '3', '0', '1', 0, 
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MCOM_SEM 2*/
	' ', 0, 
/* 00023 */ HB_P_LINEOFFSET, 2,	/* 14 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 3,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_CLI */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPVARIABLE, 1, 0,	/* MCODEMP */
/* 00056 */ HB_P_LINEOFFSET, 4,	/* 16 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'R', 'E', 'C', 'E', 'B', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'I', 'V', 'E', 'R', 'S', 'O', 'S', ' ', '(', 'C', 'A', 'I', 'X', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '3', '5', 0, 
	HB_P_PUSHMEMVAR, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00121) */
/* 00116 */ HB_P_LINEOFFSET, 5,	/* 17 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00121 */ HB_P_LINEOFFSET, 8,	/* 20 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00131 */ HB_P_LINEOFFSET, 9,	/* 21 */
	HB_P_LOCALNEARSETINT, 5, 10, 0,	/* LBA 10*/
/* 00137 */ HB_P_LINEOFFSET, 10,	/* 22 */
	HB_P_LOCALNEARSETINT, 6, 70, 0,	/* CBA 70*/
/* 00143 */ HB_P_LINEOFFSET, 11,	/* 23 */
	HB_P_PUSHSYMNEAR, 8,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 12,	/* MTRACO */
/* 00158 */ HB_P_LINEOFFSET, 13,	/* 25 */
	HB_P_PUSHSYMNEAR, 9,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00187) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00187 */ HB_P_LINEOFFSET, 14,	/* 26 */
	HB_P_PUSHSYMNEAR, 9,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00214) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00214 */ HB_P_LINEOFFSET, 15,	/* 27 */
	HB_P_PUSHSYMNEAR, 9,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00244) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00244 */ HB_P_LINEOFFSET, 17,	/* 29 */
	HB_P_PUSHSYMNEAR, 10,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', 's', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00285 */ HB_P_LINEOFFSET, 19,	/* 31 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00333 */ HB_P_LINEOFFSET, 20,	/* 32 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMPRESA */
	HB_P_POPVARIABLE, 1, 0,	/* MCODEMP */
/* 00341 */ HB_P_LINEOFFSET, 21,	/* 33 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 19,	/* MNOME_CLI */
/* 00352 */ HB_P_LINEOFFSET, 22,	/* 34 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* MCORRENTE */
/* 00363 */ HB_P_LINEOFFSET, 23,	/* 35 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MNUM_BANCO 0*/
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_CLI */
/* 00374 */ HB_P_LINEOFFSET, 24,	/* 36 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 18,	/* MDUPLICATA */
/* 00385 */ HB_P_LINEOFFSET, 25,	/* 37 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MBANCO 2*/
	'C', 0, 
/* 00393 */ HB_P_LINEOFFSET, 26,	/* 38 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* MAGENCIA */
/* 00404 */ HB_P_LINEOFFSET, 27,	/* 39 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* MC_C */
/* 00415 */ HB_P_LINEOFFSET, 28,	/* 40 */
	HB_P_LOCALNEARSETSTR, 13, 3, 0,	/* MTIPO 3*/
	'R', 'E', 0, 
/* 00424 */ HB_P_LINEOFFSET, 29,	/* 41 */
	HB_P_PUSHMEMVAR, 13, 0,	/* MDATA_SIS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MDATA */
	HB_P_POPLOCALNEAR, 21,	/* MVENC */
/* 00434 */ HB_P_LINEOFFSET, 30,	/* 42 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MVALOR 0*/
/* 00440 */ HB_P_LINEOFFSET, 31,	/* 43 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MDESCRI1 */
/* 00451 */ HB_P_LINEOFFSET, 32,	/* 44 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MDESCRI2 */
/* 00462 */ HB_P_LINEOFFSET, 33,	/* 45 */
	HB_P_LOCALNEARSETSTR, 2, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00470 */ HB_P_LINEOFFSET, 34,	/* 46 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'o', 'd', '.', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00507 */ HB_P_LINEOFFSET, 35,	/* 47 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'T', 'i', 'p', 'o', ' ', 'P', 'a', 'g', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00544 */ HB_P_LINEOFFSET, 36,	/* 48 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'a', 't', 'a', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00581 */ HB_P_LINEOFFSET, 37,	/* 49 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00618 */ HB_P_LINEOFFSET, 38,	/* 50 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00655 */ HB_P_LINEOFFSET, 40,	/* 52 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 20,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCODEMP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 21, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00755 */ HB_P_LINEOFFSET, 41,	/* 53 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00800) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00805) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'R', 'E', ',', 'D', 'N', ',', 'C', 'H', ',', 'D', 'U', ',', 'C', 'T', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 119, 0,	/* 119 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', ' ', '[', 'R', 'E', ']', 'c', 'e', 'b', '.', 'D', 'i', 'v', 'e', 'r', 's', 'o', ' ', '[', 'C', 'H', ']', 'e', 'q', 'u', 'e', ' ', '[', 'D', 'U', ']', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '[', 'C', 'T', ']', 'C', 'a', 'r', 't', 'a', 'o', ' ', '[', 'D', 'N', ']', 'D', 'i', 'n', 'h', 'e', 'i', 'r', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00984 */ HB_P_LINEOFFSET, 42,	/* 54 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 01006 */ HB_P_LINEOFFSET, 43,	/* 55 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01021) */
	HB_P_JUMP, 163, 19,	/* 5027 (abs: 06045) */
/* 01021 */ HB_P_LINEOFFSET, 46,	/* 58 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 01043) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'R', 'E', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 136, 1,	/* 392 (abs: 01435) */
/* 01046 */ HB_P_LINEOFFSET, 47,	/* 59 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01091) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01096) */
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
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01124 */ HB_P_LINEOFFSET, 48,	/* 60 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01169) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01174) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01221) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01222) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01240 */ HB_P_LINEOFFSET, 49,	/* 61 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDESCRI1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01285) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01290) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01325 */ HB_P_LINEOFFSET, 50,	/* 62 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 15, 0,	/* 15*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MDESCRI2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01370) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01375) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', '2', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01410 */ HB_P_LINEOFFSET, 51,	/* 63 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
	HB_P_JUMP, 80, 14,	/* 3664 (abs: 05096) */
/* 01435 */ HB_P_LINEOFFSET, 53,	/* 65 */
	HB_P_PUSHSYMNEAR, 10,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', 'D', 'A', 'D', 'O', 'S', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01482) */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'O', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 01497) */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'A', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 01500 */ HB_P_LINEOFFSET, 54,	/* 66 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', '.', 'B', 'a', 'n', 'c', 'o', '/', 'C', 'o', 'd', '.', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01549 */ HB_P_LINEOFFSET, 55,	/* 67 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01582 */ HB_P_LINEOFFSET, 56,	/* 68 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 51, 0,	/* 51*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', '/', 'C', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01611 */ HB_P_LINEOFFSET, 57,	/* 69 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01660 */ HB_P_LINEOFFSET, 58,	/* 70 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01709 */ HB_P_LINEOFFSET, 59,	/* 71 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01758 */ HB_P_LINEOFFSET, 60,	/* 72 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01807 */ HB_P_LINEOFFSET, 61,	/* 73 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01856 */ HB_P_LINEOFFSET, 62,	/* 74 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'P', 'a', 'g', '.', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'r', 'i', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01905 */ HB_P_LINEOFFSET, 63,	/* 75 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'r', 'r', 'e', 'n', 't', 'i', 's', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01954 */ HB_P_LINEOFFSET, 64,	/* 76 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01984 */ HB_P_LINEOFFSET, 65,	/* 77 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02029) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02034) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 59, 0,	/* 59 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	13, 0,	/* MTIPO */
	15, 0,	/* MNUM_BANCO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 25,	/* 25 (abs: 02103) */
	HB_P_PUSHSYMNEAR, 27,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02104) */
	HB_P_TRUE,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02112) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 125, 0,	/* 125 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	13, 0,	/* MTIPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 02237) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'N', 'o', '.', 'd', 'o', ' ', 'b', 'a', 'n', 'c', 'o', ' ', 'o', 'u', ' ', 's', 'e', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'f', 'o', 'r', ' ', '[', 'C', 'T', ']', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02254 */ HB_P_LINEOFFSET, 66,	/* 78 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MAGENCIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02299) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02304) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'a', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 28,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 70, 0,	/* 70 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	13, 0,	/* MTIPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 02398) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'A', 'G', 'E', 'N', 'C', 'I', 'A', ' ', 'B', 'A', 'N', 'C', 'A', 'R', 'I', 'A', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02415 */ HB_P_LINEOFFSET, 67,	/* 79 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 56, 0,	/* 56*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MC_C */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02460) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02465) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 28,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 66, 0,	/* 66 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	13, 0,	/* MTIPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 02551) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 56, 0,	/* 56*/
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'C', '/', 'C', ' ', 'B', 'A', 'N', 'C', 'A', 'R', 'I', 'A', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02568 */ HB_P_LINEOFFSET, 68,	/* 80 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDUPLICATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02613) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02618) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MDUPLICATA */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02658) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02659) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02677 */ HB_P_LINEOFFSET, 69,	/* 81 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 02699 */ HB_P_LINEOFFSET, 70,	/* 82 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02721) */
/* 02711 */ HB_P_LINEOFFSET, 71,	/* 83 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 127, 246,	/* -2433 (abs: 00285) */
/* 02721 */ HB_P_LINEOFFSET, 74,	/* 86 */
	HB_P_PUSHSYMNEAR, 11,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'o', 'm', 'p', 'l', 'e', 't', 'e', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02765 */ HB_P_LINEOFFSET, 75,	/* 87 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 96, 0,	/* 96 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 25, 0,	/* 25*/
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'o', 'u', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', 'p', '/', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 'r', ' ', 'p', '/', 'N', 'O', 'M', 'E', ' ', '-', ' ', '<', 'F', '1', '>', 'A', 'j', 'u', 'd', 'a', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02924 */ HB_P_LINEOFFSET, 76,	/* 88 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 33, 0,	/* 33*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MNOME_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02969) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02974) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03020 */ HB_P_LINEOFFSET, 77,	/* 89 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 03042 */ HB_P_LINEOFFSET, 78,	/* 90 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03064) */
/* 03054 */ HB_P_LINEOFFSET, 79,	/* 91 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 40, 245,	/* -2776 (abs: 00285) */
/* 03064 */ HB_P_LINEOFFSET, 82,	/* 94 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 85,	/* 85 (abs: 03159) */
/* 03076 */ HB_P_LINEOFFSET, 84,	/* 96 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 31,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03095 */ HB_P_LINEOFFSET, 86,	/* 98 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 32,	/* CLI */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUE, 179, 0,	/* 179 (abs: 03289) */
/* 03113 */ HB_P_LINEOFFSET, 87,	/* 99 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'a', 'o', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03149 */ HB_P_LINEOFFSET, 88,	/* 100 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 201, 244,	/* -2871 (abs: 00285) */
/* 03159 */ HB_P_LINEOFFSET, 91,	/* 103 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MNOME_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 121,	/* 121 (abs: 03289) */
/* 03170 */ HB_P_LINEOFFSET, 93,	/* 105 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 31,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 03190 */ HB_P_LINEOFFSET, 96,	/* 108 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 32,	/* CLI */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MNOME_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 03257) */
/* 03211 */ HB_P_LINEOFFSET, 97,	/* 109 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'a', 'o', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03247 */ HB_P_LINEOFFSET, 98,	/* 110 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 103, 244,	/* -2969 (abs: 00285) */
/* 03257 */ HB_P_LINEOFFSET, 101,	/* 113 */
	HB_P_PUSHSYMNEAR, 36,	/* F7_CLI */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_CLI */
/* 03267 */ HB_P_LINEOFFSET, 102,	/* 114 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03289) */
/* 03279 */ HB_P_LINEOFFSET, 103,	/* 115 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 71, 244,	/* -3001 (abs: 00285) */
/* 03289 */ HB_P_LINEOFFSET, 109,	/* 121 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 31,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03305 */ HB_P_LINEOFFSET, 110,	/* 122 */
	HB_P_PUSHSYMNEAR, 37,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03312 */ HB_P_LINEOFFSET, 112,	/* 124 */
	HB_P_PUSHSYMNEAR, 38,	/* MCLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 03344) */
/* 03334 */ HB_P_LINEOFFSET, 113,	/* 125 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 244,	/* -3056 (abs: 00285) */
/* 03344 */ HB_P_LINEOFFSET, 116,	/* 128 */
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 03384) */
/* 03352 */ HB_P_LINEOFFSET, 117,	/* 129 */
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 34,	/* 34 (abs: 03416) */
/* 03384 */ HB_P_LINEOFFSET, 119,	/* 131 */
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03416 */ HB_P_LINEOFFSET, 121,	/* 133 */
	HB_P_PUSHSYMNEAR, 40,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 75, 1,	/* 331 (abs: 03754) */
/* 03426 */ HB_P_LINEOFFSET, 122,	/* 134 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 03489) */
/* 03438 */ HB_P_LINEOFFSET, 123,	/* 135 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 184, 0,	/* 184 (abs: 03670) */
/* 03489 */ HB_P_LINEOFFSET, 124,	/* 136 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 03554) */
/* 03501 */ HB_P_LINEOFFSET, 125,	/* 137 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'E', 's', 't', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 118,	/* 118 (abs: 03670) */
/* 03554 */ HB_P_LINEOFFSET, 126,	/* 138 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 03622) */
/* 03566 */ HB_P_LINEOFFSET, 127,	/* 139 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 't', 'e', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 03670) */
/* 03622 */ HB_P_LINEOFFSET, 129,	/* 141 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'e', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03670 */ HB_P_LINEOFFSET, 131,	/* 143 */
	HB_P_PUSHSYMNEAR, 41,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'm', 'e', 's', 'm', 'o', ' ', 'a', 's', 's', 'i', 'm', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 03721 */ HB_P_LINEOFFSET, 132,	/* 144 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 03742) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03754) */
/* 03744 */ HB_P_LINEOFFSET, 133,	/* 145 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 118, 242,	/* -3466 (abs: 00285) */
/* 03754 */ HB_P_LINEOFFSET, 137,	/* 149 */
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 03794) */
/* 03762 */ HB_P_LINEOFFSET, 138,	/* 150 */
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 34,	/* 34 (abs: 03826) */
/* 03794 */ HB_P_LINEOFFSET, 140,	/* 152 */
	HB_P_PUSHSYMNEAR, 33,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03826 */ HB_P_LINEOFFSET, 142,	/* 154 */
	HB_P_PUSHSYMNEAR, 40,	/* FOUND */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 66, 1,	/* 322 (abs: 04155) */
/* 03836 */ HB_P_LINEOFFSET, 143,	/* 155 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 03898) */
/* 03848 */ HB_P_LINEOFFSET, 144,	/* 156 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 't', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 182, 0,	/* 182 (abs: 04077) */
/* 03898 */ HB_P_LINEOFFSET, 145,	/* 157 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 03962) */
/* 03910 */ HB_P_LINEOFFSET, 146,	/* 158 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'E', 's', 't', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'A', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 117,	/* 117 (abs: 04077) */
/* 03962 */ HB_P_LINEOFFSET, 147,	/* 159 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 04030) */
/* 03974 */ HB_P_LINEOFFSET, 148,	/* 160 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 't', 'e', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 04077) */
/* 04030 */ HB_P_LINEOFFSET, 150,	/* 162 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 't', 'e', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
/* 04077 */ HB_P_LINEOFFSET, 152,	/* 164 */
	HB_P_PUSHSYMNEAR, 41,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'm', 'e', 's', 'm', 'o', ' ', 'a', 's', 's', 'i', 'm', ' ', '?', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 04122 */ HB_P_LINEOFFSET, 153,	/* 165 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04143) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04155) */
/* 04145 */ HB_P_LINEOFFSET, 154,	/* 166 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 229, 240,	/* -3867 (abs: 00285) */
/* 04155 */ HB_P_LINEOFFSET, 158,	/* 170 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04177) */
/* 04167 */ HB_P_LINEOFFSET, 159,	/* 171 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 207, 240,	/* -3889 (abs: 00285) */
/* 04177 */ HB_P_LINEOFFSET, 162,	/* 174 */
	HB_P_PUSHSYMNEAR, 35,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MNOME_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'I', 'V', 'E', 'R', 'S', 'O', 'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 04286) */
/* 04200 */ HB_P_LINEOFFSET, 163,	/* 175 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 32, 0,	/* 32*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MNOME_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04245) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04250) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'n', 'o', 'm', 'e', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04286 */ HB_P_LINEOFFSET, 165,	/* 177 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04308) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 04320) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04332) */
/* 04322 */ HB_P_LINEOFFSET, 166,	/* 178 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MBANCO 2*/
	'B', 0, 
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 04340) */
/* 04332 */ HB_P_LINEOFFSET, 168,	/* 180 */
	HB_P_LOCALNEARSETSTR, 22, 2, 0,	/* MBANCO 2*/
	'C', 0, 
/* 04340 */ HB_P_LINEOFFSET, 170,	/* 182 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04385) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04390) */
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
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04418 */ HB_P_LINEOFFSET, 171,	/* 183 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MVENC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04463) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04468) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'v', 'e', 'n', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	21, 0,	/* MVENC */
	8, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04499) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 04500) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04518 */ HB_P_LINEOFFSET, 172,	/* 184 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04563) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04568) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04624 */ HB_P_LINEOFFSET, 173,	/* 185 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MBANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04669) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04674) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MBANCO */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04716) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 96, 0,	/* 96 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 23,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'C', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'C', 'A', 'R', 'T', 'E', 'I', 'R', 'A', ' ', '[', 'B', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'B', 'A', 'N', 'C', 'O', 34, 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04829 */ HB_P_LINEOFFSET, 174,	/* 186 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MCORRENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04874) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04879) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04915 */ HB_P_LINEOFFSET, 175,	/* 187 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDESCRI1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04960) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04965) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'c', 'r', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 22, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05000 */ HB_P_LINEOFFSET, 176,	/* 188 */
	HB_P_PUSHSYMNEAR, 24,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 18, 0,	/* GETLIST */
/* 05022 */ HB_P_LINEOFFSET, 177,	/* 189 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '*', 'C', 'l', 'i', ':', 0, 
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'D', 'o', 'c', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 42,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', 'V', 'e', 'n', 'c', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 43,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* MDESCRI2 */
/* 05074 */ HB_P_LINEOFFSET, 178,	/* 190 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05096) */
/* 05086 */ HB_P_LINEOFFSET, 179,	/* 191 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 56, 237,	/* -4808 (abs: 00285) */
/* 05096 */ HB_P_LINEOFFSET, 183,	/* 195 */
	HB_P_PUSHSYMNEAR, 25,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05111) */
	HB_P_JUMP, 169, 3,	/* 937 (abs: 06045) */
/* 05111 */ HB_P_LINEOFFSET, 186,	/* 198 */
	HB_P_PUSHMEMVAR, 44, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 155, 0,	/* 155 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 05180) */
/* 05129 */ HB_P_LINEOFFSET, 187,	/* 199 */
	HB_P_PUSHSYMNEAR, 45,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'D', 'i', 'v', 'e', 'r', 's', 'o', 's', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 14,	/* MCOM_SEM */
/* 05180 */ HB_P_LINEOFFSET, 189,	/* 201 */
	HB_P_PUSHSYMNEAR, 41,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'R', 'e', 'c', 'e', 'b', 'i', 'm', 'e', 'n', 't', 'o', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 05225 */ HB_P_LINEOFFSET, 190,	/* 202 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05247) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05259) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05268) */
/* 05261 */ HB_P_LINEOFFSET, 191,	/* 203 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05268 */ HB_P_LINEOFFSET, 193,	/* 205 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05282) */
	HB_P_JUMP, 126, 236,	/* -4994 (abs: 00285) */
/* 05282 */ HB_P_LINEOFFSET, 196,	/* 208 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05304) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05316) */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 74, 1,	/* 330 (abs: 05646) */
/* 05319 */ HB_P_LINEOFFSET, 198,	/* 210 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 31,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05335 */ HB_P_LINEOFFSET, 200,	/* 212 */
	HB_P_PUSHSYMNEAR, 46,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 48, 1,	/* 304 (abs: 05646) */
/* 05345 */ HB_P_LINEOFFSET, 201,	/* 213 */
	HB_P_PUSHVARIABLE, 1, 0,	/* MCODEMP */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 47, 0,	/* EMPRESA */
/* 05356 */ HB_P_LINEOFFSET, 202,	/* 214 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 48, 0,	/* TIPO */
/* 05366 */ HB_P_LINEOFFSET, 203,	/* 215 */
	HB_P_PUSHSYMNEAR, 26,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 05394) */
/* 05377 */ HB_P_LINEOFFSET, 204,	/* 216 */
	HB_P_PUSHSYMNEAR, 2,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 49, 0,	/* NUMERO */
	HB_P_JUMPNEAR, 19,	/* 19 (abs: 05411) */
/* 05394 */ HB_P_LINEOFFSET, 206,	/* 218 */
	HB_P_PUSHSYMNEAR, 39,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 49, 0,	/* NUMERO */
/* 05411 */ HB_P_LINEOFFSET, 208,	/* 220 */
	HB_P_PUSHLOCALNEAR, 16,	/* MAGENCIA */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 50, 0,	/* AGENCIA */
/* 05421 */ HB_P_LINEOFFSET, 209,	/* 221 */
	HB_P_PUSHLOCALNEAR, 17,	/* MC_C */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 51, 0,	/* C_C */
/* 05431 */ HB_P_LINEOFFSET, 210,	/* 222 */
	HB_P_PUSHLOCALNEAR, 18,	/* MDUPLICATA */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 52, 0,	/* DUPLICATA */
/* 05441 */ HB_P_LINEOFFSET, 211,	/* 223 */
	HB_P_PUSHLOCALNEAR, 9,	/* MVALOR */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 53, 0,	/* VALOR_DUP */
/* 05451 */ HB_P_LINEOFFSET, 212,	/* 224 */
	HB_P_PUSHSYMNEAR, 32,	/* CLI */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* TIPO */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 54, 0,	/* TIP_CLI */
/* 05463 */ HB_P_LINEOFFSET, 213,	/* 225 */
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_CLI */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 55, 0,	/* FORNEC */
/* 05474 */ HB_P_LINEOFFSET, 214,	/* 226 */
	HB_P_PUSHLOCALNEAR, 19,	/* MNOME_CLI */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 56, 0,	/* CLIENTE */
/* 05484 */ HB_P_LINEOFFSET, 215,	/* 227 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 57, 0,	/* EMISSAO */
/* 05494 */ HB_P_LINEOFFSET, 216,	/* 228 */
	HB_P_PUSHLOCALNEAR, 21,	/* MVENC */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 58, 0,	/* VENC */
/* 05504 */ HB_P_LINEOFFSET, 217,	/* 229 */
	HB_P_PUSHLOCALNEAR, 21,	/* MVENC */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 59, 0,	/* VENC1 */
/* 05514 */ HB_P_LINEOFFSET, 218,	/* 230 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 05533) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 60, 0,	/* MTP_241 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 05557) */
/* 05535 */ HB_P_LINEOFFSET, 219,	/* 231 */
	HB_P_PUSHLOCALNEAR, 9,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 9,	/* MVALOR */
	HB_P_PUSHVARIABLE, 61, 0,	/* MDESC_CART */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 62, 0,	/* VALOR */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 05567) */
/* 05557 */ HB_P_LINEOFFSET, 221,	/* 233 */
	HB_P_PUSHLOCALNEAR, 9,	/* MVALOR */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 62, 0,	/* VALOR */
/* 05567 */ HB_P_LINEOFFSET, 223,	/* 235 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 63, 0,	/* PAGO */
/* 05579 */ HB_P_LINEOFFSET, 224,	/* 236 */
	HB_P_PUSHLOCALNEAR, 22,	/* MBANCO */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 64, 0,	/* BANCO */
/* 05589 */ HB_P_LINEOFFSET, 225,	/* 237 */
	HB_P_PUSHLOCALNEAR, 23,	/* MCORRENTE */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 65, 0,	/* CORRENTE */
/* 05599 */ HB_P_LINEOFFSET, 226,	/* 238 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDESCRI1 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 66, 0,	/* OBS */
/* 05609 */ HB_P_LINEOFFSET, 227,	/* 239 */
	HB_P_PUSHMEMVAR, 67, 0,	/* COD_OPERADO */
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 68, 0,	/* OPERADOR */
/* 05620 */ HB_P_LINEOFFSET, 228,	/* 240 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_PUSHVARIABLE, 3, 0,	/* MALIAS */
	HB_P_POPALIASEDVAR, 69, 0,	/* MOV_CX */
/* 05632 */ HB_P_LINEOFFSET, 243,	/* 255 */
	HB_P_PUSHSYMNEAR, 70,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05639 */ HB_P_LINEOFFSET, 244,	/* 256 */
	HB_P_PUSHSYMNEAR, 71,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05646 */ HB_P_LINEOFFSET, 248,	/* 260 */
	HB_P_PUSHSYMNEAR, 30,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 31,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05666 */ HB_P_LINEOFFSET, 251,	/* 263 */
	HB_P_PUSHSYMNEAR, 46,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 64, 1,	/* 320 (abs: 05993) */
/* 05676 */ HB_P_LINEOFFSET, 253,	/* 265 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MCODEMPRESA */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 47,	/* EMPRESA */
/* 05685 */ HB_P_LINEOFFSET, 254,	/* 266 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 48,	/* TIPO */
/* 05693 */ HB_P_LINEOFFSET, 255,	/* 267 */
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 73,	/* DATA */
/* 05701 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHLOCALNEAR, 21,	/* MVENC */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* VENCI */
/* 05710 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 05766) */
/* 05723 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* DOCUMENTO */
/* 05743 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* NOTA */
	HB_P_JUMP, 153, 0,	/* 153 (abs: 05916) */
/* 05766 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 05821) */
/* 05779 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'D', 'I', 'N', 'H', 'E', 'I', 'R', 'O', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* DOCUMENTO */
/* 05799 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'D', 'I', 'N', 'H', 'E', 'I', 'R', 'O', ' ', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* NOTA */
	HB_P_JUMPNEAR, 97,	/* 97 (abs: 05916) */
/* 05821 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHLOCALNEAR, 13,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 05876) */
/* 05834 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* DOCUMENTO */
/* 05854 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* NOTA */
	HB_P_JUMPNEAR, 42,	/* 42 (abs: 05916) */
/* 05876 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'R', 'E', 'C', 'E', 'B', '.', 'D', 'I', 'V', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* DOCUMENTO */
/* 05896 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'R', 'E', 'C', 'E', 'B', '.', 'D', 'I', 'V', 0, 
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* NOTA */
/* 05916 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHLOCALNEAR, 9,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 62,	/* VALOR */
/* 05925 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDESCRI1 */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* DESCRI1 */
/* 05934 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHLOCALNEAR, 11,	/* MDESCRI2 */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 78,	/* DESCRI2 */
/* 05943 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHMEMVAR, 67, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* COD_OPERA */
/* 05953 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 80,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 81,	/* HORA */
/* 05965 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHLOCALNEAR, 14,	/* MCOM_SEM */
	HB_P_PUSHSYMNEAR, 72,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 82,	/* C_S */
/* 05974 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 83,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05982 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 71,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 183, 233,	/* -5705 (abs: 00285) */
/* 05993 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 131, 233,	/* -5757 (abs: 00285) */
/* 06045 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 29,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06053 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06059 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

