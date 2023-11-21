/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON425.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON425.PRG /q /oC:\hti\SISCOM\CON425.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:08 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON425.PRG"

HB_FUNC( CON425 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( DBCLOSEALL );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( __SETFORMAT );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( VER_REGI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PADL );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON425 )
{ "CON425", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON425 )}, NULL },
{ "MCOBRA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAXA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "BANK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOM_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCODCLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCLOSEALL", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCLOSEALL )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "__SETFORMAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETFORMAT )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "VER_REGI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_REGI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MINSC_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEND_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCID_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFONE_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PADL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADL )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON425 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON425
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON425 = hb_vm_SymbolInit_CON425;
   #pragma data_seg()
#endif

HB_FUNC( CON425 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 61, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_LOCALNEARSETSTR, 1, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '5', 0, 
	HB_P_LOCALNEARSETSTR, 44, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 48,	/* M_DUP */
	HB_P_LOCALNEARSETSTR, 50, 2, 0,	/* MOP_JUROS 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 51, 2, 0,	/* MIMP_FANTA 2*/
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_LOCALNEARSETSTR, 53, 2, 0,	/* MPROT 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_LOCALNEARSETINT, 55, 0, 0,	/* CONT_CLI 0*/
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* CONT_DOC 0*/
	HB_P_LOCALNEARSETINT, 57, 0, 0,	/* MFLAG 0*/
	HB_P_LOCALNEARSETINT, 58, 0, 0,	/* MTOT_DOC 0*/
	HB_P_LOCALNEARSETSTR, 59, 2, 0,	/* MTP_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MTK_PROT 2*/
	'N', 0, 
	HB_P_LOCALNEARSETINT, 61, 0, 0,	/* MREGIAO 0*/
/* 00089 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 17,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOBRA_FIN */
	HB_P_PUSHSYMNEAR, 2,	/* MTAXA_FIN */
	HB_P_PUSHSYMNEAR, 3,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 4,	/* BANK */
	HB_P_PUSHSYMNEAR, 5,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 6,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 7,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 8,	/* MCGC */
	HB_P_PUSHSYMNEAR, 9,	/* MCPF */
	HB_P_PUSHSYMNEAR, 10,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 11,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 12,	/* MARQ */
	HB_P_PUSHSYMNEAR, 14,	/* MCODCLI */
	HB_P_PUSHSYMNEAR, 15,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 16,	/* CONS_CLI */
	HB_P_DOSHORT, 15,
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 12, 0,	/* MARQ */
	HB_P_POPVARIABLE, 11, 0,	/* MIMP_TIPO */
/* 00156 */ HB_P_LINEOFFSET, 6,	/* 22 */
	HB_P_PUSHSYMNEAR, 18,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'A', 'R', 'T', 'A', ' ', 'C', 'O', 'B', 'R', 'A', 'N', 'C', 'A', ' ', 'P', '/', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 'S', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 19, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00236) */
/* 00231 */ HB_P_LINEOFFSET, 7,	/* 23 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00236 */ HB_P_LINEOFFSET, 11,	/* 27 */
	HB_P_PUSHSYMNEAR, 20,	/* DBCLOSEALL */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_PUSHSYMNEAR, 21,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* __SETFORMAT */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 1,
/* 00258 */ HB_P_LINEOFFSET, 12,	/* 28 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00285) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00285 */ HB_P_LINEOFFSET, 13,	/* 29 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00314) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00314 */ HB_P_LINEOFFSET, 14,	/* 30 */
	HB_P_PUSHSYMNEAR, 23,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00343) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00343 */ HB_P_LINEOFFSET, 21,	/* 37 */
	HB_P_PUSHSYMNEAR, 24,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 'C', 'a', 'r', 't', 'a', ' ', 'd', 'e', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', 0, 
	HB_P_DOSHORT, 5,
/* 00400 */ HB_P_LINEOFFSET, 22,	/* 38 */
	HB_P_PUSHMEMVAR, 25, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 10, 0,	/* MTIPO_IMP */
/* 00413 */ HB_P_LINEOFFSET, 24,	/* 40 */
	HB_P_PUSHSYMNEAR, 26,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00422 */ HB_P_LINEOFFSET, 25,	/* 41 */
	HB_P_PUSHSYMNEAR, 27,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DOSHORT, 4,
/* 00435 */ HB_P_LINEOFFSET, 26,	/* 42 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_POPVARIABLE, 15, 0,	/* MCODEMP */
/* 00446 */ HB_P_LINEOFFSET, 27,	/* 43 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 52,	/* MPROTOCOLO */
/* 00453 */ HB_P_LINEOFFSET, 28,	/* 44 */
	HB_P_LOCALNEARSETSTR, 30, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 00461 */ HB_P_LINEOFFSET, 29,	/* 45 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* BANK */
