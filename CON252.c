/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON252.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON252.PRG /q /oC:\hti\SISCOM\CON252.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2024.01.03 11:28:40 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON252.PRG"

HB_FUNC( CON252 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( CX_FECHADO );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( BOTAO1 );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( VER_BANCO );
HB_FUNC_EXTERN( REC_DUPR );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( QTD_CHQ );
HB_FUNC_EXTERN( VENCIM );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( DBCOMMITALL );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON252 )
{ "CON252", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON252 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "M_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_POS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_PAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_CAX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DUPR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODIGO_BAN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CX_FECHADO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CX_FECHADO )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "BOTAO1", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO1 )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "VER_BANCO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_BANCO )}, NULL },
{ "REC_DUPR", {HB_FS_PUBLIC}, {HB_FUNCNAME( REC_DUPR )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "QTD_CHQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( QTD_CHQ )}, NULL },
{ "CONSULTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENCIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( VENCIM )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "MCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "CAIX", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "COD_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "OP_PG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "MDEVEDOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON252 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON252
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON252 = hb_vm_SymbolInit_CON252;
   #pragma data_seg()
#endif

HB_FUNC( CON252 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 77, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 22, 0,	/* 22 */
	HB_P_LOCALNEARSETSTR, 4, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '2', '5', '2', 0, 
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* MDIAS_ATRAS 0*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* MQUANTD_DOC 0*/
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MTOT_MULTA 0*/
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MTOTAL 0*/
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MVLR_PG 0*/
	HB_P_LOCALNEARSETINT, 21, 0, 0,	/* MRESTA 0*/
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MJUROS 0*/
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MMULTA 0*/
	HB_P_LOCALNEARSETINT, 45, 0, 0,	/* MCODVEN 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 46,	/* M_PARCELA */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* MQTD_PARC 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 48,	/* M_DIAS */
	HB_P_LOCALNEARSETSTR, 52, 3, 0,	/* MTIPO_DOC 3*/
	' ', ' ', 0, 
	HB_P_LOCALNEARSETINT, 57, 0, 0,	/* MPOS_INI 0*/
	HB_P_LOCALNEARSETINT, 58, 0, 0,	/* MTOT_VALOR 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 59,	/* MTTIPO */
	HB_P_LOCALNEARSETINT, 60, 0, 0,	/* MTNUM_BANCO 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 61,	/* MTAGENCIA */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 62,	/* MTC_C */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 63,	/* MTDUPLICATA */
	HB_P_PUSHSYMNEAR, 2,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 65,	/* MTVENC */
	HB_P_LOCALNEARSETINT, 66, 0, 0,	/* MTVALOR 0*/
	HB_P_LOCALNEARSETSTR, 67, 2, 0,	/* MTBANCO 2*/
	'C', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 68,	/* MTCORRENTE */
	HB_P_LOCALNEARSETINT, 70, 0, 0,	/* MDESC_CART 0*/
	HB_P_LOCALNEARSETINT, 71, 0, 0,	/* MPRAZO_CART 0*/
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 72,	/* MCARTAO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_LOCALNEARSETSTR, 76, 2, 0,	/* MCOM_JUROS 2*/
	'S', 0, 
	HB_P_LOCALNEARSETSTR, 78, 4, 0,	/* MCOD_OPERADO 4*/
	' ', ' ', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 80,	/* CONS_CLI */
/* 00204 */ HB_P_LINEOFFSET, 2,	/* 24 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 11,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 3,	/* M_DUPR */
	HB_P_PUSHSYMNEAR, 4,	/* M_POS */
	HB_P_PUSHSYMNEAR, 5,	/* M_PAG */
	HB_P_PUSHSYMNEAR, 6,	/* M_CAX */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 8,	/* CONS_DUPR */
	HB_P_PUSHSYMNEAR, 9,	/* ARET */
	HB_P_PUSHSYMNEAR, 10,	/* MCODIGO_BAN */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_POPVARIABLE, 9, 0,	/* ARET */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_DUPR */
	HB_P_POPVARIABLE, 6, 0,	/* M_CAX */
	HB_P_POPVARIABLE, 5, 0,	/* M_PAG */
	HB_P_POPVARIABLE, 4, 0,	/* M_POS */
	HB_P_POPVARIABLE, 3, 0,	/* M_DUPR */
/* 00267 */ HB_P_LINEOFFSET, 5,	/* 27 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00296) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00296 */ HB_P_LINEOFFSET, 6,	/* 28 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00323) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00323 */ HB_P_LINEOFFSET, 7,	/* 29 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00352) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00352 */ HB_P_LINEOFFSET, 8,	/* 30 */
	HB_P_PUSHSYMNEAR, 12,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00382) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00382 */ HB_P_LINEOFFSET, 10,	/* 32 */
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00421) */
/* 00390 */ HB_P_LINEOFFSET, 11,	/* 33 */
	HB_P_PUSHMEMVAR, 13, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 00421) */
/* 00407 */ HB_P_LINEOFFSET, 12,	/* 34 */
	HB_P_PUSHSYMNEAR, 14,	/* CX_FECHADO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00421) */
/* 00416 */ HB_P_LINEOFFSET, 13,	/* 35 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00421 */ HB_P_LINEOFFSET, 17,	/* 39 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 47, 1,	/* 303 (abs: 00730) */
/* 00430 */ HB_P_LINEOFFSET, 18,	/* 40 */
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 00594) */
/* 00439 */ HB_P_LINEOFFSET, 19,	/* 41 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'B', 'A', 'I', 'X', 'A', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ')', ' ', 'P', '/', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00526) */
/* 00521 */ HB_P_LINEOFFSET, 20,	/* 42 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00526 */ HB_P_LINEOFFSET, 22,	/* 44 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'G', 'E', 'R', 'A', 'L', ' ', '(', 'C', '.', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', ' ', 'P', '/', 'C', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 73, 2,	/* 585 (abs: 01176) */
/* 00594 */ HB_P_LINEOFFSET, 24,	/* 46 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'B', 'A', 'I', 'X', 'A', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00670) */
/* 00665 */ HB_P_LINEOFFSET, 25,	/* 47 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00670 */ HB_P_LINEOFFSET, 27,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'B', 'a', 'i', 'x', 'a', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'G', 'E', 'R', 'A', 'L', ' ', '(', 'C', '.', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 193, 1,	/* 449 (abs: 01176) */
/* 00730 */ HB_P_LINEOFFSET, 30,	/* 52 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00877) */
/* 00742 */ HB_P_LINEOFFSET, 31,	/* 53 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'D', 'E', 'M', 'O', 'N', 'S', 'T', 'R', 'A', 'T', 'I', 'V', 'O', ' ', 'D', 'E', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00819) */
/* 00814 */ HB_P_LINEOFFSET, 32,	/* 54 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00819 */ HB_P_LINEOFFSET, 34,	/* 56 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', '(', 'C', '.', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 46, 1,	/* 302 (abs: 01176) */
/* 00877 */ HB_P_LINEOFFSET, 35,	/* 57 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 141, 0,	/* 141 (abs: 01027) */
/* 00889 */ HB_P_LINEOFFSET, 36,	/* 58 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'A', 'G', 'R', 'U', 'P', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00968) */
/* 00963 */ HB_P_LINEOFFSET, 37,	/* 59 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00968 */ HB_P_LINEOFFSET, 39,	/* 61 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'A', 'g', 'r', 'u', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', '(', 'C', '.', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
	HB_P_JUMP, 152, 0,	/* 152 (abs: 01176) */
/* 01027 */ HB_P_LINEOFFSET, 40,	/* 62 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 01176) */
/* 01039 */ HB_P_LINEOFFSET, 41,	/* 63 */
	HB_P_PUSHSYMNEAR, 15,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'E', 'M', 'I', 'S', 'S', 'A', 'O', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 01114) */
