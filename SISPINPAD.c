/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SISPINPAD.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\SISPINPAD.PRG /q /oC:\hti\SISCOM\SISPINPAD.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:59 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SISPINPAD.PRG"

HB_FUNC( SISPINPAD );
HB_FUNC( PINPAD_SAI );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( GETIP );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( PINPAD );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FIM );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( DCRIPTO );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( SR_COMMITTRANSACTION );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SACBAL_PIN );
HB_FUNC_EXTERN( VENDA );
HB_FUNC_EXTERN( SAC0 );
HB_FUNC_EXTERN( DBCLOSEAREA );
HB_FUNC_EXTERN( __KEYBOARD );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SISPINPAD )
{ "SISPINPAD", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SISPINPAD )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SENHA_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_OPER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "GETIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( GETIP )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "PINPAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( PINPAD )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( FIM )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DCRIPTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DCRIPTO )}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "SR_COMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_COMMITTRANSACTION )}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SACBAL_PIN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACBAL_PIN )}, NULL },
{ "SEN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "STIPO_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDA", {HB_FS_PUBLIC}, {HB_FUNCNAME( VENDA )}, NULL },
{ "SAC0", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC0 )}, NULL },
{ "DBCLOSEAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEAREA )}, NULL },
{ "PINPAD_SAI", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PINPAD_SAI )}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SISPINPAD )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SISPINPAD
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SISPINPAD = hb_vm_SymbolInit_SISPINPAD;
   #pragma data_seg()
#endif

HB_FUNC( SISPINPAD )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 34, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 13, 0,	/* 13 */
	HB_P_LOCALNEARSETSTR, 2, 10, 0,	/* MPRG 10*/
	'S', 'I', 'S', 'P', 'I', 'N', 'P', 'A', 'D', 0, 
	HB_P_LOCALNEARSETSTR, 3, 21, 0,	/* MTITULO 21*/
	'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', 'P', 'A', 'R', 'A', ' ', 'P', 'I', 'N', ' ', 'P', 'A', 'D', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_DEMO */
	HB_P_LOCALNEARSETINT, 16, 45, 0,	/* LCI 45*/
	HB_P_LOCALNEARSETINT, 17, 12, 0,	/* CCI 12*/
	HB_P_LOCALNEARSETINT, 18, 5, 0,	/* LBA 5*/
	HB_P_LOCALNEARSETINT, 19, 30, 0,	/* CBA 30*/
	HB_P_LOCALNEARSETSTR, 27, 1, 0,	/* MDOCUMENTO 1*/
	0, 
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MSOMA 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 30,	/* M_ANIV */
	HB_P_LOCALNEARSETSTR, 31, 1, 0,	/* MCOMANDO 1*/
	0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 32,	/* Q_CONS */
	HB_P_LOCALNEARSETSTR, 33, 1, 0,	/* HD_SERIAL 1*/
	0, 
/* 00099 */ HB_P_LINEOFFSET, 2,	/* 15 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 2,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* ARET */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* ARET */
/* 00114 */ HB_P_LINEOFFSET, 4,	/* 17 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 6,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* SENHA_ACESS */
	HB_P_PUSHSYMNEAR, 4,	/* NIVEL_ACESS */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_OPER */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_OPER */
/* 00131 */ HB_P_LINEOFFSET, 6,	/* 19 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MCONT 0*/
/* 00137 */ HB_P_LINEOFFSET, 7,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00145 */ HB_P_LINEOFFSET, 8,	/* 21 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'r', 'm', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'a', 't', 'a', ' ', '<', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 226, 255,	/* -30*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00210 */ HB_P_LINEOFFSET, 9,	/* 22 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 1, 0,	/* ARET */
/* 00218 */ HB_P_LINEOFFSET, 10,	/* 23 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'r', 'm', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'o', 'm', 'e', '_', 't', 'r', 'm', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 1, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00293 */ HB_P_LINEOFFSET, 11,	/* 24 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00317 */ HB_P_LINEOFFSET, 12,	/* 25 */
	HB_P_PUSHSYMNEAR, 14,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 00473) */