/* 00472 */ HB_P_LINEOFFSET, 30,	/* 46 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 14, 0,	/* MCODCLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MCARTAO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* MOD */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_POPVARIABLE, 3, 0,	/* MCOD_CLI */
/* 00491 */ HB_P_LINEOFFSET, 31,	/* 47 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MCLIENTE */
/* 00503 */ HB_P_LINEOFFSET, 32,	/* 48 */
	HB_P_PUSHSYMNEAR, 28,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_INI */
/* 00523 */ HB_P_LINEOFFSET, 33,	/* 49 */
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 5,	/* T_FIM */
/* 00530 */ HB_P_LINEOFFSET, 34,	/* 50 */
	HB_P_LOCALNEARSETSTR, 50, 2, 0,	/* MOP_JUROS 2*/
	'S', 0, 
	HB_P_PUSHLOCALNEAR, 50,	/* MOP_JUROS */
	HB_P_POPLOCALNEAR, 43,	/* MOP_DIA */
/* 00542 */ HB_P_LINEOFFSET, 35,	/* 51 */
	HB_P_LOCALNEARSETSTR, 61, 3, 0,	/* MREGIAO 3*/
	' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 61,	/* MREGIAO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MTIP */
	HB_P_POPLOCALNEAR, 44,	/* MTIP_PG */
/* 00558 */ HB_P_LINEOFFSET, 36,	/* 52 */
	HB_P_LOCALNEARSETSTR, 59, 2, 0,	/* MTP_CLI 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTP_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 46,	/* MCAB */
	HB_P_POPLOCALNEAR, 45,	/* MEND */
/* 00573 */ HB_P_LINEOFFSET, 37,	/* 53 */
	HB_P_PUSHSYMNEAR, 13,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 47,	/* MCIDADE */
/* 00584 */ HB_P_LINEOFFSET, 38,	/* 54 */
	HB_P_LOCALNEARSETSTR, 60, 2, 0,	/* MTK_PROT 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 60,	/* MTK_PROT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 53,	/* MPROT */
	HB_P_POPLOCALNEAR, 51,	/* MIMP_FANTA */
