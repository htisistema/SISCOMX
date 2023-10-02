/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC27.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC27.PRG /q /oC:\hti\SISCOM\SAC27.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:04 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC27.PRG"

HB_FUNC( SAC27 );
HB_FUNC( SAC271 );
HB_FUNC( SAC272 );
HB_FUNC( SAC273 );
HB_FUNC( SAC274 );
HB_FUNC( SAC275 );
HB_FUNC( SAC276 );
HB_FUNC( SAC277 );
HB_FUNC( SAC278 );
HB_FUNC( SAC279 );
HB_FUNC( SAC280 );
HB_FUNC( SAC281 );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( __ATPROMPT );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __MENUTO );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SAC526 );
HB_FUNC_EXTERN( SAC25 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( V_GRU_COD );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( BLOQARQ );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( DBCOMMITALL );
HB_FUNC_EXTERN( DBUNLOCKALL );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( AUT_SEN );
HB_FUNC_EXTERN( __MVRELEASE );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( ROW );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( SR_EXISTTABLE );
HB_FUNC_EXTERN( ASCAN );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC27 )
{ "SAC27", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC27 )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "__ATPROMPT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __ATPROMPT )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__MENUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MENUTO )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "SAC271", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC271 )}, NULL },
{ "SAC272", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC272 )}, NULL },
{ "SAC273", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC273 )}, NULL },
{ "SAC274", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC274 )}, NULL },
{ "SAC526", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC526 )}, NULL },
{ "SAC275", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC275 )}, NULL },
{ "SAC276", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC276 )}, NULL },
{ "SAC25", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC25 )}, NULL },
{ "SAC277", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC277 )}, NULL },
{ "SAC278", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC278 )}, NULL },
{ "SAC279", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC279 )}, NULL },
{ "SAC280", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC280 )}, NULL },
{ "SAC281", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC281 )}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "MVENDA5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVENDA4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVENDA3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVENDA2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_GRU_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_GRU_COD )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UL_ALT_PR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERA_PR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUST_REAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUST_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_FAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_ATU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "BLOQARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQARQ )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "COD_FAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESPECIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "GRU_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "DBCOMMITALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMITALL )}, NULL },
{ "DBUNLOCKALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCKALL )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "TABME", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCONTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "DETA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DAT_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VL_VENDIDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AUT_SEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUT_SEN )}, NULL },
{ "__MVRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVRELEASE )}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MESPECIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL },
{ "CONS_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "MSUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGRUPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_SALDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( ROW )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "SR_EXISTTABLE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_EXISTTABLE )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "MPONTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC27 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC27
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC27 = hb_vm_SymbolInit_SAC27;
   #pragma data_seg()
#endif

HB_FUNC( SAC27 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 6, 0,	/* 6 */
	HB_P_LOCALNEARSETSTR, 1, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '2', '7', 0, 
	HB_P_LOCALNEARSETINT, 2, 0, 0,	/* OPCAO 0*/
/* 00020 */ HB_P_LINEOFFSET, 1,	/* 7 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 8 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'M', 'A', 'N', 'U', 'T', 'E', 'N', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00071 */ HB_P_LINEOFFSET, 4,	/* 10 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00080 */ HB_P_LINEOFFSET, 5,	/* 11 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'O', 'p', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00116 */ HB_P_LINEOFFSET, 6,	/* 12 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
/* 00125 */ HB_P_LINEOFFSET, 7,	/* 13 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00204 */ HB_P_LINEOFFSET, 8,	/* 14 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', '(', '%', ')', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00283 */ HB_P_LINEOFFSET, 9,	/* 15 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'e', ' ', 'M', 'e', 'r', 'c', 'a', 'd', '.', ' ', 'p', '/', 'D', 'e', 't', 'a', 'l', 'h', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00363 */ HB_P_LINEOFFSET, 10,	/* 16 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00443 */ HB_P_LINEOFFSET, 11,	/* 17 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'C', 'a', 'l', 'c', 'u', 'l', 'a', 'r', '/', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'i', 'n', 'i', 'm', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00523 */ HB_P_LINEOFFSET, 12,	/* 18 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'r', ' ', 'L', 'o', 'c', 'a', 'l', ' ', 'd', 'a', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'p', '/', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00603 */ HB_P_LINEOFFSET, 13,	/* 19 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'D', 'E', ' ', 'G', 'R', 'U', 'P', 'O', ' ', 'E', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'N', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00683 */ HB_P_LINEOFFSET, 14,	/* 20 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '(', 'C', 'o', 'l', 'o', 'c', 'a', 'r', ' ', 'e', ' ', 'R', 'e', 't', 'i', 'r', 'a', 'r', ')', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00763 */ HB_P_LINEOFFSET, 15,	/* 21 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', 'o', 'm', ' ', 'r', 'e', 'l', 'a', 'c', 'a', 'o', ' ', 'd', 'a', ' ', 'D', 'A', 'T', 'A', ' ', 'D', 'E', ' ', 'S', 'A', 'I', 'D', 'A', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00843 */ HB_P_LINEOFFSET, 16,	/* 22 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'I', 'S', 'E', 'N', 'T', 'O', ' ', 'O', 'U', ' ', 'N', 'A', 'O', ' ', 'p', 'o', 'r', ' ', 'G', 'r', 'u', 'p', 'o', ' ', 'e', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 00923 */ HB_P_LINEOFFSET, 17,	/* 23 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 'l', 't', 'e', 'r', 'a', 'r', ' ', 'a', ' ', 'M', 'A', 'R', 'G', 'E', 'M', ' ', 'D', 'E', ' ', 'L', 'U', 'C', 'R', 'O', ' ', 'd', 'o', 's', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01003 */ HB_P_LINEOFFSET, 18,	/* 24 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'r', ' ', 's', 'e', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'c', 'o', 'm', ' ', 'c', 'o', 'd', 'i', 'g', 'o', 's', ' ', 'i', 'g', 'u', 'a', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01083 */ HB_P_LINEOFFSET, 19,	/* 25 */
	HB_P_PUSHSYMNEAR, 5,	/* __ATPROMPT */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	' ', 'A', 'j', 'u', 's', 't', 'a', 'r', ' ', 'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'I', 'C', 'M', 'S', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 5,
/* 01163 */ HB_P_LINEOFFSET, 20,	/* 26 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 01177 */ HB_P_LINEOFFSET, 21,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* __MENUTO */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* OPCAO */
	HB_P_PUSHSYMNEAR, 8,	/* PCOUNT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01204) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01209) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'o', 'p', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 01222 */ HB_P_LINEOFFSET, 22,	/* 28 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01230 */ HB_P_LINEOFFSET, 23,	/* 29 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 01254) */
/* 01242 */ HB_P_LINEOFFSET, 24,	/* 30 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01249 */ HB_P_LINEOFFSET, 25,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01254 */ HB_P_LINEOFFSET, 29,	/* 35 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01272) */
/* 01262 */ HB_P_LINEOFFSET, 31,	/* 37 */
	HB_P_PUSHSYMNEAR, 11,	/* SAC271 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 82, 251,	/* -1198 (abs: 00071) */
/* 01272 */ HB_P_LINEOFFSET, 32,	/* 38 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01291) */
/* 01281 */ HB_P_LINEOFFSET, 34,	/* 40 */
	HB_P_PUSHSYMNEAR, 12,	/* SAC272 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 63, 251,	/* -1217 (abs: 00071) */
/* 01291 */ HB_P_LINEOFFSET, 35,	/* 41 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01310) */
/* 01300 */ HB_P_LINEOFFSET, 37,	/* 43 */
	HB_P_PUSHSYMNEAR, 13,	/* SAC273 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 44, 251,	/* -1236 (abs: 00071) */
/* 01310 */ HB_P_LINEOFFSET, 38,	/* 44 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01329) */
/* 01319 */ HB_P_LINEOFFSET, 40,	/* 46 */
	HB_P_PUSHSYMNEAR, 14,	/* SAC274 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 25, 251,	/* -1255 (abs: 00071) */
/* 01329 */ HB_P_LINEOFFSET, 41,	/* 47 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 01352) */
/* 01338 */ HB_P_LINEOFFSET, 43,	/* 49 */
	HB_P_PUSHSYMNEAR, 15,	/* SAC526 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 2, 251,	/* -1278 (abs: 00071) */
/* 01352 */ HB_P_LINEOFFSET, 44,	/* 50 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01371) */
/* 01361 */ HB_P_LINEOFFSET, 46,	/* 52 */
	HB_P_PUSHSYMNEAR, 16,	/* SAC275 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 239, 250,	/* -1297 (abs: 00071) */
/* 01371 */ HB_P_LINEOFFSET, 47,	/* 53 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01390) */
/* 01380 */ HB_P_LINEOFFSET, 49,	/* 55 */
	HB_P_PUSHSYMNEAR, 17,	/* SAC276 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 220, 250,	/* -1316 (abs: 00071) */
/* 01390 */ HB_P_LINEOFFSET, 50,	/* 56 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01409) */
/* 01399 */ HB_P_LINEOFFSET, 52,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* SAC25 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 201, 250,	/* -1335 (abs: 00071) */
/* 01409 */ HB_P_LINEOFFSET, 53,	/* 59 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01428) */
/* 01418 */ HB_P_LINEOFFSET, 55,	/* 61 */
	HB_P_PUSHSYMNEAR, 19,	/* SAC277 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 182, 250,	/* -1354 (abs: 00071) */
/* 01428 */ HB_P_LINEOFFSET, 56,	/* 62 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01447) */
/* 01437 */ HB_P_LINEOFFSET, 58,	/* 64 */
	HB_P_PUSHSYMNEAR, 20,	/* SAC278 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 163, 250,	/* -1373 (abs: 00071) */
/* 01447 */ HB_P_LINEOFFSET, 59,	/* 65 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01466) */
/* 01456 */ HB_P_LINEOFFSET, 60,	/* 66 */
	HB_P_PUSHSYMNEAR, 21,	/* SAC279 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 144, 250,	/* -1392 (abs: 00071) */
/* 01466 */ HB_P_LINEOFFSET, 61,	/* 67 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01485) */
/* 01475 */ HB_P_LINEOFFSET, 62,	/* 68 */
	HB_P_PUSHSYMNEAR, 22,	/* SAC280 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 125, 250,	/* -1411 (abs: 00071) */
/* 01485 */ HB_P_LINEOFFSET, 63,	/* 69 */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 115, 250,	/* -1421 (abs: 00071) */
/* 01495 */ HB_P_LINEOFFSET, 64,	/* 70 */
	HB_P_PUSHSYMNEAR, 23,	/* SAC281 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 105, 250,	/* -1431 (abs: 00071) */
	HB_P_ENDPROC
/* 01506 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC271 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 20, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 81, 0,	/* 81 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '1', 0, 
	HB_P_LOCALNEARSETINT, 20, 0, 0,	/* MAREDONDA 0*/
/* 00021 */ HB_P_LINEOFFSET, 3,	/* 84 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 25,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 26,	/* MCOD_FAB */
	HB_P_PUSHSYMNEAR, 27,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 28,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 29,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 30,	/* MARQ */
	HB_P_PUSHSYMNEAR, 32,	/* CONS_CLI */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 32, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 30, 0,	/* MARQ */
	HB_P_POPVARIABLE, 29, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 27, 0,	/* MCOD_MERC */
/* 00068 */ HB_P_LINEOFFSET, 5,	/* 86 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00127) */
/* 00122 */ HB_P_LINEOFFSET, 6,	/* 87 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00127 */ HB_P_LINEOFFSET, 8,	/* 89 */
	HB_P_PUSHSYMNEAR, 36,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 24, 0,	/* MTRACO */
/* 00144 */ HB_P_LINEOFFSET, 9,	/* 90 */
	HB_P_LOCALNEARSETINT, 3, 22, 0,	/* LBA 22*/
/* 00150 */ HB_P_LINEOFFSET, 10,	/* 91 */
	HB_P_LOCALNEARSETINT, 4, 75, 0,	/* CBA 75*/
/* 00156 */ HB_P_LINEOFFSET, 12,	/* 93 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00186) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00186 */ HB_P_LINEOFFSET, 13,	/* 94 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00215) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00215 */ HB_P_LINEOFFSET, 14,	/* 95 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00244) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00244 */ HB_P_LINEOFFSET, 15,	/* 96 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00273) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00273 */ HB_P_LINEOFFSET, 17,	/* 98 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00281 */ HB_P_LINEOFFSET, 18,	/* 99 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00320 */ HB_P_LINEOFFSET, 21,	/* 102 */
	HB_P_PUSHMEMVAR, 38, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 28, 0,	/* MTIPO_IMP */
/* 00333 */ HB_P_LINEOFFSET, 23,	/* 104 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_DOSHORT, 4,
/* 00348 */ HB_P_LINEOFFSET, 24,	/* 105 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 25,	/* 106 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MSUB1 */
/* 00368 */ HB_P_LINEOFFSET, 26,	/* 107 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MGRUPO1 */
/* 00379 */ HB_P_LINEOFFSET, 27,	/* 108 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_POPLOCALNEAR, 13,	/* MPERC */
/* 00392 */ HB_P_LINEOFFSET, 28,	/* 109 */
	HB_P_LOCALNEARSETSTR, 14, 2, 0,	/* MVENDA 2*/
	'X', 0, 
/* 00400 */ HB_P_LINEOFFSET, 29,	/* 110 */
	HB_P_LOCALNEARSETSTR, 19, 2, 0,	/* MPRC_ESP 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 19,	/* MPRC_ESP */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* MREAL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 40, 0,	/* MVENDA5 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 41, 0,	/* MVENDA4 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 42, 0,	/* MVENDA3 */
	HB_P_POPVARIABLE, 43, 0,	/* MVENDA2 */
/* 00431 */ HB_P_LINEOFFSET, 30,	/* 111 */
	HB_P_PUSHSYMNEAR, 44,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 17,	/* MDATA_R */
/* 00451 */ HB_P_LINEOFFSET, 31,	/* 112 */
	HB_P_LOCALNEARSETINT, 20, 2, 0,	/* MAREDONDA 2*/
/* 00457 */ HB_P_LINEOFFSET, 32,	/* 113 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00520 */ HB_P_LINEOFFSET, 33,	/* 114 */
	HB_P_PUSHSYMNEAR, 45,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00535 */ HB_P_LINEOFFSET, 34,	/* 115 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00543 */ HB_P_LINEOFFSET, 35,	/* 116 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00577 */ HB_P_LINEOFFSET, 36,	/* 117 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00612 */ HB_P_LINEOFFSET, 37,	/* 118 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00647 */ HB_P_LINEOFFSET, 38,	/* 119 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00682 */ HB_P_LINEOFFSET, 39,	/* 120 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00717 */ HB_P_LINEOFFSET, 40,	/* 121 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', '1', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00753 */ HB_P_LINEOFFSET, 41,	/* 122 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', '2', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00789 */ HB_P_LINEOFFSET, 45,	/* 126 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'r', 'e', 'c', 'o', ' ', 'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00825 */ HB_P_LINEOFFSET, 46,	/* 127 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'r', 'e', 'c', 'o', ' ', 'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'r', 'c', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00861 */ HB_P_LINEOFFSET, 47,	/* 128 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'r', 'e', 'c', 'o', ' ', 'E', 's', 'p', 'e', 'c', 'i', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00897 */ HB_P_LINEOFFSET, 48,	/* 129 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 's', '/', 'A', 'l', 't', 'e', 'r', 'a', 'c', 'a', 'o', ' ', 'n', 'o', ' ', 'P', 'r', 'c', '.', 'd', 'e', ' ', 'V', 'e', 'n', 'd', 'a', ' ', 'd', 'e', 's', 'd', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00959 */ HB_P_LINEOFFSET, 49,	/* 130 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', '(', '%', ')', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00995 */ HB_P_LINEOFFSET, 50,	/* 131 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'A', 'r', 'e', 'n', 'd', 'o', 'n', 'd', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'C', 'a', 's', 'a', ' ', 'D', 'e', 'c', 'i', 'm', 'a', 'l', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01042 */ HB_P_LINEOFFSET, 52,	/* 133 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01062 */ HB_P_LINEOFFSET, 53,	/* 134 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01069 */ HB_P_LINEOFFSET, 55,	/* 136 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 16,	/* 16 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01142 */ HB_P_LINEOFFSET, 56,	/* 137 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01181) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01186) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01253 */ HB_P_LINEOFFSET, 57,	/* 138 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MSUB1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01292) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01297) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 's', 'u', 'b', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	7, 0,	/* MGRUPO1 */
	5, 0,	/* MSUB1 */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MGRUPO1 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 01381) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01398 */ HB_P_LINEOFFSET, 58,	/* 139 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 62,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01482 */ HB_P_LINEOFFSET, 59,	/* 140 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 63,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01563 */ HB_P_LINEOFFSET, 60,	/* 141 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MVENDA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01602) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01607) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'e', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	14, 0,	/* MVENDA */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01649) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 64,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 81,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'A', 's', 's', 'i', 'n', 'a', 'l', 'e', ' ', 'c', 'o', 'm', ' ', 'u', 'm', ' ', 34, 'X', 34, ' ', 'p', '/', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'N', 'A', 'O', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01747 */ HB_P_LINEOFFSET, 61,	/* 142 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'v', 'e', 'n', 'd', 'a', '2', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 22,	/* 22 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 43, 0,	/* MVENDA2 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01804) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 64,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 81,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'A', 's', 's', 'i', 'n', 'a', 'l', 'e', ' ', 'c', 'o', 'm', ' ', 'u', 'm', ' ', 34, 'X', 34, ' ', 'p', '/', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'N', 'A', 'O', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01902 */ HB_P_LINEOFFSET, 65,	/* 146 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MREAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01941) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01946) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'r', 'e', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	16, 0,	/* MREAL */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01987) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 64,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 81,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'A', 's', 's', 'i', 'n', 'a', 'l', 'e', ' ', 'c', 'o', 'm', ' ', 'u', 'm', ' ', 34, 'X', 34, ' ', 'p', '/', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'N', 'A', 'O', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02085 */ HB_P_LINEOFFSET, 66,	/* 147 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MCUST_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02124) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02129) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	18, 0,	/* MCUST_MERC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02175) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 64,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 81,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'A', 's', 's', 'i', 'n', 'a', 'l', 'e', ' ', 'c', 'o', 'm', ' ', 'u', 'm', ' ', 34, 'X', 34, ' ', 'p', '/', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'N', 'A', 'O', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02273 */ HB_P_LINEOFFSET, 67,	/* 148 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPRC_ESP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02312) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02317) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'c', '_', 'e', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	19, 0,	/* MPRC_ESP */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 02361) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 64,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 81,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'A', 's', 's', 'i', 'n', 'a', 'l', 'e', ' ', 'c', 'o', 'm', ' ', 'u', 'm', ' ', 34, 'X', 34, ' ', 'p', '/', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'N', 'A', 'O', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02459 */ HB_P_LINEOFFSET, 68,	/* 149 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	17, 0,	/* MDATA_R */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02498) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02503) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'd', 'a', 't', 'a', '_', 'r', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02533 */ HB_P_LINEOFFSET, 69,	/* 150 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02572) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02577) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	13, 0,	/* MPERC */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02616) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 02617) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02635 */ HB_P_LINEOFFSET, 70,	/* 151 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	20, 0,	/* MAREDONDA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02674) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02679) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'r', 'e', 'd', 'o', 'n', 'd', 'a', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02714 */ HB_P_LINEOFFSET, 71,	/* 152 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 02736 */ HB_P_LINEOFFSET, 72,	/* 153 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 02767) */