/* 01109 */ HB_P_LINEOFFSET, 42,	/* 64 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01114 */ HB_P_LINEOFFSET, 44,	/* 66 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'd', 'e', ' ', 'D', 'E', 'B', 'I', 'T', 'O', ' ', '(', 'C', '.', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 01176 */ HB_P_LINEOFFSET, 47,	/* 69 */
	HB_P_LOCALNEARSETINT, 22, 8, 0,	/* LBA 8*/
/* 01182 */ HB_P_LINEOFFSET, 48,	/* 70 */
	HB_P_LOCALNEARSETINT, 23, 85, 0,	/* CBA 85*/
/* 01188 */ HB_P_LINEOFFSET, 50,	/* 72 */
	HB_P_LOCALNEARSETINT, 24, 7, 0,	/* LI 7*/
/* 01194 */ HB_P_LINEOFFSET, 51,	/* 73 */
	HB_P_LOCALNEARSETINT, 25, 1, 0,	/* CI 1*/
/* 01200 */ HB_P_LINEOFFSET, 52,	/* 74 */
	HB_P_LOCALNEARSETINT, 26, 49, 0,	/* LA 49*/
/* 01206 */ HB_P_LINEOFFSET, 53,	/* 75 */
	HB_P_LOCALNEARSETINT, 27, 82, 0,	/* CA 82*/
/* 01212 */ HB_P_LINEOFFSET, 54,	/* 76 */
	HB_P_PUSHSYMNEAR, 18,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 01226 */ HB_P_LINEOFFSET, 55,	/* 77 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* LIN 1*/
/* 01232 */ HB_P_LINEOFFSET, 56,	/* 78 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 33,	/* MDUPLICATA */
/* 01243 */ HB_P_LINEOFFSET, 58,	/* 80 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 1,
/* 01264 */ HB_P_LINEOFFSET, 60,	/* 82 */
	HB_P_PUSHSYMNEAR, 22,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 11,	/* MSELE */
/* 01273 */ HB_P_LINEOFFSET, 61,	/* 83 */
	HB_P_PUSHSYMNEAR, 23,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 12,	/* MORDE */
/* 01282 */ HB_P_LINEOFFSET, 63,	/* 85 */
	HB_P_PUSHSYMNEAR, 24,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 01291 */ HB_P_LINEOFFSET, 64,	/* 86 */
	HB_P_PUSHSYMNEAR, 25,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 22,	/* LBA */
	HB_P_PUSHLOCALNEAR, 23,	/* CBA */
	HB_P_DOSHORT, 4,
/* 01304 */ HB_P_LINEOFFSET, 65,	/* 87 */
	HB_P_PUSHSYMNEAR, 25,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_DOSHORT, 4,
/* 01319 */ HB_P_LINEOFFSET, 66,	/* 88 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 46,	/* M_PARCELA */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01329 */ HB_P_LINEOFFSET, 67,	/* 89 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DIAS */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01339 */ HB_P_LINEOFFSET, 68,	/* 90 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_PAG */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01350 */ HB_P_LINEOFFSET, 69,	/* 91 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* M_CAX */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01361 */ HB_P_LINEOFFSET, 70,	/* 92 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 79,	/* MDATPAG */
/* 01368 */ HB_P_LINEOFFSET, 71,	/* 93 */
	HB_P_LOCALNEARSETINT, 47, 0, 0,	/* MQTD_PARC 0*/
	HB_P_PUSHLOCALNEAR, 47,	/* MQTD_PARC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 21,	/* MRESTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 01384 */ HB_P_LINEOFFSET, 72,	/* 94 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MBAIXA 2*/
	'N', 0, 
/* 01392 */ HB_P_LINEOFFSET, 73,	/* 95 */
	HB_P_LOCALNEARSETSTR, 76, 2, 0,	/* MCOM_JUROS 2*/
	'S', 0, 
/* 01400 */ HB_P_LINEOFFSET, 74,	/* 96 */
	HB_P_PUSHSYMNEAR, 2,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MDATA2 */
	HB_P_POPLOCALNEAR, 8,	/* MDATA1 */
/* 01423 */ HB_P_LINEOFFSET, 75,	/* 97 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 10,	/* MDATA_PG */
/* 01430 */ HB_P_LINEOFFSET, 76,	/* 98 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 77,	/* MOBS1 */
/* 01441 */ HB_P_LINEOFFSET, 77,	/* 99 */
	HB_P_PUSHLOCALNEAR, 3,	/* MCLI */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01457) */
/* 01449 */ HB_P_LINEOFFSET, 78,	/* 100 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_JUMPNEAR, 9,	/* 9 (abs: 01464) */
/* 01457 */ HB_P_LINEOFFSET, 80,	/* 102 */
	HB_P_PUSHLOCALNEAR, 3,	/* MCLI */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_CLI */
/* 01464 */ HB_P_LINEOFFSET, 82,	/* 104 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 01624) */
/* 01473 */ HB_P_LINEOFFSET, 83,	/* 105 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'A', 'I', 'X', 'A', ' ', 'G', 'E', 'R', 'A', 'L', ' ', 'D', 'O', 'S', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', 'S', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01540 */ HB_P_LINEOFFSET, 84,	/* 106 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'D', 'a', 't', 'a', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01583 */ HB_P_LINEOFFSET, 85,	/* 107 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 113, 1,	/* 369 (abs: 01990) */
/* 01624 */ HB_P_LINEOFFSET, 86,	/* 108 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 115,	/* 115 (abs: 01748) */
/* 01635 */ HB_P_LINEOFFSET, 87,	/* 109 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'D', 'E', 'B', 'I', 'T', 'O', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01702 */ HB_P_LINEOFFSET, 88,	/* 110 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 245, 0,	/* 245 (abs: 01990) */
/* 01748 */ HB_P_LINEOFFSET, 89,	/* 111 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 01868) */
/* 01759 */ HB_P_LINEOFFSET, 90,	/* 112 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'p', '/', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01823 */ HB_P_LINEOFFSET, 91,	/* 113 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 124,	/* 124 (abs: 01990) */
/* 01868 */ HB_P_LINEOFFSET, 92,	/* 114 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 113,	/* 113 (abs: 01990) */
/* 01879 */ HB_P_LINEOFFSET, 93,	/* 115 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'd', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'A', 'g', 'r', 'u', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'D', 'U', 'M', 'E', 'N', 'T', 'O', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01947 */ HB_P_LINEOFFSET, 94,	/* 116 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'r', 'u', 'p', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'e', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01990 */ HB_P_LINEOFFSET, 96,	/* 118 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHLOCALNEAR, 23,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02005 */ HB_P_LINEOFFSET, 97,	/* 119 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 02058 */ HB_P_LINEOFFSET, 98,	/* 120 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02101 */ HB_P_LINEOFFSET, 99,	/* 121 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02144 */ HB_P_LINEOFFSET, 100,	/* 122 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'm', ' ', 'J', 'u', 'r', 'o', 's', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02188 */ HB_P_LINEOFFSET, 101,	/* 123 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02226) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02231) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02260 */ HB_P_LINEOFFSET, 102,	/* 124 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MDATA2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02304) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02309) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	9, 0,	/* MDATA2 */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02341) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02342) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02360 */ HB_P_LINEOFFSET, 103,	/* 125 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MDATA_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02399) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02404) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'a', 't', 'a', '_', 'p', 'g', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	10, 0,	/* MDATA_PG */
	8, 0,	/* MDATA1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02438) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02439) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02457 */ HB_P_LINEOFFSET, 104,	/* 126 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MVLR_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02496) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02501) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'v', 'l', 'r', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MTP */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02558 */ HB_P_LINEOFFSET, 105,	/* 127 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 48, 0,	/* 48 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MTP */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 02624) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02629) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02630) */
	HB_P_TRUE,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 02645) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 38,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02663 */ HB_P_LINEOFFSET, 106,	/* 128 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 02685 */ HB_P_LINEOFFSET, 107,	/* 129 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 02709) */