/* 00599 */ HB_P_LINEOFFSET, 39,	/* 55 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00653 */ HB_P_LINEOFFSET, 40,	/* 56 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00707 */ HB_P_LINEOFFSET, 41,	/* 57 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00762 */ HB_P_LINEOFFSET, 42,	/* 58 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00817 */ HB_P_LINEOFFSET, 43,	/* 59 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00872 */ HB_P_LINEOFFSET, 44,	/* 60 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00927 */ HB_P_LINEOFFSET, 45,	/* 61 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'R', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', 'o', 'u', ' ', 'G', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00982 */ HB_P_LINEOFFSET, 46,	/* 62 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01037 */ HB_P_LINEOFFSET, 47,	/* 63 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01092 */ HB_P_LINEOFFSET, 48,	/* 64 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01147 */ HB_P_LINEOFFSET, 49,	/* 65 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01202 */ HB_P_LINEOFFSET, 50,	/* 66 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'C', 'a', 'l', 'c', 'u', 'l', 'a', 'r', ' ', 'J', 'u', 'r', 'o', 's', ' ', 'n', 'a', ' ', 'C', 'a', 'r', 't', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01257 */ HB_P_LINEOFFSET, 51,	/* 67 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01312 */ HB_P_LINEOFFSET, 52,	/* 68 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'o', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01367 */ HB_P_LINEOFFSET, 53,	/* 69 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'A', 'p', 'a', 'r', 't', 'i', 'r', ' ', 'd', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01422 */ HB_P_LINEOFFSET, 54,	/* 70 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01477 */ HB_P_LINEOFFSET, 55,	/* 71 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'r', 'o', 't', 'o', 'c', 'o', 'l', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01532 */ HB_P_LINEOFFSET, 56,	/* 72 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'R', 'e', 'g', 'i', 'a', 'o', '/', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01587 */ HB_P_LINEOFFSET, 57,	/* 73 */
	HB_P_PUSHSYMNEAR, 32,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01595 */ HB_P_LINEOFFSET, 58,	/* 74 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 37,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 38, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01677 */ HB_P_LINEOFFSET, 59,	/* 75 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_CLI */
	HB_P_ONE,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01747 */ HB_P_LINEOFFSET, 60,	/* 76 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01786) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01791) */
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
	10, 0,	/* MCOD_VEND */
	HB_P_PUSHSYMNEAR, 41,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01855 */ HB_P_LINEOFFSET, 61,	/* 77 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 4, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01920 */ HB_P_LINEOFFSET, 62,	/* 78 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	4, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 01959) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01964) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'i', 'n', 'i', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 01992 */ HB_P_LINEOFFSET, 63,	/* 79 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02031) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02036) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	't', '_', 'f', 'i', 'm', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02064 */ HB_P_LINEOFFSET, 64,	/* 80 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02103) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02108) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MTIPO_REL */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02153) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 78,	/* 78 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', '[', 'R', ']', ' ', 'p', 'a', 'r', 'a', ' ', 'r', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', '[', 'G', ']', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02248 */ HB_P_LINEOFFSET, 65,	/* 81 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MOP_DIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02287) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02292) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'd', 'i', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	43, 0,	/* MOP_DIA */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 02335) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'q', 'u', 'e', ' ', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', 's', 'e', 'j', 'a', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'D', 'O', '=', '[', 'S', ']', ' ', 'o', 'u', ' ', '[', 'N', ']', 'p', '/', 'n', 'a', 'o', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02427 */ HB_P_LINEOFFSET, 66,	/* 82 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02466) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02471) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 41,	/* 41 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02552 */ HB_P_LINEOFFSET, 67,	/* 83 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	47, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02591) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02596) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 69,	/* 69 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'a', ' ', 'C', 'I', 'D', 'A', 'D', 'E', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02705 */ HB_P_LINEOFFSET, 68,	/* 84 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02744) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02749) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 't', 'i', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	24, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 44,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02800 */ HB_P_LINEOFFSET, 69,	/* 85 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MOP_JUROS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02839) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02844) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'o', 'p', '_', 'j', 'u', 'r', 'o', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MOP_JUROS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02898 */ HB_P_LINEOFFSET, 70,	/* 86 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MIMP_FANTA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02937) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02942) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'm', 'p', '_', 'f', 'a', 'n', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MIMP_FANTA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02997 */ HB_P_LINEOFFSET, 71,	/* 87 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MPROT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03036) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03041) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'p', 'r', 'o', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MPROT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03091 */ HB_P_LINEOFFSET, 72,	/* 88 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCODCLI */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03162 */ HB_P_LINEOFFSET, 73,	/* 89 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTP_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03201) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03206) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'p', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 44, 0,	/* 44 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	59, 0,	/* MTP_CLI */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', ',', 'A', ',', 'C', ',', 'E', ',', 'F', ',', 'O', ',', 'P', ',', 'R', ',', 'S', ',', 'U', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03265) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 127,	/* 127 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 114,	/* 114 */
	'T', 'i', 'p', 'o', 's', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', '<', 'S', '>', 'u', 'p', 'e', 'r', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03409 */ HB_P_LINEOFFSET, 74,	/* 90 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTK_PROT */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03448) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03453) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'k', '_', 'p', 'r', 'o', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MTK_PROT */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03506 */ HB_P_LINEOFFSET, 75,	/* 91 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MREGIAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03545) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03550) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'r', 'e', 'g', 'i', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 24, 0,	/* 24 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MREGIAO */
	HB_P_PUSHSYMNEAR, 45,	/* VER_REGI */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03607 */ HB_P_LINEOFFSET, 76,	/* 92 */
	HB_P_PUSHSYMNEAR, 46,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 03629 */ HB_P_LINEOFFSET, 77,	/* 93 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 03644) */
	HB_P_JUMP, 230, 25,	/* 6630 (abs: 10271) */
/* 03644 */ HB_P_LINEOFFSET, 80,	/* 96 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 03702) */
/* 03656 */ HB_P_LINEOFFSET, 81,	/* 97 */
	HB_P_LOCALNEARSETSTR, 22, 40, 0,	/* MTIT 40*/
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03702 */ HB_P_LINEOFFSET, 83,	/* 99 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 03757) */
/* 03714 */ HB_P_LINEOFFSET, 84,	/* 100 */
	HB_P_LOCALNEARSETSTR, 22, 37, 0,	/* MTIT 37*/
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03757 */ HB_P_LINEOFFSET, 86,	/* 102 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 163, 1,	/* 419 (abs: 04186) */
/* 03770 */ HB_P_LINEOFFSET, 87,	/* 103 */
	HB_P_LOCALNEARSETSTR, 22, 37, 0,	/* MTIT 37*/
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 03813 */ HB_P_LINEOFFSET, 88,	/* 104 */
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MCARTAO 0*/
/* 03819 */ HB_P_LINEOFFSET, 89,	/* 105 */
	HB_P_PUSHSYMNEAR, 48,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 3,	/* TELA1 */
/* 03834 */ HB_P_LINEOFFSET, 90,	/* 106 */
	HB_P_PUSHSYMNEAR, 49,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 03862 */ HB_P_LINEOFFSET, 91,	/* 107 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 03908 */ HB_P_LINEOFFSET, 92,	/* 108 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03947) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03952) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 50,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03998) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 71,	/* 71 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04086 */ HB_P_LINEOFFSET, 93,	/* 109 */
	HB_P_PUSHSYMNEAR, 46,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 04108 */ HB_P_LINEOFFSET, 94,	/* 110 */
	HB_P_PUSHSYMNEAR, 51,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* TELA1 */
	HB_P_DOSHORT, 5,