/* 02748 */ HB_P_LINEOFFSET, 73,	/* 154 */
	HB_P_PUSHSYMNEAR, 67,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 't', 'r', 'a', 'c', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 197, 16,	/* 4293 (abs: 07057) */
/* 02767 */ HB_P_LINEOFFSET, 76,	/* 157 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MVENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 02791) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* MVENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02801) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* MREAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02811) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* MPRC_ESP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 02821) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 02884) */
/* 02823 */ HB_P_LINEOFFSET, 77,	/* 158 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'm', 'a', 'r', 'c', 'a', 'd', 'o', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'p', 'r', 'e', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 's', 'e', 'r', ' ', 'r', 'e', 'a', 'j', 'u', 's', 't', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 255, 245,	/* -2561 (abs: 00320) */
/* 02884 */ HB_P_LINEOFFSET, 80,	/* 161 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 11,	/* OPCAO */
/* 02920 */ HB_P_LINEOFFSET, 81,	/* 162 */
	HB_P_PUSHLOCALNEAR, 11,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02934) */
	HB_P_JUMP, 205, 245,	/* -2611 (abs: 00320) */
/* 02934 */ HB_P_LINEOFFSET, 84,	/* 165 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 21, 1,	/* 277 (abs: 03221) */
/* 02947 */ HB_P_LINEOFFSET, 85,	/* 166 */
	HB_P_PUSHLOCALNEAR, 14,	/* MVENDA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 03002) */
/* 02958 */ HB_P_LINEOFFSET, 86,	/* 167 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 72,	/* PR_VENDA */
/* 02984 */ HB_P_LINEOFFSET, 87,	/* 168 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* UL_ALT_PR */
/* 02993 */ HB_P_LINEOFFSET, 88,	/* 169 */
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* OPERA_PR */
/* 03002 */ HB_P_LINEOFFSET, 90,	/* 171 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVENDA2 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03040) */
/* 03014 */ HB_P_LINEOFFSET, 91,	/* 172 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
/* 03040 */ HB_P_LINEOFFSET, 93,	/* 174 */
	HB_P_PUSHLOCALNEAR, 16,	/* MREAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03077) */
/* 03051 */ HB_P_LINEOFFSET, 94,	/* 175 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 78,	/* CUST_REAL */
/* 03077 */ HB_P_LINEOFFSET, 96,	/* 177 */
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03114) */
/* 03088 */ HB_P_LINEOFFSET, 97,	/* 178 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* CUST_MERC */
/* 03114 */ HB_P_LINEOFFSET, 99,	/* 180 */
	HB_P_PUSHLOCALNEAR, 19,	/* MPRC_ESP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03151) */
/* 03125 */ HB_P_LINEOFFSET, 100,	/* 181 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 80,	/* PR_FAT */
/* 03151 */ HB_P_LINEOFFSET, 102,	/* 183 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 81,	/* DATA_ATU */
/* 03160 */ HB_P_LINEOFFSET, 103,	/* 184 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'F', 'o', 'i', ' ', 'f', 'e', 'i', 't', 'o', ' ', 'o', ' ', 'r', 'e', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 174, 244,	/* -2898 (abs: 00320) */
/* 03221 */ HB_P_LINEOFFSET, 106,	/* 187 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 03241) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 126, 6,	/* 1662 (abs: 04903) */
/* 03244 */ HB_P_LINEOFFSET, 107,	/* 188 */
	HB_P_PUSHSYMNEAR, 82,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 03275) */
	HB_P_JUMP, 120, 244,	/* -2952 (abs: 00320) */
/* 03275 */ HB_P_LINEOFFSET, 111,	/* 192 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03295 */ HB_P_LINEOFFSET, 112,	/* 193 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03302 */ HB_P_LINEOFFSET, 114,	/* 195 */
	HB_P_PUSHSYMNEAR, 83,	/* BLOQARQ */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 7, 6,	/* 1543 (abs: 04852) */
/* 03312 */ HB_P_LINEOFFSET, 115,	/* 196 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', 's', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03368 */ HB_P_LINEOFFSET, 116,	/* 197 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03392 */ HB_P_LINEOFFSET, 117,	/* 198 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 03423 */ HB_P_LINEOFFSET, 118,	/* 199 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', ' ', 'A', 'N', 'T', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03455 */ HB_P_LINEOFFSET, 119,	/* 200 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', ' ', 'P', 'O', 'S', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03493 */ HB_P_LINEOFFSET, 120,	/* 201 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', '2', ' ', 'A', 'N', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 03531 */ HB_P_LINEOFFSET, 121,	/* 202 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', '2', ' ', 'P', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 03569 */ HB_P_LINEOFFSET, 122,	/* 203 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'R', 'E', 'A', 'L', ' ', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 03607 */ HB_P_LINEOFFSET, 123,	/* 204 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'R', 'E', 'A', 'L', ' ', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 03645 */ HB_P_LINEOFFSET, 124,	/* 205 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'M', 'E', 'R', 'C', ' ', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 03683 */ HB_P_LINEOFFSET, 125,	/* 206 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'M', 'E', 'R', 'C', ' ', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 03721 */ HB_P_LINEOFFSET, 126,	/* 207 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'E', 's', 'p', '.', 'A', 'N', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 03759 */ HB_P_LINEOFFSET, 127,	/* 208 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'E', 's', 'p', '.', 'P', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 03797 */ HB_P_LINEOFFSET, 128,	/* 209 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03821 */ HB_P_LINEOFFSET, 129,	/* 210 */
	HB_P_PUSHSYMNEAR, 86,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 160, 3,	/* 928 (abs: 04756) */