/* 02697 */ HB_P_LINEOFFSET, 108,	/* 130 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02704 */ HB_P_LINEOFFSET, 109,	/* 131 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02709 */ HB_P_LINEOFFSET, 111,	/* 133 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MCODVEN */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02748) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02753) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'v', 'e', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 35, 0,	/* 35 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	45, 0,	/* MCODVEN */
	25, 0,	/* CI */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 02804) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 43,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 92,	/* 92 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 02896) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'C', 'o', 'd', '.', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'n', 'a', 'o', ' ', 'i', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'p', '/', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02913 */ HB_P_LINEOFFSET, 112,	/* 134 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	76, 0,	/* MCOM_JUROS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02952) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02957) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'm', '_', 'j', 'u', 'r', 'o', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	76, 0,	/* MCOM_JUROS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03012 */ HB_P_LINEOFFSET, 113,	/* 135 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 03034 */ HB_P_LINEOFFSET, 114,	/* 136 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03049) */
	HB_P_JUMP, 28, 249,	/* -1764 (abs: 01282) */
/* 03049 */ HB_P_LINEOFFSET, 117,	/* 139 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 03073) */
	HB_P_PUSHSYMNEAR, 38,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_DOSHORT, 3,
/* 03073 */ HB_P_LINEOFFSET, 118,	/* 140 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 03156) */
/* 03084 */ HB_P_LINEOFFSET, 119,	/* 141 */
	HB_P_PUSHSYMNEAR, 2,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '9', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MDATA1 */
/* 03104 */ HB_P_LINEOFFSET, 120,	/* 142 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_ADDINT, 109, 1,	/* 365*/
	HB_P_POPLOCALNEAR, 9,	/* MDATA2 */
/* 03114 */ HB_P_LINEOFFSET, 121,	/* 143 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03132 */ HB_P_LINEOFFSET, 122,	/* 144 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03156 */ HB_P_LINEOFFSET, 124,	/* 146 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 83,	/* 83 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'O', 'P', 'C', 'O', 'E', 'S', ' ', 'D', 'E', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 6,
/* 03198 */ HB_P_LINEOFFSET, 125,	/* 147 */
	HB_P_PUSHSYMNEAR, 45,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 4,
/* 03211 */ HB_P_LINEOFFSET, 126,	/* 148 */
	HB_P_PUSHSYMNEAR, 45,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 4,
/* 03225 */ HB_P_LINEOFFSET, 127,	/* 149 */
	HB_P_PUSHSYMNEAR, 45,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_DOSHORT, 4,
/* 03239 */ HB_P_LINEOFFSET, 128,	/* 150 */
	HB_P_PUSHSYMNEAR, 45,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 53,	/* 53 */
	HB_P_DOSHORT, 4,
/* 03253 */ HB_P_LINEOFFSET, 129,	/* 151 */
	HB_P_PUSHSYMNEAR, 45,	/* BOTAO1 */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 71,	/* 71 */
	HB_P_DOSHORT, 4,
/* 03267 */ HB_P_LINEOFFSET, 130,	/* 152 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 03276 */ HB_P_LINEOFFSET, 131,	/* 153 */
	HB_P_PUSHSYMNEAR, 47,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'G', 'E', 'R', 'A', 'L', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 03302 */ HB_P_LINEOFFSET, 132,	/* 154 */
	HB_P_PUSHSYMNEAR, 47,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 03328 */ HB_P_LINEOFFSET, 133,	/* 155 */
	HB_P_PUSHSYMNEAR, 47,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 03353 */ HB_P_LINEOFFSET, 134,	/* 156 */
	HB_P_PUSHSYMNEAR, 47,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 03381 */ HB_P_LINEOFFSET, 135,	/* 157 */
	HB_P_PUSHSYMNEAR, 47,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 03412 */ HB_P_LINEOFFSET, 136,	/* 158 */
	HB_P_PUSHSYMNEAR, 48,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 03426 */ HB_P_LINEOFFSET, 137,	/* 159 */
	HB_P_PUSHSYMNEAR, 49,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 50,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03453) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03458) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 't', 'i', 'p', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 03471 */ HB_P_LINEOFFSET, 138,	/* 160 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03479 */ HB_P_LINEOFFSET, 139,	/* 161 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03486 */ HB_P_LINEOFFSET, 140,	/* 162 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 228, 0,	/* 228 (abs: 03721) */
/* 03496 */ HB_P_LINEOFFSET, 141,	/* 163 */
	HB_P_LOCALNEARSETINT, 74, 0, 0,	/* MCOD_CARTAO 0*/
/* 03502 */ HB_P_LINEOFFSET, 142,	/* 164 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'O', 'D', 'I', 'G', 'O', ' ', 'D', 'O', ' ', 'C', 'A', 'R', 'T', 'A', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 03536 */ HB_P_LINEOFFSET, 143,	/* 165 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'o', 'd', '.', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03564 */ HB_P_LINEOFFSET, 144,	/* 166 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	74, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03608) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03613) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 26, 0,	/* 26 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	74, 0,	/* MCOD_CARTAO */
	HB_P_PUSHSYMNEAR, 51,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 36,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03677 */ HB_P_LINEOFFSET, 145,	/* 167 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 03699 */ HB_P_LINEOFFSET, 146,	/* 168 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03706 */ HB_P_LINEOFFSET, 147,	/* 169 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03721) */
	HB_P_JUMP, 124, 246,	/* -2436 (abs: 01282) */
/* 03721 */ HB_P_LINEOFFSET, 151,	/* 173 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03736) */
	HB_P_JUMP, 109, 246,	/* -2451 (abs: 01282) */
/* 03736 */ HB_P_LINEOFFSET, 154,	/* 176 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MTOTAL 0*/
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MQUANTD_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 30,	/* MMULTA */
	HB_P_POPLOCALNEAR, 29,	/* MJUROS */
/* 03755 */ HB_P_LINEOFFSET, 156,	/* 178 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03806 */ HB_P_LINEOFFSET, 158,	/* 180 */
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', ' ', 'B', 'E', 'T', 'W', 'E', 'E', 'N', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MDATA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'A', 'N', 'D', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MDATA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 03904 */ HB_P_LINEOFFSET, 159,	/* 181 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 03951) */
/* 03916 */ HB_P_LINEOFFSET, 160,	/* 182 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 03951 */ HB_P_LINEOFFSET, 162,	/* 184 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MCODVEN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 04005) */
/* 03962 */ HB_P_LINEOFFSET, 163,	/* 185 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MCODVEN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 04005 */ HB_P_LINEOFFSET, 165,	/* 187 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 04052) */
/* 04014 */ HB_P_LINEOFFSET, 166,	/* 188 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
	HB_P_JUMP, 192, 0,	/* 192 (abs: 04241) */