/* 04123 */ HB_P_LINEOFFSET, 95,	/* 111 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04138) */
	HB_P_JUMP, 118, 241,	/* -3722 (abs: 00413) */
/* 04138 */ HB_P_LINEOFFSET, 98,	/* 114 */
	HB_P_PUSHSYMNEAR, 52,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 27,	/* OPCAO */
/* 04172 */ HB_P_LINEOFFSET, 99,	/* 115 */
	HB_P_PUSHLOCALNEAR, 27,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04186) */
	HB_P_JUMP, 70, 241,	/* -3770 (abs: 00413) */
/* 04186 */ HB_P_LINEOFFSET, 103,	/* 119 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 189, 1,	/* 445 (abs: 04641) */
/* 04199 */ HB_P_LINEOFFSET, 104,	/* 120 */
	HB_P_LOCALNEARSETSTR, 22, 43, 0,	/* MTIT 43*/
	'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 04248 */ HB_P_LINEOFFSET, 105,	/* 121 */
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MCARTAO 0*/
/* 04254 */ HB_P_LINEOFFSET, 106,	/* 122 */
	HB_P_PUSHSYMNEAR, 48,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 3,	/* TELA1 */
/* 04269 */ HB_P_LINEOFFSET, 107,	/* 123 */
	HB_P_PUSHSYMNEAR, 49,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 75,	/* 75 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 6,
/* 04297 */ HB_P_LINEOFFSET, 108,	/* 124 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 04343 */ HB_P_LINEOFFSET, 109,	/* 125 */
	HB_P_PUSHSYMNEAR, 33,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 36,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MCARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04382) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04387) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 42, 0,	/* 42 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	29, 0,	/* MCARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04426) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 04437) */
	HB_P_PUSHSYMNEAR, 54,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04445) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 42,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 43,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 39, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04537 */ HB_P_LINEOFFSET, 110,	/* 126 */
	HB_P_PUSHSYMNEAR, 46,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 35, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 35, 0,	/* GETLIST */
/* 04559 */ HB_P_LINEOFFSET, 111,	/* 127 */
	HB_P_PUSHSYMNEAR, 51,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* TELA1 */
	HB_P_DOSHORT, 5,
/* 04574 */ HB_P_LINEOFFSET, 112,	/* 128 */
	HB_P_PUSHSYMNEAR, 47,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04589) */
	HB_P_JUMP, 179, 239,	/* -4173 (abs: 00413) */
/* 04589 */ HB_P_LINEOFFSET, 115,	/* 131 */
	HB_P_PUSHSYMNEAR, 52,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 27,	/* OPCAO */
/* 04627 */ HB_P_LINEOFFSET, 116,	/* 132 */
	HB_P_PUSHLOCALNEAR, 27,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 04641) */
	HB_P_JUMP, 127, 239,	/* -4225 (abs: 00413) */
/* 04641 */ HB_P_LINEOFFSET, 120,	/* 136 */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 04699) */
/* 04653 */ HB_P_LINEOFFSET, 121,	/* 137 */
	HB_P_LOCALNEARSETSTR, 22, 40, 0,	/* MTIT 40*/
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'C', 'o', 'n', 't', 'a', 's', ' ', 'a', ' ', 'R', 'e', 'c', 'e', 'b', 'e', 'r', ')', 0, 
/* 04699 */ HB_P_LINEOFFSET, 123,	/* 139 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* TP_MES */
	HB_P_POPLOCALNEAR, 7,	/* TD_MES */
/* 04709 */ HB_P_LINEOFFSET, 124,	/* 140 */
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_PUSHSYMNEAR, 28,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 04752) */
/* 04732 */ HB_P_LINEOFFSET, 125,	/* 141 */
	HB_P_PUSHSYMNEAR, 28,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '6', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* T_INI */
/* 04752 */ HB_P_LINEOFFSET, 127,	/* 143 */
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 28,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 04795) */
/* 04775 */ HB_P_LINEOFFSET, 128,	/* 144 */
	HB_P_PUSHSYMNEAR, 28,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* T_FIM */
/* 04795 */ HB_P_LINEOFFSET, 130,	/* 146 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 04852) */
/* 04806 */ HB_P_LINEOFFSET, 131,	/* 147 */
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 47,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 04878) */
/* 04852 */ HB_P_LINEOFFSET, 133,	/* 149 */
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIPO */
/* 04878 */ HB_P_LINEOFFSET, 135,	/* 151 */
	HB_P_PUSHSYMNEAR, 56,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'R', 'T', 'A', '_', 'C', 'O', 'B', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 04910) */
	HB_P_JUMP, 114, 238,	/* -4494 (abs: 00413) */
