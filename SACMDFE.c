/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACMDFE.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACMDFE.PRG /q /oC:\hti\SISCOM\SACMDFE.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2024.04.09 17:11:09 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACMDFE.PRG"

HB_FUNC( SACMDFE );
HB_FUNC_INITSTATICS();
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( INICIA_ACBR );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DRAWLABEL );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_UF );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( SCROLL );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SR_COMMITTRANSACTION );
HB_FUNC_EXTERN( TRACELOG );
HB_FUNC_EXTERN( VALTOPRG );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( VERCOD_UF );
HB_FUNC_EXTERN( VERCOD_CID );
HB_FUNC_EXTERN( PROG );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( IBR_COMANDO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACMDFE )
{ "SACMDFE", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACMDFE )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MMODAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRNTRC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPLACA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MRENAVAN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTARA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAPKG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCAPM3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTPROD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTPCAR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTPPROP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MXNOME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUFINI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUFFIM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSERIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MOVNT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_DEMO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQTD_LIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MACHOU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_DEMO_AUX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCEP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "INICIA_ACBR", {HB_FS_PUBLIC}, {HB_FUNCNAME( INICIA_ACBR )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DRAWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DRAWLABEL )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_UF )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "SCROLL", {HB_FS_PUBLIC}, {HB_FUNCNAME( SCROLL )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "MUF_DESC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "LEXIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "MDOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_COMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_COMMITTRANSACTION )}, NULL },
{ "E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "VALTOPRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTOPRG )}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "MDATA_NFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "VERCOD_UF", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCOD_UF )}, NULL },
{ "VERCOD_CID", {HB_FS_PUBLIC}, {HB_FUNCNAME( VERCOD_CID )}, NULL },
{ "MCGC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "H", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG )}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "IBR_COMANDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_COMANDO )}, NULL },
{ "(_INITSTATICS00001)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACMDFE )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACMDFE
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACMDFE = hb_vm_SymbolInit_SACMDFE;
   #pragma data_seg()
#endif

HB_FUNC( SACMDFE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 41, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 39, 0,	/* 39 */
	HB_P_LOCALNEARSETSTR, 3, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', 'M', 'D', 'F', 'E', 0, 
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* F 0*/
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MDOCUMENTO 0*/
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MTOT_CARGA 0*/
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MPESO_CARGA 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MCIDA */
	HB_P_LOCALNEARSETSTR, 11, 1, 0,	/* SLINHAS 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 12, 3, 0,	/* MUF 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* MRETORNO 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 14, 1, 0,	/* MCAMMDFE 1*/
	0, 
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MVALOR 0*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MPESO 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 27,	/* MMUNCARREGA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* MMUNDESCARGA */
	HB_P_LOCALNEARSETSTR, 42, 1, 0,	/* MSEGCODBARRA 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 43, 2, 0,	/* MTPEMIT 2*/
	'2', 0, 
/* 00106 */ HB_P_LINEOFFSET, 4,	/* 43 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PUSHSYMNEAR, 24,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MMODAL */
	HB_P_PUSHSYMNEAR, 3,	/* MRNTRC */
	HB_P_PUSHSYMNEAR, 4,	/* MPLACA */
	HB_P_PUSHSYMNEAR, 5,	/* MRENAVAN */
	HB_P_PUSHSYMNEAR, 6,	/* MTARA */
	HB_P_PUSHSYMNEAR, 7,	/* MCAPKG */
	HB_P_PUSHSYMNEAR, 8,	/* MCAPM3 */
	HB_P_PUSHSYMNEAR, 9,	/* MTPROD */
	HB_P_PUSHSYMNEAR, 10,	/* MTPCAR */
	HB_P_PUSHSYMNEAR, 11,	/* MTPPROP */
	HB_P_PUSHSYMNEAR, 12,	/* MXNOME */
	HB_P_PUSHSYMNEAR, 13,	/* MCPF */
	HB_P_PUSHSYMNEAR, 14,	/* MUFINI */
	HB_P_PUSHSYMNEAR, 15,	/* MUFFIM */
	HB_P_PUSHSYMNEAR, 16,	/* MSERIE */
	HB_P_PUSHSYMNEAR, 17,	/* M_MOVNT */
	HB_P_PUSHSYMNEAR, 18,	/* M_DEMO */
	HB_P_PUSHSYMNEAR, 19,	/* MQTD_LIN */
	HB_P_PUSHSYMNEAR, 20,	/* MACHOU */
	HB_P_PUSHSYMNEAR, 21,	/* M_CLI */
	HB_P_PUSHSYMNEAR, 22,	/* M_DEMO_AUX */
	HB_P_PUSHSYMNEAR, 23,	/* MCEP */
	HB_P_DOSHORT, 22,
	HB_P_POPVARIABLE, 23, 0,	/* MCEP */
	HB_P_POPVARIABLE, 22, 0,	/* M_DEMO_AUX */
	HB_P_POPVARIABLE, 21, 0,	/* M_CLI */
	HB_P_POPVARIABLE, 20, 0,	/* MACHOU */
	HB_P_POPVARIABLE, 19, 0,	/* MQTD_LIN */
	HB_P_POPVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_POPVARIABLE, 17, 0,	/* M_MOVNT */
/* 00195 */ HB_P_LINEOFFSET, 6,	/* 45 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHVARIABLE, 26, 0,	/* MEMP_RESA */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 27, 0,	/* MVERSAO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', ' ', '*', '*', '*', ' ', 'M', ' ', 'F', ' ', 'D', ' ', '-', ' ', 'e', ' ', '*', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 00246 */ HB_P_LINEOFFSET, 8,	/* 47 */
	HB_P_PUSHSYMNEAR, 28,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00255 */ HB_P_LINEOFFSET, 12,	/* 51 */
	HB_P_PUSHSYMNEAR, 29,	/* INICIA_ACBR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 00277) */
/* 00264 */ HB_P_LINEOFFSET, 13,	/* 52 */
	HB_P_PUSHSYMNEAR, 30,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00272 */ HB_P_LINEOFFSET, 14,	/* 53 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00277 */ HB_P_LINEOFFSET, 18,	/* 57 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 't', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00320 */ HB_P_LINEOFFSET, 19,	/* 58 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'[', '1', ']', ' ', 'P', 'r', 'e', 's', 't', 'a', 'd', 'o', 'r', ' ', 'S', 'e', 'r', 'v', '.', 'T', 'r', 'a', 'n', 's', 'p', '.', ' ', '[', '2', ']', ' ', 'T', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'a', 'o', 'r', ' ', 'C', 'a', 'r', 'g', 'a', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'a', ' ', '[', '3', ']', ' ', 'P', 'r', 'e', 's', 't', 'a', 'd', 'o', 'r', ' ', 's', 'e', 'r', 'v', 'i', 231, 'o', ' ', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'e', ' ', 'q', 'u', 'e', ' ', 'e', 'm', 'i', 't', 'i', 'r', 225, ' ', 'C', 'T', '-', 'e', ' ', 'G', 'l', 'o', 'b', 'a', 'l', 'i', 'z', 'a', 'd', 'o', '.', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 00469 */ HB_P_LINEOFFSET, 20,	/* 59 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'o', 'd', 'a', 'l', 'i', 'd', 'a', 'd', 'e', ' ', 't', 'r', 'a', 'n', 's', 'p', 'o', 'r', 't', 'e', '.', ':', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00512 */ HB_P_LINEOFFSET, 21,	/* 60 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'[', '1', ']', ' ', 'R', 'o', 'd', 'o', 'v', 'i', 'a', 'r', 'i', 'o', ' ', '[', '2', ']', ' ', 'A', 'e', 'r', 'e', 'o', ' ', '[', '3', ']', ' ', 'A', 'q', 'u', 'a', 'v', 'i', 'a', 'r', 'i', 'o', ' ', '[', '4', ']', ' ', 'F', 'e', 'r', 'r', 'o', 'v', 'i', 'a', 'r', 'i', 'o', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 00596 */ HB_P_LINEOFFSET, 22,	/* 61 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'S', 'e', 'r', 'i', 'e', ' ', 'M', 'F', 'D', '-', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00637 */ HB_P_LINEOFFSET, 23,	/* 62 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'U', 'F', ' ', 'C', 'a', 'r', 'r', 'e', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', 'M', 'u', 'n', 'i', 'c', 'i', 'p', 'i', 'o', ' ', 'C', 'a', 'r', 'r', 'e', 'g', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00702 */ HB_P_LINEOFFSET, 24,	/* 63 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'F', ' ', 'D', 'e', 's', 'c', 'a', 'r', 'r', 'e', 'g', 'a', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00743 */ HB_P_LINEOFFSET, 25,	/* 64 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00752 */ HB_P_LINEOFFSET, 26,	/* 65 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00767 */ HB_P_LINEOFFSET, 27,	/* 66 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'D', 'a', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', ' ', 'c', 'o', 'm', ' ', 'a', ' ', 'T', 'r', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00815 */ HB_P_LINEOFFSET, 28,	/* 67 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00823 */ HB_P_LINEOFFSET, 29,	/* 68 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'N', 'T', 'R', 'C', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00864 */ HB_P_LINEOFFSET, 30,	/* 69 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'l', 'a', 'c', 'a', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00905 */ HB_P_LINEOFFSET, 31,	/* 70 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'F', ' ', 'd', 'a', ' ', 'P', 'l', 'a', 'c', 'a', ' ', 'd', 'o', ' ', 'V', 'e', 'i', 'c', 'u', 'l', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00946 */ HB_P_LINEOFFSET, 32,	/* 71 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'E', 'N', 'A', 'V', 'A', 'N', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00987 */ HB_P_LINEOFFSET, 33,	/* 72 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'A', 'R', 'A', ' ', 'K', 'G', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01022 */ HB_P_LINEOFFSET, 34,	/* 73 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'a', 'p', 'a', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'e', 'm', ' ', 'K', 'G', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01063 */ HB_P_LINEOFFSET, 35,	/* 74 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'a', 'p', 'a', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'e', 'm', ' ', 'M', '3', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01104 */ HB_P_LINEOFFSET, 36,	/* 75 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'R', 'o', 'd', 'a', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01145 */ HB_P_LINEOFFSET, 37,	/* 76 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 78,	/* 78 */
	'[', '0', '1', ']', 'T', 'r', 'u', 'c', 'k', ' ', ' ', '[', '0', '2', ']', 'T', 'o', 'c', 'o', ' ', ' ', '[', '0', '3', ']', 'C', 'a', 'v', 'a', 'l', 'o', ' ', 'M', 'e', 'c', 'a', 'n', 'i', 'c', 'o', ' ', ' ', '[', '0', '4', ']', 'V', 'A', 'N', ' ', ' ', '[', '0', '5', ']', 'U', 't', 'i', 'l', 'i', 't', 'a', 'r', 'i', 'o', ' ', ' ', '[', '0', '6', ']', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01252 */ HB_P_LINEOFFSET, 38,	/* 77 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'r', 'r', 'o', 'c', 'e', 'r', 'i', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01293 */ HB_P_LINEOFFSET, 39,	/* 78 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 89,	/* 89 */
	'[', '0', '0', ']', 'N', 'a', 'o', ' ', 'a', 'p', 'l', 'i', 'c', 'a', 'v', 'e', 'l', ' ', '[', '0', '1', ']', 'A', 'b', 'e', 'r', 't', 'a', ' ', '[', '0', '2', ']', 'F', 'e', 'c', 'h', 'a', 'd', 'a', '/', 'B', 'a', 'u', ' ', '[', '0', '3', ']', 'G', 'r', 'a', 'n', 'e', 'l', 'e', 'r', 'a', ' ', '[', '0', '4', ']', 'P', 'o', 'r', 't', 'a', ' ', 'C', 'o', 'n', 't', 'a', 'i', 'n', 'e', 'r', ' ', '[', '0', '5', ']', 'S', 'i', 'd', 'e', 'r', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01411 */ HB_P_LINEOFFSET, 40,	/* 79 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 't', 225, 'r', 'i', 'o', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 01453 */ HB_P_LINEOFFSET, 41,	/* 80 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'[', '0', ']', 'T', 'A', 'C', ' ', 'A', 'g', 'r', 'e', 'g', 'a', 'd', 'o', ' ', ' ', ' ', '[', '1', ']', 'T', 'A', 'C', ' ', 'I', 'n', 'd', 'e', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', ' ', ' ', ' ', '[', '2', ']', 'O', 'u', 't', 'r', 'o', 's', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01532 */ HB_P_LINEOFFSET, 42,	/* 81 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01541 */ HB_P_LINEOFFSET, 43,	/* 82 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 01556 */ HB_P_LINEOFFSET, 44,	/* 83 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'a', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 01591 */ HB_P_LINEOFFSET, 45,	/* 84 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01599 */ HB_P_LINEOFFSET, 46,	/* 85 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'l', 'a', 'c', 'a', ' ', 'd', 'o', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01640 */ HB_P_LINEOFFSET, 47,	/* 86 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'F', ' ', 'd', 'a', ' ', 'P', 'l', 'a', 'c', 'a', ' ', 'd', 'o', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01681 */ HB_P_LINEOFFSET, 48,	/* 87 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'E', 'N', 'A', 'V', 'A', 'N', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01722 */ HB_P_LINEOFFSET, 49,	/* 88 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'A', 'R', 'A', ' ', 'K', 'G', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01757 */ HB_P_LINEOFFSET, 50,	/* 89 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'a', 'p', 'a', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'e', 'm', ' ', 'K', 'G', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01798 */ HB_P_LINEOFFSET, 51,	/* 90 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'a', 'p', 'a', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'e', 'm', ' ', 'M', '3', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01839 */ HB_P_LINEOFFSET, 52,	/* 91 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'N', 'P', 'J', '/', 'C', 'P', 'F', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01880 */ HB_P_LINEOFFSET, 53,	/* 92 */
	HB_P_PUSHSYMNEAR, 33,	/* DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHSTRSHORT, 85,	/* 85 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'c', 'a', 'm', 'p', 'o', 's', ' ', 'a', 'b', 'a', 'i', 'x', 'o', ' ', 'a', 'p', 'e', 'n', 'a', 's', ' ', 's', 'e', ' ', 'o', ' ', 'p', 'r', 'o', 'p', 'r', 'i', 'e', 't', 225, 'r', 'i', 'o', ' ', 'd', 'o', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', ' ', 'n', 227, 'o', ' ', 'f', 'o', 'r', ' ', 'o', ' ', 'e', 'm', 'i', 't', 'e', 'n', 't', 'e', ' ', 'd', 'o', ' ', 'M', 'D', 'F', 'e', 0, 
	HB_P_PUSHINT, 210, 0,	/* 210 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'r', 'i', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 8,
/* 01994 */ HB_P_LINEOFFSET, 54,	/* 93 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'N', 'T', 'R', 'C', ' ', 'd', 'o', ' ', 'R', 'e', 'b', 'o', 'q', 'u', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02035 */ HB_P_LINEOFFSET, 55,	/* 94 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 't', 'a', 'r', 'i', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02076 */ HB_P_LINEOFFSET, 56,	/* 95 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'e', 's', 't', 'a', 'd', 'u', 'a', 'l', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02117 */ HB_P_LINEOFFSET, 57,	/* 96 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'F', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 't', 'a', 'r', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02158 */ HB_P_LINEOFFSET, 58,	/* 97 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'p', 'r', 'i', 'e', 't', 'a', 'r', 'i', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02199 */ HB_P_LINEOFFSET, 59,	/* 98 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'a', 'r', 'r', 'o', 'c', 'e', 'r', 'i', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02240 */ HB_P_LINEOFFSET, 60,	/* 99 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 02249 */ HB_P_LINEOFFSET, 61,	/* 100 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02264 */ HB_P_LINEOFFSET, 62,	/* 101 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'c', 'o', 'e', 's', ' ', 'd', 'o', '(', 's', ')', ' ', 'C', 'o', 'n', 'd', 'u', 't', 'o', 'r', '(', 's', ')', ' ', 'd', 'o', ' ', 'v', 'e', 'i', 'c', 'u', 'l', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02323 */ HB_P_LINEOFFSET, 63,	/* 102 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02331 */ HB_P_LINEOFFSET, 64,	/* 103 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 'd', 'u', 't', 'o', 'r', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02372 */ HB_P_LINEOFFSET, 65,	/* 104 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'P', 'F', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 'd', 'u', 't', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02413 */ HB_P_LINEOFFSET, 66,	/* 105 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '1', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02454 */ HB_P_LINEOFFSET, 67,	/* 106 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '2', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02495 */ HB_P_LINEOFFSET, 68,	/* 107 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '3', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02536 */ HB_P_LINEOFFSET, 69,	/* 108 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '4', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02577 */ HB_P_LINEOFFSET, 70,	/* 109 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '5', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02618 */ HB_P_LINEOFFSET, 71,	/* 110 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '6', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02659 */ HB_P_LINEOFFSET, 72,	/* 111 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '7', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02700 */ HB_P_LINEOFFSET, 73,	/* 112 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '8', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02741 */ HB_P_LINEOFFSET, 74,	/* 113 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '9', ' ', 'U', 'F', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02782 */ HB_P_LINEOFFSET, 75,	/* 114 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'n', 'f', 'o', 'r', 'm', 'a', 'r', ' ', 'P', 'e', 'r', 'c', 'u', 's', 'o', ' ', '1', '0', ' ', 'U', 'F', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02823 */ HB_P_LINEOFFSET, 76,	/* 115 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'n', 'o', 't', 'a', ' ', 'f', 'i', 's', 'c', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02864 */ HB_P_LINEOFFSET, 99,	/* 138 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 29,	/* REB_PLACA */
/* 02875 */ HB_P_LINEOFFSET, 100,	/* 139 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* REB_RENAVAM */
/* 02886 */ HB_P_LINEOFFSET, 101,	/* 140 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 31,	/* REB_TARA */
/* 02897 */ HB_P_LINEOFFSET, 102,	/* 141 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* REB_CAPKG */
/* 02908 */ HB_P_LINEOFFSET, 103,	/* 142 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 33,	/* REB_CAPM3 */
/* 02919 */ HB_P_LINEOFFSET, 104,	/* 143 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 34,	/* REB_UF */
/* 02930 */ HB_P_LINEOFFSET, 105,	/* 144 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 35,	/* REB_CNPJCPF */
/* 02941 */ HB_P_LINEOFFSET, 106,	/* 145 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 36,	/* REB_RNTRC */
/* 02952 */ HB_P_LINEOFFSET, 107,	/* 146 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 37,	/* REB_XNOME */
/* 02963 */ HB_P_LINEOFFSET, 108,	/* 147 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 38,	/* REB_IE */
/* 02974 */ HB_P_LINEOFFSET, 109,	/* 148 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 39,	/* REB_UFPROP */
/* 02985 */ HB_P_LINEOFFSET, 110,	/* 149 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 40,	/* REB_TPPROP */
/* 02995 */ HB_P_LINEOFFSET, 111,	/* 150 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 41,	/* REB_TPCAR */
/* 03006 */ HB_P_LINEOFFSET, 112,	/* 151 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 22, 0,	/* M_DEMO_AUX */
/* 03014 */ HB_P_LINEOFFSET, 113,	/* 152 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* M_DEMO */
/* 03022 */ HB_P_LINEOFFSET, 114,	/* 153 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MMODAL */
/* 03031 */ HB_P_LINEOFFSET, 115,	/* 154 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_POPVARIABLE, 11, 0,	/* MTPPROP */
/* 03040 */ HB_P_LINEOFFSET, 116,	/* 155 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MRNTRC */
/* 03052 */ HB_P_LINEOFFSET, 117,	/* 156 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MPLACA */
/* 03064 */ HB_P_LINEOFFSET, 118,	/* 157 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 13, 0,	/* MCPF */
	HB_P_POPVARIABLE, 5, 0,	/* MRENAVAN */
/* 03080 */ HB_P_LINEOFFSET, 119,	/* 158 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 8, 0,	/* MCAPM3 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 7, 0,	/* MCAPKG */
	HB_P_POPVARIABLE, 6, 0,	/* MTARA */
/* 03100 */ HB_P_LINEOFFSET, 120,	/* 159 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MPERCUSO10 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 25,	/* MPERCUSO9 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MPERCUSO8 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 23,	/* MPERCUSO7 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 22,	/* MPERCUSO6 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MPERCUSO5 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MPERCUSO4 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MPERCUSO3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MPERCUSO2 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MPERCUSO1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 16, 0,	/* MSERIE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 10, 0,	/* MTPCAR */
	HB_P_POPVARIABLE, 9, 0,	/* MTPROD */
/* 03154 */ HB_P_LINEOFFSET, 121,	/* 160 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 12, 0,	/* MXNOME */
/* 03166 */ HB_P_LINEOFFSET, 122,	/* 161 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MCIDA */
/* 03177 */ HB_P_LINEOFFSET, 123,	/* 162 */
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 14, 0,	/* MUFINI */
/* 03195 */ HB_P_LINEOFFSET, 124,	/* 163 */
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 27,	/* MMUNCARREGA */
/* 03208 */ HB_P_LINEOFFSET, 125,	/* 164 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 28,	/* MMUNDESCARGA */
/* 03219 */ HB_P_LINEOFFSET, 126,	/* 165 */
	HB_P_LOCALNEARSETSTR, 43, 2, 0,	/* MTPEMIT 2*/
	'2', 0, 
/* 03227 */ HB_P_LINEOFFSET, 127,	/* 166 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MTPEMIT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03265) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03270) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'p', 'e', 'm', 'i', 't', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MTPEMIT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '2', '3', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03321 */ HB_P_LINEOFFSET, 128,	/* 167 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'm', 'o', 'd', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MMODAL */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'1', '2', '3', '4', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03385 */ HB_P_LINEOFFSET, 129,	/* 168 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 's', 'e', 'r', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MSERIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03434) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 03435) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03453 */ HB_P_LINEOFFSET, 130,	/* 169 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'u', 'f', 'i', 'n', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MUFINI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03503) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 03511) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MUFINI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03529 */ HB_P_LINEOFFSET, 131,	/* 170 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MMUNCARREGA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03568) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03573) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'M', 'u', 'n', 'C', 'a', 'r', 'r', 'e', 'g', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	27, 0,	/* MMUNCARREGA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03614) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 03615) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03633 */ HB_P_LINEOFFSET, 132,	/* 171 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'u', 'f', 'f', 'i', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03683) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 03691) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03709 */ HB_P_LINEOFFSET, 133,	/* 172 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'r', 'n', 't', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03758 */ HB_P_LINEOFFSET, 134,	/* 173 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'l', 'a', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03811 */ HB_P_LINEOFFSET, 135,	/* 174 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MUF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03850) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03855) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'm', 'u', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	12, 0,	/* MUF */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03888) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 03895) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03913 */ HB_P_LINEOFFSET, 136,	/* 175 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'r', 'e', 'n', 'a', 'v', 'a', 'n', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03964 */ HB_P_LINEOFFSET, 137,	/* 176 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'a', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04020 */ HB_P_LINEOFFSET, 138,	/* 177 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'a', 'p', 'k', 'g', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04077 */ HB_P_LINEOFFSET, 139,	/* 178 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'c', 'a', 'p', 'm', '3', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04134 */ HB_P_LINEOFFSET, 140,	/* 179 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', 'R', 'o', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MTPROD */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'0', '0', '0', '1', '0', '2', '0', '3', '0', '4', '0', '5', '0', '6', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04210 */ HB_P_LINEOFFSET, 141,	/* 180 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'p', 'c', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MTPCAR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'0', '0', '0', '1', '0', '2', '0', '3', '0', '4', '0', '5', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04284 */ HB_P_LINEOFFSET, 142,	/* 181 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'p', 'P', 'r', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTPPROP */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '1', '2', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04349 */ HB_P_LINEOFFSET, 144,	/* 183 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04388) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04393) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 'p', 'l', 'a', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04429 */ HB_P_LINEOFFSET, 145,	/* 184 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* REB_UF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04468) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04473) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'r', 'e', 'b', '_', 'U', 'F', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	34, 0,	/* REB_UF */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04509) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 04516) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04551 */ HB_P_LINEOFFSET, 146,	/* 185 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* REB_RENAVAM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04590) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04595) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'r', 'e', 'b', '_', 'R', 'E', 'N', 'A', 'V', 'A', 'M', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04646 */ HB_P_LINEOFFSET, 147,	/* 186 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* REB_TARA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04685) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04690) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'r', 'e', 'b', '_', 't', 'a', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04746 */ HB_P_LINEOFFSET, 148,	/* 187 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	32, 0,	/* REB_CAPKG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04785) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04790) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 'c', 'a', 'p', 'K', 'G', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04847 */ HB_P_LINEOFFSET, 149,	/* 188 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	33, 0,	/* REB_CAPM3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04886) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04891) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 'c', 'a', 'p', 'M', '3', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04948 */ HB_P_LINEOFFSET, 150,	/* 189 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	35, 0,	/* REB_CNPJCPF */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04987) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04992) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'r', 'e', 'b', '_', 'C', 'N', 'P', 'J', 'C', 'P', 'F', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05047 */ HB_P_LINEOFFSET, 151,	/* 190 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	36, 0,	/* REB_RNTRC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05086) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05091) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 'R', 'N', 'T', 'R', 'C', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05140 */ HB_P_LINEOFFSET, 152,	/* 191 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* REB_XNOME */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05179) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05184) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 'x', 'N', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05237 */ HB_P_LINEOFFSET, 153,	/* 192 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	38, 0,	/* REB_IE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05276) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05281) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'r', 'e', 'b', '_', 'I', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05327 */ HB_P_LINEOFFSET, 154,	/* 193 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* REB_UFPROP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05366) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05371) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'r', 'e', 'b', '_', 'U', 'F', 'P', 'r', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* REB_UFPROP */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05411) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 05418) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05453 */ HB_P_LINEOFFSET, 155,	/* 194 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	40, 0,	/* REB_TPPROP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05492) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05497) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'r', 'e', 'b', '_', 't', 'p', 'P', 'r', 'o', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05551 */ HB_P_LINEOFFSET, 156,	/* 195 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	41, 0,	/* REB_TPCAR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05590) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05595) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'r', 'e', 'b', '_', 't', 'p', 'C', 'a', 'r', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* REB_PLACA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05648 */ HB_P_LINEOFFSET, 158,	/* 197 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'x', 'N', 'o', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05701 */ HB_P_LINEOFFSET, 159,	/* 198 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'p', 'f', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05748 */ HB_P_LINEOFFSET, 160,	/* 199 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPERCUSO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05787) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05792) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPERCUSO1 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05844 */ HB_P_LINEOFFSET, 161,	/* 200 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MPERCUSO2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05883) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05888) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '2', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MPERCUSO2 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MPERCUSO1 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05957 */ HB_P_LINEOFFSET, 162,	/* 201 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPERCUSO3 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05996) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06001) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '3', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPERCUSO3 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MPERCUSO2 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06070 */ HB_P_LINEOFFSET, 163,	/* 202 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MPERCUSO4 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06109) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06114) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '4', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MPERCUSO4 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPERCUSO3 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06183 */ HB_P_LINEOFFSET, 164,	/* 203 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MPERCUSO5 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06222) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06227) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '5', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MPERCUSO5 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MPERCUSO4 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06296 */ HB_P_LINEOFFSET, 165,	/* 204 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MPERCUSO6 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06335) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06340) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '6', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MPERCUSO6 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	21, 0,	/* MPERCUSO5 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06409 */ HB_P_LINEOFFSET, 166,	/* 205 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MPERCUSO7 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06448) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06453) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '7', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MPERCUSO7 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	22, 0,	/* MPERCUSO6 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06522 */ HB_P_LINEOFFSET, 167,	/* 206 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MPERCUSO8 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06561) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06566) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '8', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MPERCUSO8 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	23, 0,	/* MPERCUSO7 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06635 */ HB_P_LINEOFFSET, 168,	/* 207 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MPERCUSO9 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06674) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06679) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '9', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MPERCUSO9 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MPERCUSO8 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06748 */ HB_P_LINEOFFSET, 169,	/* 208 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MPERCUSO10 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06787) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06792) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'p', 'e', 'r', 'c', 'u', 's', 'o', '1', '0', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	26, 0,	/* MPERCUSO10 */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MPERCUSO9 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06862 */ HB_P_LINEOFFSET, 170,	/* 209 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 06884 */ HB_P_LINEOFFSET, 171,	/* 210 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 06908) */
/* 06896 */ HB_P_LINEOFFSET, 172,	/* 211 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06903 */ HB_P_LINEOFFSET, 173,	/* 212 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06908 */ HB_P_LINEOFFSET, 175,	/* 214 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'N', 'O', 'T', 'A', ' ', 'S', 'O', 'L', 'I', 'C', 'I', 'T', 'A', 'D', 'A', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 06943 */ HB_P_LINEOFFSET, 177,	/* 216 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MPESO 0*/
	HB_P_PUSHLOCALNEAR, 16,	/* MPESO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MVALOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MPESO_CARGA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MTOT_CARGA */
	HB_P_POPLOCALNEAR, 7,	/* MDOCUMENTO */