/* 00332 */ HB_P_LINEOFFSET, 13,	/* 26 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 't', 'r', 'm', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'e', 'r', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MVERSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'o', 'm', 'e', '_', 't', 'r', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 210, 0,	/* 210 (abs: 00680) */
/* 00473 */ HB_P_LINEOFFSET, 22,	/* 35 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 't', 'r', 'm', ' ', '(', 'n', 'o', 'm', 'e', '_', 't', 'r', 'm', ',', 'i', 'p', '_', 't', 'r', 'm', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'i', 'n', 'i', 'c', 'i', 'o', ',', 'v', 'e', 'r', 's', 'a', 'o', ',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* GETIP */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MVERSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
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
/* 00680 */ HB_P_LINEOFFSET, 24,	/* 37 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00704 */ HB_P_LINEOFFSET, 26,	/* 39 */
	HB_P_PUSHLOCALNEAR, 7,	/* MCONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 98, 9,	/* 2402 (abs: 03113) */
/* 00714 */ HB_P_LINEOFFSET, 27,	/* 40 */
	HB_P_PUSHSYMNEAR, 18,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00726 */ HB_P_LINEOFFSET, 28,	/* 41 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* M_DEMO */
/* 00733 */ HB_P_LINEOFFSET, 30,	/* 43 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '0', '5', ',', '5', '0', ',', '2', '5', ',', '8', '0', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00764 */ HB_P_LINEOFFSET, 31,	/* 44 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '0', '5', ',', '5', '0', ',', '2', '5', ',', '8', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '3', ']', ')', '+', 34, 'H', 'T', 'I', 'f', 'i', 'r', 'm', 'a', '.', 'j', 'p', 'g', 34, ',', '.', 'T', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00850 */ HB_P_LINEOFFSET, 36,	/* 49 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '4', '2', ',', '4', '3', ',', '4', '8', ',', '9', '0', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00881 */ HB_P_LINEOFFSET, 37,	/* 50 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 80,	/* 80 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '4', '2', ',', '4', '3', ',', '4', '8', ',', '9', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '3', ']', ')', '+', 34, 'r', 'o', 'd', 'a', 'p', 'e', '_', 'p', 'i', 'n', 'p', 'a', 'd', '.', 'J', 'P', 'G', 34, ',', '.', 'F', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
/* 00972 */ HB_P_LINEOFFSET, 38,	/* 51 */
	HB_P_PUSHSYMNEAR, 18,	/* __SETCENTURY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 1,
/* 00985 */ HB_P_LINEOFFSET, 39,	/* 52 */
	HB_P_PUSHSYMNEAR, 20,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 21,	/* PINPAD */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', ' ', ' ', 'A', 'c', 'e', 's', 's', 'o', ' ', 'a', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'S', 'I', 'S', 'C', 'O', 'M', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_OPER */
/* 01088 */ HB_P_LINEOFFSET, 40,	/* 53 */
	HB_P_PUSHSYMNEAR, 22,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01112) */
/* 01100 */ HB_P_LINEOFFSET, 41,	/* 54 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01107 */ HB_P_LINEOFFSET, 42,	/* 55 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01112 */ HB_P_LINEOFFSET, 44,	/* 57 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 01183) */
/* 01124 */ HB_P_LINEOFFSET, 45,	/* 58 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'E', 's', 't', 'e', ' ', 'U', 's', 'u', 'a', 'r', 'i', 'o', '/', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01173 */ HB_P_LINEOFFSET, 46,	/* 59 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 38, 254,	/* -474 (abs: 00706) */
/* 01183 */ HB_P_LINEOFFSET, 49,	/* 62 */
	HB_P_PUSHSYMNEAR, 27,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 01205) */
/* 01195 */ HB_P_LINEOFFSET, 51,	/* 64 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 16, 254,	/* -496 (abs: 00706) */
/* 01205 */ HB_P_LINEOFFSET, 54,	/* 67 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 1, 0,	/* ARET */
/* 01213 */ HB_P_LINEOFFSET, 55,	/* 68 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 129,	/* 129 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 'n', 'i', 'v', 'e', 'l', ',', 's', 'c', 'o', 'd', '_', 'o', 'p', ',', 's', 'u', 'l', 't', '_', 'e', '_', 'c', ',', 's', 'e', 'x', 'p', 'i', 'r', 'a', ',', 's', 's', 'e', 'n', 'h', 'a', ',', 's', 't', 'i', 'p', 'o', ',', 's', 'n', 'o', 'm', 'e', ',', 'd', 'o', 'c', '_', 'a', 'p', 'a', 'g', 'a', 'r', ',', 'e', 's', 't', 'o', 'q', '_', 'm', 'i', 'n', ',', 'e', 's', 't', 'o', 'q', '_', 'm', 'e', 'd', ',', 'd', 'a', 't', '_', 'a', 'n', 'i', 'v', ' ', 'F', 'R', 'O', 'M', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'c', 'o', 'd', '_', 'o', 'p', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 1, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01378 */ HB_P_LINEOFFSET, 56,	/* 69 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01402 */ HB_P_LINEOFFSET, 57,	/* 70 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 14,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01432) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 1, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 01452) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 01541) */
/* 01454 */ HB_P_LINEOFFSET, 58,	/* 71 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'E', 's', 't', 'e', ' ', 'U', 's', 'u', 'a', 'r', 'i', 'o', '/', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', 'e', 's', 't', 'a', 'r', ' ', 'B', 'l', 'o', 'q', 'u', 'e', 'a', 'd', 'o', ',', ' ', 'P', 'r', 'o', 'c', 'u', 'r', 'e', ' ', 's', 'e', 'u', ' ', 'A', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01531 */ HB_P_LINEOFFSET, 59,	/* 72 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 192, 252,	/* -832 (abs: 00706) */
/* 01541 */ HB_P_LINEOFFSET, 62,	/* 75 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01548 */ HB_P_LINEOFFSET, 63,	/* 76 */
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* MSENHA 1*/
	0, 