/* 04052 */ HB_P_LINEOFFSET, 167,	/* 189 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 92,	/* 92 (abs: 04151) */
/* 04061 */ HB_P_LINEOFFSET, 168,	/* 190 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 04096 */ HB_P_LINEOFFSET, 169,	/* 191 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 74,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 136, 0,	/* 136 (abs: 04241) */
/* 04108 */ HB_P_LINEOFFSET, 170,	/* 192 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 74,	/* MCOD_CARTAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 04241) */
/* 04151 */ HB_P_LINEOFFSET, 172,	/* 194 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 04197) */
/* 04160 */ HB_P_LINEOFFSET, 173,	/* 195 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 04241) */
/* 04197 */ HB_P_LINEOFFSET, 174,	/* 196 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 04241) */
/* 04206 */ HB_P_LINEOFFSET, 175,	/* 197 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 04241 */ HB_P_LINEOFFSET, 177,	/* 199 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 04284 */ HB_P_LINEOFFSET, 178,	/* 200 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 9, 0,	/* ARET */
/* 04292 */ HB_P_LINEOFFSET, 179,	/* 201 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 9, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04313 */ HB_P_LINEOFFSET, 180,	/* 202 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04337 */ HB_P_LINEOFFSET, 181,	/* 203 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 04405) */
/* 04351 */ HB_P_LINEOFFSET, 182,	/* 204 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'b', 'a', 'i', 'x', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 208, 243,	/* -3120 (abs: 01282) */
/* 04405 */ HB_P_LINEOFFSET, 185,	/* 207 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 39,	/* MCOD_VEND */
/* 04417 */ HB_P_LINEOFFSET, 186,	/* 208 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04428 */ HB_P_LINEOFFSET, 187,	/* 209 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* M_POS */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04439 */ HB_P_LINEOFFSET, 188,	/* 210 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 04445 */ HB_P_LINEOFFSET, 189,	/* 211 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 219, 1,	/* 475 (abs: 04937) */
/* 04465 */ HB_P_LINEOFFSET, 190,	/* 212 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MBAIXA 2*/
	'S', 0, 
/* 04473 */ HB_P_LINEOFFSET, 191,	/* 213 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 13, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 106,	/* 106 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 15,	/* MDIAS_ATRAS */
/* 04498 */ HB_P_LINEOFFSET, 192,	/* 214 */
	HB_P_LOCALNEARSETINT, 30, 0, 0,	/* MMULTA 0*/
	HB_P_PUSHLOCALNEAR, 30,	/* MMULTA */
	HB_P_POPLOCALNEAR, 29,	/* MJUROS */
/* 04508 */ HB_P_LINEOFFSET, 193,	/* 215 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 15,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 04525) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 76,	/* MCOM_JUROS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 04596) */
/* 04527 */ HB_P_LINEOFFSET, 194,	/* 216 */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 15,	/* MDIAS_ATRAS */
/* 04543 */ HB_P_LINEOFFSET, 195,	/* 217 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 13, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 30,	/* MMULTA */
/* 04568 */ HB_P_LINEOFFSET, 196,	/* 218 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 15,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 13, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 29,	/* MJUROS */
/* 04596 */ HB_P_LINEOFFSET, 198,	/* 220 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 29,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 30,	/* MMULTA */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 7,	/* MVLPAGO */
/* 04615 */ HB_P_LINEOFFSET, 199,	/* 221 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 59,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MJUROS */
	HB_P_PUSHLOCALNEAR, 30,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MVLPAGO */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04850) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', '/', 'F', 0, 
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 04856) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 04859 */ HB_P_LINEOFFSET, 200,	/* 222 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* M_POS */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 29,	/* MJUROS */
	HB_P_PUSHLOCALNEAR, 30,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 7,	/* MVLPAGO */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_DOSHORT, 2,
/* 04928 */ HB_P_LINEOFFSET, 201,	/* 223 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 29, 254,	/* -483 (abs: 04451) */
/* 04937 */ HB_P_LINEOFFSET, 202,	/* 224 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 04998) */
/* 04951 */ HB_P_LINEOFFSET, 203,	/* 225 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 127, 241,	/* -3713 (abs: 01282) */
/* 04998 */ HB_P_LINEOFFSET, 206,	/* 228 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05045 */ HB_P_LINEOFFSET, 207,	/* 229 */
	HB_P_PUSHSYMNEAR, 62,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_DOSHORT, 4,
/* 05060 */ HB_P_LINEOFFSET, 208,	/* 230 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05069 */ HB_P_LINEOFFSET, 209,	/* 231 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'E', 'm', 'p', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05098 */ HB_P_LINEOFFSET, 210,	/* 232 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'l', 'i', 'e', 'n', 't', 0, 
	HB_P_DOSHORT, 1,
/* 05129 */ HB_P_LINEOFFSET, 211,	/* 233 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 14, 0,	/* 14*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 05163 */ HB_P_LINEOFFSET, 212,	/* 234 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 0, 
	HB_P_DOSHORT, 1,
/* 05196 */ HB_P_LINEOFFSET, 213,	/* 235 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05226 */ HB_P_LINEOFFSET, 214,	/* 236 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 47, 0,	/* 47*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 0, 
	HB_P_DOSHORT, 1,
/* 05261 */ HB_P_LINEOFFSET, 215,	/* 237 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 59, 0,	/* 59*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 05295 */ HB_P_LINEOFFSET, 216,	/* 238 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 05323 */ HB_P_LINEOFFSET, 217,	/* 239 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 05351 */ HB_P_LINEOFFSET, 218,	/* 240 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05359 */ HB_P_LINEOFFSET, 219,	/* 241 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'Q', 't', 'd', '.', 'D', 'o', 'c', '.', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'M', 'u', 'l', 't', 'a', '/', 'J', 'u', 'r', 'o', 's', ' ', 'R', '$', ':', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'R', '$', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05437 */ HB_P_LINEOFFSET, 220,	/* 242 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 05499) */
/* 05448 */ HB_P_LINEOFFSET, 221,	/* 243 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'm', 'a', 'r', 'c', 'a', 'r', ' ', 't', 'o', 'd', 'a', 's', ' ', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 05499 */ HB_P_LINEOFFSET, 223,	/* 245 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 05520) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 116,	/* 116 (abs: 05636) */
/* 05522 */ HB_P_LINEOFFSET, 224,	/* 246 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 05528 */ HB_P_LINEOFFSET, 225,	/* 247 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 05636) */
/* 05547 */ HB_P_LINEOFFSET, 226,	/* 248 */
	HB_P_PUSHSYMNEAR, 64,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', 'X', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPOP,
/* 05575 */ HB_P_LINEOFFSET, 227,	/* 249 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 05590 */ HB_P_LINEOFFSET, 228,	/* 250 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* MQUANTD_DOC 1*/
/* 05596 */ HB_P_LINEOFFSET, 229,	/* 251 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
/* 05612 */ HB_P_LINEOFFSET, 230,	/* 252 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTAL */
/* 05628 */ HB_P_LINEOFFSET, 231,	/* 253 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 156,	/* -100 (abs: 05534) */
/* 05636 */ HB_P_LINEOFFSET, 233,	/* 255 */
	HB_P_LOCALNEARSETINT, 19, 0, 0,	/* MPOINT 0*/
/* 05642 */ HB_P_LINEOFFSET, 235,	/* 257 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05651 */ HB_P_LINEOFFSET, 236,	/* 258 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MQUANTD_DOC */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05688 */ HB_P_LINEOFFSET, 237,	/* 259 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 33, 0,	/* 33*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05730 */ HB_P_LINEOFFSET, 238,	/* 260 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 58, 0,	/* 58*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05776 */ HB_P_LINEOFFSET, 239,	/* 261 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05784 */ HB_P_LINEOFFSET, 240,	/* 262 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 65,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 19,	/* MPOINT */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05836 */ HB_P_LINEOFFSET, 242,	/* 264 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 06034) */
/* 05849 */ HB_P_LINEOFFSET, 243,	/* 265 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 05950) */
/* 05867 */ HB_P_LINEOFFSET, 244,	/* 266 */
	HB_P_PUSHSYMNEAR, 64,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPOP,
/* 05895 */ HB_P_LINEOFFSET, 245,	/* 267 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 05910 */ HB_P_LINEOFFSET, 246,	/* 268 */
	HB_P_LOCALNEARADDINT, 16, 255, 255,	/* MQUANTD_DOC -1*/