/* 06962 */ HB_P_LINEOFFSET, 178,	/* 217 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MCIDA */
/* 06973 */ HB_P_LINEOFFSET, 179,	/* 218 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 07004) */
/* 06988 */ HB_P_LINEOFFSET, 180,	/* 219 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 246, 255,	/* -10*/
	HB_P_POPVARIABLE, 19, 0,	/* MQTD_LIN */
/* 07004 */ HB_P_LINEOFFSET, 182,	/* 221 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* F 0*/
/* 07010 */ HB_P_LINEOFFSET, 183,	/* 222 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07025 */ HB_P_LINEOFFSET, 184,	/* 223 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 110,	/* 110 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'U', 'F', ' ', ' ', ' ', ' ', 'V', 'l', 'r', ' ', 'N', 'o', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 07152 */ HB_P_LINEOFFSET, 185,	/* 224 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07167 */ HB_P_LINEOFFSET, 186,	/* 225 */
	HB_P_PUSHSYMNEAR, 35,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07182 */ HB_P_LINEOFFSET, 187,	/* 226 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 07191 */ HB_P_LINEOFFSET, 188,	/* 227 */
	HB_P_PUSHSYMNEAR, 49,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_DOSHORT, 4,
/* 07205 */ HB_P_LINEOFFSET, 189,	/* 228 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 07211 */ HB_P_LINEOFFSET, 190,	/* 229 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 19, 1,	/* 275 (abs: 07503) */
/* 07231 */ HB_P_LINEOFFSET, 191,	/* 230 */
	HB_P_PUSHSYMNEAR, 50,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07246 */ HB_P_LINEOFFSET, 192,	/* 231 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 99,	/* 99 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07389 */ HB_P_LINEOFFSET, 193,	/* 232 */
	HB_P_PUSHSYMNEAR, 50,	/* SCROLL */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 119,	/* 119 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07404 */ HB_P_LINEOFFSET, 194,	/* 233 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'C', 'h', 'a', 'v', 'e', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07462 */ HB_P_LINEOFFSET, 195,	/* 234 */
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_CARGA */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 8,	/* MTOT_CARGA */
/* 07478 */ HB_P_LINEOFFSET, 196,	/* 235 */
	HB_P_PUSHLOCALNEAR, 9,	/* MPESO_CARGA */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 9,	/* MPESO_CARGA */