/* 01555 */ HB_P_LINEOFFSET, 64,	/* 77 */
	HB_P_PUSHSYMNEAR, 29,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 01730) */
/* 01597 */ HB_P_LINEOFFSET, 65,	/* 78 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '0', '5', ',', '5', '0', ',', '2', '5', ',', '8', '0', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01628 */ HB_P_LINEOFFSET, 66,	/* 79 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 89,	/* 89 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '0', '5', ',', '5', '0', ',', '2', '5', ',', '8', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '3', '1', ']', ')', '+', 'S', 'T', 'R', 'Z', 'E', 'R', 'O', '(', 'm', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', '3', ')', '+', 34, '.', 'j', 'p', 'g', 34, ',', '.', 'T', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 119,	/* 119 (abs: 01847) */
/* 01730 */ HB_P_LINEOFFSET, 68,	/* 81 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '0', '5', ',', '4', '5', ',', '2', '5', ',', '7', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01761 */ HB_P_LINEOFFSET, 69,	/* 82 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '0', '5', ',', '5', '0', ',', '1', '6', ',', '8', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '3', ']', ')', '+', 34, 'H', 'T', 'I', 'f', 'i', 'r', 'm', 'a', '.', 'j', 'p', 'g', 34, ',', '.', 'T', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01847 */ HB_P_LINEOFFSET, 71,	/* 84 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '2', '7', ',', '5', '0', ',', '3', '0', ',', '8', '0', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01878 */ HB_P_LINEOFFSET, 72,	/* 85 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '7', ',', '5', '2', ',', 34, 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01951 */ HB_P_LINEOFFSET, 73,	/* 86 */
	HB_P_PUSHSYMNEAR, 19,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '9', ',', '5', '2', ',', 'a', 'r', 'e', 't', '[', '1', ',', '2', ']', '+', 34, '-', 34, '+', 'a', 'r', 'e', 't', '[', '1', ',', '7', ']', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02026 */ HB_P_LINEOFFSET, 75,	/* 88 */
	HB_P_PUSHSYMNEAR, 21,	/* PINPAD */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'e', 'n', 'h', 'a', 0, 
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 's', 'u', 'a', ' ', 'S', 'e', 'n', 'h', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* M_DEMO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'A', 'C', 'E', 'S', 'S', 'O', ' ', 'A', 'O', ' ', 'S', 'I', 'S', 'T', 'E', 'M', 'A', ' ', 'S', 'I', 'S', 'P', 'I', 'N', 'P', 'A', 'D', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 8,	/* MSENHA */
/* 02099 */ HB_P_LINEOFFSET, 76,	/* 89 */
	HB_P_PUSHSYMNEAR, 31,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MSENHA */