/* 05916 */ HB_P_LINEOFFSET, 247,	/* 269 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
/* 05932 */ HB_P_LINEOFFSET, 248,	/* 270 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTAL */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 06050) */
/* 05950 */ HB_P_LINEOFFSET, 250,	/* 272 */
	HB_P_PUSHSYMNEAR, 64,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 76,	/* 76 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', 'X', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVARREF, 3, 0,	/* M_DUPR */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPOP,
/* 05978 */ HB_P_LINEOFFSET, 251,	/* 273 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPOP,
/* 05993 */ HB_P_LINEOFFSET, 252,	/* 274 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* MQUANTD_DOC 1*/
/* 05999 */ HB_P_LINEOFFSET, 253,	/* 275 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
/* 06015 */ HB_P_LINEOFFSET, 254,	/* 276 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 19,	/* MPOINT */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTAL */
	HB_P_JUMP, 123, 254,	/* -389 (abs: 05642) */
/* 06034 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 109, 254,	/* -403 (abs: 05642) */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 06053) */
	HB_P_JUMP, 104, 254,	/* -408 (abs: 05642) */
/* 06053 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 06060 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 06110) */
/* 06080 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 06101) */
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 06110) */
/* 06101 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 215,	/* -41 (abs: 06067) */
/* 06110 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 06142) */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 06190) */
/* 06144 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'N', 'a', 'o', ' ', 't', 'e', 'm', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'm', 'a', 'r', 'c', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 215, 236,	/* -4905 (abs: 01282) */
/* 06190 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 210, 1,	/* 466 (abs: 06663) */
/* 06200 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 17,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 110,	/* 110 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ' ', 'D', 'A', ' ', 'B', 'A', 'I', 'X', 'A', 0, 
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 7,
/* 06240 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 10, 0,	/* MCODIGO_BAN */
/* 06247 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', ' ', 'P', 'a', 'g', 'a', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06289 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06332 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', 'i', 'g', 'o', '_', 'b', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06388) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 06400) */
	HB_P_PUSHSYMNEAR, 66,	/* VER_BANCO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06418 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 06441 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	77, 0,	/* MOBS1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06481) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06486) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'o', 'b', 's', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06518 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 06541 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'A', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 06580 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 169, 254,	/* -343 (abs: 06247) */
/* 06593 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 41,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06601 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06617) */
	HB_P_JUMP, 44, 235,	/* -5332 (abs: 01282) */
/* 06617 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', 's', ' ', 'B', 'A', 'I', 'X', 'A', 'S', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
	HB_P_JUMPNEAR, 45,	/* 45 (abs: 06706) */
/* 06663 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'A', 'D', 'O', 'S', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 06706 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06721) */
	HB_P_JUMP, 196, 234,	/* -5436 (abs: 01282) */
/* 06721 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 06740) */
/* 06733 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_POPLOCALNEAR, 20,	/* MVLR_PG */
/* 06740 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 06847) */
/* 06752 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 06799 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 17, 38,	/* 9745 (abs: 16554) */
/* 06812 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 67,	/* REC_DUPR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 16,	/* MQUANTD_DOC */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_ZERO,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_DOSHORT, 9,
	HB_P_JUMP, 238, 37,	/* 9710 (abs: 16554) */
/* 06847 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 98, 23,	/* 5986 (abs: 12843) */
/* 06860 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 68,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 49,	/* MTELA_DUP */
/* 06876 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 62,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_PUSHLOCALNEAR, 26,	/* LA */
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'a', 's', ' ', 'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 6,
/* 06951 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07001 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', '.', 'B', 'a', 'n', 'c', 'o', '/', 'C', 'o', 'd', '.', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07051 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'A', 'g', 'e', 'n', 'c', 'i', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07085 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 50, 0,	/* 50*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', '/', 'C', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07115 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07165 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'D', 'a', 't', 'a', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07215 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 39, 0,	/* 39*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07252 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07302 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'a', 'g', '.', '[', 'C', ']', 'a', 'r', 't', 'e', 'r', 'i', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07351 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'r', 'r', 'e', 'n', 't', 'i', 's', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07401 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07451 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'O', 'B', 'S', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07482 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 31,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_PUSHLOCALNEAR, 27,	/* CA */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 07511 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'V', 'a', 'l', 'o', 'r', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 07554 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHSYMNEAR, 69,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 57,	/* MPOS_INI */
/* 07564 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_LOCALNEARSETINT, 75, 0, 0,	/* MVALOR 0*/
/* 07571 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 59,	/* MTTIPO */
/* 07583 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_LOCALNEARSETINT, 60, 0, 0,	/* MTNUM_BANCO 0*/
/* 07590 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 61,	/* MTAGENCIA */
/* 07602 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 62,	/* MTC_C */
/* 07614 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_PUSHSYMNEAR, 26,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 07625 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 140, 11,	/* 2956 (abs: 10589) */
/* 07636 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 07646 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 29,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 10, 0,	/* 10*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 30,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07691 */ HB_P_LINE, 99, 1,	/* 355 */
	HB_P_PUSHSYMNEAR, 46,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 07700 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 07819) */
/* 07710 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 84,	/* 84 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'i', 'g', 'i', 't', 'a', 'd', 'o', ' ', 'e', 's', 't', 'a', 'r', ' ', 'M', 'A', 'I', 'O', 'R', ' ', 'q', 'u', 'e', ' ', 'o', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ' ', '-', ' ', 'D', 'i', 'g', 'i', 't', 'e', ' ', 't', 'u', 'd', 'o', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 07804 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MTOTAL 0*/
/* 07811 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 73,	/* MAT_DUP */
/* 07819 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 63,	/* MTDUPLICATA */
/* 07831 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 64,	/* MTEMISSAO */
/* 07839 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHSYMNEAR, 2,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 65,	/* MTVENC */
/* 07860 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_LOCALNEARSETSTR, 67, 2, 0,	/* MTBANCO 2*/
	'C', 0, 
/* 07869 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 68,	/* MTCORRENTE */
/* 07881 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_LOCALNEARSETINT, 66, 0, 0,	/* MTVALOR 0*/
	HB_P_PUSHLOCALNEAR, 66,	/* MTVALOR */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 71,	/* MPRAZO_CART */
	HB_P_POPLOCALNEAR, 70,	/* MDESC_CART */
/* 07895 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 72,	/* MCARTAO */
/* 07907 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', '.', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07963 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08009) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08014) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'T', 't', 'i', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'H', ',', 'D', 'U', ',', 'C', 'T', ',', 'F', 'I', ',', 'R', 'E', ',', 'D', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08079 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08125) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08130) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'T', 'n', 'u', 'm', '_', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 46, 0,	/* 46 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	59, 0,	/* MTTIPO */
	60, 0,	/* MTNUM_BANCO */
	24, 0,	/* LI */
	25, 0,	/* CI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08195) */
	HB_P_PUSHSYMNEAR, 51,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 08196) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_NOTEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08231 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 41, 0,	/* 41*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MTAGENCIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08277) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08282) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'T', 'a', 'g', 'e', 'n', 'c', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08335 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 56, 0,	/* 56*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	62, 0,	/* MTC_C */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08381) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08386) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'T', 'c', '_', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08435 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	63, 0,	/* MTDUPLICATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08481) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08486) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'T', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08524 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 08547 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 08579) */
/* 08560 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 221, 7,	/* 2013 (abs: 10589) */
/* 08579 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 08616) */
/* 08592 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 71,	/* QTD_CHQ */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MTNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 61,	/* MTAGENCIA */
	HB_P_PUSHLOCALNEAR, 62,	/* MTC_C */
	HB_P_DOSHORT, 4,