/* 07494 */ HB_P_LINEOFFSET, 197,	/* 236 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 229, 254,	/* -283 (abs: 07217) */
/* 07503 */ HB_P_LINEOFFSET, 198,	/* 237 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'o', 't', 'a', 'l', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_CARGA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'e', 's', 'o', ' ', 'd', 'a', ' ', 'C', 'a', 'r', 'g', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPESO_CARGA */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07609 */ HB_P_LINEOFFSET, 200,	/* 239 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 07617 */ HB_P_LINEOFFSET, 201,	/* 240 */
	HB_P_PUSHSYMNEAR, 54,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'S', 'U', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 'o', 'u', ' ', 'd', 'i', 'g', 'i', 't', 'e', ' ', '9', '9', '9', '9', '9', '9', ' ', 'p', 'a', 'r', 'a', ' ', 'N', 'O', 'T', 'A', ' ', 'D', 'E', ' ', 'T', 'E', 'R', 'C', 'E', 'I', 'R', 'O', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07696 */ HB_P_LINEOFFSET, 202,	/* 241 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'n', 'o', 't', 'a', ' ', 'f', 'i', 's', 'c', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07736 */ HB_P_LINEOFFSET, 203,	/* 242 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDOCUMENTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07774) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07779) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07820 */ HB_P_LINEOFFSET, 204,	/* 243 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 07842 */ HB_P_LINEOFFSET, 205,	/* 244 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07857) */
	HB_P_JUMP, 192, 10,	/* 2752 (abs: 10606) */