/* 04910 */ HB_P_LINEOFFSET, 138,	/* 154 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 16, 0,	/* CONS_CLI */
/* 04918 */ HB_P_LINEOFFSET, 139,	/* 155 */
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 04972 */ HB_P_LINEOFFSET, 140,	/* 156 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 05020) */
/* 04984 */ HB_P_LINEOFFSET, 141,	/* 157 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 3, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05020 */ HB_P_LINEOFFSET, 143,	/* 159 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05065) */
/* 05031 */ HB_P_LINEOFFSET, 144,	/* 160 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05065 */ HB_P_LINEOFFSET, 146,	/* 162 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MTP_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05108) */
/* 05076 */ HB_P_LINEOFFSET, 147,	/* 163 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 59,	/* MTP_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05108 */ HB_P_LINEOFFSET, 149,	/* 165 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 61,	/* MREGIAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05153) */
/* 05119 */ HB_P_LINEOFFSET, 150,	/* 166 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'r', 'e', 'g', 'i', 'a', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 61,	/* MREGIAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05153 */ HB_P_LINEOFFSET, 152,	/* 168 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05180 */ HB_P_LINEOFFSET, 153,	/* 169 */
	HB_P_MESSAGE, 59, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 60,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05201 */ HB_P_LINEOFFSET, 154,	/* 170 */
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
/* 05225 */ HB_P_LINEOFFSET, 155,	/* 171 */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 05273) */
/* 05239 */ HB_P_LINEOFFSET, 156,	/* 172 */
	HB_P_PUSHSYMNEAR, 62,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 7, 237,	/* -4857 (abs: 00413) */
/* 05273 */ HB_P_LINEOFFSET, 162,	/* 178 */
	HB_P_LOCALNEARSETINT, 58, 0, 0,	/* MTOT_DOC 0*/
	HB_P_PUSHLOCALNEAR, 58,	/* MTOT_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 40,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 26,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* VENCER */
	HB_P_POPLOCALNEAR, 9,	/* PAG */
/* 05313 */ HB_P_LINEOFFSET, 164,	/* 180 */
	HB_P_LOCALNEARSETINT, 57, 0, 0,	/* MFLAG 0*/
	HB_P_PUSHLOCALNEAR, 57,	/* MFLAG */
	HB_P_POPLOCALNEAR, 55,	/* CONT_CLI */
/* 05323 */ HB_P_LINEOFFSET, 165,	/* 181 */
	HB_P_LOCALNEARSETINT, 55, 1, 0,	/* CONT_CLI 1*/
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 206, 14,	/* 3790 (abs: 09130) */
/* 05343 */ HB_P_LINEOFFSET, 166,	/* 182 */
	HB_P_PUSHSYMNEAR, 63,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 05381 */ HB_P_LINEOFFSET, 167,	/* 183 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05481 */ HB_P_LINEOFFSET, 168,	/* 184 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05522 */ HB_P_LINEOFFSET, 169,	/* 185 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 05565) */
/* 05533 */ HB_P_LINEOFFSET, 170,	/* 186 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 24,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05565 */ HB_P_LINEOFFSET, 172,	/* 188 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 05614) */
/* 05577 */ HB_P_LINEOFFSET, 173,	/* 189 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05614 */ HB_P_LINEOFFSET, 175,	/* 191 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 05666) */
/* 05625 */ HB_P_LINEOFFSET, 176,	/* 192 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MCARTAO */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05666 */ HB_P_LINEOFFSET, 178,	/* 194 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 05720) */
/* 05677 */ HB_P_LINEOFFSET, 179,	/* 195 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05720 */ HB_P_LINEOFFSET, 181,	/* 197 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05765) */
/* 05731 */ HB_P_LINEOFFSET, 182,	/* 198 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 44,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05765 */ HB_P_LINEOFFSET, 184,	/* 200 */
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 05811) */
/* 05777 */ HB_P_LINEOFFSET, 185,	/* 201 */
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 57, 0,	/* CCOMM */
/* 05811 */ HB_P_LINEOFFSET, 188,	/* 204 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 54,	/* MCONS_DUPR */
/* 05818 */ HB_P_LINEOFFSET, 189,	/* 205 */
	HB_P_MESSAGE, 59, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 60,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 57, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05838 */ HB_P_LINEOFFSET, 190,	/* 206 */
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
/* 05862 */ HB_P_LINEOFFSET, 191,	/* 207 */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05878) */
	HB_P_JUMP, 176, 12,	/* 3248 (abs: 09123) */
/* 05878 */ HB_P_LINEOFFSET, 194,	/* 210 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 48,	/* M_DUP */
/* 05885 */ HB_P_LINEOFFSET, 195,	/* 211 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 05901 */ HB_P_LINEOFFSET, 198,	/* 214 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* CONT_DOC 0*/
/* 05907 */ HB_P_LINEOFFSET, 199,	/* 215 */
	HB_P_LOCALNEARSETINT, 56, 1, 0,	/* CONT_DOC 1*/
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 42, 1,	/* 298 (abs: 06221) */
/* 05926 */ HB_P_LINEOFFSET, 200,	/* 216 */
	HB_P_PUSHLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