/* 08616 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'a', 'g', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MTDUPLICATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 08725 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHLOCALNEAR, 60,	/* MTNUM_BANCO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 08776) */
/* 08734 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MTNUM_BANCO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 08776 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 08820 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 72, 0,	/* CONSULTA */
/* 08829 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 72, 0,	/* CONSULTA */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08851 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08876 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 72, 0,	/* CONSULTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 205, 2,	/* 717 (abs: 09606) */
/* 08892 */ HB_P_LINE, 135, 1,	/* 391 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 08919) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 08973) */
/* 08921 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 45, 2,	/* 557 (abs: 09527) */
/* 08973 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09000) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 09057) */
/* 09002 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'E', 's', 't', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 217, 1,	/* 473 (abs: 09527) */
/* 09057 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09084) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 09144) */
/* 09086 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 't', 'a', ' ', 'f', 'i', 'a', 'n', 'a', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 130, 1,	/* 386 (abs: 09527) */
/* 09144 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 09213) */
/* 09161 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'E', 's', 't', 'e', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', 's', 't', 'a', ' ', 'e', 'm', ' ', 'A', 'B', 'E', 'R', 'T', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 61, 1,	/* 317 (abs: 09527) */
/* 09213 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09240) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 09293) */
/* 09242 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 't', 'e', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 237, 0,	/* 237 (abs: 09527) */
/* 09293 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09320) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 09376) */
/* 09322 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'E', 's', 't', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'A', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 154, 0,	/* 154 (abs: 09527) */
/* 09376 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09403) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 09462) */
/* 09405 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'E', 's', 't', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'i', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 67,	/* 67 (abs: 09527) */
/* 09462 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHMEMVAR, 72, 0,	/* CONSULTA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 09527) */
/* 09479 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'E', 's', 't', 'e', ' ', 'C', 'a', 'r', 't', 'a', 'o', ' ', 'j', 'a', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'e', ' ', 'j', 'a', ' ', 'f', 'o', 'i', ' ', 'P', 'A', 'G', 'O', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
/* 09527 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'm', 'e', 's', 'm', 'o', ' ', 'a', 's', 's', 'i', 'm', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 09579 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 09601) */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09606) */
	HB_P_JUMP, 70, 248,	/* -1978 (abs: 07625) */
/* 09606 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 66,	/* MTVALOR */
/* 09616 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 67,	/* MTBANCO */
/* 09627 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	64, 0,	/* MTEMISSAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09673) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09678) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'T', 'e', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09710 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 52, 0,	/* 52*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	65, 0,	/* MTVENC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09756) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09761) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'T', 'v', 'e', 'n', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 39, 0,	/* 39 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	65, 0,	/* MTVENC */
	64, 0,	/* MTEMISSAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 73,	/* VENCIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 09810) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 09809) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 09810) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09828 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MTVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09874) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09879) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'T', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MTVALOR */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 09936 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 5, 0,	/* 5*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 65, 0,	/* 65*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MTBANCO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09982) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 09987) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'T', 'b', 'a', 'n', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MTBANCO */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'B', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 10030) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 95, 0,	/* 95 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	24, 0,	/* LI */
	25, 0,	/* CI */
	HB_P_PUSHSYMNEAR, 44,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'C', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'C', 'A', 'R', 'T', 'E', 'I', 'R', 'A', ' ', '[', 'B', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'p', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', 'B', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10142 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	68, 0,	/* MTCORRENTE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10188) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10193) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'T', 'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10230 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 27, 0,	/* 27*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	39, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10276) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10281) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 48, 0,	/* 48 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	39, 0,	/* MCOD_VEND */
	24, 0,	/* LI */
	25, 0,	/* CI */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10325) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 24,	/* 24 (abs: 10347) */
	HB_P_PUSHSYMNEAR, 43,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 74,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 31, 0,	/* 31*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10365 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 32,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* LI */
	HB_P_ADDINT, 8, 0,	/* 8*/
	HB_P_PUSHLOCALNEAR, 25,	/* CI */
	HB_P_ADDINT, 7, 0,	/* 7*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 34,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	69, 0,	/* MTOBS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 10411) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 10416) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'T', 'o', 'b', 's', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 35, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 10444 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 39,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 19, 0,	/* GETLIST */
/* 10467 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10483) */
	HB_P_JUMP, 217, 244,	/* -2855 (abs: 07625) */
/* 10483 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 10526 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 10541) */
	HB_P_JUMP, 159, 244,	/* -2913 (abs: 07625) */
/* 10541 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 59,	/* MTTIPO */
	HB_P_PUSHLOCALNEAR, 60,	/* MTNUM_BANCO */
	HB_P_PUSHLOCALNEAR, 61,	/* MTAGENCIA */
	HB_P_PUSHLOCALNEAR, 62,	/* MTC_C */
	HB_P_PUSHLOCALNEAR, 63,	/* MTDUPLICATA */
	HB_P_PUSHLOCALNEAR, 64,	/* MTEMISSAO */
	HB_P_PUSHLOCALNEAR, 65,	/* MTVENC */
	HB_P_PUSHLOCALNEAR, 66,	/* MTVALOR */
	HB_P_PUSHLOCALNEAR, 67,	/* MTBANCO */
	HB_P_PUSHLOCALNEAR, 68,	/* MTCORRENTE */
	HB_P_PUSHLOCALNEAR, 69,	/* MTOBS */
	HB_P_ARRAYGEN, 11, 0,	/* 11 */
	HB_P_DOSHORT, 2,
/* 10576 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 66,	/* MTVALOR */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 75,	/* MVALOR */
	HB_P_JUMP, 111, 244,	/* -2961 (abs: 07625) */
/* 10589 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 10665) */
/* 10599 */ HB_P_LINE, 180, 1,	/* 436 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'V', 'a', 'l', 'o', 'r', ' ', 'D', 'i', 'g', 'i', 't', 'a', 'd', 'o', ' ', 'm', 'e', 'n', 'o', 'r', ' ', 'q', 'u', 'e', ' ', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 10646 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 92, 219,	/* -9380 (abs: 01282) */
/* 10665 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHLOCALNEAR, 75,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 10846) */
/* 10676 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 111,	/* 111 */
	'O', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'I', 'n', 'c', 'l', 'u', 'i', 'd', 'o', 's', ' ', 'e', 's', 't', 'a', 'r', ' ', 'M', 'A', 'I', 'O', 'R', ' ', 'q', 'u', 'e', ' ', 'o', ' ', 'd', 'o', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', 'P', 'R', 'I', 'N', 'C', 'I', 'P', 'A', 'L', ',', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'P', 'r', 'o', 's', 's', 'e', 'g', 'i', 'r', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', ' ', 'm', 'e', 's', 'm', 'o', ' ', 'a', 's', 's', 'i', 'm', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 10803 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 10825) */
	HB_P_PUSHSYMNEAR, 40,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 10846) */
/* 10827 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 167, 218,	/* -9561 (abs: 01282) */
/* 10846 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'o', 's', ' ', 'D', 'a', 'd', 'o', 's', ' ', '?', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 10906 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 10937) */
/* 10918 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 76, 218,	/* -9652 (abs: 01282) */
/* 10937 */ HB_P_LINE, 196, 1,	/* 452 */
	HB_P_LOCALNEARSETSTR, 53, 6, 0,	/* MOBS_DUP 6*/
	'D', 'u', 'p', '.', ':', 0, 
/* 10950 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_LOCALNEARSETSTR, 56, 1, 0,	/* MOBS_DUP3 1*/
	0, 
	HB_P_PUSHLOCALNEAR, 56,	/* MOBS_DUP3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 55,	/* MOBS_DUP2 */
	HB_P_POPLOCALNEAR, 54,	/* MOBS_DUP1 */
/* 10965 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 10972 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 11013 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 207, 0,	/* 207 (abs: 11238) */
/* 11034 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 17,	/* 17 (abs: 11069) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 11074) */
	HB_P_JUMP, 160, 0,	/* 160 (abs: 11231) */