/* 07857 */ HB_P_LINEOFFSET, 208,	/* 247 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 122,	/* 122 (abs: 07988) */
/* 07868 */ HB_P_LINEOFFSET, 209,	/* 248 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDOCUMENTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07906) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07911) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07952 */ HB_P_LINEOFFSET, 210,	/* 249 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 07974 */ HB_P_LINEOFFSET, 211,	/* 250 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07988) */
	HB_P_JUMP, 61, 10,	/* 2621 (abs: 10606) */
/* 07988 */ HB_P_LINEOFFSET, 215,	/* 254 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 20, 0,	/* MACHOU */
	HB_P_POPLOCALNEAR, 5,	/* I */
/* 07997 */ HB_P_LINEOFFSET, 216,	/* 255 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 08102) */
/* 08016 */ HB_P_LINEOFFSET, 217,	/* 256 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', 'F', 0, 
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 08094) */
/* 08044 */ HB_P_LINEOFFSET, 218,	/* 257 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 20, 0,	/* MACHOU */
/* 08050 */ HB_P_LINEOFFSET, 219,	/* 258 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'J', 'a', ' ', 'f', 'o', 'i', ' ', 'i', 'n', 'c', 'l', 'u', 'i', 'd', 'a', ' ', 'e', 's', 't', 'a', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 08102) */
/* 08094 */ HB_P_LINEOFFSET, 222,	/* 261 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 159,	/* -97 (abs: 08003) */
/* 08102 */ HB_P_LINEOFFSET, 223,	/* 262 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MACHOU */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08114) */
	HB_P_JUMP, 112, 251,	/* -1168 (abs: 06943) */