/* 03831 */ HB_P_LINEOFFSET, 130,	/* 211 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 88,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 03857 */ HB_P_LINEOFFSET, 136,	/* 217 */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 03899) */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 03898) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* COD_FAB */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 03927) */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 03926) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* ESPECIE */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 03965) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 03964) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 03998) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 03997) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* GRU_SUB */
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHLOCALNEAR, 5,	/* MSUB1 */
	HB_P_PLUS,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 04020) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MDATA_R */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04019) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* UL_ALT_PR */
	HB_P_PUSHLOCALNEAR, 17,	/* MDATA_R */
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 04033) */
/* 04022 */ HB_P_LINEOFFSET, 137,	/* 218 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 47, 255,	/* -209 (abs: 03821) */
/* 04033 */ HB_P_LINEOFFSET, 139,	/* 220 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04068 */ HB_P_LINEOFFSET, 140,	/* 221 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04109 */ HB_P_LINEOFFSET, 141,	/* 222 */
	HB_P_PUSHLOCALNEAR, 14,	/* MVENDA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 04164) */
/* 04120 */ HB_P_LINEOFFSET, 142,	/* 223 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 72,	/* PR_VENDA */
/* 04146 */ HB_P_LINEOFFSET, 143,	/* 224 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* UL_ALT_PR */
/* 04155 */ HB_P_LINEOFFSET, 144,	/* 225 */
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* OPERA_PR */
/* 04164 */ HB_P_LINEOFFSET, 146,	/* 227 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04211 */ HB_P_LINEOFFSET, 147,	/* 228 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04258 */ HB_P_LINEOFFSET, 148,	/* 229 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVENDA2 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 04296) */
/* 04270 */ HB_P_LINEOFFSET, 149,	/* 230 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
/* 04296 */ HB_P_LINEOFFSET, 151,	/* 232 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04343 */ HB_P_LINEOFFSET, 152,	/* 233 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04390 */ HB_P_LINEOFFSET, 153,	/* 234 */
	HB_P_PUSHLOCALNEAR, 16,	/* MREAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 04427) */
/* 04401 */ HB_P_LINEOFFSET, 154,	/* 235 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 78,	/* CUST_REAL */
/* 04427 */ HB_P_LINEOFFSET, 156,	/* 237 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04474 */ HB_P_LINEOFFSET, 157,	/* 238 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04521 */ HB_P_LINEOFFSET, 158,	/* 239 */
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 04558) */
/* 04532 */ HB_P_LINEOFFSET, 159,	/* 240 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* CUST_MERC */
/* 04558 */ HB_P_LINEOFFSET, 161,	/* 242 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04605 */ HB_P_LINEOFFSET, 162,	/* 243 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04652 */ HB_P_LINEOFFSET, 163,	/* 244 */
	HB_P_PUSHLOCALNEAR, 19,	/* MPRC_ESP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 04689) */
/* 04663 */ HB_P_LINEOFFSET, 164,	/* 245 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 80,	/* PR_FAT */
/* 04689 */ HB_P_LINEOFFSET, 166,	/* 247 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 81,	/* DATA_ATU */
/* 04698 */ HB_P_LINEOFFSET, 167,	/* 248 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04745 */ HB_P_LINEOFFSET, 168,	/* 249 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 92, 252,	/* -932 (abs: 03821) */
/* 04756 */ HB_P_LINEOFFSET, 170,	/* 251 */
	HB_P_PUSHSYMNEAR, 97,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04763 */ HB_P_LINEOFFSET, 171,	/* 252 */
	HB_P_PUSHSYMNEAR, 98,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04770 */ HB_P_LINEOFFSET, 172,	/* 253 */
	HB_P_PUSHSYMNEAR, 99,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04779 */ HB_P_LINEOFFSET, 173,	/* 254 */
	HB_P_PUSHSYMNEAR, 100,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04786 */ HB_P_LINEOFFSET, 174,	/* 255 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04827 */ HB_P_LINEOFFSET, 175,	/* 256 */
	HB_P_PUSHSYMNEAR, 101,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 193, 6,	/* 1729 (abs: 06578) */
/* 04852 */ HB_P_LINEOFFSET, 177,	/* 258 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'c', 'e', 's', 's', 'a', 'r', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 28, 238,	/* -4580 (abs: 00320) */
/* 04903 */ HB_P_LINEOFFSET, 181,	/* 262 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'E', 's', 'p', 'e', 'r', 'e', ' ', 'o', ' ', 'F', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', 's', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 04959 */ HB_P_LINEOFFSET, 182,	/* 263 */
	HB_P_PUSHSYMNEAR, 82,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04990) */
	HB_P_JUMP, 197, 237,	/* -4667 (abs: 00320) */
/* 04990 */ HB_P_LINEOFFSET, 186,	/* 267 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 05011 */ HB_P_LINEOFFSET, 187,	/* 268 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05018 */ HB_P_LINEOFFSET, 189,	/* 270 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'N', 0, 
	HB_P_DOSHORT, 2,
/* 05032 */ HB_P_LINEOFFSET, 190,	/* 271 */
	HB_P_PUSHSYMNEAR, 102,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 05042 */ HB_P_LINEOFFSET, 191,	/* 272 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 05057 */ HB_P_LINEOFFSET, 192,	/* 273 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05081 */ HB_P_LINEOFFSET, 193,	/* 274 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 05112 */ HB_P_LINEOFFSET, 194,	/* 275 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', ' ', 'A', 'N', 'T', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05144 */ HB_P_LINEOFFSET, 195,	/* 276 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', ' ', 'P', 'O', 'S', '.', 0, 
	HB_P_DOSHORT, 1,
/* 05182 */ HB_P_LINEOFFSET, 196,	/* 277 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', '2', ' ', 'A', 'N', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 05220 */ HB_P_LINEOFFSET, 197,	/* 278 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'a', '2', ' ', 'P', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 05258 */ HB_P_LINEOFFSET, 198,	/* 279 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'R', 'E', 'A', 'L', ' ', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 05296 */ HB_P_LINEOFFSET, 199,	/* 280 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'R', 'E', 'A', 'L', ' ', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 05334 */ HB_P_LINEOFFSET, 200,	/* 281 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'M', 'E', 'R', 'C', ' ', 'A', 0, 
	HB_P_DOSHORT, 1,
/* 05372 */ HB_P_LINEOFFSET, 201,	/* 282 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'u', 's', '.', 'M', 'E', 'R', 'C', ' ', 'P', 0, 
	HB_P_DOSHORT, 1,
/* 05410 */ HB_P_LINEOFFSET, 202,	/* 283 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'E', 's', 'p', '.', 'A', 'N', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 05448 */ HB_P_LINEOFFSET, 203,	/* 284 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'r', '.', 'E', 's', 'p', '.', 'P', 'O', 'S', 0, 
	HB_P_DOSHORT, 1,
/* 05486 */ HB_P_LINEOFFSET, 204,	/* 285 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 05510 */ HB_P_LINEOFFSET, 205,	/* 286 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 05546) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 86,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05557) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 174, 3,	/* 942 (abs: 06499) */
/* 05560 */ HB_P_LINEOFFSET, 206,	/* 287 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 88,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 05586 */ HB_P_LINEOFFSET, 212,	/* 293 */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 05628) */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 05627) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* COD_FAB */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 05656) */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 05655) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* ESPECIE */
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 05694) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 26,	/* 26 (abs: 05693) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 05727) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 05726) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* GRU_SUB */
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHLOCALNEAR, 5,	/* MSUB1 */
	HB_P_PLUS,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 05749) */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MDATA_R */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 05748) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* UL_ALT_PR */
	HB_P_PUSHLOCALNEAR, 17,	/* MDATA_R */
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 05762) */
/* 05751 */ HB_P_LINEOFFSET, 213,	/* 294 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 7, 255,	/* -249 (abs: 05510) */
/* 05762 */ HB_P_LINEOFFSET, 215,	/* 296 */
	HB_P_PUSHSYMNEAR, 103,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 05769 */ HB_P_LINEOFFSET, 216,	/* 297 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* MERC */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05804 */ HB_P_LINEOFFSET, 217,	/* 298 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05845 */ HB_P_LINEOFFSET, 218,	/* 299 */
	HB_P_PUSHLOCALNEAR, 14,	/* MVENDA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 46,	/* 46 (abs: 05900) */
/* 05856 */ HB_P_LINEOFFSET, 219,	/* 300 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 72,	/* PR_VENDA */
/* 05882 */ HB_P_LINEOFFSET, 220,	/* 301 */
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* OPERA_PR */
/* 05891 */ HB_P_LINEOFFSET, 221,	/* 302 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* UL_ALT_PR */
/* 05900 */ HB_P_LINEOFFSET, 223,	/* 304 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* PR_VENDA */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05947 */ HB_P_LINEOFFSET, 224,	/* 305 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05994 */ HB_P_LINEOFFSET, 225,	/* 306 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVENDA2 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 06032) */
/* 06006 */ HB_P_LINEOFFSET, 226,	/* 307 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
/* 06032 */ HB_P_LINEOFFSET, 228,	/* 309 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* PR_VENDA1 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06079 */ HB_P_LINEOFFSET, 229,	/* 310 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06126 */ HB_P_LINEOFFSET, 230,	/* 311 */
	HB_P_PUSHLOCALNEAR, 16,	/* MREAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 06163) */
/* 06137 */ HB_P_LINEOFFSET, 231,	/* 312 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 78,	/* CUST_REAL */
/* 06163 */ HB_P_LINEOFFSET, 233,	/* 314 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 78,	/* CUST_REAL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06210 */ HB_P_LINEOFFSET, 234,	/* 315 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06257 */ HB_P_LINEOFFSET, 235,	/* 316 */
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 06294) */
/* 06268 */ HB_P_LINEOFFSET, 236,	/* 317 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* CUST_MERC */
/* 06294 */ HB_P_LINEOFFSET, 238,	/* 319 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 79,	/* CUST_MERC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06341 */ HB_P_LINEOFFSET, 239,	/* 320 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06388 */ HB_P_LINEOFFSET, 240,	/* 321 */
	HB_P_PUSHLOCALNEAR, 19,	/* MPRC_ESP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 06425) */
/* 06399 */ HB_P_LINEOFFSET, 241,	/* 322 */
	HB_P_PUSHSYMNEAR, 70,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHLOCALNEAR, 20,	/* MAREDONDA */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 80,	/* PR_FAT */
/* 06425 */ HB_P_LINEOFFSET, 243,	/* 324 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_POPALIASEDFIELDNEAR, 81,	/* DATA_ATU */
/* 06434 */ HB_P_LINEOFFSET, 244,	/* 325 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 85,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 71,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 80,	/* PR_FAT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06481 */ HB_P_LINEOFFSET, 245,	/* 326 */
	HB_P_PUSHSYMNEAR, 104,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06488 */ HB_P_LINEOFFSET, 246,	/* 327 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 38, 252,	/* -986 (abs: 05510) */
/* 06499 */ HB_P_LINEOFFSET, 248,	/* 329 */
	HB_P_PUSHSYMNEAR, 97,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06506 */ HB_P_LINEOFFSET, 249,	/* 330 */
	HB_P_PUSHSYMNEAR, 99,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 06515 */ HB_P_LINEOFFSET, 250,	/* 331 */
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 6,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 06556 */ HB_P_LINEOFFSET, 251,	/* 332 */
	HB_P_PUSHSYMNEAR, 101,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 06578 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 125,	/* 125 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 's', 'a', 'c', 'l', 'o', 'g', ' ', '(', 'd', 'a', 't', 'a', '_', 's', 'i', 's', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 't', 'i', 'p', 'o', ',', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'a', 'u', 't', '_', 'o', 'p', 'e', 'r', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'm', 'o', 'd', 'u', 'l', 'o', ',', 'd', 'e', 's', 'c', 'r', 'i', ',', 'c', 'o', 'd', '_', 'a', 'u', 't', ',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', ' ', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', '2', '7', '1', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 06916) */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '*', '*', ' ', 'P', 'O', 'R', ' ', 'G', 'R', 'U', 'P', 'O', ' ', '*', '*', 0, 
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 06931) */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', '*', '*', ' ', 'T', 'O', 'T', 'A', 'L', ' ', '*', '*', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'P', 'e', 'r', 'c', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MPERC */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', '%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 110,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LEFT, 15, 0,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
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
/* 07029 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 178, 229,	/* -6734 (abs: 00320) */
/* 07057 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07065 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 07071 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC272 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 8, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 103, 1,	/* 359 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '2', 0, 
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 361 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'D', 'E', ' ', 'P', 'E', 'R', 'C', 'E', 'N', 'T', 'U', 'A', 'L', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '/', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00103) */
/* 00098 */ HB_P_LINEOFFSET, 3,	/* 362 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00103 */ HB_P_LINEOFFSET, 6,	/* 365 */
	HB_P_LOCALNEARSETINT, 2, 11, 0,	/* LBA 11*/