/* 05941 */ HB_P_LINEOFFSET, 201,	/* 217 */
	HB_P_LOCALNEARADDINT, 32, 1, 0,	/* MTOT_IND 1*/
/* 05947 */ HB_P_LINEOFFSET, 202,	/* 218 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* TOT_G 1*/
/* 05953 */ HB_P_LINEOFFSET, 203,	/* 219 */
	HB_P_LOCALNEARSETINT, 38, 0, 0,	/* MJUROS 0*/
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_POPLOCALNEAR, 37,	/* MMULTA */
/* 05963 */ HB_P_LINEOFFSET, 204,	/* 220 */
	HB_P_PUSHLOCALNEAR, 50,	/* MOP_JUROS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 06076) */
/* 05974 */ HB_P_LINEOFFSET, 205,	/* 221 */
	HB_P_PUSHMEMVAR, 29, 0,	/* MDATA_SIS */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 39,	/* MDIAS_ATRAS */
/* 05990 */ HB_P_LINEOFFSET, 206,	/* 222 */
	HB_P_PUSHLOCALNEAR, 39,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 06052) */
/* 05998 */ HB_P_LINEOFFSET, 207,	/* 223 */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 65, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 37,	/* MMULTA */
/* 06022 */ HB_P_LINEOFFSET, 208,	/* 224 */
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 39,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 65, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 38,	/* MJUROS */
/* 06052 */ HB_P_LINEOFFSET, 210,	/* 226 */
	HB_P_PUSHLOCALNEAR, 40,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 40,	/* MTOT_JUROS */
/* 06064 */ HB_P_LINEOFFSET, 211,	/* 227 */
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MJUROS_IND */
/* 06076 */ HB_P_LINEOFFSET, 213,	/* 229 */
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
/* 06097 */ HB_P_LINEOFFSET, 214,	/* 230 */
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* TOT_GIN */
/* 06112 */ HB_P_LINEOFFSET, 215,	/* 231 */
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 54,	/* MCONS_DUPR */
	HB_P_PUSHLOCALNEAR, 56,	/* CONT_DOC */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 37,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MJUROS */
	HB_P_PLUS,
	HB_P_ARRAYGEN, 5, 0,	/* 5 */
	HB_P_DOSHORT, 2,
/* 06212 */ HB_P_LINEOFFSET, 216,	/* 232 */
	HB_P_LOCALNEARADDINT, 56, 1, 0,	/* CONT_DOC 1*/
	HB_P_JUMP, 207, 254,	/* -305 (abs: 05913) */
/* 06221 */ HB_P_LINEOFFSET, 217,	/* 233 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTOT_DOC */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 58,	/* MTOT_DOC */
/* 06235 */ HB_P_LINEOFFSET, 218,	/* 234 */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 58, 11,	/* 2874 (abs: 09120) */
/* 06249 */ HB_P_LINEOFFSET, 220,	/* 236 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 57,	/* MFLAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06269) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 53,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCODCLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 06285) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 14, 0,	/* MCODCLI */
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 06339) */
/* 06287 */ HB_P_LINEOFFSET, 221,	/* 237 */
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 227, 10,	/* 2787 (abs: 09123) */
/* 06339 */ HB_P_LINEOFFSET, 224,	/* 240 */
	HB_P_LOCALNEARSETINT, 57, 1, 0,	/* MFLAG 1*/
/* 06345 */ HB_P_LINEOFFSET, 225,	/* 241 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06359 */ HB_P_LINEOFFSET, 226,	/* 242 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 06373 */ HB_P_LINEOFFSET, 227,	/* 243 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* MEMP_RESA */
	HB_P_DOSHORT, 1,
/* 06394 */ HB_P_LINEOFFSET, 228,	/* 244 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06408 */ HB_P_LINEOFFSET, 229,	/* 245 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 06438 */ HB_P_LINEOFFSET, 230,	/* 246 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 70, 0,	/* MCGC_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 71, 0,	/* MINSC_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06473 */ HB_P_LINEOFFSET, 231,	/* 247 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 72, 0,	/* MEND_FIRM */
	HB_P_DOSHORT, 1,
/* 06497 */ HB_P_LINEOFFSET, 232,	/* 248 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MCID_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 74, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06532 */ HB_P_LINEOFFSET, 233,	/* 249 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06564 */ HB_P_LINEOFFSET, 234,	/* 250 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* PADL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MCID_FIRM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 06612 */ HB_P_LINEOFFSET, 235,	/* 251 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'O', 'M', 'U', 'N', 'I', 'C', 'A', 'D', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 06646 */ HB_P_LINEOFFSET, 236,	/* 252 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'A', 'o', ' ', 'S', 'r', '.', '(', 'a', ')', 0, 
	HB_P_DOSHORT, 1,
/* 06679 */ HB_P_LINEOFFSET, 237,	/* 253 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06731 */ HB_P_LINEOFFSET, 238,	/* 254 */
	HB_P_PUSHLOCALNEAR, 51,	/* MIMP_FANTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 06819) */