/* 08114 */ HB_P_LINEOFFSET, 227,	/* 266 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* M_MOVNT */
/* 08122 */ HB_P_LINEOFFSET, 229,	/* 268 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 140,	/* 140 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'u', 'f', '_', 'c', 'l', 'i', ',', 'c', 'a', 'm', 'n', 'f', 'e', ',', 'm', 'o', 'd', 'e', 'l', 'o', ',', 's', 'e', 'r', 'i', 'e', ',', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', ')', ',', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'e', 's', 'o', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', 'F', 0, 
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 100,	/* 100 */
	' ', 'G', 'R', 'O', 'U', 'P', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'u', 'f', '_', 'c', 'l', 'i', ',', 'c', 'a', 'm', 'n', 'f', 'e', ',', 'm', 'o', 'd', 'e', 'l', 'o', ',', 's', 'e', 'r', 'i', 'e', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 17, 0,	/* M_MOVNT */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08406 */ HB_P_LINEOFFSET, 230,	/* 269 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08430 */ HB_P_LINEOFFSET, 231,	/* 270 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* M_MOVNT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 245, 4,	/* 1269 (abs: 09711) */
/* 08445 */ HB_P_LINEOFFSET, 232,	/* 271 */
	HB_P_PUSHSYMNEAR, 60,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'a', ' ', 'n', 'o', 't', 'a', '.', '.', '.', '.', ' ', 'D', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'm', 'a', 'n', 'u', 'a', 'l', 'm', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 08521 */ HB_P_LINEOFFSET, 233,	/* 272 */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 08542) */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08547) */
	HB_P_JUMP, 191, 249,	/* -1601 (abs: 06943) */
/* 08547 */ HB_P_LINEOFFSET, 236,	/* 275 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 42,	/* MSEGCODBARRA */
	HB_P_POPLOCALNEAR, 14,	/* MCAMMDFE */