/* 00109 */ HB_P_LINEOFFSET, 7,	/* 366 */
	HB_P_LOCALNEARSETINT, 3, 75, 0,	/* CBA 75*/
/* 00115 */ HB_P_LINEOFFSET, 9,	/* 368 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'a', 'b', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'a', 'b', 'm', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00146) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00146 */ HB_P_LINEOFFSET, 10,	/* 369 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00175) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00175 */ HB_P_LINEOFFSET, 11,	/* 370 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00202) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00202 */ HB_P_LINEOFFSET, 13,	/* 372 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'e', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', '/', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00270 */ HB_P_LINEOFFSET, 15,	/* 374 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00279 */ HB_P_LINEOFFSET, 16,	/* 375 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00292 */ HB_P_LINEOFFSET, 17,	/* 376 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* MPERC 0*/
	HB_P_PUSHLOCALNEAR, 6,	/* MPERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* MCOD_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 5,	/* MCOD_CLI2 */
	HB_P_POPLOCALNEAR, 4,	/* MCOD_CLI1 */
/* 00308 */ HB_P_LINEOFFSET, 18,	/* 377 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00350 */ HB_P_LINEOFFSET, 19,	/* 378 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00359 */ HB_P_LINEOFFSET, 20,	/* 379 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00367 */ HB_P_LINEOFFSET, 21,	/* 380 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '1', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00401 */ HB_P_LINEOFFSET, 22,	/* 381 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '2', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00436 */ HB_P_LINEOFFSET, 23,	/* 382 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00471 */ HB_P_LINEOFFSET, 24,	/* 383 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', '(', '%', ')', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00506 */ HB_P_LINEOFFSET, 25,	/* 384 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MCOD_CLI1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00544) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00549) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', '1', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 37, 0,	/* 37 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MCOD_CLI1 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00592) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00593) */
	HB_P_TRUE,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00606) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 111,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00624 */ HB_P_LINEOFFSET, 26,	/* 385 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MCOD_CLI2 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00663) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00668) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', '2', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 38, 0,	/* 38 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MCOD_CLI2 */
	4, 0,	/* MCOD_CLI1 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00711) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00712) */
	HB_P_TRUE,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00726) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 111,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00744 */ HB_P_LINEOFFSET, 27,	/* 386 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00783) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00788) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 55,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00849 */ HB_P_LINEOFFSET, 28,	/* 387 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MPERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00888) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00893) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00929 */ HB_P_LINEOFFSET, 29,	/* 388 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00951 */ HB_P_LINEOFFSET, 30,	/* 389 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00966) */
	HB_P_JUMP, 18, 1,	/* 274 (abs: 01237) */
/* 00966 */ HB_P_LINEOFFSET, 34,	/* 393 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'a', 'b', 'm', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 1,
/* 00988 */ HB_P_LINEOFFSET, 35,	/* 394 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00995 */ HB_P_LINEOFFSET, 37,	/* 396 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 112,	/* TABME */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 102,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MCOD_CLI1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_POPALIAS,
/* 01017 */ HB_P_LINEOFFSET, 38,	/* 397 */
	HB_P_PUSHSYMNEAR, 86,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01068) */
/* 01026 */ HB_P_LINEOFFSET, 39,	/* 398 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 229, 252,	/* -795 (abs: 00270) */
/* 01068 */ HB_P_LINEOFFSET, 42,	/* 401 */
	HB_P_PUSHSYMNEAR, 83,	/* BLOQARQ */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 01128) */
/* 01077 */ HB_P_LINEOFFSET, 43,	/* 402 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'e', 's', 't', 'e', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 169, 252,	/* -855 (abs: 00270) */
/* 01128 */ HB_P_LINEOFFSET, 46,	/* 405 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* TABME */
	HB_P_PUSHALIASEDFIELDNEAR, 113,	/* COD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_CLI2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01152) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 86,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 01220) */
/* 01154 */ HB_P_LINEOFFSET, 47,	/* 406 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01174) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 112,	/* TABME */
	HB_P_PUSHALIASEDFIELDNEAR, 114,	/* CODIGO */
	HB_P_PUSHLOCALNEAR, 7,	/* MCOD_MERC */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01186) */
/* 01176 */ HB_P_LINEOFFSET, 48,	/* 407 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 200,	/* -56 (abs: 01128) */
/* 01186 */ HB_P_LINEOFFSET, 51,	/* 410 */
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 112,	/* TABME */
	HB_P_POPALIASEDFIELDNEAR, 115,	/* DATA */
/* 01195 */ HB_P_LINEOFFSET, 52,	/* 411 */
	HB_P_PUSHLOCALNEAR, 6,	/* MPERC */
	HB_P_PUSHSYMNEAR, 112,	/* TABME */
	HB_P_POPALIASEDFIELDNEAR, 116,	/* DESCONTO */
/* 01203 */ HB_P_LINEOFFSET, 53,	/* 412 */
	HB_P_PUSHSYMNEAR, 117,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01210 */ HB_P_LINEOFFSET, 54,	/* 413 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 166,	/* -90 (abs: 01128) */
/* 01220 */ HB_P_LINEOFFSET, 56,	/* 415 */
	HB_P_PUSHSYMNEAR, 97,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01227 */ HB_P_LINEOFFSET, 57,	/* 416 */
	HB_P_PUSHSYMNEAR, 98,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 60, 252,	/* -964 (abs: 00270) */
/* 01237 */ HB_P_LINEOFFSET, 59,	/* 418 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01244 */ HB_P_LINEOFFSET, 60,	/* 419 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01249 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC273 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 168, 1,	/* 424 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '3', 0, 
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* MVALOR 0*/
/* 00021 */ HB_P_LINEOFFSET, 2,	/* 426 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 24,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 00030 */ HB_P_LINEOFFSET, 4,	/* 428 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'R', 'E', 'A', 'J', 'U', 'S', 'T', 'E', ' ', 'D', 'A', 'S', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', 'P', '/', 'D', 'E', 'T', 'A', 'L', 'H', 'E', 'S', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00100) */
/* 00095 */ HB_P_LINEOFFSET, 5,	/* 429 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00100 */ HB_P_LINEOFFSET, 8,	/* 432 */
	HB_P_LOCALNEARSETINT, 2, 11, 0,	/* LBA 11*/
/* 00106 */ HB_P_LINEOFFSET, 9,	/* 433 */
	HB_P_LOCALNEARSETINT, 3, 75, 0,	/* CBA 75*/
/* 00112 */ HB_P_LINEOFFSET, 11,	/* 435 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'r', 'c', '_', 'd', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00142) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00142 */ HB_P_LINEOFFSET, 12,	/* 436 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 't', 'a', 'b', 'm', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', 'a', 'b', 'm', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00173) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00173 */ HB_P_LINEOFFSET, 13,	/* 437 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00202) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00202 */ HB_P_LINEOFFSET, 14,	/* 438 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00229) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00229 */ HB_P_LINEOFFSET, 16,	/* 440 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', 's', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'D', 'e', 't', 'a', 'l', 'h', 'e', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00284 */ HB_P_LINEOFFSET, 18,	/* 442 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00293 */ HB_P_LINEOFFSET, 19,	/* 443 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MPERC 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* MPERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 7,	/* MVALOR */
	HB_P_POPLOCALNEAR, 5,	/* MCOD_MERC */
/* 00306 */ HB_P_LINEOFFSET, 20,	/* 444 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00348 */ HB_P_LINEOFFSET, 21,	/* 445 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 22,	/* 446 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00370 */ HB_P_LINEOFFSET, 23,	/* 447 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00378 */ HB_P_LINEOFFSET, 24,	/* 448 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00412 */ HB_P_LINEOFFSET, 25,	/* 449 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', '(', '%', ')', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00447 */ HB_P_LINEOFFSET, 26,	/* 450 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00482 */ HB_P_LINEOFFSET, 27,	/* 451 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00520) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00525) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 55,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00585 */ HB_P_LINEOFFSET, 28,	/* 452 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MPERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00624) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00629) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00665 */ HB_P_LINEOFFSET, 29,	/* 453 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MVALOR */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00704) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00709) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'v', 'a', 'l', 'o', 'r', 0, 
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00752 */ HB_P_LINEOFFSET, 30,	/* 454 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00774 */ HB_P_LINEOFFSET, 31,	/* 455 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00789) */
	HB_P_JUMP, 102, 1,	/* 358 (abs: 01144) */
/* 00789 */ HB_P_LINEOFFSET, 35,	/* 459 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00809 */ HB_P_LINEOFFSET, 36,	/* 460 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00816 */ HB_P_LINEOFFSET, 38,	/* 462 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 102,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 00874) */
/* 00832 */ HB_P_LINEOFFSET, 39,	/* 463 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'E', 's', 't', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'n', 'a', 'o', ' ', 't', 'e', 'm', ' ', 'D', 'e', 't', 'a', 'l', 'h', 'e', 's', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 181, 253,	/* -587 (abs: 00284) */
/* 00874 */ HB_P_LINEOFFSET, 42,	/* 466 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'R', 'e', 'a', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00924 */ HB_P_LINEOFFSET, 43,	/* 467 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00938) */
	HB_P_JUMP, 117, 253,	/* -651 (abs: 00284) */
/* 00938 */ HB_P_LINEOFFSET, 46,	/* 470 */
	HB_P_PUSHSYMNEAR, 83,	/* BLOQARQ */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 00998) */
/* 00947 */ HB_P_LINEOFFSET, 47,	/* 471 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'B', 'L', 'O', 'Q', 'U', 'E', 'A', 'R', ' ', 'e', 's', 't', 'e', ' ', 'A', 'R', 'Q', 'U', 'I', 'V', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 57, 253,	/* -711 (abs: 00284) */
/* 00998 */ HB_P_LINEOFFSET, 50,	/* 474 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 5,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 114,	/* CODIGO */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 01017) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 86,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 01127) */
/* 01019 */ HB_P_LINEOFFSET, 51,	/* 475 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 119,	/* DAT_VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 01045) */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 120,	/* VL_VENDIDO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 01058) */
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 121,	/* VENDA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 01070) */
/* 01060 */ HB_P_LINEOFFSET, 52,	/* 476 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 00998) */
/* 01070 */ HB_P_LINEOFFSET, 55,	/* 479 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MVALOR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 01091) */
/* 01081 */ HB_P_LINEOFFSET, 56,	/* 480 */
	HB_P_PUSHLOCALNEAR, 7,	/* MVALOR */
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_POPALIASEDFIELDNEAR, 122,	/* VLR_VENDA */
	HB_P_JUMPNEAR, 21,	/* 21 (abs: 01110) */
/* 01091 */ HB_P_LINEOFFSET, 58,	/* 482 */
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 122,	/* VLR_VENDA */
	HB_P_PUSHLOCALNEAR, 4,	/* MPERC */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSYMNEAR, 118,	/* DETA */
	HB_P_POPALIASEDFIELDNEAR, 122,	/* VLR_VENDA */
/* 01110 */ HB_P_LINEOFFSET, 60,	/* 484 */
	HB_P_PUSHSYMNEAR, 117,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01117 */ HB_P_LINEOFFSET, 61,	/* 485 */
	HB_P_PUSHSYMNEAR, 95,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 129,	/* -127 (abs: 00998) */
/* 01127 */ HB_P_LINEOFFSET, 63,	/* 487 */
	HB_P_PUSHSYMNEAR, 97,	/* DBCOMMITALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01134 */ HB_P_LINEOFFSET, 64,	/* 488 */
	HB_P_PUSHSYMNEAR, 98,	/* DBUNLOCKALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 167, 252,	/* -857 (abs: 00284) */
/* 01144 */ HB_P_LINEOFFSET, 66,	/* 490 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01151 */ HB_P_LINEOFFSET, 67,	/* 491 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01156 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC274 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 243, 1,	/* 499 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '4', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 8,	/* MSALDO_F */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 9,	/* MSALDO_M */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MQUANTD 0*/
/* 00037 */ HB_P_LINEOFFSET, 2,	/* 501 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 26,	/* MCOD_FAB */
	HB_P_DOSHORT, 2,
/* 00048 */ HB_P_LINEOFFSET, 4,	/* 503 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'O', 'S', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00112) */
/* 00107 */ HB_P_LINEOFFSET, 5,	/* 504 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00112 */ HB_P_LINEOFFSET, 7,	/* 506 */
	HB_P_LOCALNEARSETINT, 2, 18, 0,	/* LBA 18*/
/* 00118 */ HB_P_LINEOFFSET, 8,	/* 507 */
	HB_P_LOCALNEARSETINT, 3, 75, 0,	/* CBA 75*/