/* 11074 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11113) */
/* 11089 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_DUP */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 53,	/* MOBS_DUP */
	HB_P_JUMPNEAR, 117,	/* 117 (abs: 11228) */
/* 11113 */ HB_P_LINE, 206, 1,	/* 462 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MOBS_DUP1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11152) */
/* 11128 */ HB_P_LINE, 207, 1,	/* 463 */
	HB_P_PUSHLOCALNEAR, 54,	/* MOBS_DUP1 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 54,	/* MOBS_DUP1 */
	HB_P_JUMPNEAR, 78,	/* 78 (abs: 11228) */
/* 11152 */ HB_P_LINE, 208, 1,	/* 464 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* MOBS_DUP2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 11191) */
/* 11167 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHLOCALNEAR, 55,	/* MOBS_DUP2 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 55,	/* MOBS_DUP2 */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 11228) */
/* 11191 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 56,	/* MOBS_DUP3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 24,	/* 24 (abs: 11228) */
/* 11206 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHLOCALNEAR, 56,	/* MOBS_DUP3 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 56,	/* MOBS_DUP3 */
/* 11228 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 41, 255,	/* -215 (abs: 11020) */
/* 11238 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 11245 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 246, 3,	/* 1014 (abs: 12276) */
/* 11265 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 11283 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_LOCALNEARSETSTR, 13, 2, 0,	/* OPCAO 2*/
	' ', 0, 
/* 11292 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 11380) */
/* 11314 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'f', 'a', 'z', 'e', 'r', ' ', 'a', ' ', 'B', 'A', 'I', 'X', 'A', ' ', 'd', 'e', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', 'g', 'o', 'r', 'a', ' ', '[', 'S', '/', 'n', ']', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 11380 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_PUSHSTRSHORT, 181,	/* 181 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', '(', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 't', 'i', 'p', 'o', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'a', 'g', 'e', 'n', 'c', 'i', 'a', ',', 'c', '_', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 't', 'i', 'p', '_', 'c', 'l', 'i', ',', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 'v', 'e', 'n', 'c', '1', ',', 'v', 'e', 'n', 'c', ',', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ',', 'b', 'a', 'n', 'c', 'o', ',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ',', 'o', 'b', 's', ',', 'c', 'o', 'r', 'r', 'e', 'n', 't', 'e', ',', 'l', 'i', 'n', '1', ',', 'l', 'i', 'n', '2', ',', 'l', 'i', 'n', '3', ',', 't', 'i', 'p', '_', 'p', 'g', ',', 0, 
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 11569 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 11620) */
/* 11581 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'd', 'a', 't', 'o', 'p', 'e', ',', 'd', 'a', 't', 'p', 'a', 'g', ',', 'v', 'l', 'p', 'a', 'g', 'o', ',', 'p', 'a', 'g', 'o', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 11620 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'b', 'a', 'n', 'c', 'o', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCODEMPRESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 11719) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 11734) */
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 11968) */
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 70,	/* MDESC_CART */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 11976) */
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 77, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MOBS_DUP1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* MOBS_DUP2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 56,	/* MOBS_DUP3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 12120 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 78,	/* 78 (abs: 12208) */
/* 12132 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 73,	/* MAT_DUP */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 12208 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* CCOMM */
/* 12247 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 53, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12266 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 3, 252,	/* -1021 (abs: 11252) */
/* 12276 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 12283 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 191, 1,	/* 447 (abs: 12748) */
/* 12304 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12326) */
	HB_P_JUMP, 162, 1,	/* 418 (abs: 12741) */
/* 12326 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_DUPR */
/* 12335 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12415 */ HB_P_LINE, 18, 2,	/* 530 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12440 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'a', 'g', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 77, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', '_', 't', 'r', 'a', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'h', 'o', 'r', 'a', '_', 'b', 'x', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'o', 'b', 's', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* MOBS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'n', 'c', 'o', '_', 'b', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12738 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 57, 254,	/* -455 (abs: 12290) */
/* 12748 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12773 */ HB_P_LINE, 32, 2,	/* 544 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'E', 's', 't', 'a', ' ', 'o', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'r', 'e', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'c', 'o', 'm', ' ', 'S', 'U', 'C', 'E', 'S', 'S', 'O', '.', 0, 
	HB_P_DOSHORT, 1,
/* 12824 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 218, 210,	/* -11558 (abs: 01282) */
/* 12843 */ HB_P_LINE, 35, 2,	/* 547 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MTOTAL 0*/
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_POPLOCALNEAR, 16,	/* MQUANTD_DOC */
/* 12857 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 28,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 12898 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 12905 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* M_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 129, 9,	/* 2433 (abs: 15356) */
/* 12926 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 12945 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MBAIXA 2*/
	'S', 0, 
/* 12954 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12976) */
	HB_P_JUMP, 72, 9,	/* 2376 (abs: 15349) */
/* 12976 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12988) */
	HB_P_JUMP, 67, 9,	/* 2371 (abs: 15356) */
/* 12988 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 13017) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 13034) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PUSHDOUBLE, 123, 20, 174, 71, 225, 122, 132, 63, 10, 2,	/* 0.01, 10, 2 */
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 13044) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 181, 5,	/* 1461 (abs: 14505) */
/* 13047 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_PAG */
	HB_P_PUSHSYMNEAR, 59,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '*', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 13240 */ HB_P_LINE, 50, 2,	/* 562 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* M_CAX */
	HB_P_PUSHSYMNEAR, 59,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_DOSHORT, 2,
/* 13326 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 80, 1,	/* 336 (abs: 13669) */
/* 13336 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 27, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'a', 'g', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 77, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'c', 'o', 'n', 't', 'a', ' ', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'm', 'o', 'v', '_', 'c', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 13540) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 13544) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'h', 'o', 'r', 'a', '_', 'b', 'x', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'o', 'b', 's', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* MOBS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'n', 'c', 'o', '_', 'b', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 13669 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* MQUANTD_DOC 1*/
/* 13676 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_LOCALNEARADDINT, 17, 0, 0,	/* MTOT_MULTA 0*/
/* 13683 */ HB_P_LINE, 68, 2,	/* 580 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTAL */
/* 13693 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 21,	/* MRESTA */
/* 13710 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 20,	/* MVLR_PG */
/* 13727 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 31,	/* MTIPO */
/* 13741 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MNUMERO */
/* 13755 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 33,	/* MDUPLICATA */
/* 13769 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 34,	/* MVALOR_DUP */
/* 13783 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 37,	/* MCOD_C */
/* 13797 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 35,	/* MCLIENTE */
/* 13811 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 36,	/* MTIP_CLI */
/* 13825 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 38,	/* MEMISSAO */
/* 13839 */ HB_P_LINE, 80, 2,	/* 592 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 39,	/* MCOD_VEND */
/* 13853 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 40,	/* MNUM_PED */
/* 13867 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 41,	/* MBANCO */
/* 13881 */ HB_P_LINE, 83, 2,	/* 595 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MCOMISSAO */
/* 13895 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 78,	/* MCOD_OPERADO */
/* 13909 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 43,	/* MOBS */
/* 13923 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 44,	/* MVENC */
/* 13937 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 13962) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 21,	/* MRESTA */
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 185, 63, 10, 2,	/* 0.10, 10, 2 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 114, 5,	/* 1394 (abs: 15356) */
/* 13965 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 190,	/* 190 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', '(', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 't', 'i', 'p', 'o', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 'v', 'a', 'l', 'o', 'r', '_', 'd', 'u', 'p', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 't', 'i', 'p', '_', 'c', 'l', 'i', ',', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 'v', 'e', 'n', 'c', '1', ',', 'v', 'e', 'n', 'c', ',', 'v', 'a', 'l', 'o', 'r', ',', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ',', 'n', 'u', 'm', '_', 'p', 'e', 'd', ',', 'c', 'o', 'n', 't', 'a', ',', 'b', 'a', 'n', 'c', 'o', ',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ',', 'o', 'b', 's', ',', 'c', 'o', 'm', '_', 's', 'e', 'm', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCODEMPRESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 14212) */
	HB_P_PUSHLOCALNEAR, 32,	/* MNUMERO */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 14218) */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MDUPLICATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVALOR_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 37,	/* MCOD_C */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MCLIENTE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MTIP_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MEMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MMULTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 14340) */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MJUROS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 14346) */
	HB_P_PUSHLOCALNEAR, 79,	/* MDATPAG */
	HB_P_JUMPNEAR, 4,	/* 4 (abs: 14348) */
	HB_P_PUSHLOCALNEAR, 44,	/* MVENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MRESTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 39,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 40,	/* MNUM_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MBANCO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 42,	/* MCOMISSAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 78,	/* MCOD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MOBS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
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
	HB_P_JUMP, 86, 3,	/* 854 (abs: 15356) */