/* 08561 */ HB_P_LINEOFFSET, 237,	/* 276 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_POPVARIABLE, 61, 0,	/* MUF_DESC */
/* 08571 */ HB_P_LINEOFFSET, 238,	/* 277 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'I', 'N', 'C', 'L', 'U', 'I', 'R', ' ', 'N', 'O', 'T', 'A', ' ', 'M', 'A', 'N', 'U', 'A', 'L', 'M', 'E', 'N', 'T', 'E', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 08615 */ HB_P_LINEOFFSET, 239,	/* 278 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'N', 'U', 'M', 'E', 'R', 'O', ' ', 'D', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 'F', 'I', 'S', 'C', 'A', 'L', ' ', 'E', 'L', 'E', 'T', 'R', 'O', 'N', 'I', 'C', 'A', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08665 */ HB_P_LINEOFFSET, 240,	/* 279 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 08674 */ HB_P_LINEOFFSET, 241,	/* 280 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 08692 */ HB_P_LINEOFFSET, 242,	/* 281 */
	HB_P_PUSHSYMNEAR, 34,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08700 */ HB_P_LINEOFFSET, 243,	/* 282 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'C', 'h', 'a', 'v', 'e', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08750 */ HB_P_LINEOFFSET, 244,	/* 283 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'o', ' ', 'd', 'e', 's', 'c', 'a', 'r', 'r', 'e', 'g', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08801 */ HB_P_LINEOFFSET, 245,	/* 284 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'U', 'F', ' ', 'd', 'o', ' ', 'd', 'e', 's', 'c', 'a', 'r', 'r', 'e', 'g', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08852 */ HB_P_LINEOFFSET, 246,	/* 285 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08903 */ HB_P_LINEOFFSET, 247,	/* 286 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'e', 's', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', ' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 08954 */ HB_P_LINEOFFSET, 248,	/* 287 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'S', 'e', 'g', 'u', 'n', 'd', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'r', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09005 */ HB_P_LINEOFFSET, 249,	/* 288 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MCAMMDFE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09043) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09048) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'a', 'm', 'm', 'd', 'f', 'e', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09079 */ HB_P_LINEOFFSET, 250,	/* 289 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 09101 */ HB_P_LINEOFFSET, 251,	/* 290 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 09123) */
/* 09113 */ HB_P_LINEOFFSET, 252,	/* 291 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 127, 247,	/* -2177 (abs: 06943) */
/* 09123 */ HB_P_LINEOFFSET, 255,	/* 294 */
	HB_P_PUSHLOCALNEAR, 28,	/* MMUNDESCARGA */
	HB_P_POPLOCALNEAR, 10,	/* MCIDA */
/* 09129 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_POPVARIABLE, 61, 0,	/* MUF_DESC */
/* 09138 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCIDA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09178) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09183) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'c', 'i', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCIDA */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09218) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 09219) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09237 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'u', 'f', '_', 'd', 'e', 's', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 24,	/* 24 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MUF_DESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09290) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 09298) */
	HB_P_PUSHSYMNEAR, 44,	/* V_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 61, 0,	/* MUF_DESC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09316 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	15, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09356) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09361) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09406 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MPESO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09446) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09451) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 's', 'o', 0, 
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09495 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	42, 0,	/* MSEGCODBARRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09535) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09540) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 's', 'e', 'g', 'c', 'o', 'd', 'b', 'a', 'r', 'r', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09575 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 09598 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 60,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'n', 'o', 't', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 09631 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 09700) */
/* 09643 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* M_DEMO_AUX */
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MDOCUMENTO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHMEMVAR, 62, 0,	/* MDATA_SIS */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 61, 0,	/* MUF_DESC */
	HB_P_PUSHLOCALNEAR, 14,	/* MCAMMDFE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 15,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 10,	/* MCIDA */
	HB_P_PUSHLOCALNEAR, 16,	/* MPESO */
	HB_P_PUSHLOCALNEAR, 42,	/* MSEGCODBARRA */
	HB_P_ARRAYGEN, 12, 0,	/* 12 */
	HB_P_DOSHORT, 2,
/* 09700 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 92, 3,	/* 860 (abs: 10568) */
/* 09711 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 210, 1,	/* 466 (abs: 10198) */
/* 09735 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'E', 's', 't', 'a', ' ', 'n', 'o', 't', 'a', ' ', 'n', 'a', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'c', 'h', 'a', 'v', 'e', ' ', 'd', 'e', ' ', 'a', 'c', 'e', 's', 's', 'o', ' ', 'd', 'o', ' ', 'X', 'M', 'L', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09798 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'C', 'H', 'A', 'V', 'E', ' ', 'D', 'E', ' ', 'A', 'C', 'E', 'S', 'S', 'O', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 09834 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'C', 'h', 'a', 'v', 'e', ' ', 'd', 'e', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09885 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 63,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 64,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 6,	/* 6 */
	HB_P_PUSHVARIABLE, 17, 0,	/* M_MOVNT */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', '_', 'm', 'o', 'v', 'n', 't', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYGEN, 2, 0,	/* 2 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09952 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 09975 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 60,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 10010 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 10037) */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 10050) */
/* 10039 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 224, 243,	/* -3104 (abs: 06943) */
/* 10050 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'S', 'E', 'T', ' ', 'c', 'a', 'm', 'n', 'f', 'e', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'-', 'n', 'f', 'e', '.', 'x', 'm', 'l', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10165 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10190 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10198 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 60,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'n', 'o', 't', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 10231 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10246) */
	HB_P_JUMP, 28, 243,	/* -3300 (abs: 06943) */
/* 10246 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 21, 0,	/* M_CLI */
/* 10255 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 21, 0,	/* M_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10332 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10357 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* M_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 10427) */
/* 10372 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'n', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'd', 'e', 's', 't', 'a', ' ', 'n', 'o', 't', 'a', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 103, 242,	/* -3481 (abs: 06943) */
/* 10427 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* M_DEMO_AUX */
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 205, 255,	/* -51*/
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ONE,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 21, 0,	/* M_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* M_MOVNT */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 42,	/* MSEGCODBARRA */
	HB_P_ARRAYGEN, 12, 0,	/* 12 */
	HB_P_DOSHORT, 2,
/* 10568 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 66,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 22, 0,	/* M_DEMO_AUX */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_JUMP, 180, 241,	/* -3660 (abs: 06943) */
/* 10606 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 10630) */
/* 10619 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 115, 215,	/* -10381 (abs: 00246) */
/* 10630 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 99, 13,	/* 3427 (abs: 14070) */
/* 10646 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 38,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 39,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 41,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MPESO_CARGA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10686) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10691) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'p', 'e', 's', 'o', '_', 'c', 'a', 'r', 'g', 'a', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', '9', '9', '9', '9', '9', '9', '.', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10739 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 40, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 40, 0,	/* GETLIST */
/* 10762 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 60,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'O', ' ', 'P', 'E', 'S', 'O', ' ', 'B', 'R', 'U', 'T', 'O', ' ', 'D', 'A', ' ', 'C', 'A', 'R', 'G', 'A', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 4,	/* OPCAO */
/* 10810 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10818 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHLOCALNEAR, 4,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10833) */
	HB_P_JUMP, 168, 214,	/* -10584 (abs: 00246) */
/* 10833 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_TRUE,
	HB_P_POPVARIABLE, 67, 0,	/* LEXIT */
/* 10840 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHVARIABLE, 67, 0,	/* LEXIT */
	HB_P_JUMPFALSE, 249, 0,	/* 249 (abs: 11095) */
/* 10849 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHSYMNEAR, 68,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 192, 0, 0,	/* 192 (abs: 00011049) */
/* 10861 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 69, 0,	/* ARET */
/* 10870 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	's', 'e', 'l', 'e', 'c', 't', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'f', 'r', 'o', 'm', ' ', 's', 'a', 'c', 'n', 'o', 'm', 'd', 'f', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 69, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10919 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 71, 0,	/* MDOC */
/* 10947 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'u', 'p', 'd', 'a', 't', 'e', ' ', 's', 'a', 'c', 'n', 'o', 'm', 'd', 'f', ' ', 's', 'e', 't', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', ' ', 'd', 'a', 't', 'a', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 62, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11030 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 72,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11038 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_FALSE,
	HB_P_POPVARIABLE, 67, 0,	/* LEXIT */
/* 11045 */ HB_P_TRYEND, 39, 0, 0,	/* 39 (abs: 00011084) */
/* 11049 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00011049) */
	HB_P_POPVARIABLE, 73, 0,	/* E */
/* 11056 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 74,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* VALTOPRG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 11069 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 72,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 11077 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_TRUE,
	HB_P_POPVARIABLE, 67, 0,	/* LEXIT */