/* 00124 */ HB_P_LINEOFFSET, 10,	/* 509 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00154) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00154 */ HB_P_LINEOFFSET, 11,	/* 510 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00183) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00183 */ HB_P_LINEOFFSET, 12,	/* 511 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00212) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00212 */ HB_P_LINEOFFSET, 13,	/* 512 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00241) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00241 */ HB_P_LINEOFFSET, 15,	/* 514 */
	HB_P_PUSHSYMNEAR, 123,	/* AUT_SEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'S', 'e', 'n', 'h', 'a', ' ', 'p', '/', 'L', 'i', 'b', 'e', 'r', 'a', 'r', ' ', 'o', ' ', 'A', 'j', 'u', 's', 't', 'e', ' ', 'd', 'o', 's', ' ', 's', 'a', 'l', 'd', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'L', 'I', 'B', '_', 'A', 'J', 'U', 'S', 'T', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00318) */
/* 00313 */ HB_P_LINEOFFSET, 16,	/* 515 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00318 */ HB_P_LINEOFFSET, 18,	/* 517 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'j', 'u', 's', 't', 'e', ' ', 'd', 'o', 's', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00366 */ HB_P_LINEOFFSET, 20,	/* 519 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00375 */ HB_P_LINEOFFSET, 21,	/* 520 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00388 */ HB_P_LINEOFFSET, 22,	/* 521 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MSUB1 */
/* 00399 */ HB_P_LINEOFFSET, 23,	/* 522 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MGRUPO1 */
/* 00410 */ HB_P_LINEOFFSET, 24,	/* 523 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* MQUANTD 0*/
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_POPLOCALNEAR, 6,	/* MCOD_MERC1 */
/* 00428 */ HB_P_LINEOFFSET, 25,	/* 524 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 9,	/* MSALDO_M */
	HB_P_POPLOCALNEAR, 8,	/* MSALDO_F */
/* 00441 */ HB_P_LINEOFFSET, 26,	/* 525 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00504 */ HB_P_LINEOFFSET, 27,	/* 526 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00512 */ HB_P_LINEOFFSET, 28,	/* 527 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00546 */ HB_P_LINEOFFSET, 29,	/* 528 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00581 */ HB_P_LINEOFFSET, 30,	/* 529 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00616 */ HB_P_LINEOFFSET, 31,	/* 530 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00651 */ HB_P_LINEOFFSET, 32,	/* 531 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00686 */ HB_P_LINEOFFSET, 33,	/* 532 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'F', 'i', 's', 'i', 'c', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00721 */ HB_P_LINEOFFSET, 34,	/* 533 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00756 */ HB_P_LINEOFFSET, 35,	/* 534 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00791 */ HB_P_LINEOFFSET, 38,	/* 537 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00811 */ HB_P_LINEOFFSET, 39,	/* 538 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00818 */ HB_P_LINEOFFSET, 41,	/* 540 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00856) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00861) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00917 */ HB_P_LINEOFFSET, 42,	/* 541 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MSUB1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00956) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00961) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 's', 'u', 'b', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MGRUPO1 */
	4, 0,	/* MSUB1 */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01050 */ HB_P_LINEOFFSET, 43,	/* 542 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01089) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01094) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01175 */ HB_P_LINEOFFSET, 44,	/* 543 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 62,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01249 */ HB_P_LINEOFFSET, 45,	/* 544 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 63,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01320 */ HB_P_LINEOFFSET, 46,	/* 545 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MSALDO_M */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01359) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01364) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MSALDO_M */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01417 */ HB_P_LINEOFFSET, 47,	/* 546 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MSALDO_F */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01456) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01461) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MSALDO_F */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'X', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01514 */ HB_P_LINEOFFSET, 48,	/* 547 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MQUANTD */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01553) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01558) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01600 */ HB_P_LINEOFFSET, 49,	/* 548 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 01622 */ HB_P_LINEOFFSET, 50,	/* 549 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01649) */
/* 01634 */ HB_P_LINEOFFSET, 51,	/* 550 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 150, 4,	/* 1174 (abs: 02820) */
/* 01649 */ HB_P_LINEOFFSET, 54,	/* 553 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'A', 'j', 'u', 's', 't', 'e', ' ', 'd', 'o', 's', ' ', 'S', 'a', 'l', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01694 */ HB_P_LINEOFFSET, 55,	/* 554 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01715) */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01720) */
	HB_P_JUMP, 185, 250,	/* -1351 (abs: 00366) */
/* 01720 */ HB_P_LINEOFFSET, 58,	/* 557 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01760 */ HB_P_LINEOFFSET, 59,	/* 558 */
	HB_P_PUSHSYMNEAR, 125,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_TRYBEGIN, 220, 1, 0,	/* 476 (abs: 00002243) */
/* 01771 */ HB_P_LINEOFFSET, 61,	/* 560 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01818 */ HB_P_LINEOFFSET, 63,	/* 562 */
	HB_P_PUSHLOCALNEAR, 9,	/* MSALDO_M */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01862) */
/* 01829 */ HB_P_LINEOFFSET, 64,	/* 563 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01862 */ HB_P_LINEOFFSET, 66,	/* 565 */
	HB_P_PUSHLOCALNEAR, 8,	/* MSALDO_F */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01906) */
/* 01873 */ HB_P_LINEOFFSET, 67,	/* 566 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'a', 'l', 'd', 'o', '_', 'f', 'i', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01906 */ HB_P_LINEOFFSET, 69,	/* 568 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01946 */ HB_P_LINEOFFSET, 70,	/* 569 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01966) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 02016) */
/* 01968 */ HB_P_LINEOFFSET, 71,	/* 570 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02016 */ HB_P_LINEOFFSET, 73,	/* 572 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02070) */
/* 02027 */ HB_P_LINEOFFSET, 74,	/* 573 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02070 */ HB_P_LINEOFFSET, 76,	/* 575 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCOD_MERC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02124) */
/* 02081 */ HB_P_LINEOFFSET, 77,	/* 576 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCOD_MERC1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02124 */ HB_P_LINEOFFSET, 80,	/* 579 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 02172) */
/* 02136 */ HB_P_LINEOFFSET, 81,	/* 580 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02172 */ HB_P_LINEOFFSET, 84,	/* 583 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 02221) */
/* 02184 */ HB_P_LINEOFFSET, 85,	/* 584 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 127, 0,	/* MESPECIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02221 */ HB_P_LINEOFFSET, 87,	/* 586 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02239 */ HB_P_TRYEND, 18, 0, 0,	/* 18 (abs: 00002257) */
/* 02243 */ HB_P_TRYRECOVER, 0, 0, 0,	/* 0 (abs: 00002243) */
	HB_P_POPVARIABLE, 128, 0,	/* E */
/* 02250 */ HB_P_LINEOFFSET, 89,	/* 588 */
	HB_P_PUSHSYMNEAR, 129,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02257 */ HB_P_LINEOFFSET, 91,	/* 590 */
	HB_P_PUSHLOCALNEAR, 8,	/* MSALDO_F */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'X', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 15, 2,	/* 527 (abs: 02793) */
/* 02269 */ HB_P_LINEOFFSET, 92,	/* 591 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 130, 0,	/* CONS_MERC */
/* 02277 */ HB_P_LINEOFFSET, 93,	/* 592 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02326 */ HB_P_LINEOFFSET, 94,	/* 593 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02350 */ HB_P_LINEOFFSET, 95,	/* 594 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02367) */
	HB_P_JUMP, 50, 248,	/* -1998 (abs: 00366) */
/* 02367 */ HB_P_LINEOFFSET, 98,	/* 597 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 132, 0,	/* I */
/* 02373 */ HB_P_LINEOFFSET, 99,	/* 598 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 122, 1,	/* 378 (abs: 02769) */
/* 02394 */ HB_P_LINEOFFSET, 115,	/* 614 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 131,	/* 131 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 'l', 'o', 'g', 'p', 'r', 'o', 'd', '_', 'f', 'i', 's', ' ', '(', 'd', 'a', 't', 'a', '_', 's', 'i', 's', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'q', 'u', 'a', 'n', 't', 'd', ',', 's', 'a', 'l', 'd', 'o', '_', 'a', 'n', 't', ',', 's', 'a', 'l', 'd', 'o', '_', 'p', 'o', 's', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'r', 'o', 'g', ',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ',', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', ',', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQUANTD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 75, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'A', 'C', '2', '7', '4', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 110,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LEFT, 15, 0,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'O', 'S', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02757 */ HB_P_LINEOFFSET, 116,	/* 615 */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_JUMP, 125, 254,	/* -387 (abs: 02379) */
/* 02769 */ HB_P_LINEOFFSET, 117,	/* 616 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02793 */ HB_P_LINEOFFSET, 120,	/* 619 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 109, 246,	/* -2451 (abs: 00366) */
/* 02820 */ HB_P_LINEOFFSET, 122,	/* 621 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02827 */ HB_P_LINEOFFSET, 123,	/* 622 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02832 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC275 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 116, 2,	/* 628 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '5', 0, 
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 630 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 26,	/* MCOD_FAB */
	HB_P_DOSHORT, 2,
/* 00028 */ HB_P_LINEOFFSET, 4,	/* 632 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'O', ' ', 'L', 'O', 'C', 'A', 'L', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'P', 'E', 'L', 'O', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00107) */
/* 00102 */ HB_P_LINEOFFSET, 5,	/* 633 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00107 */ HB_P_LINEOFFSET, 8,	/* 636 */
	HB_P_LOCALNEARSETINT, 2, 7, 0,	/* LBA 7*/
/* 00113 */ HB_P_LINEOFFSET, 9,	/* 637 */
	HB_P_LOCALNEARSETINT, 3, 75, 0,	/* CBA 75*/
/* 00119 */ HB_P_LINEOFFSET, 11,	/* 639 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00148) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00148 */ HB_P_LINEOFFSET, 13,	/* 641 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'O', ' ', 'L', 'O', 'C', 'A', 'L', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'P', 'E', 'L', 'O', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 5,
/* 00210 */ HB_P_LINEOFFSET, 15,	/* 643 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00219 */ HB_P_LINEOFFSET, 16,	/* 644 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00234 */ HB_P_LINEOFFSET, 17,	/* 645 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 26, 0,	/* MCOD_FAB */
/* 00240 */ HB_P_LINEOFFSET, 18,	/* 646 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00303 */ HB_P_LINEOFFSET, 19,	/* 647 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00336 */ HB_P_LINEOFFSET, 20,	/* 648 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 63,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00405 */ HB_P_LINEOFFSET, 21,	/* 649 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00427 */ HB_P_LINEOFFSET, 22,	/* 650 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00454) */
/* 00439 */ HB_P_LINEOFFSET, 23,	/* 651 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 200, 1,	/* 456 (abs: 00907) */
/* 00454 */ HB_P_LINEOFFSET, 26,	/* 654 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 133, 0,	/* OPCAO */
/* 00507 */ HB_P_LINEOFFSET, 27,	/* 655 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00529) */
	HB_P_PUSHVARIABLE, 133, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00534) */
	HB_P_JUMP, 191, 254,	/* -321 (abs: 00210) */
/* 00534 */ HB_P_LINEOFFSET, 31,	/* 659 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 134, 0,	/* CONS_FORN */
/* 00542 */ HB_P_LINEOFFSET, 32,	/* 660 */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '1', '.', '0', '1', 39, 0, 
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00591 */ HB_P_LINEOFFSET, 33,	/* 661 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 134, 0,	/* CONS_FORN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00612 */ HB_P_LINEOFFSET, 34,	/* 662 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00636 */ HB_P_LINEOFFSET, 35,	/* 663 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 134, 0,	/* CONS_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00653) */
	HB_P_JUMP, 72, 254,	/* -440 (abs: 00210) */