/* 02110 */ HB_P_LINEOFFSET, 77,	/* 90 */
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'A', 'O', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 02192) */
/* 02123 */ HB_P_LINEOFFSET, 78,	/* 91 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'e', 'n', 'h', 'a', ' ', 'n', 'a', 'o', ' ', 'C', 'o', 'n', 'f', 'e', 'r', 'e', ',', ' ', 'P', 'r', 'o', 'c', 'u', 'r', 'e', ' ', 's', 'e', 'u', ' ', 'A', 'd', 'm', 'i', 'n', 'i', 's', 't', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02180 */ HB_P_LINEOFFSET, 79,	/* 92 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02187 */ HB_P_LINEOFFSET, 81,	/* 94 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02192 */ HB_P_LINEOFFSET, 83,	/* 96 */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 02275) */
/* 02203 */ HB_P_LINEOFFSET, 84,	/* 97 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'e', 'n', 'h', 'a', ' ', 'I', 'n', 'c', 'o', 'r', 'r', 'e', 't', 'a', ' ', 'T', 'e', 'n', 't', 'e', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 02244 */ HB_P_LINEOFFSET, 85,	/* 98 */
	HB_P_PUSHLOCALNEAR, 7,	/* MCONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02265) */
/* 02253 */ HB_P_LINEOFFSET, 86,	/* 99 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02260 */ HB_P_LINEOFFSET, 88,	/* 101 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02265 */ HB_P_LINEOFFSET, 90,	/* 103 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 226, 249,	/* -1566 (abs: 00706) */
/* 02275 */ HB_P_LINEOFFSET, 93,	/* 106 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* MCONT 1*/
/* 02281 */ HB_P_LINEOFFSET, 94,	/* 107 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'H', 'T', 'I', '6', '8', '2', '1', '1', '0', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 20,	/* 20 (abs: 02324) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 02356) */
/* 02326 */ HB_P_LINEOFFSET, 95,	/* 108 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_POPMEMVAR, 4, 0,	/* NIVEL_ACESS */
/* 02335 */ HB_P_LINEOFFSET, 96,	/* 109 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_POPMEMVAR, 32, 0,	/* COD_OPERADO */
/* 02346 */ HB_P_LINEOFFSET, 97,	/* 110 */
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_POPVARIABLE, 3, 0,	/* SENHA_ACESS */
	HB_P_JUMP, 248, 2,	/* 760 (abs: 03113) */
/* 02356 */ HB_P_LINEOFFSET, 100,	/* 113 */
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 33,	/* DCRIPTO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 1, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 145, 2,	/* 657 (abs: 03041) */
/* 02387 */ HB_P_LINEOFFSET, 101,	/* 114 */
	HB_P_PUSHSYMNEAR, 34,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02394 */ HB_P_LINEOFFSET, 102,	/* 115 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'S', 'E', 'T', ' ', 's', 'u', 'l', 't', '_', 'e', 'n', 't', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'h', 'o', 'r', 'a', '_', 'i', 'n', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 's', 'h', '_', 'i', '_', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 30, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'c', 'o', 'd', '_', 'o', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02560 */ HB_P_LINEOFFSET, 103,	/* 116 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 't', 'r', 'm', ' ', 'S', 'E', 'T', ' ', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'e', 'r', 's', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MVERSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'n', 'o', 'm', 'e', '_', 't', 'r', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 12,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02703 */ HB_P_LINEOFFSET, 104,	/* 117 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 32,	/* Q_CONS */
/* 02710 */ HB_P_LINEOFFSET, 105,	/* 118 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'r', 'l', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 32, 0,	/* Q_CONS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02811 */ HB_P_LINEOFFSET, 106,	/* 119 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02835 */ HB_P_LINEOFFSET, 107,	/* 120 */
	HB_P_PUSHSYMNEAR, 14,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* Q_CONS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 02993) */
/* 02849 */ HB_P_LINEOFFSET, 108,	/* 121 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'r', 'l', ' ', '(', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
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
/* 02993 */ HB_P_LINEOFFSET, 110,	/* 123 */
	HB_P_PUSHSYMNEAR, 37,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03000 */ HB_P_LINEOFFSET, 111,	/* 124 */
	HB_P_PUSHSYMNEAR, 38,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03007 */ HB_P_LINEOFFSET, 112,	/* 125 */
	HB_P_PUSHMEMVAR, 1, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_POPMEMVAR, 4, 0,	/* NIVEL_ACESS */
/* 03019 */ HB_P_LINEOFFSET, 113,	/* 126 */
	HB_P_PUSHMEMVAR, 1, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPMEMVAR, 32, 0,	/* COD_OPERADO */
/* 03032 */ HB_P_LINEOFFSET, 114,	/* 127 */
	HB_P_PUSHLOCALNEAR, 8,	/* MSENHA */
	HB_P_POPVARIABLE, 3, 0,	/* SENHA_ACESS */
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 03113) */
/* 03041 */ HB_P_LINEOFFSET, 117,	/* 130 */
	HB_P_PUSHSYMNEAR, 25,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'S', 'e', 'n', 'h', 'a', ' ', 'I', 'n', 'c', 'o', 'r', 'r', 'e', 't', 'a', ' ', 'T', 'e', 'n', 't', 'e', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 03082 */ HB_P_LINEOFFSET, 118,	/* 131 */
	HB_P_PUSHLOCALNEAR, 7,	/* MCONT */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03103) */