/* 11084 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 76,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 4, 255,	/* -252 (abs: 10840) */
/* 11095 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 54,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'R', 'I', 'A', 'N', 'D', 'O', ' ', 'a', ' ', 'M', 'D', 'F', '-', 'e', ' ', 'N', 'o', '.', ' ', 0, 
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11130 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'i', 'n', 'f', 'M', 'D', 'F', 'e', ']', 0, 
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 11151 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'v', 'e', 'r', 's', 'a', 'o', '=', '3', '.', '0', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 11177 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 62, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 79, 0,	/* MDATA_NFE */
/* 11202 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 80,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 135, 0,	/* 135 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 135, 0,	/* 135 */
	HB_P_ARRAYPOP,
/* 11235 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 80,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 135, 0,	/* 135 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'.', 0, 
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 135, 0,	/* 135 */
	HB_P_ARRAYPOP,
/* 11268 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'[', 'i', 'd', 'e', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'U', 'F', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 81,	/* VERCOD_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'M', 'o', 'd', 'e', 'l', 'o', '=', '5', '8', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'e', 'r', 'i', 'e', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MSERIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'p', 'r', 'o', 'c', 'E', 'm', 'i', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'd', 'h', 'E', 'm', 'i', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 51,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 62, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'E', 'm', 'i', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 43,	/* MTPEMIT */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	't', 'p', 'T', 'r', 'a', 'n', 's', 'p', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'd', 'a', 'l', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 2, 0,	/* MMODAL */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', 'i', 'n', 'i', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 14, 0,	/* MUFINI */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'u', 'f', 'f', 'i', 'm', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'M', 'D', 'F', ' ', '=', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'n', 'M', 'D', 'F', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'C', 'A', 'R', 'R', '0', '0', '1', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'c', 'M', 'u', 'n', 'C', 'a', 'r', 'r', 'e', 'g', 'a', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 82,	/* VERCOD_CID */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MMUNCARREGA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 14, 0,	/* MUFINI */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'x', 'M', 'u', 'n', 'C', 'a', 'r', 'r', 'e', 'g', 'a', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MMUNCARREGA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'[', 'E', 'm', 'i', 't', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'N', 'P', 'J', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 83, 0,	/* MCGC_FIRM */
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 83, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 83, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 83, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 83, 0,	/* MCGC_FIRM */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'I', 'E', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 128, 0,	/* 128 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'x', 'n', 'o', 'm', 'e', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'x', 'F', 'a', 'n', 't', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 130, 0,	/* 130 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'n', 'e', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'e', 'm', 'a', 'i', 'l', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'E', 'P', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 135, 0,	/* 135 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'X', 'L', 'g', 'r', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'N', 'r', 'o', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 160, 0,	/* 160 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'x', 'C', 'p', 'l', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 161, 0,	/* 161 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'x', 'B', 'a', 'i', 'r', 'r', 'o', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 133, 0,	/* 133 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'm', 'u', 'n', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 82,	/* VERCOD_CID */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'x', 'm', 'u', 'n', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'U', 'F', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'c', 'U', 'F', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 81,	/* VERCOD_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'[', 'v', 'e', 'i', 'c', 'T', 'r', 'a', 'c', 'a', 'o', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'N', 'T', 'R', 'C', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 3, 0,	/* MRNTRC */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'l', 'a', 'c', 'a', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPLACA */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'a', 'p', 'K', 'G', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCAPKG */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'a', 'p', 'M', '3', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCAPM3 */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'a', 'r', 'a', ' ', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTARA */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'R', 'o', 'd', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTPROD */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'C', 'a', 'r', ' ', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTPCAR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'U', 'F', ' ', '=', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 12,	/* MUF */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'E', 'N', 'A', 'V', 'A', 'M', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 5, 0,	/* MRENAVAN */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'x', 'n', 'o', 'm', 'e', ' ', '=', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'P', 'r', 'o', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* MTPPROP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'i', 'e', ' ', '=', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'M', 'O', 'T', 'O', '0', '0', '1', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'x', 'N', 'o', 'm', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 12, 0,	/* MXNOME */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'P', 'F', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 13, 0,	/* MCPF */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 12452 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* REB_PLACA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 54, 1,	/* 310 (abs: 12772) */
/* 12465 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'[', 'R', 'E', 'B', 'O', 'Q', 'U', 'E', '0', '1', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'c', 'I', 'n', 't', '=', '1', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'p', 'l', 'a', 'c', 'a', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 29,	/* REB_PLACA */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'E', 'N', 'A', 'V', 'A', 'M', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* REB_RENAVAM */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'a', 'r', 'a', '=', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 31,	/* REB_TARA */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'a', 'p', 'K', 'G', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 32,	/* REB_CAPKG */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'c', 'a', 'p', 'M', '3', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 33,	/* REB_CAPM3 */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'U', 'F', '=', 'S', 'P', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 34,	/* REB_UF */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'N', 'P', 'J', 'C', 'P', 'F', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 35,	/* REB_CNPJCPF */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'R', 'N', 'T', 'R', 'C', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 36,	/* REB_RNTRC */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'x', 'N', 'o', 'm', 'e', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 37,	/* REB_XNOME */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'I', 'E', '=', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* REB_IE */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'U', 'F', 'P', 'r', 'o', 'p', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* REB_UFPROP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'P', 'r', 'o', 'p', '=', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 40,	/* REB_TPPROP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	't', 'p', 'C', 'a', 'r', '=', ' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 41,	/* REB_TPCAR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 12772 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERCUSO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12831) */
/* 12784 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '1', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MPERCUSO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 12831 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MPERCUSO2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12890) */
/* 12843 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '2', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MPERCUSO2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 12890 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPERCUSO3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 12949) */
/* 12902 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '3', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPERCUSO3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 12949 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPERCUSO4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13008) */
/* 12961 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '4', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MPERCUSO4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13008 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPERCUSO5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13067) */
/* 13020 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '5', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPERCUSO5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13067 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MPERCUSO6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13126) */
/* 13079 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '6', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 22,	/* MPERCUSO6 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13126 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MPERCUSO7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13185) */
/* 13138 */ HB_P_LINE, 231, 1,	/* 487 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '7', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 23,	/* MPERCUSO7 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13185 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MPERCUSO8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13244) */
/* 13197 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '8', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MPERCUSO8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13244 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MPERCUSO9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13303) */
/* 13256 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '0', '9', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MPERCUSO9 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13303 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MPERCUSO10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 13362) */
/* 13315 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'[', 'P', 'E', 'R', 'C', '0', '1', '0', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'U', 'F', 'P', 'e', 'r', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MPERCUSO10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13362 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 84, 0,	/* H */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* F */
	HB_P_POPLOCALNEAR, 5,	/* I */
/* 13375 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MCIDA 2*/
	' ', 0, 
/* 13384 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 230, 1,	/* 486 (abs: 13888) */
/* 13405 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCIDA */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 163, 0,	/* 163 (abs: 13583) */
/* 13423 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 84, 0,	/* H */
	HB_P_INC,
	HB_P_POPVARIABLE, 84, 0,	/* H */
/* 13433 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'[', 'i', 'n', 'f', 'N', 'F', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* H */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13481 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'h', 'N', 'F', 'e', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13518 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 87, 1,	/* 343 (abs: 13878) */
/* 13538 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'e', 'g', 'C', 'o', 'd', 'B', 'a', 'r', 'r', 'a', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
	HB_P_JUMP, 42, 1,	/* 298 (abs: 13878) */
/* 13583 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MCIDA */
/* 13597 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* F 1*/
/* 13604 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 84, 0,	/* H */
/* 13611 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'[', 'D', 'E', 'S', 'C', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'c', 'M', 'u', 'n', 'D', 'e', 's', 'c', 'a', 'r', 'g', 'a', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 82,	/* VERCOD_CID */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'x', 'M', 'u', 'n', 'D', 'e', 's', 'c', 'a', 'r', 'g', 'a', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13739 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'[', 'i', 'n', 'f', 'N', 'F', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* H */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'h', 'N', 'F', 'e', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13817 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 43,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 13878) */
/* 13836 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'S', 'e', 'g', 'C', 'o', 'd', 'B', 'a', 'r', 'r', 'a', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13878 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 18, 254,	/* -494 (abs: 13391) */
/* 13888 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'[', 't', 'o', 't', ']', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
/* 13908 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'v', 'C', 'a', 'r', 'g', 'a', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MTOT_CARGA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'U', 'n', 'i', 'd', ' ', '=', ' ', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'q', 'C', 'a', 'r', 'g', 'a', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MPESO_CARGA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'q', 'N', 'F', 'e', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 53,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'q', 'C', 'T', 'e', '=', '0', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 77, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 11,	/* SLINHAS */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 14118) */
/* 14070 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'N', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', 'a', ' ', 'N', 'F', '-', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 14107 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 211, 201,	/* -13869 (abs: 00246) */
/* 14118 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 46,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 14142) */
/* 14131 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 187, 201,	/* -13893 (abs: 00246) */
/* 14142 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_PUSHSYMNEAR, 25,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 85,	/* 85 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'F', 'I', 'N', 'A', 'L', 'I', 'Z', 'A', 'N', 'D', 'O', ' ', 'O', ' ', 'M', 'D', 'F', '-', 'e', '.', '.', '.', '.', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 14186 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 85,	/* PROG */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'R', 'I', 'A', 'N', 'D', 'O', ' ', 'A', ' ', 'M', 'D', 'F', '-', 'e', ' ', 'N', 'o', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 14229 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHSYMNEAR, 86,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'M', 'D', 'F', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'i', 'n', 'i', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 87, 0,	/* MARQ */
/* 14273 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 88,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 87, 0,	/* MARQ */
	HB_P_PUSHLOCALREF, 11, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 14294 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHSYMNEAR, 89,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 87, 0,	/* MARQ */
	HB_P_DOSHORT, 1,