/* 00653 */ HB_P_LINEOFFSET, 38,	/* 666 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 134, 0,	/* CONS_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 00836) */
/* 00674 */ HB_P_LINEOFFSET, 39,	/* 667 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHMEMVAR, 134, 0,	/* CONS_FORN */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 134, 0,	/* CONS_FORN */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00711 */ HB_P_LINEOFFSET, 40,	/* 668 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 135, 0,	/* CONS_DOC */
/* 00719 */ HB_P_LINEOFFSET, 41,	/* 669 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'l', 'o', 'c', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* CONS_FORN */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* CONS_FORN */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00824 */ HB_P_LINEOFFSET, 42,	/* 670 */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_JUMP, 82, 255,	/* -174 (abs: 00659) */
/* 00836 */ HB_P_LINEOFFSET, 43,	/* 671 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00860 */ HB_P_LINEOFFSET, 44,	/* 672 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'f', 'e', 'i', 't', 'a', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00907 */ HB_P_LINEOFFSET, 47,	/* 675 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00914 */ HB_P_LINEOFFSET, 48,	/* 676 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00919 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC276 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 171, 2,	/* 683 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '6', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'D', 'E', ' ', 'G', 'R', 'U', 'P', 'O', ' ', 'E', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'N', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00134) */
/* 00129 */ HB_P_LINEOFFSET, 3,	/* 686 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00134 */ HB_P_LINEOFFSET, 5,	/* 688 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'D', 'E', ' ', 'G', 'R', 'U', 'P', 'O', ' ', 'E', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'N', 'O', ' ', 'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'E', ' ', 'P', 'E', 'D', 'I', 'D', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00216 */ HB_P_LINEOFFSET, 7,	/* 690 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00225 */ HB_P_LINEOFFSET, 8,	/* 691 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00238 */ HB_P_LINEOFFSET, 9,	/* 692 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
/* 00249 */ HB_P_LINEOFFSET, 10,	/* 693 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
/* 00260 */ HB_P_LINEOFFSET, 11,	/* 694 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00323 */ HB_P_LINEOFFSET, 12,	/* 695 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00357 */ HB_P_LINEOFFSET, 13,	/* 696 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00392 */ HB_P_LINEOFFSET, 14,	/* 697 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00430) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00435) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00490 */ HB_P_LINEOFFSET, 15,	/* 698 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MSUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00529) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00534) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* MGRUPO */
	2, 0,	/* MSUB */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00622 */ HB_P_LINEOFFSET, 16,	/* 699 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00644 */ HB_P_LINEOFFSET, 17,	/* 700 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00671) */
/* 00656 */ HB_P_LINEOFFSET, 18,	/* 701 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 216, 2,	/* 728 (abs: 01396) */
/* 00671 */ HB_P_LINEOFFSET, 21,	/* 704 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 133, 0,	/* OPCAO */
/* 00724 */ HB_P_LINEOFFSET, 22,	/* 705 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00746) */
	HB_P_PUSHVARIABLE, 133, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00751) */
	HB_P_JUMP, 236, 253,	/* -532 (abs: 00216) */
/* 00751 */ HB_P_LINEOFFSET, 26,	/* 709 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 130, 0,	/* CONS_MERC */
/* 00759 */ HB_P_LINEOFFSET, 27,	/* 710 */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00814 */ HB_P_LINEOFFSET, 28,	/* 711 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 00880) */
/* 00825 */ HB_P_LINEOFFSET, 29,	/* 712 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00880 */ HB_P_LINEOFFSET, 31,	/* 714 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MSUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 00942) */
/* 00891 */ HB_P_LINEOFFSET, 32,	/* 715 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MSUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00942 */ HB_P_LINEOFFSET, 34,	/* 717 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00968 */ HB_P_LINEOFFSET, 35,	/* 718 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00989 */ HB_P_LINEOFFSET, 36,	/* 719 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01013 */ HB_P_LINEOFFSET, 37,	/* 720 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01030) */
	HB_P_JUMP, 213, 252,	/* -811 (abs: 00216) */
/* 01030 */ HB_P_LINEOFFSET, 40,	/* 723 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 132, 0,	/* I */
/* 01036 */ HB_P_LINEOFFSET, 41,	/* 724 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 130, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 01325) */
/* 01057 */ HB_P_LINEOFFSET, 42,	/* 725 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01095 */ HB_P_LINEOFFSET, 43,	/* 726 */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'S', 'E', 'T', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01183 */ HB_P_LINEOFFSET, 44,	/* 727 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01201 */ HB_P_LINEOFFSET, 45,	/* 728 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'S', 'E', 'T', ' ', 'p', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 130, 0,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01295 */ HB_P_LINEOFFSET, 46,	/* 729 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01313 */ HB_P_LINEOFFSET, 47,	/* 730 */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_JUMP, 232, 254,	/* -280 (abs: 01042) */
/* 01325 */ HB_P_LINEOFFSET, 48,	/* 731 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01349 */ HB_P_LINEOFFSET, 49,	/* 732 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'f', 'e', 'i', 't', 'a', ' ', 'c', 'o', 'm', ' ', 's', 'u', 'c', 'e', 's', 's', 'o', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01396 */ HB_P_LINEOFFSET, 52,	/* 735 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01403 */ HB_P_LINEOFFSET, 53,	/* 736 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01408 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC277 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 232, 2,	/* 744 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '7', 0, 
	HB_P_PUSHSYMNEAR, 44,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MDATA */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MSUB */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MGRUPO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_MOV */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* POINT 0*/
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MCOM_SALDO 2*/
	'N', 0, 
/* 00078 */ HB_P_LINEOFFSET, 2,	/* 746 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'E', 'X', 'C', 'L', 'U', 'I', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'A', 'P', 'A', 'R', 'T', 'I', 'R', ' ', 'D', 'E', ' ', 'D', 'E', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'D', 'A', ' ', 'D', 'A', 'T', 'A', ' ', 'D', 'E', ' ', 'S', 'A', 'I', 'D', 'A', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00166) */
/* 00161 */ HB_P_LINEOFFSET, 3,	/* 747 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00166 */ HB_P_LINEOFFSET, 5,	/* 749 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'E', 'X', 'C', 'L', 'U', 'I', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'A', 'P', 'A', 'R', 'T', 'I', 'R', ' ', 'D', 'E', ' ', 'D', 'E', 'T', 'E', 'R', 'M', 'I', 'N', 'A', 'D', 'A', ' ', 'D', 'A', 'T', 'A', ' ', 'D', 'E', ' ', 'S', 'A', 'I', 'D', 'A', 0, 
	HB_P_DOSHORT, 5,
/* 00237 */ HB_P_LINEOFFSET, 7,	/* 751 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00246 */ HB_P_LINEOFFSET, 8,	/* 752 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00259 */ HB_P_LINEOFFSET, 9,	/* 753 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MSUB */
/* 00270 */ HB_P_LINEOFFSET, 10,	/* 754 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MGRUPO */
/* 00281 */ HB_P_LINEOFFSET, 11,	/* 755 */
	HB_P_PUSHSYMNEAR, 44,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MDATA */
/* 00301 */ HB_P_LINEOFFSET, 12,	/* 756 */
	HB_P_LOCALNEARSETSTR, 10, 2, 0,	/* MCOM_SALDO 2*/
	'N', 0, 
/* 00309 */ HB_P_LINEOFFSET, 13,	/* 757 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00372 */ HB_P_LINEOFFSET, 14,	/* 758 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'E', 'X', 'C', 'L', 'U', 'I', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'A', 'P', 'A', 'R', 'T', 'I', 'R', ' ', 'D', 'A', ' ', 'D', 'A', 'T', 'A', ' ', 'U', 'L', 'T', 'I', 'M', 'A', ' ', 'S', 'A', 'I', 'D', 'A', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00435 */ HB_P_LINEOFFSET, 15,	/* 759 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00497 */ HB_P_LINEOFFSET, 16,	/* 760 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00560 */ HB_P_LINEOFFSET, 17,	/* 761 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'I', 'n', 'c', 'l', 'u', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'S', 'A', 'L', 'D', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00623 */ HB_P_LINEOFFSET, 18,	/* 762 */
	HB_P_PUSHSYMNEAR, 45,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00638 */ HB_P_LINEOFFSET, 19,	/* 763 */
	HB_P_PUSHSYMNEAR, 45,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00653 */ HB_P_LINEOFFSET, 20,	/* 764 */
	HB_P_PUSHSYMNEAR, 45,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00668 */ HB_P_LINEOFFSET, 21,	/* 765 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00677 */ HB_P_LINEOFFSET, 22,	/* 766 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 00702 */ HB_P_LINEOFFSET, 23,	/* 767 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'A', 'L', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 00726 */ HB_P_LINEOFFSET, 24,	/* 768 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00767 */ HB_P_LINEOFFSET, 25,	/* 769 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00775 */ HB_P_LINEOFFSET, 26,	/* 770 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00813) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00818) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MDATA */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00849) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00850) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00868 */ HB_P_LINEOFFSET, 27,	/* 771 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00906) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00911) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00966 */ HB_P_LINEOFFSET, 28,	/* 772 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MSUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01005) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01010) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MGRUPO */
	4, 0,	/* MSUB */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01098 */ HB_P_LINEOFFSET, 29,	/* 773 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOM_SALDO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01137) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01142) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'm', '_', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOM_SALDO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01197 */ HB_P_LINEOFFSET, 30,	/* 774 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 01219 */ HB_P_LINEOFFSET, 31,	/* 775 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01246) */
/* 01231 */ HB_P_LINEOFFSET, 32,	/* 776 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 54, 4,	/* 1078 (abs: 02321) */
/* 01246 */ HB_P_LINEOFFSET, 35,	/* 779 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 01295 */ HB_P_LINEOFFSET, 36,	/* 780 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01316) */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01321) */
	HB_P_JUMP, 199, 251,	/* -1081 (abs: 00237) */
/* 01321 */ HB_P_LINEOFFSET, 39,	/* 783 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* CONS_MERC */
/* 01328 */ HB_P_LINEOFFSET, 40,	/* 784 */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01383 */ HB_P_LINEOFFSET, 41,	/* 785 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 01449) */
/* 01394 */ HB_P_LINEOFFSET, 42,	/* 786 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01449 */ HB_P_LINEOFFSET, 44,	/* 788 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 01511) */
/* 01460 */ HB_P_LINEOFFSET, 45,	/* 789 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01511 */ HB_P_LINEOFFSET, 47,	/* 791 */
	HB_P_PUSHLOCALNEAR, 10,	/* MCOM_SALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 01586) */
/* 01522 */ HB_P_LINEOFFSET, 48,	/* 792 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', '(', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'O', 'R', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01586 */ HB_P_LINEOFFSET, 50,	/* 794 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01612 */ HB_P_LINEOFFSET, 51,	/* 795 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01632 */ HB_P_LINEOFFSET, 52,	/* 796 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01656 */ HB_P_LINEOFFSET, 53,	/* 797 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01672) */
	HB_P_JUMP, 104, 250,	/* -1432 (abs: 00237) */
/* 01672 */ HB_P_LINEOFFSET, 56,	/* 800 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* CONS_EXCL */
/* 01679 */ HB_P_LINEOFFSET, 57,	/* 801 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 132, 0,	/* I */
/* 01685 */ HB_P_LINEOFFSET, 58,	/* 802 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 44, 1,	/* 300 (abs: 02002) */
/* 01705 */ HB_P_LINEOFFSET, 59,	/* 803 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01741 */ HB_P_LINEOFFSET, 60,	/* 804 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_MOV */
/* 01748 */ HB_P_LINEOFFSET, 61,	/* 805 */
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', 'a', 'p', 'a', 'g', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MDATA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01862 */ HB_P_LINEOFFSET, 62,	/* 806 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01882 */ HB_P_LINEOFFSET, 63,	/* 807 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01906 */ HB_P_LINEOFFSET, 64,	/* 808 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01921) */
	HB_P_JUMPNEAR, 73,	/* 73 (abs: 01992) */
/* 01921 */ HB_P_LINEOFFSET, 67,	/* 811 */
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* CONS_MERC */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01990 */ HB_P_LINEOFFSET, 68,	/* 812 */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_JUMP, 204, 254,	/* -308 (abs: 01691) */
/* 02002 */ HB_P_LINEOFFSET, 69,	/* 813 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02040 */ HB_P_LINEOFFSET, 70,	/* 814 */
	HB_P_PUSHSYMNEAR, 136,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02047 */ HB_P_LINEOFFSET, 71,	/* 815 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02091 */ HB_P_LINEOFFSET, 72,	/* 816 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 137,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 9,	/* POINT */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02126 */ HB_P_LINEOFFSET, 73,	/* 817 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'E', 'X', 'C', 'L', 'U', 'S', 'A', 'O', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* OPCAO */
/* 02175 */ HB_P_LINEOFFSET, 74,	/* 818 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 02196) */
	HB_P_PUSHLOCALNEAR, 3,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 02201) */
	HB_P_JUMP, 87, 248,	/* -1961 (abs: 00237) */
/* 02201 */ HB_P_LINEOFFSET, 77,	/* 821 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 132, 0,	/* I */
/* 02207 */ HB_P_LINEOFFSET, 78,	/* 822 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 61, 248,	/* -1987 (abs: 00237) */
/* 02227 */ HB_P_LINEOFFSET, 79,	/* 823 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'D', 'E', 'L', 'E', 'T', 'E', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* CONS_EXCL */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02292 */ HB_P_LINEOFFSET, 80,	/* 824 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02310 */ HB_P_LINEOFFSET, 81,	/* 825 */
	HB_P_PUSHVARIABLE, 132, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 132, 0,	/* I */
	HB_P_JUMPNEAR, 150,	/* -106 (abs: 02213) */