/* 14505 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_PAG */
	HB_P_PUSHSYMNEAR, 59,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 60,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 14707 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 33,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* M_CAX */
	HB_P_PUSHSYMNEAR, 59,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_ARRAYGEN, 8, 0,	/* 8 */
	HB_P_DOSHORT, 2,
/* 14800 */ HB_P_LINE, 139, 2,	/* 651 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 225, 1,	/* 481 (abs: 15288) */
/* 14810 */ HB_P_LINE, 140, 2,	/* 652 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_DUPR */
/* 14819 */ HB_P_LINE, 141, 2,	/* 653 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'v', 'l', 'p', 'a', 'g', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* CONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 14900 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14925 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'v', 'l', 'p', 'a', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'a', 'g', 'o', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'j', 'u', 'r', 'o', 's', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_DUPR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 9, 0,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 15091) */
	HB_P_ZERO,
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 15100) */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 77, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'm', 'o', 'v', '_', 'c', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 15159) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 15163) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'h', 'o', 'r', 'a', '_', 'b', 'x', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'o', 'b', 's', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* MOBS1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'b', 'a', 'n', 'c', 'o', '_', 'b', 'x', ' ', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 54,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MCODIGO_BAN */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'r', 'e', 'c', 'n', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15288 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* MQUANTD_DOC 1*/
/* 15295 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 17,	/* MTOT_MULTA */
/* 15312 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* MTOTAL */
/* 15329 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHLOCALNEAR, 20,	/* MVLR_PG */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 20,	/* MVLR_PG */
/* 15346 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 119, 246,	/* -2441 (abs: 12912) */
/* 15356 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHLOCALNEAR, 1,	/* CX */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 189, 2,	/* 701 (abs: 16064) */
/* 15366 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_LOCALNEARSETINT, 28, 0, 0,	/* I 0*/
/* 15373 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_LOCALNEARSETINT, 28, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_PUSHSYMNEAR, 57,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* M_CAX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 161, 2,	/* 673 (abs: 16064) */
/* 15394 */ HB_P_LINE, 165, 2,	/* 677 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'a', 'i', 'x', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 15416 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHSYMNEAR, 79,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 15424 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 146, 0,	/* 146 (abs: 15588) */
/* 15445 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 80,	/* CAIX */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 81,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSENEAR, 102,	/* 102 (abs: 15588) */
/* 15488 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_PUSHSYMNEAR, 80,	/* CAIX */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* COD_VEND */
	HB_P_POPLOCALNEAR, 39,	/* MCOD_VEND */
/* 15497 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 83,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 15536) */
/* 15507 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* CAIX */
	HB_P_POPALIASEDFIELDNEAR, 84,	/* OP_PG */
/* 15518 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 85,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 15526 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_PUSHSYMNEAR, 86,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMPNEAR, 54,	/* 54 (abs: 15588) */
/* 15536 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 216, 1,	/* 472 (abs: 16057) */
/* 15588 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 159,	/* 159 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'c', 'a', 'i', 'x', 'a', ' ', '(', 'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 't', 'i', 'p', 'o', ',', 'n', 'u', 'm', '_', 'd', 'u', 'p', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'd', 'a', 't', 'a', ',', 'v', 'e', 'n', 'c', 'i', ',', 'v', 'a', 'l', 'o', 'r', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', 'a', ',', 'p', 'g', ',', 'o', 'p', '_', 'p', 'g', ',', 'v', 'a', 'l', 'o', 'r', '_', 'c', 'o', 'm', ',', 'c', 'o', 'm', 'i', 's', 's', 'a', 'o', ',', 't', 'p', '_', 'm', 'o', 'v', ',', 'h', 'o', 'r', 'a', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 76, 0,	/* MCODEMPRESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 77, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 6, 0,	/* M_CAX */
	HB_P_PUSHLOCALNEAR, 28,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
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
/* 16054 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_LOCALNEARADDINT, 28, 1, 0,	/* I 1*/
	HB_P_JUMP, 87, 253,	/* -681 (abs: 15380) */
/* 16064 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16089 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHSYMNEAR, 58,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'E', 's', 't', 'a', ' ', 'o', 'p', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'r', 'e', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'c', 'o', 'm', ' ', 'S', 'U', 'C', 'E', 'S', 'S', 'O', '.', 0, 
	HB_P_DOSHORT, 1,
/* 16140 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHSYMNEAR, 20,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 12,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 16165) */
	HB_P_PUSHSYMNEAR, 21,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 16166) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 16167 */ HB_P_LINE, 226, 2,	/* 738 */
	HB_P_PUSHSYMNEAR, 87,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 16175 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 96, 1,	/* 352 (abs: 16538) */
/* 16189 */ HB_P_LINE, 228, 2,	/* 740 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 59,	/* 59 (abs: 16255) */
/* 16198 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'R', 'e', 'c', 'i', 'b', 'o', ' ', 'd', 'e', ' ', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 16326) */
/* 16255 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 16326) */
/* 16267 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_PUSHSYMNEAR, 63,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'i', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'D', 'e', 'm', 'o', 'n', 's', 't', 'r', 'a', 't', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'D', 'e', 'b', 'i', 't', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 13,	/* OPCAO */
/* 16326 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHLOCALNEAR, 13,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 202, 0,	/* 202 (abs: 16538) */
/* 16339 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHSYMNEAR, 37,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 154, 0,	/* 154 (abs: 16504) */
/* 16353 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 88, 0,	/* MDEVEDOR */
/* 16362 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_MESSAGE, 55, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 56,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'v', 'a', 'l', 'o', 'r', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 52,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 88, 0,	/* MDEVEDOR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 16462 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_PUSHSYMNEAR, 67,	/* REC_DUPR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_PAG */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 16,	/* MQUANTD_DOC */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 88, 0,	/* MDEVEDOR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_DOSHORT, 10,
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 16538) */
/* 16504 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_PUSHSYMNEAR, 67,	/* REC_DUPR */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* M_PAG */
	HB_P_PUSHMEMVAR, 4, 0,	/* M_POS */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 16,	/* MQUANTD_DOC */
	HB_P_PUSHLOCALNEAR, 17,	/* MTOT_MULTA */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_PUSHLOCALNEAR, 10,	/* MDATA_PG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTP */
	HB_P_PUSHLOCALNEAR, 18,	/* MTOTAL */
	HB_P_ZERO,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_CLI */
	HB_P_DOSHORT, 10,
/* 16538 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHSYMNEAR, 70,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 49,	/* MTELA_DUP */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 88, 196,	/* -15272 (abs: 01282) */
	HB_P_ENDPROC
/* 16558 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