/* 14305 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'M', 'D', 'F', 'E', '.', 'C', 'R', 'I', 'A', 'R', 'M', 'D', 'F', 'E', 0, 
	HB_P_PUSHLOCALNEAR, 11,	/* SLINHAS */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 13,	/* MRETORNO */
/* 14339 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MCAMMDFE */
	HB_P_POPLOCALNEAR, 13,	/* MRETORNO */
/* 14361 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'l', 'e', 'r', 't', 'a', 's', ':', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 14401) */
/* 14380 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHSYMNEAR, 56,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_DOSHORT, 1,
/* 14390 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 184, 200,	/* -14152 (abs: 00246) */
/* 14401 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'M', 'D', 'F', 'E', '.', 'A', 'S', 'S', 'I', 'N', 'A', 'R', 'M', 'D', 'F', 'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 14435 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 85,	/* PROG */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'V', 'A', 'L', 'I', 'D', 'A', 'N', 'D', 'O', ' ', 'a', ' ', 'M', 'D', 'F', 'e', ' ', 'N', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 14476 */ HB_P_LINE, 59, 2,	/* 571 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'M', 'D', 'F', 'E', '.', 'V', 'A', 'L', 'I', 'D', 'A', 'R', 'M', 'D', 'F', 'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 14510 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 85,	/* PROG */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'E', 'N', 'V', 'I', 'A', 'N', 'D', 'O', ' ', 'a', ' ', 'M', 'D', 'F', 'e', ' ', 'N', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 14551 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'M', 'D', 'F', 'E', '.', 'E', 'N', 'V', 'I', 'A', 'R', 'M', 'D', 'F', 'e', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 14584 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 85,	/* PROG */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'I', 'M', 'P', 'R', 'I', 'M', 'I', 'N', 'D', 'O', ' ', 'M', 'D', 'F', 'e', ' ', 'N', 'o', '.', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 14625 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'D', 'F', 'E', '.', 'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', 'D', 'A', 'M', 'D', 'F', 'E', 'P', 'D', 'F', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 14665 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 90,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'M', 'D', 'F', 'E', '.', 'I', 'M', 'P', 'R', 'I', 'M', 'I', 'R', 'D', 'A', 'M', 'D', 'F', 'E', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 4,
/* 14702 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHSYMNEAR, 31,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 32,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'A', 'T', 'U', 'A', 'L', 'I', 'Z', 'A', 'N', 'D', 'O', ' ', 'M', 'D', 'F', 'e', ' ', 'N', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 13,	/* MRETORNO */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14745 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* I 0*/
/* 14752 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_PUSHSYMNEAR, 48,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* M_DEMO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 116, 4,	/* 1140 (abs: 15910) */
/* 14773 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTR, 6, 2,	/* 518 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'm', 'd', 'f', 'e', ' ', '(', 'c', 'U', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'M', 'o', 'd', 'e', 'l', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ',', 's', 'e', 'r', 'i', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'p', 'r', 'o', 'c', 'E', 'm', 'i', ' ', ' ', ' ', ' ', ' ', 9, ',', 'd', 'h', 'E', 'm', 'i', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 't', 'p', 'E', 'm', 'i', 't', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'm', 'o', 'd', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'u', 'f', 'i', 'n', 'i', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'u', 'f', 'f', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'M', 'D', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 9, ',', 'n', 'M', 'D', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'M', 'u', 'n', 'C', 'a', 'r', 'r', 'e', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'x', 'M', 'u', 'n', 'C', 'a', 'r', 'r', 'e', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'R', 'N', 'T', 'R', 'C', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'p', 'l', 'a', 'c', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'a', 'p', 'K', 'G', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'a', 'p', 'M', '3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 't', 'a', 'r', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 't', 'p', 'R', 'o', 'd', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 't', 'p', 'C', 'a', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'U', 'F', '_', 'C', 'A', 'R', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'R', 'E', 'N', 'A', 'V', 'A', 'M', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 't', 'p', 'P', 'r', 'o', 'p', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'i', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'x', 'n', 'o', 'm', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'C', 'P', 'F', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'h', 'N', 'F', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'M', 'u', 'n', 'D', 'e', 's', 'c', 'a', 'r', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ',', 'x', 'M', 'u', 'n', 'D', 'e', 's', 'c', 'a', 'r', 'g', 'a', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'a', 'm', 'm', 'd', 'f', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* VERCOD_UF */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'5', '8', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MSERIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 62, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MMODAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MUFFIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 70,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 71, 0,	/* MDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 82,	/* VERCOD_CID */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 37, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 134, 0,	/* 134 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MRNTRC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MPLACA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCAPKG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* MCAPM3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* MTARA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MTPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTPCAR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MUF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MRENAVAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MTPPROP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MXNOME */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 13, 0,	/* MCPF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 82,	/* VERCOD_CID */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* M_DEMO */
	HB_P_PUSHLOCALNEAR, 5,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MCAMMDFE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15875 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_MESSAGE, 57, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 58,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15900 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* I 1*/
	HB_P_JUMP, 132, 251,	/* -1148 (abs: 14759) */
/* 15910 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 47,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 200, 194,	/* -15672 (abs: 00246) */
	HB_P_ENDPROC
/* 15922 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 91, 0, 1, 0,	/* symbol (_INITSTATICS), 1 statics */
	HB_P_ENDPROC
/* 00006 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