/* 02321 */ HB_P_LINEOFFSET, 83,	/* 827 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02328 */ HB_P_LINEOFFSET, 84,	/* 828 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02333 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC278 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 67, 3,	/* 835 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '8', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
	HB_P_LOCALNEARSETSTR, 4, 2, 0,	/* MISENTO 2*/
	'N', 0, 
/* 00041 */ HB_P_LINEOFFSET, 2,	/* 837 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'S', 'E', 'N', 'T', 'O', ' ', 'S', 'I', 'M', ' ', 'O', 'U', ' ', 'N', 'A', 'O', ' ', 'P', 'O', 'R', ' ', 'G', 'R', 'E', 'U', 'P', 'O', ' ', 'E', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00138) */
/* 00133 */ HB_P_LINEOFFSET, 3,	/* 838 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00138 */ HB_P_LINEOFFSET, 6,	/* 841 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00168) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00168 */ HB_P_LINEOFFSET, 8,	/* 843 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'P', 'A', 'R', 'A', ' ', 'I', 'S', 'E', 'N', 'T', 'O', ' ', 'O', 'U', ' ', 'N', 'A', 'O', ' ', 'P', 'O', 'R', ' ', 'G', 'R', 'E', 'U', 'P', 'O', ' ', 'E', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 00244 */ HB_P_LINEOFFSET, 10,	/* 845 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00253 */ HB_P_LINEOFFSET, 11,	/* 846 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00266 */ HB_P_LINEOFFSET, 12,	/* 847 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
/* 00277 */ HB_P_LINEOFFSET, 13,	/* 848 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
/* 00288 */ HB_P_LINEOFFSET, 14,	/* 849 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00351 */ HB_P_LINEOFFSET, 15,	/* 850 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00391 */ HB_P_LINEOFFSET, 16,	/* 851 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00431 */ HB_P_LINEOFFSET, 17,	/* 852 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 's', 'e', 'n', 't', 'o', ' ', '[', 'S', ']', 'i', 'm', ' ', 'o', 'u', ' ', '[', 'N', ']', 'a', 'o', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00472 */ HB_P_LINEOFFSET, 18,	/* 853 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00480 */ HB_P_LINEOFFSET, 19,	/* 854 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00518) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00523) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00578 */ HB_P_LINEOFFSET, 20,	/* 855 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MSUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00616) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00621) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* MGRUPO */
	2, 0,	/* MSUB */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00708 */ HB_P_LINEOFFSET, 21,	/* 856 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MISENTO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00747) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00752) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'i', 's', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MISENTO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00804 */ HB_P_LINEOFFSET, 22,	/* 857 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00826 */ HB_P_LINEOFFSET, 23,	/* 858 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00853) */
/* 00838 */ HB_P_LINEOFFSET, 24,	/* 859 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 181, 0,	/* 181 (abs: 01031) */
/* 00853 */ HB_P_LINEOFFSET, 27,	/* 862 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'O', 'P', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00910) */
	HB_P_JUMP, 105, 253,	/* -663 (abs: 00244) */
/* 00910 */ HB_P_LINEOFFSET, 30,	/* 865 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MISENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHLOCALNEAR, 2,	/* MSUB */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01004 */ HB_P_LINEOFFSET, 31,	/* 866 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 240, 252,	/* -784 (abs: 00244) */
/* 01031 */ HB_P_LINEOFFSET, 33,	/* 868 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01038 */ HB_P_LINEOFFSET, 34,	/* 869 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01043 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC279 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 108, 3,	/* 876 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '7', '9', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MPERC 0*/
/* 00039 */ HB_P_LINEOFFSET, 2,	/* 878 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'M', 'A', 'R', 'G', 'E', 'M', ' ', 'D', 'E', ' ', 'L', 'U', 'C', 'R', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00106) */
/* 00101 */ HB_P_LINEOFFSET, 3,	/* 879 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00106 */ HB_P_LINEOFFSET, 6,	/* 882 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00136) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00136 */ HB_P_LINEOFFSET, 8,	/* 884 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'M', 'A', 'R', 'G', 'E', 'M', ' ', 'D', 'E', ' ', 'L', 'U', 'C', 'R', 'O', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00186 */ HB_P_LINEOFFSET, 10,	/* 886 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00195 */ HB_P_LINEOFFSET, 11,	/* 887 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00208 */ HB_P_LINEOFFSET, 12,	/* 888 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* MSUB */
/* 00219 */ HB_P_LINEOFFSET, 13,	/* 889 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* MGRUPO */
/* 00230 */ HB_P_LINEOFFSET, 14,	/* 890 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* MPERC 0*/
/* 00236 */ HB_P_LINEOFFSET, 15,	/* 891 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00299 */ HB_P_LINEOFFSET, 16,	/* 892 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00339 */ HB_P_LINEOFFSET, 17,	/* 893 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00379 */ HB_P_LINEOFFSET, 18,	/* 894 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'd', 'e', ' ', 'L', 'u', 'c', 'r', 'o', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00420 */ HB_P_LINEOFFSET, 19,	/* 895 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00428 */ HB_P_LINEOFFSET, 20,	/* 896 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00466) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00471) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00526 */ HB_P_LINEOFFSET, 21,	/* 897 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	2, 0,	/* MSUB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00564) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00569) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', 'u', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 40, 0,	/* 40 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* MGRUPO */
	2, 0,	/* MSUB */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	3, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00656 */ HB_P_LINEOFFSET, 22,	/* 898 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MPERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00695) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00700) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00738 */ HB_P_LINEOFFSET, 23,	/* 899 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00760 */ HB_P_LINEOFFSET, 24,	/* 900 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 00787) */
/* 00772 */ HB_P_LINEOFFSET, 25,	/* 901 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 209, 0,	/* 209 (abs: 00993) */
/* 00787 */ HB_P_LINEOFFSET, 28,	/* 904 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'O', 'P', 'E', 'R', 'A', 'C', 'A', 'O', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00844) */
	HB_P_JUMP, 113, 253,	/* -655 (abs: 00186) */
/* 00844 */ HB_P_LINEOFFSET, 31,	/* 907 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MPERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00889 */ HB_P_LINEOFFSET, 32,	/* 908 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 50,	/* 50 (abs: 00948) */
/* 00900 */ HB_P_LINEOFFSET, 33,	/* 909 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 93,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* MGRUPO */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHLOCALNEAR, 2,	/* MSUB */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 00948 */ HB_P_LINEOFFSET, 35,	/* 911 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00966 */ HB_P_LINEOFFSET, 36,	/* 912 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 220, 252,	/* -804 (abs: 00186) */
/* 00993 */ HB_P_LINEOFFSET, 38,	/* 914 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01000 */ HB_P_LINEOFFSET, 39,	/* 915 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01005 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC280 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 154, 3,	/* 922 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'S', 'A', 'C', '2', '8', '0', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_EXCL */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* POINT 0*/
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* F 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* M_COD */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MARQ */
/* 00058 */ HB_P_LINEOFFSET, 2,	/* 924 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'O', 'M', ' ', 'C', 'O', 'D', 'I', 'G', 'O', 'S', ' ', 'I', 'G', 'U', 'A', 'I', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00130) */
/* 00125 */ HB_P_LINEOFFSET, 3,	/* 925 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00130 */ HB_P_LINEOFFSET, 5,	/* 927 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'R', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'C', 'O', 'M', ' ', 'C', 'O', 'D', 'I', 'G', 'O', 'S', ' ', 'I', 'G', 'U', 'A', 'I', 'S', 0, 
	HB_P_DOSHORT, 5,
/* 00185 */ HB_P_LINEOFFSET, 7,	/* 929 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00194 */ HB_P_LINEOFFSET, 8,	/* 930 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00207 */ HB_P_LINEOFFSET, 9,	/* 931 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 138, 0,	/* MSUB */
/* 00219 */ HB_P_LINEOFFSET, 10,	/* 932 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 139, 0,	/* MGRUPO */
/* 00231 */ HB_P_LINEOFFSET, 11,	/* 933 */
	HB_P_PUSHSYMNEAR, 44,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 140, 0,	/* MDATA */
/* 00252 */ HB_P_LINEOFFSET, 12,	/* 934 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_POPVARIABLE, 141, 0,	/* MCOM_SALDO */
/* 00261 */ HB_P_LINEOFFSET, 13,	/* 935 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'n', 'a', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00324 */ HB_P_LINEOFFSET, 14,	/* 936 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'V', 'E', 'R', 'I', 'F', 'I', 'C', 'A', 'D', 'O', 'S', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00363 */ HB_P_LINEOFFSET, 15,	/* 937 */
	HB_P_PUSHSYMNEAR, 45,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00376 */ HB_P_LINEOFFSET, 16,	/* 938 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'T', 'A', 'B', 'E', 'L', 'A', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 142,	/* ROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 143,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MARQ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00455) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00460) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'a', 'r', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00491 */ HB_P_LINEOFFSET, 17,	/* 939 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 00513 */ HB_P_LINEOFFSET, 18,	/* 940 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00537) */
/* 00525 */ HB_P_LINEOFFSET, 19,	/* 941 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00532 */ HB_P_LINEOFFSET, 20,	/* 942 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00537 */ HB_P_LINEOFFSET, 22,	/* 944 */
	HB_P_PUSHSYMNEAR, 144,	/* SR_EXISTTABLE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 56,	/* 56 (abs: 00607) */
/* 00553 */ HB_P_LINEOFFSET, 23,	/* 945 */
	HB_P_PUSHSYMNEAR, 68,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'a', ' ', 'T', 'A', 'B', 'E', 'L', 'A', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 93, 254,	/* -419 (abs: 00185) */
/* 00607 */ HB_P_LINEOFFSET, 26,	/* 948 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 2,	/* OPCAO */
/* 00656 */ HB_P_LINEOFFSET, 27,	/* 949 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00677) */
	HB_P_PUSHLOCALNEAR, 2,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00691) */
/* 00679 */ HB_P_LINEOFFSET, 28,	/* 950 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00686 */ HB_P_LINEOFFSET, 29,	/* 951 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00691 */ HB_P_LINEOFFSET, 31,	/* 953 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 3,	/* CONS_MERC */
/* 00698 */ HB_P_LINEOFFSET, 32,	/* 954 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00762 */ HB_P_LINEOFFSET, 33,	/* 955 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00786 */ HB_P_LINEOFFSET, 34,	/* 956 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00802) */
	HB_P_JUMP, 154, 253,	/* -614 (abs: 00185) */
/* 00802 */ HB_P_LINEOFFSET, 37,	/* 959 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* M_COD */
/* 00809 */ HB_P_LINEOFFSET, 38,	/* 960 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_EXCL */
/* 00816 */ HB_P_LINEOFFSET, 39,	/* 961 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* I 0*/
/* 00822 */ HB_P_LINEOFFSET, 40,	/* 962 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 141, 2,	/* 653 (abs: 01491) */
/* 00841 */ HB_P_LINEOFFSET, 41,	/* 963 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 5,	/* CONS_MOV */
/* 00848 */ HB_P_LINEOFFSET, 42,	/* 964 */
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 59, 1,	/* 315 (abs: 01183) */
/* 00871 */ HB_P_LINEOFFSET, 43,	/* 965 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00904 */ HB_P_LINEOFFSET, 44,	/* 966 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00944 */ HB_P_LINEOFFSET, 45,	/* 967 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01022 */ HB_P_LINEOFFSET, 46,	/* 968 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01046 */ HB_P_LINEOFFSET, 47,	/* 969 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 169, 1,	/* 425 (abs: 01482) */
/* 01060 */ HB_P_LINEOFFSET, 48,	/* 970 */
	HB_P_PUSHSYMNEAR, 145,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_COD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 146, 0,	/* MPONTO */
/* 01080 */ HB_P_LINEOFFSET, 49,	/* 971 */
	HB_P_PUSHVARIABLE, 146, 0,	/* MPONTO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 01180) */
/* 01089 */ HB_P_LINEOFFSET, 50,	/* 972 */
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_COD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01106 */ HB_P_LINEOFFSET, 51,	/* 973 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* F 0*/
/* 01112 */ HB_P_LINEOFFSET, 52,	/* 974 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* F 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 01177) */
/* 01130 */ HB_P_LINEOFFSET, 53,	/* 975 */
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_EXCL */
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01169 */ HB_P_LINEOFFSET, 54,	/* 976 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* F 1*/
	HB_P_JUMPNEAR, 199,	/* -57 (abs: 01118) */
	HB_P_JUMP, 49, 1,	/* 305 (abs: 01482) */
	HB_P_JUMP, 46, 1,	/* 302 (abs: 01482) */