/* 06742 */ HB_P_LINEOFFSET, 239,	/* 255 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 06756 */ HB_P_LINEOFFSET, 240,	/* 256 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06805 */ HB_P_LINEOFFSET, 241,	/* 257 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 06819 */ HB_P_LINEOFFSET, 243,	/* 259 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06894 */ HB_P_LINEOFFSET, 244,	/* 260 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06968 */ HB_P_LINEOFFSET, 245,	/* 261 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', '.', ':', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07007 */ HB_P_LINEOFFSET, 246,	/* 262 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', 'o', 't', 'a', ':', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07046 */ HB_P_LINEOFFSET, 247,	/* 263 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'm', ' ', 'n', 'o', 's', 's', 'o', 's', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'v', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'm', 'o', 's', ' ', 'q', 'u', 'e', ' ', 's', 'e', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', ' ', 'e', 'm', ' ', 'a', 'b', 'e', 'r', 't', 'o', ' ', 'a', '(', 's', ')', 0, 
	HB_P_DOSHORT, 1,
/* 07144 */ HB_P_LINEOFFSET, 248,	/* 264 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', '(', 's', ')', ' ', 'a', 'b', 'a', 'i', 'x', 'o', ' ', 'r', 'e', 'l', 'a', 'c', 'i', 'o', 'n', 'a', 'd', 'a', '(', 's', ')', ',', ' ', 'f', 'a', 'v', 'o', 'r', ' ', 'e', 'n', 't', 'r', 'a', 'r', ' ', 'e', 'm', ' ', 'c', 'o', 'n', 't', 'a', 't', 'o', ' ', ' ', 'c', 'o', 'm', ' ', ' ', 'o', ' ', ' ', 'n', 'o', 's', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07242 */ HB_P_LINEOFFSET, 249,	/* 265 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'd', 'e', 'p', 'a', 'r', 't', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'f', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'q', 'u', 'i', 't', 'a', 'c', 'a', 'o', ' ', ' ', 'd', 'a', '(', 's', ')', ' ', 'm', 'e', 's', 'm', 'a', '(', 's', ')', ',', ' ', 'p', 'o', 'i', 's', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'q', 'u', 'i', 't', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07340 */ HB_P_LINEOFFSET, 250,	/* 266 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'i', 'm', 'p', 'l', 'i', 'c', 'a', 'r', 'a', ' ', 'n', 'o', ' ', 'b', 'l', 'o', 'q', 'u', 'e', 'i', 'o', ' ', 'd', 'o', ' ', 's', 'e', 'u', ' ', 'c', 'r', 'e', 'd', 'i', 't', 'o', '.', 'I', 'n', 'c', 'l', 'u', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 's', 'e', 'u', ' ', 'n', 'o', 'm', 'e', ' ', 'n', 'o', ' ', 'S', 'P', 'C', ' ', 'e', ' ', 'S', 'E', 'R', 'A', 'S', 'A', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07438 */ HB_P_LINEOFFSET, 251,	/* 267 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 07515 */ HB_P_LINEOFFSET, 252,	/* 268 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07592 */ HB_P_LINEOFFSET, 253,	/* 269 */
	HB_P_LOCALNEARSETINT, 49, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 161, 0,	/* 161 (abs: 07769) */
/* 07611 */ HB_P_LINEOFFSET, 254,	/* 270 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07640 */ HB_P_LINEOFFSET, 255,	/* 271 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 79,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07673 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 79,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07707 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 79,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07759 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_LOCALNEARADDINT, 49, 1, 0,	/* I 1*/
	HB_P_JUMP, 88, 255,	/* -168 (abs: 07598) */