/* 03091 */ HB_P_LINEOFFSET, 119,	/* 132 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03098 */ HB_P_LINEOFFSET, 121,	/* 134 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03103 */ HB_P_LINEOFFSET, 123,	/* 136 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 156, 246,	/* -2404 (abs: 00706) */
/* 03113 */ HB_P_LINEOFFSET, 128,	/* 141 */
	HB_P_PUSHSYMNEAR, 26,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03120 */ HB_P_LINEOFFSET, 129,	/* 142 */
	HB_P_PUSHSYMNEAR, 39,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'S', 'E', 'N', 'H', 'A', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03163 */ HB_P_LINEOFFSET, 130,	/* 143 */
	HB_P_PUSHSYMNEAR, 34,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03170 */ HB_P_LINEOFFSET, 131,	/* 144 */
	HB_P_MESSAGE, 8, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 9,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', ' ', 'S', 'E', 'T', ' ', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 13,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'd', 'a', 't', 'a', '_', 'a', 'c', 'e', 's', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 11,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'h', 'o', 'r', 'a', '_', 'a', 'c', 'e', 's', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'c', 'o', 'd', '_', 'o', 'p', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 10,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_OPER */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03326 */ HB_P_LINEOFFSET, 132,	/* 145 */
	HB_P_PUSHSYMNEAR, 37,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03333 */ HB_P_LINEOFFSET, 133,	/* 146 */
	HB_P_PUSHSYMNEAR, 38,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03340 */ HB_P_LINEOFFSET, 150,	/* 163 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTC1 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'P', 'I', 'N', 'P', 'A', 'D', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 15,	/* 15 (abs: 03370) */
	HB_P_PUSHLOCALNEAR, 1,	/* MTC1 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'p', 'i', 'n', 'p', 'a', 'd', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 03382) */
/* 03372 */ HB_P_LINEOFFSET, 151,	/* 164 */
	HB_P_PUSHSYMNEAR, 40,	/* SACBAL_PIN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 141, 245,	/* -2675 (abs: 00704) */
/* 03382 */ HB_P_LINEOFFSET, 154,	/* 167 */
	HB_P_PUSHSYMNEAR, 41,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* STIPO_SIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 03416) */
/* 03395 */ HB_P_LINEOFFSET, 155,	/* 168 */
	HB_P_PUSHSYMNEAR, 43,	/* VENDA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_DOSHORT, 1,
/* 03406 */ HB_P_LINEOFFSET, 156,	/* 169 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 107, 245,	/* -2709 (abs: 00704) */
/* 03416 */ HB_P_LINEOFFSET, 157,	/* 170 */
	HB_P_PUSHSYMNEAR, 41,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* STIPO_SIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 03450) */
/* 03429 */ HB_P_LINEOFFSET, 158,	/* 171 */
	HB_P_PUSHSYMNEAR, 43,	/* VENDA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 1,
/* 03440 */ HB_P_LINEOFFSET, 159,	/* 172 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 73, 245,	/* -2743 (abs: 00704) */
/* 03450 */ HB_P_LINEOFFSET, 160,	/* 173 */
	HB_P_PUSHSYMNEAR, 41,	/* SEN */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* STIPO_SIS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 03484) */
/* 03463 */ HB_P_LINEOFFSET, 161,	/* 174 */
	HB_P_PUSHSYMNEAR, 43,	/* VENDA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_DOSHORT, 1,
/* 03474 */ HB_P_LINEOFFSET, 162,	/* 175 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 39, 245,	/* -2777 (abs: 00704) */
/* 03484 */ HB_P_LINEOFFSET, 164,	/* 177 */
	HB_P_PUSHSYMNEAR, 44,	/* SAC0 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03491 */ HB_P_LINEOFFSET, 165,	/* 178 */
	HB_P_PUSHSYMNEAR, 23,	/* FIM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 22, 245,	/* -2794 (abs: 00704) */
	HB_P_ENDPROC
/* 03502 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PINPAD_SAI )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 185, 0,	/* 185 */
	HB_P_PUSHSYMNEAR, 47,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
	HB_P_ENDPROC
/* 00011 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