/* 01183 */ HB_P_LINEOFFSET, 58,	/* 980 */
	HB_P_PUSHSYMNEAR, 87,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01215 */ HB_P_LINEOFFSET, 59,	/* 981 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01254 */ HB_P_LINEOFFSET, 60,	/* 982 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01331 */ HB_P_LINEOFFSET, 61,	/* 983 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01355 */ HB_P_LINEOFFSET, 62,	/* 984 */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 116,	/* 116 (abs: 01482) */
/* 01368 */ HB_P_LINEOFFSET, 63,	/* 985 */
	HB_P_PUSHSYMNEAR, 145,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_COD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 146, 0,	/* MPONTO */
/* 01387 */ HB_P_LINEOFFSET, 64,	/* 986 */
	HB_P_PUSHVARIABLE, 146, 0,	/* MPONTO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 01482) */
/* 01396 */ HB_P_LINEOFFSET, 65,	/* 987 */
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_COD */
	HB_P_PUSHLOCALNEAR, 3,	/* CONS_MERC */
	HB_P_PUSHLOCALNEAR, 7,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 01412 */ HB_P_LINEOFFSET, 66,	/* 988 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* F 0*/
/* 01418 */ HB_P_LINEOFFSET, 67,	/* 989 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* F 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_PUSHSYMNEAR, 131,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 01482) */
/* 01436 */ HB_P_LINEOFFSET, 68,	/* 990 */
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_EXCL */
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* CONS_MOV */
	HB_P_PUSHLOCALNEAR, 8,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01474 */ HB_P_LINEOFFSET, 69,	/* 991 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* F 1*/
	HB_P_JUMPNEAR, 200,	/* -56 (abs: 01424) */
/* 01482 */ HB_P_LINEOFFSET, 73,	/* 995 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* I 1*/
	HB_P_JUMP, 108, 253,	/* -660 (abs: 00828) */
/* 01491 */ HB_P_LINEOFFSET, 74,	/* 996 */
	HB_P_PUSHSYMNEAR, 136,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01498 */ HB_P_LINEOFFSET, 75,	/* 997 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01521 */ HB_P_LINEOFFSET, 76,	/* 998 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 137,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 84,	/* 84 */
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_EXCL */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 6,	/* POINT */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01556 */ HB_P_LINEOFFSET, 79,	/* 1001 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01563 */ HB_P_LINEOFFSET, 80,	/* 1002 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01568 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC281 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 9, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 242, 3,	/* 1010 */
	HB_P_LOCALNEARSETSTR, 1, 14, 0,	/* MPRG 14*/
	'S', 'A', 'C', '2', '7', '(', 's', 'a', 'c', '2', '8', '1', ')', 0, 
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* MICM_ATUAL 0*/
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MICM_PROX 0*/
/* 00032 */ HB_P_LINEOFFSET, 2,	/* 1012 */
	HB_P_PUSHSYMNEAR, 33,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 26,	/* MCOD_FAB */
	HB_P_DOSHORT, 2,
/* 00043 */ HB_P_LINEOFFSET, 4,	/* 1014 */
	HB_P_PUSHSYMNEAR, 34,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'A', 'S', ' ', 'A', 'L', 'I', 'Q', 'U', 'O', 'T', 'A', 'S', ' ', 'I', 'C', 'M', 'S', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHMEMVAR, 35, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00116) */
/* 00111 */ HB_P_LINEOFFSET, 5,	/* 1015 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00116 */ HB_P_LINEOFFSET, 7,	/* 1017 */
	HB_P_LOCALNEARSETINT, 2, 18, 0,	/* LBA 18*/
/* 00122 */ HB_P_LINEOFFSET, 8,	/* 1018 */
	HB_P_LOCALNEARSETINT, 3, 75, 0,	/* CBA 75*/
/* 00128 */ HB_P_LINEOFFSET, 10,	/* 1020 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00158) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00158 */ HB_P_LINEOFFSET, 11,	/* 1021 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00187) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00187 */ HB_P_LINEOFFSET, 12,	/* 1022 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00216) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00216 */ HB_P_LINEOFFSET, 13,	/* 1023 */
	HB_P_PUSHSYMNEAR, 37,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00245) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00245 */ HB_P_LINEOFFSET, 15,	/* 1025 */
	HB_P_PUSHSYMNEAR, 123,	/* AUT_SEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'S', 'e', 'n', 'h', 'a', ' ', 'p', '/', 'L', 'i', 'b', 'e', 'r', 'a', 'r', ' ', 'o', ' ', 'A', 'j', 'u', 's', 't', 'e', ' ', 'd', 'a', 's', ' ', 'a', 'l', 'i', 'q', 'u', 'o', 't', 'a', 's', ' ', 'I', 'C', 'M', 'S', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', 0, 
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'L', 'I', 'B', '_', 'A', 'J', 'U', 'S', 'T', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00327) */
/* 00322 */ HB_P_LINEOFFSET, 16,	/* 1026 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00327 */ HB_P_LINEOFFSET, 18,	/* 1028 */
	HB_P_PUSHSYMNEAR, 2,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', 'A', 'J', 'U', 'S', 'T', 'A', 'R', ' ', 'A', 'S', ' ', 'A', 'L', 'I', 'Q', 'U', 'O', 'T', 'A', 'S', ' ', 'I', 'C', 'M', 'S', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00384 */ HB_P_LINEOFFSET, 20,	/* 1030 */
	HB_P_PUSHSYMNEAR, 3,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00393 */ HB_P_LINEOFFSET, 21,	/* 1031 */
	HB_P_PUSHSYMNEAR, 39,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 2,	/* LBA */
	HB_P_PUSHLOCALNEAR, 3,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00406 */ HB_P_LINEOFFSET, 22,	/* 1032 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* MSUB1 */
/* 00417 */ HB_P_LINEOFFSET, 23,	/* 1033 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* MGRUPO1 */
/* 00428 */ HB_P_LINEOFFSET, 24,	/* 1034 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MICM_PROX 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* MICM_PROX */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 8,	/* MICM_ATUAL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_POPLOCALNEAR, 6,	/* MCOD_MERC1 */
/* 00449 */ HB_P_LINEOFFSET, 25,	/* 1035 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00512 */ HB_P_LINEOFFSET, 26,	/* 1036 */
	HB_P_PUSHSYMNEAR, 1,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00520 */ HB_P_LINEOFFSET, 27,	/* 1037 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00559 */ HB_P_LINEOFFSET, 28,	/* 1038 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00599 */ HB_P_LINEOFFSET, 29,	/* 1039 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00639 */ HB_P_LINEOFFSET, 30,	/* 1040 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00679 */ HB_P_LINEOFFSET, 31,	/* 1041 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'C', 'o', 'd', '.', 'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00719 */ HB_P_LINEOFFSET, 32,	/* 1042 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'A', 'T', 'U', 'A', 'L', ' ', '(', '%', ')', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00759 */ HB_P_LINEOFFSET, 33,	/* 1043 */
	HB_P_PUSHSYMNEAR, 46,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 47,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'P', 'r', 'o', 'x', 'i', 'm', 'a', ' ', 'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00799 */ HB_P_LINEOFFSET, 36,	/* 1046 */
	HB_P_PUSHSYMNEAR, 48,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 49,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00819 */ HB_P_LINEOFFSET, 37,	/* 1047 */
	HB_P_PUSHSYMNEAR, 50,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00826 */ HB_P_LINEOFFSET, 39,	/* 1049 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00864) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00869) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 22, 0,	/* 22 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 57,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00925 */ HB_P_LINEOFFSET, 40,	/* 1050 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* MSUB1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00964) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00969) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 's', 'u', 'b', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 41, 0,	/* 41 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	5, 0,	/* MGRUPO1 */
	4, 0,	/* MSUB1 */
	HB_P_PUSHSYMNEAR, 59,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 60,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FALSE,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01058 */ HB_P_LINEOFFSET, 41,	/* 1051 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01097) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01102) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', '1', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 23, 0,	/* 23 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHSYMNEAR, 55,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSYMNEAR, 31,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01183 */ HB_P_LINEOFFSET, 42,	/* 1052 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 62,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01273 */ HB_P_LINEOFFSET, 43,	/* 1053 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'f', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 63,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MCOD_MERC1 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01360 */ HB_P_LINEOFFSET, 44,	/* 1054 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	8, 0,	/* MICM_ATUAL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01399) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01404) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'c', 'm', '_', 'a', 't', 'u', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01444 */ HB_P_LINEOFFSET, 45,	/* 1055 */
	HB_P_PUSHSYMNEAR, 51,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 52,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 54,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	9, 0,	/* MICM_PROX */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01483) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01488) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'c', 'm', '_', 'p', 'r', 'o', 'x', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 56, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01527 */ HB_P_LINEOFFSET, 46,	/* 1056 */
	HB_P_PUSHSYMNEAR, 66,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 53, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 53, 0,	/* GETLIST */
/* 01549 */ HB_P_LINEOFFSET, 47,	/* 1057 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 01576) */
/* 01561 */ HB_P_LINEOFFSET, 48,	/* 1058 */
	HB_P_PUSHSYMNEAR, 124,	/* __MVRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_TRUE,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 148, 2,	/* 660 (abs: 02233) */
/* 01576 */ HB_P_LINEOFFSET, 51,	/* 1061 */
	HB_P_PUSHSYMNEAR, 69,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'A', 'j', 'u', 's', 't', 'e', ' ', 'd', 'o', 's', ' ', 'S', 'a', 'l', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 01621 */ HB_P_LINEOFFSET, 52,	/* 1062 */
	HB_P_PUSHSYMNEAR, 9,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01642) */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01647) */
	HB_P_JUMP, 20, 251,	/* -1260 (abs: 00384) */
/* 01647 */ HB_P_LINEOFFSET, 55,	/* 1065 */
	HB_P_PUSHSYMNEAR, 4,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'o', ' ', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01687 */ HB_P_LINEOFFSET, 58,	/* 1068 */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01734 */ HB_P_LINEOFFSET, 59,	/* 1069 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'b', 'e', 'b', 'i', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MICM_PROX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01764 */ HB_P_LINEOFFSET, 60,	/* 1070 */
	HB_P_PUSHLOCALNEAR, 8,	/* MICM_ATUAL */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01856) */
/* 01773 */ HB_P_LINEOFFSET, 61,	/* 1071 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', '(', 'b', 'e', 'b', 'i', 'd', 'a', ' ', '=', ' ', '0', ' ', 'o', 'r', ' ', 'B', 'E', 'B', 'I', 'D', 'A', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'o', 'r', ' ', 'b', 'e', 'b', 'i', 'd', 'a', ' ', '=', ' ', '1', '7', ')', ' ', 'A', 'N', 'D', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 01913) */
/* 01856 */ HB_P_LINEOFFSET, 63,	/* 1073 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'b', 'e', 'b', 'i', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 8,	/* MICM_ATUAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', 39, 'T', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01913 */ HB_P_LINEOFFSET, 65,	/* 1075 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 01933) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 01983) */
/* 01935 */ HB_P_LINEOFFSET, 66,	/* 1076 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 01983 */ HB_P_LINEOFFSET, 68,	/* 1078 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02037) */
/* 01994 */ HB_P_LINEOFFSET, 69,	/* 1079 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MGRUPO1 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSUB1 */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02037 */ HB_P_LINEOFFSET, 71,	/* 1081 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCOD_MERC1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 02091) */
/* 02048 */ HB_P_LINEOFFSET, 72,	/* 1082 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 90,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MCOD_MERC1 */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02091 */ HB_P_LINEOFFSET, 75,	/* 1085 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 02139) */
/* 02103 */ HB_P_LINEOFFSET, 76,	/* 1086 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MCOD_FAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02139 */ HB_P_LINEOFFSET, 79,	/* 1089 */
	HB_P_PUSHSYMNEAR, 58,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 25, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 02188) */
/* 02151 */ HB_P_LINEOFFSET, 80,	/* 1090 */
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 107,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 127, 0,	/* MESPECIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 126, 0,	/* CCOMM */
/* 02188 */ HB_P_LINEOFFSET, 82,	/* 1092 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 126, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02206 */ HB_P_LINEOFFSET, 87,	/* 1097 */
	HB_P_MESSAGE, 105, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 106,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
	HB_P_JUMP, 202, 248,	/* -1846 (abs: 00384) */
/* 02233 */ HB_P_LINEOFFSET, 89,	/* 1099 */
	HB_P_PUSHSYMNEAR, 10,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02240 */ HB_P_LINEOFFSET, 90,	/* 1100 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02245 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