/* 07769 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 07847 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', ' ', ' ', '-', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'P', 'a', 'g', 'a', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07944 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 80,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '3', '5', '1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 08065) */
/* 07964 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'O', 'B', 'S', '.', ':', 'O', ' ', 'v', 'a', 'l', 'o', 'r', ' ', 'a', 'c', 'i', 'm', 'a', ' ', 'e', 's', 't', 'a', 'r', 'a', ' ', 's', 'u', 'j', 'e', 'i', 't', 'o', ' ', 'a', ' ', 'j', 'u', 'r', 'o', 's', ' ', 'e', ' ', 'm', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'a', 'c', 'o', 'r', 'd', 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'B', 'A', 'N', 'C', 'O', '.', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 08090) */
/* 08065 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 08090 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'o', 'r', 'e', 'm', ' ', 's', 'e', ' ', 'a', '(', 's', ')', ' ', ' ', 'm', 'e', 's', 'm', 'a', '(', 's', ')', ' ', ' ', 'e', 's', 't', 'i', 'v', 'e', 'r', '(', 'e', 'm', ')', ' ', ' ', 'p', 'a', 'g', 'a', '(', 's', ')', ',', ' ', ' ', 'd', 'e', 's', 'c', 'o', 'n', 's', 'i', 'd', 'e', 'r', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 08189 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'o', 'm', 'u', 'n', 'i', 'c', 'a', 'd', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08225 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'e', 'm', ' ', 'm', 'a', 'i', 's', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'a', 'g', 'r', 'a', 'd', 'e', 'c', 'e', ',', 0, 
	HB_P_DOSHORT, 1,
/* 08276 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* MEMP_RESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08320 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* MEMP_RESA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 08350 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHLOCALNEAR, 60,	/* MTK_PROT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 173, 2,	/* 685 (abs: 09045) */
/* 08363 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08396 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 08411 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_DOSHORT, 2,
/* 08426 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* MEMP_RESA */
	HB_P_DOSHORT, 1,
/* 08451 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 08466 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 65, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 129, 0,	/* 129 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 08497 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 70, 0,	/* MCGC_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 71, 0,	/* MINSC_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08533 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 72, 0,	/* MEND_FIRM */
	HB_P_DOSHORT, 1,
/* 08558 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MCID_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 74, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08594 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08627 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 73, 0,	/* MCID_FIRM */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 55,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08669 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 64,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08722 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHLOCALNEAR, 51,	/* MIMP_FANTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 82,	/* 82 (abs: 08814) */
/* 08734 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08749 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08799 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 08814 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08890 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 78,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08965 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'E', 'P', '.', ':', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09005 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'R', 'o', 't', 'a', ':', 0, 
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09045 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 34,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 48,	/* M_DUP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 16, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 55,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_DOSHORT, 2,
/* 09095 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_LOCALNEARSETINT, 35, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 35,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 09112 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHSYMNEAR, 81,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09120 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_LOCALNEARADDINT, 55, 1, 0,	/* CONT_CLI 1*/
	HB_P_JUMP, 42, 241,	/* -3798 (abs: 05329) */
/* 09130 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 53,	/* MPROT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 28, 4,	/* 1052 (abs: 10192) */
/* 09143 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHSYMNEAR, 63,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'r', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'b', 'r', 'a', 'n', 'c', 'a', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09192 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_LOCALNEARSETINT, 32, 0, 0,	/* MTOT_IND 0*/
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_POPLOCALNEAR, 9,	/* PAG */
/* 09203 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_LOCALNEARSETINT, 49, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 120, 1,	/* 376 (abs: 09596) */
/* 09223 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHLOCALNEAR, 9,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 09242) */
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 231, 0,	/* 231 (abs: 09473) */
/* 09245 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* PAG 1*/
/* 09252 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHLOCALNEAR, 9,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 09269) */
/* 09261 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 81,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09269 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 82,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* PAG */
	HB_P_PUSHLOCALNEAR, 22,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIPO */
	HB_P_DOSHORT, 3,
/* 09283 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 67,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 10, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 09298 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 117,	/* 117 */
	' ', 'C', 'o', 'd', '.', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'R', 'a', 'z', 'a', 'o', ' ', 'S', 'o', 'c', 'i', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', ' ', ' ', ' ', ' ', 'A', 's', 's', 'i', 'n', 'a', 't', 'u', 'r', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 09439 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 75,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 09473 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09565 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHSYMNEAR, 83,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_PUSHLOCALNEAR, 49,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 32,	/* MTOT_IND */
/* 09586 */ HB_P_LINE, 76, 1,	/* 332 */
	HB_P_LOCALNEARADDINT, 49, 1, 0,	/* I 1*/
	HB_P_JUMP, 129, 254,	/* -383 (abs: 09210) */
/* 09596 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', ' ', ' ', 'R', ' ', 'E', ' ', 'S', ' ', 'U', ' ', 'M', ' ', 'O', ' ', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 09664 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09738 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 58,	/* MTOT_DOC */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09807 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'R', '$', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09882 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 44,	/* 44 */
	'-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', 'M', ' ', 'E', ' ', 'D', ' ', 'I', ' ', 'A', ' ', 'S', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_DOSHORT, 1,
/* 09950 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', '/', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 58,	/* MTOT_DOC */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10031 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', '/', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHSYMNEAR, 61,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 52,	/* MPROTOCOLO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10114 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 30,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 31,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', '/', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 66,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 32,	/* MTOT_IND */
	HB_P_PUSHLOCALNEAR, 58,	/* MTOT_DOC */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 10192 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 84,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10202 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 85,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 85,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 85,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10244 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 86,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'A', 'R', 'T', 'A', '_', 'C', 'O', 'B', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 129, 217,	/* -9855 (abs: 00413) */
/* 10271 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 87,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10279 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10285 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

