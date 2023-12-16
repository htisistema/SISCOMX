/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <CON423.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\CON423.PRG /q /oC:\hti\SISCOM\CON423.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:34:54 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "CON423.PRG"

HB_FUNC( CON423 );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( VER_TIPDC );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LIM_GET );
HB_FUNC_EXTERN( MEN_GET );
HB_FUNC_EXTERN( VEN );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_COD );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_CARTAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( VER_FINAN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( XLSOPEN );
HB_FUNC_EXTERN( XLSWRITE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( XLSCLOSE );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( VALOR_PED );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_CON423 )
{ "CON423", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( CON423 )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOBRA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAXA_FIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
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
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_TPDOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONT_TP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_BANCO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_TIPDC", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_TIPDC )}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LIM_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIM_GET )}, NULL },
{ "MEN_GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEN_GET )}, NULL },
{ "VEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VEN )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "VER_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COD )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_CARTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CARTAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "VER_FINAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FINAN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "NXLS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "XLSOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSOPEN )}, NULL },
{ "XLSWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSWRITE )}, NULL },
{ "MCOL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "XLSCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSCLOSE )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "CONS_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "VALOR_PED", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALOR_PED )}, NULL },
{ "L", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PED_S", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "PQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PVLR_FAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_CON423 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_CON423
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_CON423 = hb_vm_SymbolInit_CON423;
   #pragma data_seg()
#endif

HB_FUNC( CON423 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 90, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 19, 0,	/* 19 */
	HB_P_LOCALNEARSETSTR, 2, 7, 0,	/* MPRG 7*/
	'C', 'O', 'N', '4', '2', '3', 0, 
	HB_P_LOCALNEARSETSTR, 45, 3, 0,	/* MTIP_PG 3*/
	' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 49,	/* MAREA */
	HB_P_LOCALNEARSETSTR, 51, 2, 0,	/* MTIPO_CLI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 52, 2, 0,	/* MLINHAS 2*/
	'N', 0, 
	HB_P_LOCALNEARSETSTR, 53, 2, 0,	/* MOBS_CLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 55,	/* CLI_REC */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_LOCALNEARSETSTR, 57, 2, 0,	/* MOBS_DOC 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 58, 2, 0,	/* MTP_CONS 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 60, 0, 0,	/* MCOD_MERC 0*/
	HB_P_LOCALNEARSETSTR, 61, 1, 0,	/* MIMP_PRODUTO 1*/
	0, 
	HB_P_LOCALNEARSETINT, 62, 0, 0,	/* MTOT_PRODUTO 0*/
	HB_P_LOCALNEARSETINT, 63, 0, 0,	/* MQTD_PRODUTO 0*/
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
	HB_P_LOCALNEARSETINT, 65, 0, 0,	/* CONT_CLI 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_LOCALNEARSETSTR, 69, 2, 0,	/* MASSISTENCIA 2*/
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_ASS */
	HB_P_LOCALNEARSETSTR, 71, 2, 0,	/* MIMP_OBSCLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 72,	/* CON_CL */
	HB_P_LOCALNEARSETSTR, 73, 2, 0,	/* MHIST_CLI 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 74,	/* M_HIST_CLI */
	HB_P_LOCALNEARSETSTR, 75, 2, 0,	/* MTIPO_EMI 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 76, 2, 0,	/* MOP_CAB 2*/
	'S', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 77,	/* ARET */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 79,	/* M_PARAM */
	HB_P_LOCALNEARSETSTR, 84, 2, 0,	/* MAVA_CONJ 2*/
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_LOCALNEARSETSTR, 87, 1, 0,	/* MIMP_TEL 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 88, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 90,	/* CONS_BAIRRO */
	HB_P_LOCALNEARSETSTR, 91, 1, 0,	/* M_PRINCIPAL 1*/
	0, 
/* 00208 */ HB_P_LINEOFFSET, 5,	/* 24 */
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 21,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOBRA_FIN */
	HB_P_PUSHSYMNEAR, 3,	/* MTAXA_FIN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_CLI */
	HB_P_PUSHSYMNEAR, 6,	/* BANK */
	HB_P_PUSHSYMNEAR, 7,	/* MNOME_VEND */
	HB_P_PUSHSYMNEAR, 8,	/* MCOM_VEN */
	HB_P_PUSHSYMNEAR, 9,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 10,	/* MCGC */
	HB_P_PUSHSYMNEAR, 11,	/* MCPF */
	HB_P_PUSHSYMNEAR, 12,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 13,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 14,	/* MARQ */
	HB_P_PUSHSYMNEAR, 15,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 16,	/* MALIAS */
	HB_P_PUSHSYMNEAR, 17,	/* CONS_DOC */
	HB_P_PUSHSYMNEAR, 18,	/* CONS_TPDOC */
	HB_P_PUSHSYMNEAR, 19,	/* CONT_TP */
	HB_P_PUSHSYMNEAR, 20,	/* CONS_CLI */
	HB_P_DOSHORT, 19,
	HB_P_POPVARIABLE, 20, 0,	/* CONS_CLI */
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_POPVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_POPVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 14, 0,	/* MARQ */
	HB_P_POPVARIABLE, 13, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
/* 00303 */ HB_P_LINEOFFSET, 7,	/* 26 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 133, 0,	/* 133 (abs: 00442) */
/* 00312 */ HB_P_LINEOFFSET, 8,	/* 27 */
	HB_P_PUSHSYMNEAR, 22,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'O', 'N', 'T', 'A', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 23, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00402) */
/* 00397 */ HB_P_LINEOFFSET, 9,	/* 28 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00402 */ HB_P_LINEOFFSET, 11,	/* 30 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00414 */ HB_P_LINEOFFSET, 12,	/* 31 */
	HB_P_LOCALNEARSETSTR, 59, 19, 0,	/* MTITULO 19*/
	'(', 'C', 'O', 'N', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ')', 0, 
	HB_P_JUMP, 132, 0,	/* 132 (abs: 00571) */
/* 00442 */ HB_P_LINEOFFSET, 14,	/* 33 */
	HB_P_PUSHSYMNEAR, 22,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 23, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00535) */
/* 00530 */ HB_P_LINEOFFSET, 15,	/* 34 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00535 */ HB_P_LINEOFFSET, 17,	/* 36 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'c', 'r', 'e', 'd', 0, 
	HB_P_POPVARIABLE, 16, 0,	/* MALIAS */
/* 00547 */ HB_P_LINEOFFSET, 18,	/* 37 */
	HB_P_LOCALNEARSETSTR, 59, 18, 0,	/* MTITULO 18*/
	'(', 'C', 'R', 'E', 'D', 'I', 'T', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', ')', 0, 
/* 00571 */ HB_P_LINEOFFSET, 22,	/* 41 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'f', 'i', 'n', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'f', 'i', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00598) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00598 */ HB_P_LINEOFFSET, 23,	/* 42 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'p', 'e', 'd', '_', 's', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 's', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00629) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00629 */ HB_P_LINEOFFSET, 24,	/* 43 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00658) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00658 */ HB_P_LINEOFFSET, 25,	/* 44 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00687) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00687 */ HB_P_LINEOFFSET, 26,	/* 45 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00716) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00716 */ HB_P_LINEOFFSET, 27,	/* 46 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00743) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00743 */ HB_P_LINEOFFSET, 28,	/* 47 */
	HB_P_PUSHSYMNEAR, 24,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'd', 'u', 'p', 'r', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'u', 'p', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00772) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00772 */ HB_P_LINEOFFSET, 31,	/* 50 */
	HB_P_PUSHSYMNEAR, 25,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 26,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00791 */ HB_P_LINEOFFSET, 33,	/* 52 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 89,	/* 89 */
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', '-', ' ', '(', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '/', 'V', 'E', 'N', 'C', 'I', 'D', 'A', ')', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
/* 00852 */ HB_P_LINEOFFSET, 34,	/* 53 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00903 */ HB_P_LINEOFFSET, 35,	/* 54 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00943 */ HB_P_LINEOFFSET, 36,	/* 55 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 00994 */ HB_P_LINEOFFSET, 37,	/* 56 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01046 */ HB_P_LINEOFFSET, 38,	/* 57 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01098 */ HB_P_LINEOFFSET, 39,	/* 58 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01150 */ HB_P_LINEOFFSET, 40,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'P', 'a', 'g', '.', 'e', 'm', ' ', '[', 'C', ']', 'a', 'r', 't', 'e', 'i', 'r', 'a', ' ', '[', 'B', ']', 'a', 'n', 'c', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01202 */ HB_P_LINEOFFSET, 41,	/* 60 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'I', 'n', 'i', 'c', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01254 */ HB_P_LINEOFFSET, 42,	/* 61 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'a', 't', 'a', ' ', 'd', 'o', ' ', 'F', 'i', 'n', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01306 */ HB_P_LINEOFFSET, 43,	/* 62 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'[', 'R', ']', 'e', 's', 'u', 'm', 'o', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', 'o', 'u', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01358 */ HB_P_LINEOFFSET, 44,	/* 63 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'o', 't', 'a', 'l', 'i', 'z', 'a', 'd', 'o', 'r', ' ', 'd', 'o', ' ', 'd', 'i', 'a', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01410 */ HB_P_LINEOFFSET, 45,	/* 64 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01462 */ HB_P_LINEOFFSET, 46,	/* 65 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01514 */ HB_P_LINEOFFSET, 47,	/* 66 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'A', 'r', 'e', 'a', ' ', 'D', 'e', 's', 'e', 'j', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01566 */ HB_P_LINEOFFSET, 48,	/* 67 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', ' ', 'P', 'a', 'r', 'c', 'i', 'a', 'l', ' ', '[', 'S', '/', 'C', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01618 */ HB_P_LINEOFFSET, 49,	/* 68 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01670 */ HB_P_LINEOFFSET, 50,	/* 69 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01722 */ HB_P_LINEOFFSET, 51,	/* 70 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'[', 'A', ']', 'n', 'a', 'l', 'i', 't', '.', ' ', '[', 'S', ']', 'i', 'n', 't', '.', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', '.', 'D', 'o', 'c', ' ', '[', 'R', ']', 'S', 'i', 'n', 't', '.', 'R', 'e', 's', 'u', 'm', 'i', 'd', 'o', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01788 */ HB_P_LINEOFFSET, 52,	/* 71 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'E', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01840 */ HB_P_LINEOFFSET, 53,	/* 72 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'O', 'b', 's', 'e', 'r', 'v', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01882 */ HB_P_LINEOFFSET, 54,	/* 73 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'p', '/', 'O', 'b', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01934 */ HB_P_LINEOFFSET, 55,	/* 74 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'O', 'B', 'S', '.', 'D', 'O', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 01986 */ HB_P_LINEOFFSET, 56,	/* 75 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', '.', '.', '.', '.', '.', '.', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02038 */ HB_P_LINEOFFSET, 57,	/* 76 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'N', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'o', ' ', 'B', 'A', 'N', 'C', 'O', ' ', 'q', 'u', 'e', ' ', 'D', 'e', 's', 'e', 'j', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02090 */ HB_P_LINEOFFSET, 58,	/* 77 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', 's', 'o', ' ', 'o', 's', ' ', 'C', 'h', 'e', 'q', 'u', 'e', ' ', 'S', 'e', 'm', ' ', 'F', 'u', 'n', 'd', 'o', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02142 */ HB_P_LINEOFFSET, 59,	/* 78 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', 's', ' ', 'P', 'R', 'O', 'C', 'E', 'S', 'S', 'O', 'S', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02194 */ HB_P_LINEOFFSET, 60,	/* 79 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'O', 'B', 'S', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02246 */ HB_P_LINEOFFSET, 61,	/* 80 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'H', 'I', 'S', 'T', 'O', 'R', 'I', 'C', 'O', ' ', 'd', 'o', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02298 */ HB_P_LINEOFFSET, 62,	/* 81 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'd', 'a', ' ', 'D', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02350 */ HB_P_LINEOFFSET, 63,	/* 82 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ' ', 'e', ' ', 'C', 'o', 'n', 'j', 'u', 'g', 'e', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02402 */ HB_P_LINEOFFSET, 64,	/* 83 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ' ', 'e', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ' ', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02454 */ HB_P_LINEOFFSET, 65,	/* 84 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'I', 'm', 'p', '.', ' ', 'P', 'e', 'l', 'a', ' ', 'L', 'e', 't', 'r', 'a', ' ', 'I', 'n', 'i', 'c', 'i', 'a', 'l', ' ', 'R', 'a', 'z', 'a', 'o', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02506 */ HB_P_LINEOFFSET, 66,	/* 85 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', 'p', 'o', 'r', ' ', 'B', 'A', 'I', 'R', 'R', 'O', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 02558 */ HB_P_LINEOFFSET, 67,	/* 86 */
	HB_P_PUSHMEMVAR, 30, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 12, 0,	/* MTIPO_IMP */
/* 02571 */ HB_P_LINEOFFSET, 69,	/* 88 */
	HB_P_PUSHSYMNEAR, 31,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 02580 */ HB_P_LINEOFFSET, 70,	/* 89 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 85,	/* CON_CLHIST */
/* 02587 */ HB_P_LINEOFFSET, 71,	/* 90 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLAUX */
/* 02594 */ HB_P_LINEOFFSET, 72,	/* 91 */
	HB_P_PUSHSYMNEAR, 32,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02604 */ HB_P_LINEOFFSET, 73,	/* 92 */
	HB_P_PUSHSYMNEAR, 32,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 02614 */ HB_P_LINEOFFSET, 74,	/* 93 */
	HB_P_LOCALNEARSETSTR, 31, 2, 0,	/* MTIPO_REL 2*/
	'G', 0, 
/* 02622 */ HB_P_LINEOFFSET, 75,	/* 94 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 6, 0,	/* BANK */
/* 02633 */ HB_P_LINEOFFSET, 77,	/* 96 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_POPLOCALNEAR, 7,	/* MOD */
/* 02669 */ HB_P_LINEOFFSET, 78,	/* 97 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 02681 */ HB_P_LINEOFFSET, 79,	/* 98 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* T_INI */
/* 02701 */ HB_P_LINEOFFSET, 80,	/* 99 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_POPLOCALNEAR, 6,	/* T_FIM */
/* 02708 */ HB_P_LINEOFFSET, 81,	/* 100 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 35, 0,	/* MNUM_BANCO */
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 02723 */ HB_P_LINEOFFSET, 82,	/* 101 */
	HB_P_LOCALNEARSETSTR, 44, 2, 0,	/* MOP_DIA 2*/
	'S', 0, 
/* 02731 */ HB_P_LINEOFFSET, 83,	/* 102 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 48,	/* MCIDADE */
	HB_P_POPLOCALNEAR, 45,	/* MTIP_PG */
/* 02745 */ HB_P_LINEOFFSET, 85,	/* 104 */
	HB_P_LOCALNEARSETSTR, 87, 2, 0,	/* MIMP_TEL 2*/
	'N', 0, 
	HB_P_PUSHLOCALNEAR, 87,	/* MIMP_TEL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 84,	/* MAVA_CONJ */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 66,	/* MS_F */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 61,	/* MIMP_PRODUTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 71,	/* MIMP_OBSCLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 73,	/* MHIST_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 46,	/* MEND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_POPLOCALNEAR, 52,	/* MLINHAS */
/* 02784 */ HB_P_LINEOFFSET, 86,	/* 105 */
	HB_P_LOCALNEARSETSTR, 88, 2, 0,	/* MLETRA 2*/
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_POPLOCALNEAR, 47,	/* MCAB */
/* 02799 */ HB_P_LINEOFFSET, 87,	/* 106 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 49,	/* MAREA */
/* 02810 */ HB_P_LINEOFFSET, 88,	/* 107 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 25,	/* MTIP */
/* 02821 */ HB_P_LINEOFFSET, 89,	/* 108 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 89,	/* MBAIRRO */
/* 02832 */ HB_P_LINEOFFSET, 90,	/* 109 */
	HB_P_LOCALNEARSETSTR, 37, 2, 0,	/* MTIPO_CON 2*/
	'A', 0, 
/* 02840 */ HB_P_LINEOFFSET, 91,	/* 110 */
	HB_P_LOCALNEARSETSTR, 67, 2, 0,	/* MPROCESS 2*/
	'N', 0, 
/* 02848 */ HB_P_LINEOFFSET, 92,	/* 111 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
/* 02855 */ HB_P_LINEOFFSET, 93,	/* 112 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 40,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 41, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 02937 */ HB_P_LINEOFFSET, 94,	/* 113 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	76, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 02975) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 02980) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'c', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	76, 0,	/* MOP_CAB */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03032 */ HB_P_LINEOFFSET, 95,	/* 114 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	25, 0,	/* MTIP */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03070) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03075) */
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
	25, 0,	/* MTIP */
	HB_P_PUSHSYMNEAR, 43,	/* VER_TIPDC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03126 */ HB_P_LINEOFFSET, 96,	/* 115 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03198 */ HB_P_LINEOFFSET, 97,	/* 116 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 38, 0,	/* GETLIST */
/* 03220 */ HB_P_LINEOFFSET, 98,	/* 117 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 03244) */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_DOSHORT, 3,
/* 03244 */ HB_P_LINEOFFSET, 99,	/* 118 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	51, 0,	/* MTIPO_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03283) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03288) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 171,	/* 171 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 03484) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 147,	/* 147 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ':', ' ', '<', 'C', '>', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '<', 'R', '>', 'R', 'e', 'v', 'e', 'n', 'd', 'a', ' ', '<', 'P', '>', 'o', 't', 'e', 'n', 'c', 'i', 'a', 'l', ' ', '<', 'F', '>', 'i', 'l', 'i', 'a', 'l', ' ', '<', 'U', '>', 'F', 'u', 'n', 'c', 'i', 'o', 'n', 'a', 'r', 'i', 'o', 's', ' ', '<', 'A', '>', 's', 's', 'o', 'c', 'i', 'a', 'd', 'o', ' ', '<', 'O', '>', 'O', 'u', 't', 'r', 'o', 's', ' ', '<', 'E', '>', 'x', 'c', 'l', 'u', 'i', 'd', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'B', 'R', 'A', 'N', 'C', 'O', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03501 */ HB_P_LINEOFFSET, 100,	/* 119 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCOD_VEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03540) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03545) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MCOD_VEND */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 49,	/* VEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03593) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03618 */ HB_P_LINEOFFSET, 101,	/* 120 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'b', 'a', 'n', 'k', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', ',', 'B', ',', ' ', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03683 */ HB_P_LINEOFFSET, 102,	/* 121 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	5, 0,	/* T_INI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03722) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03727) */
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
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03755 */ HB_P_LINEOFFSET, 103,	/* 122 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* T_FIM */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03794) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03799) */
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
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03827 */ HB_P_LINEOFFSET, 104,	/* 123 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03866) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03871) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'r', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'R', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03925 */ HB_P_LINEOFFSET, 105,	/* 124 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	44, 0,	/* MOP_DIA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03964) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03969) */
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
	44, 0,	/* MOP_DIA */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 04012) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'D', 'e', 's', 'e', 'j', 'a', ' ', 'q', 'u', 'e', ' ', 'o', 's', ' ', 'd', 'i', 'a', 's', ' ', 's', 'e', 'j', 'a', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'D', 'O', '=', '[', 'S', ']', ' ', 'o', 'u', ' ', '[', 'N', ']', 'p', '/', 'n', 'a', 'o', ' ', 'T', 'O', 'T', 'A', 'L', 'I', 'Z', 'A', 'R', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04104 */ HB_P_LINEOFFSET, 106,	/* 125 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	45, 0,	/* MTIP_PG */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04143) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04148) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 't', 'i', 'p', '_', 'p', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04182 */ HB_P_LINEOFFSET, 107,	/* 126 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	48, 0,	/* MCIDADE */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04221) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04226) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'i', 'd', 'a', 'd', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04260 */ HB_P_LINEOFFSET, 108,	/* 127 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	49, 0,	/* MAREA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04299) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04304) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'r', 'e', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04336 */ HB_P_LINEOFFSET, 109,	/* 128 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04375) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04380) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04428) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 83,	/* 83 */
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', '[', 'S', ']', 'o', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'C', ']', 'o', 'm', ' ', 'o', 's', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', ' ', '[', 'N', ']', 'e', 'n', 'h', 'u', 'm', ' ', 'D', 'o', 'c', '.', 'B', 'a', 'i', 'x', 'a', 'd', 'o', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04528 */ HB_P_LINEOFFSET, 110,	/* 129 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 28, 0,	/* 28 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	50, 0,	/* MBAIX_PARC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 04610) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04627 */ HB_P_LINEOFFSET, 111,	/* 130 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	60, 0,	/* MCOD_MERC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04666) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04671) */
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
	60, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 51,	/* VER_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04732 */ HB_P_LINEOFFSET, 112,	/* 131 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 04771) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 04776) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'c', 'o', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 32, 0,	/* 32 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', ',', 'S', ',', 'T', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 04825) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 167, 0,	/* 167 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	31, 0,	/* MTIPO_REL */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 0,	/* 149 (abs: 04992) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHSTRSHORT, 134,	/* 134 */
	'[', 'A', ']', 'n', 'a', 'l', 'i', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', '-', ' ', '[', 'S', ']', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '/', 'T', 'i', 'p', 'o', ' ', 'D', 'o', 'c', '.', ' ', '-', ' ', '[', 'T', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'p', 'o', 'r', ' ', 'T', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '-', ' ', '[', 'R', ']', 'S', 'i', 'n', 't', 'e', 't', 'i', 'c', 'o', ' ', 'R', 'e', 's', 'u', 'm', 'i', 'd', 'o', ' ', 'p', '/', 'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05009 */ HB_P_LINEOFFSET, 113,	/* 132 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05048) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05053) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'n', 'd', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	46, 0,	/* MEND */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05118 */ HB_P_LINEOFFSET, 114,	/* 133 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MOBS_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05157) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05162) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'b', 's', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	53, 0,	/* MOBS_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	46, 0,	/* MEND */
	37, 0,	/* MTIPO_CON */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 05227) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05244 */ HB_P_LINEOFFSET, 115,	/* 134 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	52, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05283) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05288) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'l', 'i', 'n', 'h', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	52, 0,	/* MLINHAS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	37, 0,	/* MTIPO_CON */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05356 */ HB_P_LINEOFFSET, 116,	/* 135 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05395) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05400) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'o', 'b', 's', '_', 'd', 'o', 'c', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	57, 0,	/* MOBS_DOC */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05453 */ HB_P_LINEOFFSET, 117,	/* 136 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MIMP_PRODUTO */
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
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	61, 0,	/* MIMP_PRODUTO */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05554 */ HB_P_LINEOFFSET, 118,	/* 137 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05593) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05598) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05637 */ HB_P_LINEOFFSET, 119,	/* 138 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MS_F */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05676) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05681) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 's', '_', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	66, 0,	/* MS_F */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05730 */ HB_P_LINEOFFSET, 120,	/* 139 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MPROCESS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05769) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05774) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'p', 'r', 'o', 'c', 'e', 's', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	67, 0,	/* MPROCESS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05827 */ HB_P_LINEOFFSET, 121,	/* 140 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	71, 0,	/* MIMP_OBSCLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05866) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05871) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'i', 'm', 'p', '_', 'o', 'b', 's', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	71, 0,	/* MIMP_OBSCLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05927 */ HB_P_LINEOFFSET, 122,	/* 141 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	73, 0,	/* MHIST_CLI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05966) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05971) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'h', 'i', 's', 't', '_', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	73, 0,	/* MHIST_CLI */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06025 */ HB_P_LINEOFFSET, 123,	/* 142 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	75, 0,	/* MTIPO_EMI */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06064) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06069) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 'e', 'm', 'i', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 97,	/* 97 */
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 85,	/* 85 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'T', 'i', 'p', 'o', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', 'o', 'u', ' ', 'E', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '[', '*', ']', ' ', 'E', 'x', 'c', 'l', 'u', 'i', 'r', ' ', 'D', 'o', 'c', '.', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'o', ' ', '-', ' ', '[', '#', ']', 'S', 'o', ' ', 'M', 'a', 'r', 'c', 'a', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06208 */ HB_P_LINEOFFSET, 124,	/* 143 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	84, 0,	/* MAVA_CONJ */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06247) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06252) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'v', 'a', '_', 'c', 'o', 'n', 'j', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	84, 0,	/* MAVA_CONJ */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06306 */ HB_P_LINEOFFSET, 125,	/* 144 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	87, 0,	/* MIMP_TEL */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06345) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06350) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 't', 'e', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	87, 0,	/* MIMP_TEL */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06403 */ HB_P_LINEOFFSET, 126,	/* 145 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	88, 0,	/* MLETRA */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06442) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06447) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'e', 't', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06480 */ HB_P_LINEOFFSET, 127,	/* 146 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	89, 0,	/* MBAIRRO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06519) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06524) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'b', 'a', 'i', 'r', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06558 */ HB_P_LINEOFFSET, 128,	/* 147 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 38, 0,	/* GETLIST */
/* 06580 */ HB_P_LINEOFFSET, 129,	/* 148 */
	HB_P_PUSHSYMNEAR, 52,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 06604) */
/* 06592 */ HB_P_LINEOFFSET, 130,	/* 149 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06599 */ HB_P_LINEOFFSET, 131,	/* 150 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06604 */ HB_P_LINEOFFSET, 133,	/* 152 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'D', 'U', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06650) */
/* 06616 */ HB_P_LINEOFFSET, 134,	/* 153 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'U', 'P', 'L', 'I', 'C', 'A', 'T', 'A', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMP, 172, 3,	/* 940 (abs: 07587) */
/* 06650 */ HB_P_LINEOFFSET, 135,	/* 154 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'H', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 06693) */
/* 06662 */ HB_P_LINEOFFSET, 136,	/* 155 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'H', 'E', 'Q', 'U', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMP, 129, 3,	/* 897 (abs: 07587) */
/* 06693 */ HB_P_LINEOFFSET, 137,	/* 156 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 149, 1,	/* 405 (abs: 07108) */
/* 06706 */ HB_P_LINEOFFSET, 138,	/* 157 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'A', 'R', 'T', 'O', 'E', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 06734 */ HB_P_LINEOFFSET, 139,	/* 158 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 06745 */ HB_P_LINEOFFSET, 140,	/* 159 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'C', 'A', 'R', 'T', 'A', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 06779 */ HB_P_LINEOFFSET, 141,	/* 160 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 06824 */ HB_P_LINEOFFSET, 142,	/* 161 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06862) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06867) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 54,	/* VER_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06921) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 70,	/* 70 */
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'c', 'a', 'r', 't', 'a', 'o', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07008 */ HB_P_LINEOFFSET, 143,	/* 162 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 38, 0,	/* GETLIST */
/* 07030 */ HB_P_LINEOFFSET, 144,	/* 163 */
	HB_P_PUSHSYMNEAR, 52,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 07052) */
/* 07042 */ HB_P_LINEOFFSET, 145,	/* 164 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 130, 238,	/* -4478 (abs: 02571) */
/* 07052 */ HB_P_LINEOFFSET, 148,	/* 167 */
	HB_P_PUSHSYMNEAR, 56,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 28,	/* OPCAO */
/* 07086 */ HB_P_LINEOFFSET, 149,	/* 168 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07093 */ HB_P_LINEOFFSET, 150,	/* 169 */
	HB_P_PUSHLOCALNEAR, 28,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 229, 1,	/* 485 (abs: 07587) */
	HB_P_JUMP, 74, 238,	/* -4534 (abs: 02571) */
/* 07108 */ HB_P_LINEOFFSET, 153,	/* 172 */
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'F', 'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 182, 1,	/* 438 (abs: 07556) */
/* 07121 */ HB_P_LINEOFFSET, 154,	/* 173 */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 07155 */ HB_P_LINEOFFSET, 155,	/* 174 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 30,	/* MCOD_CARTAO */
/* 07166 */ HB_P_LINEOFFSET, 156,	/* 175 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 65,	/* 65 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'F', 'I', 'N', 'A', 'N', 'C', 'I', 'A', 'M', 'E', 'N', 'T', 'O', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 07207 */ HB_P_LINEOFFSET, 157,	/* 176 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07252 */ HB_P_LINEOFFSET, 158,	/* 177 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 07290) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 07295) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'c', 'o', 'd', '_', 'c', 'a', 'r', 't', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 46, 0,	/* 46 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	30, 0,	/* MCOD_CARTAO */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 07338) */
	HB_P_TRUE,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 07353) */
	HB_P_PUSHSYMNEAR, 57,	/* VER_FINAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 07361) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* LIM_GET */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 75,	/* 75 */
	HB_P_PUSHSYMNEAR, 48,	/* MEN_GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'I', 'n', 'f', 'o', 'r', 'm', 'e', ' ', 'o', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ' ', 'o', 'u', ' ', 'd', 'e', 'i', 'x', 'e', ' ', 'e', 'm', ' ', 'b', 'r', 'a', 'n', 'c', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'o', 'd', 'o', 's', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 07453 */ HB_P_LINEOFFSET, 159,	/* 178 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 38, 0,	/* GETLIST */
/* 07475 */ HB_P_LINEOFFSET, 160,	/* 179 */
	HB_P_PUSHSYMNEAR, 52,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 07497) */
/* 07487 */ HB_P_LINEOFFSET, 161,	/* 180 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 197, 236,	/* -4923 (abs: 02571) */
/* 07497 */ HB_P_LINEOFFSET, 164,	/* 183 */
	HB_P_PUSHSYMNEAR, 56,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'F', 'i', 'n', 'a', 'n', 'c', 'e', 'i', 'r', 'a', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 28,	/* OPCAO */
/* 07535 */ HB_P_LINEOFFSET, 165,	/* 184 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07542 */ HB_P_LINEOFFSET, 166,	/* 185 */
	HB_P_PUSHLOCALNEAR, 28,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 07587) */
	HB_P_JUMP, 138, 236,	/* -4982 (abs: 02571) */
/* 07556 */ HB_P_LINEOFFSET, 170,	/* 189 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', ' ', 'A', ' ', 'R', 'E', 'C', 'E', 'B', 'E', 'R', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 59,	/* MTITULO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 07587 */ HB_P_LINEOFFSET, 172,	/* 191 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* TP_MES 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* TP_MES */
	HB_P_POPLOCALNEAR, 8,	/* TD_MES */
/* 07597 */ HB_P_LINEOFFSET, 173,	/* 192 */
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07640) */
/* 07620 */ HB_P_LINEOFFSET, 174,	/* 193 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'0', '1', '/', '0', '1', '/', '6', '0', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 5,	/* T_INI */
/* 07640 */ HB_P_LINEOFFSET, 176,	/* 195 */
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 07683) */
/* 07663 */ HB_P_LINEOFFSET, 177,	/* 196 */
	HB_P_PUSHSYMNEAR, 33,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'3', '1', '/', '1', '2', '/', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 6,	/* T_FIM */
/* 07683 */ HB_P_LINEOFFSET, 179,	/* 198 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 07740) */
/* 07694 */ HB_P_LINEOFFSET, 180,	/* 199 */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'a', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
	HB_P_JUMPNEAR, 85,	/* 85 (abs: 07823) */
/* 07740 */ HB_P_LINEOFFSET, 181,	/* 200 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 07797) */
/* 07751 */ HB_P_LINEOFFSET, 182,	/* 201 */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'd', 'o', ' ', 'B', 'a', 'i', 'r', 'r', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
	HB_P_JUMPNEAR, 28,	/* 28 (abs: 07823) */
/* 07797 */ HB_P_LINEOFFSET, 184,	/* 203 */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', 'a', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 24,	/* MTIPO */
/* 07823 */ HB_P_LINEOFFSET, 186,	/* 205 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 21,	/* 21 (abs: 07854) */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 07853) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_OR,
	HB_P_JUMPFALSE, 15, 1,	/* 271 (abs: 08125) */
/* 07857 */ HB_P_LINEOFFSET, 187,	/* 206 */
	HB_P_PUSHSYMNEAR, 27,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 78,	/* 78 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'O', 'R', 'D', 'E', 'M', ' ', 'D', 'O', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', 0, 
	HB_P_DOSHORT, 5,
/* 07904 */ HB_P_LINEOFFSET, 188,	/* 207 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'[', '1', ']', '-', '>', 'C', 'o', 'd', '.', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', '[', '2', ']', '-', '>', 'R', 'a', 'z', 'a', 'o', ' ', 's', 'o', 'c', 'i', 'a', 'l', ' ', ' ', '[', '8', ']', '-', '>', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', 0, 
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 2,
/* 07978 */ HB_P_LINEOFFSET, 189,	/* 208 */
	HB_P_PUSHSYMNEAR, 36,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 59,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 39,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MTP_CONS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 08022) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 08027) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'p', '_', 'c', 'o', 'n', 's', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'9', 0, 
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	58, 0,	/* MTP_CONS */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'1', ',', '2', ',', '8', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 42, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 08081 */ HB_P_LINEOFFSET, 190,	/* 209 */
	HB_P_PUSHSYMNEAR, 45,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 38, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 38, 0,	/* GETLIST */
/* 08103 */ HB_P_LINEOFFSET, 191,	/* 210 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08110 */ HB_P_LINEOFFSET, 192,	/* 211 */
	HB_P_PUSHSYMNEAR, 52,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 08125) */
	HB_P_JUMP, 81, 234,	/* -5551 (abs: 02571) */
/* 08125 */ HB_P_LINEOFFSET, 196,	/* 215 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 61, 54,	/* 13885 (abs: 22019) */
/* 08137 */ HB_P_LINEOFFSET, 197,	/* 216 */
	HB_P_PUSHSYMNEAR, 60,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08188 */ HB_P_LINEOFFSET, 199,	/* 218 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 08196 */ HB_P_LINEOFFSET, 200,	/* 219 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 08305) */
/* 08204 */ HB_P_LINEOFFSET, 201,	/* 220 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 101,	/* 101 (abs: 08404) */
/* 08305 */ HB_P_LINEOFFSET, 203,	/* 222 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08404 */ HB_P_LINEOFFSET, 206,	/* 225 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 08449) */
/* 08416 */ HB_P_LINEOFFSET, 207,	/* 226 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08449 */ HB_P_LINEOFFSET, 209,	/* 228 */
	HB_P_PUSHLOCALNEAR, 66,	/* MS_F */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08496) */
/* 08460 */ HB_P_LINEOFFSET, 210,	/* 229 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08496 */ HB_P_LINEOFFSET, 212,	/* 231 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 08539) */
/* 08507 */ HB_P_LINEOFFSET, 213,	/* 232 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08539 */ HB_P_LINEOFFSET, 215,	/* 234 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08586) */
/* 08550 */ HB_P_LINEOFFSET, 216,	/* 235 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08586 */ HB_P_LINEOFFSET, 218,	/* 237 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 08640) */
/* 08598 */ HB_P_LINEOFFSET, 219,	/* 238 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08640 */ HB_P_LINEOFFSET, 221,	/* 240 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 32,	/* 32 (abs: 08681) */
/* 08651 */ HB_P_LINEOFFSET, 222,	/* 241 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08681 */ HB_P_LINEOFFSET, 224,	/* 243 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08724) */
/* 08692 */ HB_P_LINEOFFSET, 225,	/* 244 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08724 */ HB_P_LINEOFFSET, 227,	/* 246 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 08768) */
/* 08735 */ HB_P_LINEOFFSET, 228,	/* 247 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08768 */ HB_P_LINEOFFSET, 230,	/* 249 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08811) */
/* 08779 */ HB_P_LINEOFFSET, 231,	/* 250 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08811 */ HB_P_LINEOFFSET, 233,	/* 252 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 08863) */
/* 08822 */ HB_P_LINEOFFSET, 234,	/* 253 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08863 */ HB_P_LINEOFFSET, 236,	/* 255 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 34,	/* 34 (abs: 08907) */
/* 08875 */ HB_P_LINEOFFSET, 237,	/* 256 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08907 */ HB_P_LINEOFFSET, 239,	/* 258 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 08953) */
/* 08919 */ HB_P_LINEOFFSET, 240,	/* 259 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 08953 */ HB_P_LINEOFFSET, 242,	/* 261 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 09005) */
/* 08964 */ HB_P_LINEOFFSET, 243,	/* 262 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 09005 */ HB_P_LINEOFFSET, 246,	/* 265 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 09052) */
/* 09016 */ HB_P_LINEOFFSET, 247,	/* 266 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 09139) */
/* 09052 */ HB_P_LINEOFFSET, 248,	/* 267 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 09095) */
/* 09063 */ HB_P_LINEOFFSET, 249,	/* 268 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 09139) */
/* 09095 */ HB_P_LINEOFFSET, 250,	/* 269 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 09139) */
/* 09106 */ HB_P_LINEOFFSET, 251,	/* 270 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 09139 */ HB_P_LINEOFFSET, 253,	/* 272 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'v', 'e', 'n', 'c', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'b', 'a', 'n', 'c', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 09186 */ HB_P_LINEOFFSET, 254,	/* 273 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 09206 */ HB_P_LINEOFFSET, 255,	/* 274 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09230 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 09296) */
/* 09245 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 66,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 190, 229,	/* -6722 (abs: 02571) */
/* 09296 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 67,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 09338) */
	HB_P_JUMP, 148, 229,	/* -6764 (abs: 02571) */
/* 09338 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHVARIABLE, 13, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 54, 5,	/* 1334 (abs: 10681) */
/* 09350 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 68, 0,	/* NXLS */
/* 09359 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 69, 0,	/* F */
/* 09366 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 70,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHVARIABLE, 14, 0,	/* MARQ */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09385 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_PUSHSYMNEAR, 71,	/* XLSOPEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 14, 0,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 68, 0,	/* NXLS */
/* 09399 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_DOSHORT, 4,
/* 09416 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* F */
/* 09426 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_DOSHORT, 4,
/* 09443 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* F */
/* 09453 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'D', 'I', 'G', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09477 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 4,
/* 09503 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09531 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'o', '.', 0, 
	HB_P_DOSHORT, 4,
/* 09553 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09581 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'i', 'p', 'o', ' ', 'P', 'a', 'g', '.', 0, 
	HB_P_DOSHORT, 4,
/* 09609 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'E', 'm', 'i', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09635 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09664 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 4,
/* 09688 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'D', 'i', 'a', 's', ' ', 'A', 't', 'r', 'a', 's', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09718 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'J', 'u', 'r', 'o', 's', 0, 
	HB_P_DOSHORT, 4,
/* 09742 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 4,
/* 09766 */ HB_P_LINE, 48, 1,	/* 304 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 09793 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'T', 'E', 0, 
	HB_P_DOSHORT, 4,
/* 09814 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_POPVARIABLE, 73, 0,	/* MCOL */
/* 09822 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 09881) */
/* 09831 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 09881 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 74, 0,	/* I */
/* 09888 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 228, 2,	/* 740 (abs: 10647) */
/* 09910 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 09936 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 09950 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 09969 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 62,	/* 62 (abs: 10038) */
/* 09978 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 10005 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 10038 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 69, 0,	/* F */
/* 10048 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10073 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10099 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10125 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10151 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 10199 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 10244) */
/* 10219 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'A', 'R', 'T', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 70,	/* 70 (abs: 10312) */
/* 10244 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 27,	/* 27 (abs: 10289) */
/* 10264 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'B', 'A', 'N', 'C', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 10312) */
/* 10289 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 4,
/* 10312 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 4,
/* 10343 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 4,
/* 10374 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10416 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10459 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10496 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10544 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10570 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 10613) */
/* 10590 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 23,	/* 23 (abs: 10634) */
/* 10613 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 4,
/* 10634 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_JUMP, 19, 253,	/* -749 (abs: 09895) */
/* 10647 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 72,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 69, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 4,
/* 10667 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHSYMNEAR, 79,	/* XLSCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 68, 0,	/* NXLS */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 85, 224,	/* -8107 (abs: 02571) */
/* 10681 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'A', 'N', 'A', 'L', 'I', 'T', 'I', 'C', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 10702 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 10771 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 20,	/* L_MES */
/* 10796 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 10809 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 178, 36,	/* 9394 (abs: 20222) */
/* 10831 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 10857 */ HB_P_LINE, 119, 1,	/* 375 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MCLIENTE */
/* 10870 */ HB_P_LINE, 120, 1,	/* 376 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 10889) */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 123, 1,	/* 379 (abs: 11268) */
/* 10892 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 10910) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 10921) */
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 91, 1,	/* 347 (abs: 11268) */
/* 10924 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 10931 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 10948) */
/* 10940 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10948 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 10967 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10982 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 11047) */
/* 10991 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11047 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 138,	/* 138 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', 'P', 'e', 'd', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'g', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 11209 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11243 */ HB_P_LINE, 133, 1,	/* 389 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 11268 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 149, 2,	/* 661 (abs: 11945) */
/* 11287 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 110, 2,	/* 622 (abs: 11919) */
/* 11300 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 11321) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 44,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 1,	/* 349 (abs: 11670) */
/* 11324 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11433 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11492 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11537 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11582 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11633 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 0,	/* 252 (abs: 11919) */
/* 11670 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 11919) */
/* 11683 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11741 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 11789 */ HB_P_LINE, 148, 1,	/* 404 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11857 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 11919 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 11930 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 11945 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 11983) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 87,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 12215) */
/* 11986 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 188, 0,	/* 188 (abs: 12181) */
/* 11996 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 88,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 12114 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 12148 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* TOT_DIN 0*/
/* 12155 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 12181 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 20,	/* L_MES */
/* 12208 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* TOT 0*/
/* 12215 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 190, 0,	/* 190 (abs: 12415) */
/* 12228 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 89, 0,	/* CONS_PED */
/* 12237 */ HB_P_LINE, 168, 1,	/* 424 */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 12351 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12372 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12397 */ HB_P_LINE, 171, 1,	/* 427 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12415) */
	HB_P_JUMP, 120, 30,	/* 7800 (abs: 20212) */
/* 12415 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_PUSHLOCALNEAR, 69,	/* MASSISTENCIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 165, 0,	/* 165 (abs: 12590) */
/* 12428 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_ASS */
/* 12436 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'o', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_ASS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12548 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12573 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_ASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12590) */
	HB_P_JUMP, 201, 29,	/* 7625 (abs: 20212) */
/* 12590 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 12758) */
/* 12603 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 90,	/* CONS_BAIRRO */
/* 12611 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 90,	/* CONS_BAIRRO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12716 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12741 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* CONS_BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12758) */
	HB_P_JUMP, 33, 29,	/* 7457 (abs: 20212) */
/* 12758 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 12821) */
/* 12770 */ HB_P_LINE, 192, 1,	/* 448 */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSE, 245, 28,	/* 7413 (abs: 20212) */
/* 12802 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12821) */
	HB_P_JUMP, 226, 28,	/* 7394 (abs: 20212) */
/* 12821 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 12884) */
/* 12833 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 44,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPFALSE, 182, 28,	/* 7350 (abs: 20212) */
/* 12865 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 12884) */
	HB_P_JUMP, 163, 28,	/* 7331 (abs: 20212) */
/* 12884 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* TOT 1*/
/* 12891 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 12898 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
/* 12916 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 12934 */ HB_P_LINE, 215, 1,	/* 471 */
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 12952 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 12966 */ HB_P_LINE, 217, 1,	/* 473 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 12985 */ HB_P_LINE, 218, 1,	/* 474 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 13007 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 13036) */
/* 13016 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 13036 */ HB_P_LINE, 222, 1,	/* 478 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 13191) */
/* 13046 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 13073 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 13106 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 13124 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 13131 */ HB_P_LINE, 227, 1,	/* 483 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 13138 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 13160 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 13216) */
/* 13169 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 13216) */
/* 13191 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 13209 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 13216 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 13229 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 13242 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 13266 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 43,	/* MT_JUROS */
/* 13279 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13294 */ HB_P_LINE, 241, 1,	/* 497 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 249, 26,	/* 6905 (abs: 20209) */
/* 13307 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13351 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 30, 0,	/* 30 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13393 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13432 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13471 */ HB_P_LINE, 246, 1,	/* 502 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13531 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 13584) */
/* 13551 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 13668) */
/* 13584 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 13637) */
/* 13604 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 13668) */
/* 13637 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13668 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13711 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13754 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13815 */ HB_P_LINE, 1, 2,	/* 513 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13869 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13919 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 13978 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14014 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 14067) */
/* 14034 */ HB_P_LINE, 7, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 14098) */
/* 14067 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 14098 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 14154) */
/* 14118 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14154 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 154, 0,	/* 154 (abs: 14326) */
/* 14175 */ HB_P_LINE, 15, 2,	/* 527 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14231 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 14267 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14326 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 14367) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 'd', '.', ':', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 99, 12,	/* 3171 (abs: 17538) */
/* 14370 */ HB_P_LINE, 20, 2,	/* 532 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'O', 'B', 'S', '.', ':', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 'e', 's', 0, 
	HB_P_DOSHORT, 1,
/* 14420 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14550) */
/* 14449 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14550 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14680) */
/* 14579 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14680 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14810) */
/* 14709 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14810 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 14940) */
/* 14839 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14940 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15070) */
/* 14969 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15070 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15200) */
/* 15099 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15200 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15330) */
/* 15229 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15330 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15460) */
/* 15359 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15460 */ HB_P_LINE, 45, 2,	/* 557 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 101,	/* 101 (abs: 15587) */
/* 15488 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15587 */ HB_P_LINE, 48, 2,	/* 560 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15717) */
/* 15616 */ HB_P_LINE, 49, 2,	/* 561 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15717 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15847) */
/* 15746 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15847 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 15977) */
/* 15876 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 15977 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16107) */
/* 16006 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16107 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16237) */
/* 16136 */ HB_P_LINE, 61, 2,	/* 573 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16237 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16367) */
/* 16266 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16367 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16497) */
/* 16396 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16497 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 101,	/* 101 (abs: 16624) */
/* 16525 */ HB_P_LINE, 70, 2,	/* 582 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16624 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16754) */
/* 16653 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16754 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 16884) */
/* 16783 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16884 */ HB_P_LINE, 78, 2,	/* 590 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 17014) */
/* 16913 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17014 */ HB_P_LINE, 81, 2,	/* 593 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 17144) */
/* 17043 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17144 */ HB_P_LINE, 84, 2,	/* 596 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 17274) */
/* 17173 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17274 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 103,	/* 103 (abs: 17404) */
/* 17303 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17404 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 236, 1,	/* 492 (abs: 17923) */
/* 17434 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 92,	/* VALOR_PED */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 80,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 132, 1,	/* 388 (abs: 17923) */
/* 17538 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 17923) */
/* 17551 */ HB_P_LINE, 94, 2,	/* 606 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17613) */
/* 17571 */ HB_P_LINE, 95, 2,	/* 607 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17613 */ HB_P_LINE, 97, 2,	/* 609 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17675) */
/* 17633 */ HB_P_LINE, 98, 2,	/* 610 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17675 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17737) */
/* 17695 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17737 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17799) */
/* 17757 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17799 */ HB_P_LINE, 106, 2,	/* 618 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17861) */
/* 17819 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17861 */ HB_P_LINE, 109, 2,	/* 621 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 17923) */
/* 17881 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17923 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 72,	/* CON_CL */
/* 17931 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 76,	/* 76 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ',', 't', 'e', 'l', '1', ',', 't', 'e', 'l', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18043 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18068 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 71,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18091) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 18210) */
/* 18093 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18132 */ HB_P_LINE, 118, 2,	/* 630 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18171 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18210 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_PUSHLOCALNEAR, 73,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 0,	/* 192 (abs: 18412) */
/* 18223 */ HB_P_LINE, 122, 2,	/* 634 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 85,	/* CON_CLHIST */
/* 18231 */ HB_P_LINE, 123, 2,	/* 635 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18303 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18328 */ HB_P_LINE, 125, 2,	/* 637 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 18412) */
/* 18342 */ HB_P_LINE, 126, 2,	/* 638 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 93, 0,	/* L */
/* 18349 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 18412) */
/* 18369 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 18400 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 18356) */
/* 18412 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 84,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18435) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 18648) */
/* 18438 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLAUX */
/* 18446 */ HB_P_LINE, 134, 2,	/* 646 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18523 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18548 */ HB_P_LINE, 136, 2,	/* 648 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 18648) */
/* 18562 */ HB_P_LINE, 137, 2,	/* 649 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18605 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18648 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 87,	/* MIMP_TEL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 18671) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 93,	/* 93 (abs: 18764) */
/* 18673 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'T', 'e', 'l', 'e', 'f', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', '-', ' ', 'C', 'i', 'd', 'a', 'd', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18764 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHLOCALNEAR, 61,	/* MIMP_PRODUTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 18786) */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSE, 52, 3,	/* 820 (abs: 19606) */
/* 18789 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 144, 1,	/* 400 (abs: 19199) */
/* 18802 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 89, 0,	/* CONS_PED */
/* 18811 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 18910 */ HB_P_LINE, 149, 2,	/* 661 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 18935 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 146, 2,	/* 658 (abs: 19606) */
/* 18951 */ HB_P_LINE, 151, 2,	/* 663 */
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
/* 18958 */ HB_P_LINE, 152, 2,	/* 664 */
	HB_P_LOCALNEARSETINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 220, 0,	/* 220 (abs: 19196) */
/* 18979 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19186 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_LOCALNEARADDINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_JUMP, 28, 255,	/* -228 (abs: 18965) */
	HB_P_JUMP, 154, 1,	/* 410 (abs: 19606) */
/* 19199 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 89, 0,	/* CONS_PED */
/* 19208 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 19336 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19361 */ HB_P_LINE, 160, 2,	/* 672 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 89, 0,	/* CONS_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 232, 0,	/* 232 (abs: 19606) */
/* 19377 */ HB_P_LINE, 161, 2,	/* 673 */
	HB_P_PUSHLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_PUSHSYMNEAR, 94,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 95,	/* PQUANTD */
	HB_P_PUSHSYMNEAR, 94,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 96,	/* PVLR_FAT */
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 62,	/* MTOT_PRODUTO */
/* 19394 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_PUSHSYMNEAR, 94,	/* PED_S */
	HB_P_PUSHALIASEDFIELDNEAR, 95,	/* PQUANTD */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 63,	/* MQTD_PRODUTO */
/* 19406 */ HB_P_LINE, 163, 2,	/* 675 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', 'T', 'o', 't', 'a', 'l', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 89, 0,	/* CONS_PED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19606 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_PUSHLOCALNEAR, 67,	/* MPROCESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 81, 2,	/* 593 (abs: 20209) */
/* 19619 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 68,	/* M_PROCESSO */
/* 19627 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'p', 'r', 'o', 'c', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 19774 */ HB_P_LINE, 170, 2,	/* 682 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 19799 */ HB_P_LINE, 171, 2,	/* 683 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 142, 1,	/* 398 (abs: 20209) */
/* 19814 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'P', ' ', 'R', ' ', 'O', ' ', 'C', ' ', 'E', ' ', 'S', ' ', 'S', ' ', 'O', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19880 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 106,	/* 106 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', ' ', ' ', ' ', 'A', 's', 's', 'u', 'n', 't', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'o', 'r', 't', 'a', 'd', 'o', 'r', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'P', 'r', 'e', 'v', 'i', 's', 'a', 'o', ' ', ' ', 'O', 'p', 'e', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 20010 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20044 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_LOCALNEARSETINT, 64, 0, 0,	/* CONT_PED 0*/
/* 20051 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_LOCALNEARSETINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 107,	/* 107 (abs: 20175) */
/* 20070 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 68,	/* M_PROCESSO */
	HB_P_PUSHLOCALNEAR, 64,	/* CONT_PED */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20166 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_LOCALNEARADDINT, 64, 1, 0,	/* CONT_PED 1*/
	HB_P_JUMPNEAR, 141,	/* -115 (abs: 20058) */
/* 20175 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20209 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_JUMP, 69, 219,	/* -9403 (abs: 10816) */
/* 20222 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 152, 2,	/* 664 (abs: 20905) */
/* 20244 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 110, 2,	/* 622 (abs: 20876) */
/* 20257 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 20278) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 44,	/* MOP_DIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 93, 1,	/* 349 (abs: 20627) */
/* 20281 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', ' ', ' ', ' ', ' ', ' ', ' ', ' ', '-', '-', '-', '-', '-', '-', '-', '-', ' ', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', '-', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20390 */ HB_P_LINE, 188, 2,	/* 700 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20449 */ HB_P_LINE, 189, 2,	/* 701 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20494 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20539 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20590 */ HB_P_LINE, 192, 2,	/* 704 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 252, 0,	/* 252 (abs: 20876) */
/* 20627 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHLOCALNEAR, 31,	/* MTIPO_REL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 20876) */
/* 20640 */ HB_P_LINE, 194, 2,	/* 706 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'V', 'e', 'n', 'c', 'i', 'm', 'e', 'n', 't', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 26,	/* MDIA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20698 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20746 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 6, 0,	/* 6*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20814 */ HB_P_LINE, 197, 2,	/* 709 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 27,	/* MT_DIA */
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20876 */ HB_P_LINE, 200, 2,	/* 712 */
	HB_P_LOCALNEARSETINT, 43, 0, 0,	/* MT_JUROS 0*/
	HB_P_PUSHLOCALNEAR, 43,	/* MT_JUROS */
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
/* 20887 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 20905 */ HB_P_LINE, 203, 2,	/* 715 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 's', ' ', 'n', 'o', ' ', 'm', 'e', 's', ' ', 'd', 'e', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 20,	/* L_MES */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* TOT */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 88,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21028 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 21062 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 21109) */
/* 21075 */ HB_P_LINE, 206, 2,	/* 718 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 21083 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 21090 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 21109 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 21124 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 21169 */ HB_P_LINE, 212, 2,	/* 724 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21372 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21489 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21641 */ HB_P_LINE, 215, 2,	/* 727 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21720 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21844 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 60,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 117,	/* 117 (abs: 21971) */
/* 21856 */ HB_P_LINE, 218, 2,	/* 730 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 63,	/* MQTD_PRODUTO */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 62,	/* MTOT_PRODUTO */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 21971 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 21998 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 22006 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHSYMNEAR, 97,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 77, 78,	/* 20045 (abs: 42061) */
/* 22019 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 40, 30,	/* 7720 (abs: 29749) */
/* 22032 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'T', 'I', 'P', 'O', ' ', 'D', 'O', 'C', '.', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 22065 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_PUSHSYMNEAR, 60,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 22132 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* CONS_TPDOC */
/* 22141 */ HB_P_LINE, 228, 2,	/* 740 */
	HB_P_LOCALNEARSETSTR, 78, 23, 0,	/* CCOMM 23*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'i', 'p', 'd', 'c', 0, 
/* 22171 */ HB_P_LINE, 229, 2,	/* 741 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', '_', 'd', 'o', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22200 */ HB_P_LINE, 230, 2,	/* 742 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 22221 */ HB_P_LINE, 231, 2,	/* 743 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 22246 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 22319) */
/* 22261 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHSYMNEAR, 66,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'a', ' ', 'r', 'e', 'c', 'e', 'b', 'e', 'r', ' ', 'd', 'e', 's', 't', 'e', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 178,	/* -19745 (abs: 02571) */
/* 22319 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHSYMNEAR, 67,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 22358) */
	HB_P_JUMP, 184, 178,	/* -19784 (abs: 02571) */
/* 22358 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 22416 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* CONS_TPDOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 6, 24,	/* 6150 (abs: 28585) */
/* 22438 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 22447 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 22558) */
/* 22456 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 22658) */
/* 22558 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22658 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* CONS_TPDOC */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22696 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 22743) */
/* 22709 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22743 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 22788) */
/* 22755 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22788 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 22837) */
/* 22800 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22837 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 22893) */
/* 22850 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22893 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 22936) */
/* 22905 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22936 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 22981) */
/* 22948 */ HB_P_LINE, 10, 3,	/* 778 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 22981 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 23027) */
/* 22993 */ HB_P_LINE, 13, 3,	/* 781 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23027 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 23072) */
/* 23039 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23072 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 23126) */
/* 23084 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23126 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 23172) */
/* 23139 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23172 */ HB_P_LINE, 24, 3,	/* 792 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 23220) */
/* 23185 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23220 */ HB_P_LINE, 27, 3,	/* 795 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 23274) */
/* 23232 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23274 */ HB_P_LINE, 30, 3,	/* 798 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 23323) */
/* 23286 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 23414) */
/* 23323 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 23368) */
/* 23335 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 23414) */
/* 23368 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 23414) */
/* 23380 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23414 */ HB_P_LINE, 37, 3,	/* 805 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 't', 'i', 'p', 'o', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 23456 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 23477 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 23502 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 23520) */
	HB_P_JUMP, 194, 19,	/* 5058 (abs: 28575) */
/* 23520 */ HB_P_LINE, 44, 3,	/* 812 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 23533 */ HB_P_LINE, 45, 3,	/* 813 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 23552 */ HB_P_LINE, 46, 3,	/* 814 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 23565 */ HB_P_LINE, 47, 3,	/* 815 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 23578 */ HB_P_LINE, 48, 3,	/* 816 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 23587 */ HB_P_LINE, 49, 3,	/* 817 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 105, 17,	/* 4457 (abs: 28063) */
/* 23609 */ HB_P_LINE, 50, 3,	/* 818 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'T', 'i', 'p', 'o', ' ', 'd', 'o', ' ', 'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 18, 0,	/* CONS_TPDOC */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 23652 */ HB_P_LINE, 51, 3,	/* 819 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 23671) */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 153, 1,	/* 409 (abs: 24080) */
/* 23674 */ HB_P_LINE, 52, 3,	/* 820 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 23692) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 23703) */
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 121, 1,	/* 377 (abs: 24080) */
/* 23706 */ HB_P_LINE, 53, 3,	/* 821 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 23713 */ HB_P_LINE, 54, 3,	/* 822 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 23730) */
/* 23722 */ HB_P_LINE, 55, 3,	/* 823 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 23730 */ HB_P_LINE, 57, 3,	/* 825 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 23749 */ HB_P_LINE, 58, 3,	/* 826 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 23764 */ HB_P_LINE, 59, 3,	/* 827 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 23882) */
/* 23773 */ HB_P_LINE, 60, 3,	/* 828 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23829 */ HB_P_LINE, 61, 3,	/* 829 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 23882 */ HB_P_LINE, 63, 3,	/* 831 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 140,	/* 140 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 24046 */ HB_P_LINE, 64, 3,	/* 832 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 24080 */ HB_P_LINE, 68, 3,	/* 836 */
	HB_P_PUSHLOCALNEAR, 69,	/* MASSISTENCIA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 159, 0,	/* 159 (abs: 24249) */
/* 24093 */ HB_P_LINE, 69, 3,	/* 837 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 70,	/* CONS_ASS */
/* 24101 */ HB_P_LINE, 70, 3,	/* 838 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'd', 'e', 'p', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'o', 'b', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_ASS */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24207 */ HB_P_LINE, 71, 3,	/* 839 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24232 */ HB_P_LINE, 72, 3,	/* 840 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 70,	/* CONS_ASS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 24249) */
	HB_P_JUMP, 223, 14,	/* 3807 (abs: 28053) */
/* 24249 */ HB_P_LINE, 76, 3,	/* 844 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 188, 0,	/* 188 (abs: 24447) */
/* 24262 */ HB_P_LINE, 77, 3,	/* 845 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 77,	/* ARET */
/* 24270 */ HB_P_LINE, 78, 3,	/* 846 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 77, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24375 */ HB_P_LINE, 79, 3,	/* 847 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24400 */ HB_P_LINE, 80, 3,	/* 848 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 24447) */
/* 24414 */ HB_P_LINE, 81, 3,	/* 849 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 24429 */ HB_P_LINE, 82, 3,	/* 850 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
	HB_P_JUMP, 25, 14,	/* 3609 (abs: 28053) */
/* 24447 */ HB_P_LINE, 86, 3,	/* 854 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 24615) */
/* 24460 */ HB_P_LINE, 87, 3,	/* 855 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 90,	/* CONS_BAIRRO */
/* 24468 */ HB_P_LINE, 88, 3,	/* 856 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 90,	/* CONS_BAIRRO */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24573 */ HB_P_LINE, 89, 3,	/* 857 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24598 */ HB_P_LINE, 90, 3,	/* 858 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 90,	/* CONS_BAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 24615) */
	HB_P_JUMP, 113, 13,	/* 3441 (abs: 28053) */
/* 24615 */ HB_P_LINE, 94, 3,	/* 862 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 184, 0,	/* 184 (abs: 24809) */
/* 24628 */ HB_P_LINE, 95, 3,	/* 863 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 77,	/* ARET */
/* 24636 */ HB_P_LINE, 96, 3,	/* 864 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 'r', 'e', 'a', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 77, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24737 */ HB_P_LINE, 97, 3,	/* 865 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 24762 */ HB_P_LINE, 98, 3,	/* 866 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 24809) */
/* 24776 */ HB_P_LINE, 99, 3,	/* 867 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 24791 */ HB_P_LINE, 100, 3,	/* 868 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
	HB_P_JUMP, 175, 12,	/* 3247 (abs: 28053) */
/* 24809 */ HB_P_LINE, 104, 3,	/* 872 */
	HB_P_PUSHLOCALNEAR, 46,	/* MEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 83, 2,	/* 595 (abs: 25414) */
/* 24822 */ HB_P_LINE, 105, 3,	/* 873 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 248, 1,	/* 504 (abs: 25336) */
/* 24835 */ HB_P_LINE, 106, 3,	/* 874 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 77,	/* ARET */
/* 24843 */ HB_P_LINE, 107, 3,	/* 875 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ',', 'r', 'a', 'z', 'a', 'o', ',', 'n', 'o', 'm', 'e', ',', 'e', 'n', 'd', 'e', 'r', 'e', 'c', 'o', ',', 'b', 'a', 'i', 'r', 'r', 'o', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'u', 'f', ',', 't', 'e', 'l', '1', ',', 't', 'e', 'l', '2', ',', 'n', 'u', 'm', 'e', 'r', 'o', ',', 'c', 'o', 'm', 'p', 'l', 'e', 'm', 'e', 'n', 't', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 77, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 24989 */ HB_P_LINE, 108, 3,	/* 876 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 25014 */ HB_P_LINE, 109, 3,	/* 877 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 242, 0,	/* 242 (abs: 25268) */
/* 25029 */ HB_P_LINE, 110, 3,	/* 878 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25100 */ HB_P_LINE, 111, 3,	/* 879 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'T', 'e', 'l', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25268 */ HB_P_LINE, 113, 3,	/* 881 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25299 */ HB_P_LINE, 114, 3,	/* 882 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 25402) */
/* 25336 */ HB_P_LINE, 116, 3,	/* 884 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25367 */ HB_P_LINE, 117, 3,	/* 885 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25402 */ HB_P_LINE, 119, 3,	/* 887 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
	HB_P_JUMP, 177, 0,	/* 177 (abs: 25588) */
/* 25414 */ HB_P_LINE, 121, 3,	/* 889 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 25513) */
/* 25426 */ HB_P_LINE, 122, 3,	/* 890 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25470 */ HB_P_LINE, 123, 3,	/* 891 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 25579) */
/* 25513 */ HB_P_LINE, 125, 3,	/* 893 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25544 */ HB_P_LINE, 126, 3,	/* 894 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25579 */ HB_P_LINE, 128, 3,	/* 896 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
/* 25588 */ HB_P_LINE, 131, 3,	/* 899 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 25603 */ HB_P_LINE, 132, 3,	/* 900 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25647 */ HB_P_LINE, 133, 3,	/* 901 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25688 */ HB_P_LINE, 134, 3,	/* 902 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25726 */ HB_P_LINE, 135, 3,	/* 903 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25786 */ HB_P_LINE, 136, 3,	/* 904 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 25839) */
/* 25806 */ HB_P_LINE, 137, 3,	/* 905 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 25923) */
/* 25839 */ HB_P_LINE, 138, 3,	/* 906 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 25892) */
/* 25859 */ HB_P_LINE, 139, 3,	/* 907 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 25923) */
/* 25892 */ HB_P_LINE, 141, 3,	/* 909 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 25923 */ HB_P_LINE, 143, 3,	/* 911 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 25966 */ HB_P_LINE, 144, 3,	/* 912 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26009 */ HB_P_LINE, 145, 3,	/* 913 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26071 */ HB_P_LINE, 146, 3,	/* 914 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26125 */ HB_P_LINE, 147, 3,	/* 915 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 26143 */ HB_P_LINE, 148, 3,	/* 916 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 26150 */ HB_P_LINE, 149, 3,	/* 917 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 26157 */ HB_P_LINE, 150, 3,	/* 918 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 26171 */ HB_P_LINE, 151, 3,	/* 919 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 26190 */ HB_P_LINE, 152, 3,	/* 920 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 26212 */ HB_P_LINE, 153, 3,	/* 921 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 26241) */
/* 26221 */ HB_P_LINE, 154, 3,	/* 922 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 26241 */ HB_P_LINE, 156, 3,	/* 924 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 26396) */
/* 26251 */ HB_P_LINE, 157, 3,	/* 925 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 26278 */ HB_P_LINE, 158, 3,	/* 926 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 26311 */ HB_P_LINE, 159, 3,	/* 927 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 26329 */ HB_P_LINE, 160, 3,	/* 928 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 26336 */ HB_P_LINE, 161, 3,	/* 929 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 26343 */ HB_P_LINE, 162, 3,	/* 930 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 26365 */ HB_P_LINE, 163, 3,	/* 931 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 26421) */
/* 26374 */ HB_P_LINE, 164, 3,	/* 932 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 26421) */
/* 26396 */ HB_P_LINE, 167, 3,	/* 935 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 26414 */ HB_P_LINE, 168, 3,	/* 936 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 26421 */ HB_P_LINE, 170, 3,	/* 938 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 26434 */ HB_P_LINE, 171, 3,	/* 939 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 26447 */ HB_P_LINE, 172, 3,	/* 940 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 26471 */ HB_P_LINE, 173, 3,	/* 941 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 26489 */ HB_P_LINE, 174, 3,	/* 942 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26542 */ HB_P_LINE, 175, 3,	/* 943 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 26599 */ HB_P_LINE, 176, 3,	/* 944 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 26635 */ HB_P_LINE, 177, 3,	/* 945 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 26688) */
/* 26655 */ HB_P_LINE, 178, 3,	/* 946 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 26719) */
/* 26688 */ HB_P_LINE, 180, 3,	/* 948 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 26719 */ HB_P_LINE, 182, 3,	/* 950 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 26775) */
/* 26739 */ HB_P_LINE, 183, 3,	/* 951 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 64,	/* 64 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 26775 */ HB_P_LINE, 186, 3,	/* 954 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 157, 0,	/* 157 (abs: 26950) */
/* 26796 */ HB_P_LINE, 187, 3,	/* 955 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26852 */ HB_P_LINE, 188, 3,	/* 956 */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 26888 */ HB_P_LINE, 189, 3,	/* 957 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 26950 */ HB_P_LINE, 191, 3,	/* 959 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 27335) */
/* 26963 */ HB_P_LINE, 192, 3,	/* 960 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27025) */
/* 26983 */ HB_P_LINE, 193, 3,	/* 961 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27025 */ HB_P_LINE, 195, 3,	/* 963 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27087) */
/* 27045 */ HB_P_LINE, 196, 3,	/* 964 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 58,	/* 58 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27087 */ HB_P_LINE, 198, 3,	/* 966 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27149) */
/* 27107 */ HB_P_LINE, 199, 3,	/* 967 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27149 */ HB_P_LINE, 201, 3,	/* 969 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27211) */
/* 27169 */ HB_P_LINE, 202, 3,	/* 970 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27211 */ HB_P_LINE, 204, 3,	/* 972 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27273) */
/* 27231 */ HB_P_LINE, 205, 3,	/* 973 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27273 */ HB_P_LINE, 207, 3,	/* 975 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 27335) */
/* 27293 */ HB_P_LINE, 208, 3,	/* 976 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27335 */ HB_P_LINE, 211, 3,	/* 979 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 72,	/* CON_CL */
/* 27343 */ HB_P_LINE, 212, 3,	/* 980 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27445 */ HB_P_LINE, 213, 3,	/* 981 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27470 */ HB_P_LINE, 214, 3,	/* 982 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 71,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 27493) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 27612) */
/* 27495 */ HB_P_LINE, 215, 3,	/* 983 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27534 */ HB_P_LINE, 216, 3,	/* 984 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27573 */ HB_P_LINE, 217, 3,	/* 985 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 27612 */ HB_P_LINE, 219, 3,	/* 987 */
	HB_P_PUSHLOCALNEAR, 73,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 192, 0,	/* 192 (abs: 27814) */
/* 27625 */ HB_P_LINE, 220, 3,	/* 988 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 85,	/* CON_CLHIST */
/* 27633 */ HB_P_LINE, 221, 3,	/* 989 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27705 */ HB_P_LINE, 222, 3,	/* 990 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27730 */ HB_P_LINE, 223, 3,	/* 991 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 27814) */
/* 27744 */ HB_P_LINE, 224, 3,	/* 992 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 93, 0,	/* L */
/* 27751 */ HB_P_LINE, 225, 3,	/* 993 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 27814) */
/* 27771 */ HB_P_LINE, 226, 3,	/* 994 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 27802 */ HB_P_LINE, 227, 3,	/* 995 */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 27758) */
/* 27814 */ HB_P_LINE, 230, 3,	/* 998 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 84,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 27837) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 28050) */
/* 27840 */ HB_P_LINE, 231, 3,	/* 999 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLAUX */
/* 27848 */ HB_P_LINE, 232, 3,	/* 1000 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 27925 */ HB_P_LINE, 233, 3,	/* 1001 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 27950 */ HB_P_LINE, 234, 3,	/* 1002 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 28050) */
/* 27964 */ HB_P_LINE, 235, 3,	/* 1003 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28007 */ HB_P_LINE, 236, 3,	/* 1004 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28050 */ HB_P_LINE, 239, 3,	/* 1007 */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_JUMP, 142, 238,	/* -4466 (abs: 23594) */
/* 28063 */ HB_P_LINE, 240, 3,	/* 1008 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 243, 1,	/* 499 (abs: 28572) */
/* 28076 */ HB_P_LINE, 241, 3,	/* 1009 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 77,	/* ARET */
/* 28084 */ HB_P_LINE, 242, 3,	/* 1010 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'o', 'b', 's', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 77, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 28163 */ HB_P_LINE, 243, 3,	/* 1011 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 28188 */ HB_P_LINE, 244, 3,	/* 1012 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 28211) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 28251) */
/* 28213 */ HB_P_LINE, 245, 3,	/* 1013 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 77,	/* ARET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28251 */ HB_P_LINE, 247, 3,	/* 1015 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 28331) */
/* 28263 */ HB_P_LINE, 248, 3,	/* 1016 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28297 */ HB_P_LINE, 249, 3,	/* 1017 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28331 */ HB_P_LINE, 251, 3,	/* 1019 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28365 */ HB_P_LINE, 252, 3,	/* 1020 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28521 */ HB_P_LINE, 253, 3,	/* 1021 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28555 */ HB_P_LINE, 254, 3,	/* 1022 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 28572 */ HB_P_LINE, 0, 4,	/* 1024 */
	HB_P_PUSHVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_INC,
	HB_P_POPVARIABLE, 19, 0,	/* CONT_TP */
	HB_P_JUMP, 241, 231,	/* -6159 (abs: 22423) */
/* 28585 */ HB_P_LINE, 1, 4,	/* 1025 */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 28632) */
/* 28598 */ HB_P_LINE, 2, 4,	/* 1026 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 28606 */ HB_P_LINE, 3, 4,	/* 1027 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 28613 */ HB_P_LINE, 4, 4,	/* 1028 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 28632 */ HB_P_LINE, 6, 4,	/* 1030 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 68, 1,	/* 324 (abs: 28966) */
/* 28645 */ HB_P_LINE, 7, 4,	/* 1031 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 28725) */
/* 28657 */ HB_P_LINE, 8, 4,	/* 1032 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28691 */ HB_P_LINE, 9, 4,	/* 1033 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28725 */ HB_P_LINE, 11, 4,	/* 1035 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28759 */ HB_P_LINE, 12, 4,	/* 1036 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'Q', 'U', 'A', 'N', 'T', 'D', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'S', 'U', 'B', '-', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'J', 'U', 'R', 'O', '+', 'M', 'U', 'L', 'T', 'A', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 28915 */ HB_P_LINE, 13, 4,	/* 1037 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 28949 */ HB_P_LINE, 14, 4,	/* 1038 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 28966 */ HB_P_LINE, 16, 4,	/* 1040 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 28981 */ HB_P_LINE, 17, 4,	/* 1041 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 29026 */ HB_P_LINE, 18, 4,	/* 1042 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29229 */ HB_P_LINE, 19, 4,	/* 1043 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29346 */ HB_P_LINE, 20, 4,	/* 1044 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29498 */ HB_P_LINE, 21, 4,	/* 1045 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29577 */ HB_P_LINE, 22, 4,	/* 1046 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 29701 */ HB_P_LINE, 23, 4,	/* 1047 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 29728 */ HB_P_LINE, 24, 4,	/* 1048 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 29736 */ HB_P_LINE, 25, 4,	/* 1049 */
	HB_P_PUSHSYMNEAR, 97,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 27, 48,	/* 12315 (abs: 42061) */
/* 29749 */ HB_P_LINE, 26, 4,	/* 1050 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 131, 32,	/* 8323 (abs: 38082) */
/* 29762 */ HB_P_LINE, 27, 4,	/* 1051 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 29769 */ HB_P_LINE, 28, 4,	/* 1052 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 29821) */
/* 29781 */ HB_P_LINE, 29, 4,	/* 1053 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 29908) */
/* 29821 */ HB_P_LINE, 30, 4,	/* 1054 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 29871) */
/* 29833 */ HB_P_LINE, 31, 4,	/* 1055 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 29908) */
/* 29871 */ HB_P_LINE, 33, 4,	/* 1057 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 29908 */ HB_P_LINE, 35, 4,	/* 1059 */
	HB_P_PUSHSYMNEAR, 60,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 29975 */ HB_P_LINE, 37, 4,	/* 1061 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 29984 */ HB_P_LINE, 38, 4,	/* 1062 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 144, 1,	/* 400 (abs: 30394) */
/* 29997 */ HB_P_LINE, 39, 4,	/* 1063 */
	HB_P_LOCALNEARSETSTR, 78, 131, 1,	/* CCOMM 387*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'f', 'o', 'r', 'n', 'e', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'o', 'm', 'e', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'a', 'l', 'o', 'r', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'n', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'o', 'b', 's', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '1', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '2', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '3', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '4', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '5', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ',', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
	HB_P_JUMP, 144, 1,	/* 400 (abs: 30791) */
/* 30394 */ HB_P_LINE, 41, 4,	/* 1065 */
	HB_P_LOCALNEARSETSTR, 78, 134, 1,	/* CCOMM 390*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'f', 'o', 'r', 'n', 'e', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'e', 'm', 'i', 's', 's', 'a', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'a', 'l', 'o', 'r', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'n', 't', 'a', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'a', '_', 'f', 'u', 'n', 'd', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'o', 'b', 's', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '1', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '2', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '3', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '4', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'l', 'i', 'n', '5', ',', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ',', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 'f', 'o', 'r', 'n', 'e', 'c', 0, 
/* 30791 */ HB_P_LINE, 43, 4,	/* 1067 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 30895 */ HB_P_LINE, 44, 4,	/* 1068 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 30947) */
/* 30907 */ HB_P_LINE, 45, 4,	/* 1069 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 30947 */ HB_P_LINE, 47, 4,	/* 1071 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 31002) */
/* 30960 */ HB_P_LINE, 48, 4,	/* 1072 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31002 */ HB_P_LINE, 50, 4,	/* 1074 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 31052) */
/* 31014 */ HB_P_LINE, 51, 4,	/* 1075 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31052 */ HB_P_LINE, 53, 4,	/* 1077 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 31104) */
/* 31064 */ HB_P_LINE, 54, 4,	/* 1078 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31104 */ HB_P_LINE, 56, 4,	/* 1080 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 31163) */
/* 31116 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'r', 'a', 'z', 'a', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31163 */ HB_P_LINE, 59, 4,	/* 1083 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 31216) */
/* 31175 */ HB_P_LINE, 60, 4,	/* 1084 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31216 */ HB_P_LINE, 62, 4,	/* 1086 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 31273) */
/* 31228 */ HB_P_LINE, 63, 4,	/* 1087 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31273 */ HB_P_LINE, 65, 4,	/* 1089 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 31337) */
/* 31286 */ HB_P_LINE, 66, 4,	/* 1090 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31337 */ HB_P_LINE, 68, 4,	/* 1092 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 41,	/* 41 (abs: 31388) */
/* 31349 */ HB_P_LINE, 69, 4,	/* 1093 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31388 */ HB_P_LINE, 71, 4,	/* 1095 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31441) */
/* 31400 */ HB_P_LINE, 72, 4,	/* 1096 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31441 */ HB_P_LINE, 74, 4,	/* 1098 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 31495) */
/* 31453 */ HB_P_LINE, 75, 4,	/* 1099 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31495 */ HB_P_LINE, 77, 4,	/* 1101 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31548) */
/* 31507 */ HB_P_LINE, 78, 4,	/* 1102 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31548 */ HB_P_LINE, 80, 4,	/* 1104 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 52,	/* 52 (abs: 31610) */
/* 31560 */ HB_P_LINE, 81, 4,	/* 1105 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31610 */ HB_P_LINE, 83, 4,	/* 1107 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 31664) */
/* 31623 */ HB_P_LINE, 84, 4,	/* 1108 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31664 */ HB_P_LINE, 86, 4,	/* 1110 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 31720) */
/* 31677 */ HB_P_LINE, 87, 4,	/* 1111 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31720 */ HB_P_LINE, 89, 4,	/* 1113 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 31777) */
/* 31732 */ HB_P_LINE, 90, 4,	/* 1114 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 109,	/* 109 (abs: 31884) */
/* 31777 */ HB_P_LINE, 91, 4,	/* 1115 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 31830) */
/* 31789 */ HB_P_LINE, 92, 4,	/* 1116 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 56,	/* 56 (abs: 31884) */
/* 31830 */ HB_P_LINE, 93, 4,	/* 1117 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 31884) */
/* 31842 */ HB_P_LINE, 94, 4,	/* 1118 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', '.', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 31884 */ HB_P_LINE, 96, 4,	/* 1120 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 31930) */
/* 31896 */ HB_P_LINE, 97, 4,	/* 1121 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 32028) */
/* 31930 */ HB_P_LINE, 98, 4,	/* 1122 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 31984) */
/* 31942 */ HB_P_LINE, 99, 4,	/* 1123 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 'f', 'o', 'r', 'n', 'e', 'c', ',', 'v', 'e', 'n', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 32028) */
/* 31984 */ HB_P_LINE, 100, 4,	/* 1124 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 32028) */
/* 31996 */ HB_P_LINE, 101, 4,	/* 1125 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 's', 'a', 'c', 'c', 'l', 'i', '.', 'n', 'o', 'm', 'e', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 32028 */ HB_P_LINE, 104, 4,	/* 1128 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 32049 */ HB_P_LINE, 105, 4,	/* 1129 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 32074 */ HB_P_LINE, 106, 4,	/* 1130 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 32131) */
/* 32089 */ HB_P_LINE, 107, 4,	/* 1131 */
	HB_P_PUSHSYMNEAR, 66,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 139, 140,	/* -29557 (abs: 02571) */
/* 32131 */ HB_P_LINE, 110, 4,	/* 1134 */
	HB_P_PUSHSYMNEAR, 67,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 32170) */
	HB_P_JUMP, 100, 140,	/* -29596 (abs: 02571) */
/* 32170 */ HB_P_LINE, 115, 4,	/* 1139 */
	HB_P_LOCALNEARSETINT, 83, 0, 0,	/* MTOT_VENC 0*/
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 32227 */ HB_P_LINE, 129, 4,	/* 1153 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 32240 */ HB_P_LINE, 130, 4,	/* 1154 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 32259 */ HB_P_LINE, 131, 4,	/* 1155 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 32272 */ HB_P_LINE, 132, 4,	/* 1156 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 32285 */ HB_P_LINE, 133, 4,	/* 1157 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 32294 */ HB_P_LINE, 134, 4,	/* 1158 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 178, 12,	/* 3250 (abs: 35563) */
/* 32316 */ HB_P_LINE, 135, 4,	/* 1159 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 32362 */ HB_P_LINE, 137, 4,	/* 1161 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 32381) */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 147, 1,	/* 403 (abs: 32784) */
/* 32384 */ HB_P_LINE, 138, 4,	/* 1162 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 32402) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 32413) */
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 115, 1,	/* 371 (abs: 32784) */
/* 32416 */ HB_P_LINE, 139, 4,	/* 1163 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 32423 */ HB_P_LINE, 140, 4,	/* 1164 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 32440) */
/* 32432 */ HB_P_LINE, 141, 4,	/* 1165 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 32440 */ HB_P_LINE, 143, 4,	/* 1167 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 32459 */ HB_P_LINE, 144, 4,	/* 1168 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 32474 */ HB_P_LINE, 145, 4,	/* 1169 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 32592) */
/* 32483 */ HB_P_LINE, 146, 4,	/* 1170 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32539 */ HB_P_LINE, 147, 4,	/* 1171 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 32592 */ HB_P_LINE, 149, 4,	/* 1173 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 134,	/* 134 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'N', 'o', '.', ' ', 'D', 'o', 'c', '.', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'p', '.', 'P', 'a', 'g', '.', ' ', ' ', ' ', 'E', 'm', 'i', 's', 's', 'a', 'o', ' ', ' ', ' ', 'V', 'e', 'n', 'c', 'i', 'm', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', ' ', ' ', 'D', 'i', 'a', 's', ' ', ' ', ' ', ' ', ' ', 'J', 'u', 'r', 'o', 's', ' ', ' ', ' ', ' ', ' ', ' ', 'T', 'o', 't', 'a', 'l', ' ', ' ', 'O', 'p', ' ', 'T', 'E', 0, 
	HB_P_DOSHORT, 1,
/* 32750 */ HB_P_LINE, 150, 4,	/* 1174 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 32784 */ HB_P_LINE, 154, 4,	/* 1178 */
	HB_P_PUSHLOCALNEAR, 32,	/* MCOD_AUX */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 128, 1,	/* 384 (abs: 33184) */
/* 32803 */ HB_P_LINE, 155, 4,	/* 1179 */
	HB_P_LOCALNEARSETSTR, 47, 1, 0,	/* MCAB 1*/
	0, 
/* 32811 */ HB_P_LINE, 156, 4,	/* 1180 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 32826 */ HB_P_LINE, 157, 4,	/* 1181 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 32860 */ HB_P_LINE, 158, 4,	/* 1182 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33121 */ HB_P_LINE, 159, 4,	/* 1183 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 33155 */ HB_P_LINE, 160, 4,	/* 1184 */
	HB_P_LOCALNEARSETINT, 82, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 33184 */ HB_P_LINE, 162, 4,	/* 1186 */
	HB_P_PUSHLOCALNEAR, 46,	/* MEND */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 177, 1,	/* 433 (abs: 33627) */
/* 33197 */ HB_P_LINE, 163, 4,	/* 1187 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 86, 1,	/* 342 (abs: 33549) */
/* 33210 */ HB_P_LINE, 164, 4,	/* 1188 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'F', 'a', 'n', 't', 'a', 's', 'i', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33295 */ HB_P_LINE, 165, 4,	/* 1189 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'n', 'd', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	',', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 136, 0,	/* 136 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 98,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'T', 'e', 'l', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33481 */ HB_P_LINE, 166, 4,	/* 1190 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33512 */ HB_P_LINE, 167, 4,	/* 1191 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 33615) */
/* 33549 */ HB_P_LINE, 169, 4,	/* 1193 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33580 */ HB_P_LINE, 170, 4,	/* 1194 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33615 */ HB_P_LINE, 172, 4,	/* 1196 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
	HB_P_JUMP, 233, 0,	/* 233 (abs: 33857) */
/* 33627 */ HB_P_LINE, 174, 4,	/* 1198 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 47,	/* MCAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 145, 0,	/* 145 (abs: 33782) */
/* 33640 */ HB_P_LINE, 175, 4,	/* 1199 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33684 */ HB_P_LINE, 176, 4,	/* 1200 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 33739) */
/* 33696 */ HB_P_LINE, 177, 4,	/* 1201 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 111,	/* 111 (abs: 33848) */
/* 33739 */ HB_P_LINE, 179, 4,	/* 1203 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 37, 0,	/* 37 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 68,	/* 68 (abs: 33848) */
/* 33782 */ HB_P_LINE, 182, 4,	/* 1206 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 33813 */ HB_P_LINE, 183, 4,	/* 1207 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33848 */ HB_P_LINE, 185, 4,	/* 1209 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	'*', 0, 
/* 33857 */ HB_P_LINE, 189, 4,	/* 1213 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33895 */ HB_P_LINE, 190, 4,	/* 1214 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 33954 */ HB_P_LINE, 191, 4,	/* 1215 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 34007) */
/* 33974 */ HB_P_LINE, 192, 4,	/* 1216 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'A', 'R', 'T', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 86,	/* 86 (abs: 34091) */
/* 34007 */ HB_P_LINE, 193, 4,	/* 1217 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 34060) */
/* 34027 */ HB_P_LINE, 194, 4,	/* 1218 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'B', 'A', 'N', 'C', ' ', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 34091) */
/* 34060 */ HB_P_LINE, 196, 4,	/* 1220 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 34091 */ HB_P_LINE, 198, 4,	/* 1222 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34134 */ HB_P_LINE, 199, 4,	/* 1223 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34177 */ HB_P_LINE, 200, 4,	/* 1224 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34239 */ HB_P_LINE, 201, 4,	/* 1225 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34293 */ HB_P_LINE, 202, 4,	/* 1226 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 34311 */ HB_P_LINE, 203, 4,	/* 1227 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 34318 */ HB_P_LINE, 204, 4,	/* 1228 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 34325 */ HB_P_LINE, 205, 4,	/* 1229 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 34339 */ HB_P_LINE, 206, 4,	/* 1230 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 34358 */ HB_P_LINE, 207, 4,	/* 1231 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 34380 */ HB_P_LINE, 208, 4,	/* 1232 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 34409) */
/* 34389 */ HB_P_LINE, 209, 4,	/* 1233 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 34409 */ HB_P_LINE, 211, 4,	/* 1235 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 173, 0,	/* 173 (abs: 34589) */
/* 34419 */ HB_P_LINE, 212, 4,	/* 1236 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 34446 */ HB_P_LINE, 213, 4,	/* 1237 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 34479 */ HB_P_LINE, 214, 4,	/* 1238 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 34497 */ HB_P_LINE, 215, 4,	/* 1239 */
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENC */
/* 34515 */ HB_P_LINE, 216, 4,	/* 1240 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 34522 */ HB_P_LINE, 217, 4,	/* 1241 */
	HB_P_LOCALNEARADDINT, 81, 1, 0,	/* MDOC_VENC 1*/
/* 34529 */ HB_P_LINE, 218, 4,	/* 1242 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 34536 */ HB_P_LINE, 219, 4,	/* 1243 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 34558 */ HB_P_LINE, 220, 4,	/* 1244 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 34639) */
/* 34567 */ HB_P_LINE, 221, 4,	/* 1245 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 52,	/* 52 (abs: 34639) */
/* 34589 */ HB_P_LINE, 224, 4,	/* 1248 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 34607 */ HB_P_LINE, 225, 4,	/* 1249 */
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 82,	/* MTOT_VENCER */
/* 34625 */ HB_P_LINE, 226, 4,	/* 1250 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 34632 */ HB_P_LINE, 227, 4,	/* 1251 */
	HB_P_LOCALNEARADDINT, 80, 1, 0,	/* MDOC_VENCER 1*/
/* 34639 */ HB_P_LINE, 229, 4,	/* 1253 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 34652 */ HB_P_LINE, 230, 4,	/* 1254 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 34665 */ HB_P_LINE, 231, 4,	/* 1255 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 34689 */ HB_P_LINE, 232, 4,	/* 1256 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 34707 */ HB_P_LINE, 233, 4,	/* 1257 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 34757 */ HB_P_LINE, 234, 4,	/* 1258 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 34814 */ HB_P_LINE, 235, 4,	/* 1259 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 34850 */ HB_P_LINE, 237, 4,	/* 1261 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 34903) */
/* 34870 */ HB_P_LINE, 238, 4,	/* 1262 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'F', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 33,	/* 33 (abs: 34934) */
/* 34903 */ HB_P_LINE, 240, 4,	/* 1264 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 34934 */ HB_P_LINE, 242, 4,	/* 1266 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 34990) */
/* 34954 */ HB_P_LINE, 243, 4,	/* 1267 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 34990 */ HB_P_LINE, 245, 4,	/* 1269 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 157, 0,	/* 157 (abs: 35165) */
/* 35011 */ HB_P_LINE, 246, 4,	/* 1270 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '/', 'D', 'e', 's', 'p', 'e', 's', 'a', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35067 */ HB_P_LINE, 247, 4,	/* 1271 */
	HB_P_PUSHSYMNEAR, 50,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 3,
/* 35103 */ HB_P_LINE, 248, 4,	/* 1272 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 86,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'D', 'a', 't', 'a', ' ', 'd', 'a', ' ', 'B', 'a', 'i', 'x', 'a', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 58,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35165 */ HB_P_LINE, 250, 4,	/* 1274 */
	HB_P_PUSHLOCALNEAR, 57,	/* MOBS_DOC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 119, 1,	/* 375 (abs: 35550) */
/* 35178 */ HB_P_LINE, 251, 4,	/* 1275 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35240) */
/* 35198 */ HB_P_LINE, 252, 4,	/* 1276 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35240 */ HB_P_LINE, 254, 4,	/* 1278 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35302) */
/* 35260 */ HB_P_LINE, 255, 4,	/* 1279 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35302 */ HB_P_LINE, 1, 5,	/* 1281 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35364) */
/* 35322 */ HB_P_LINE, 2, 5,	/* 1282 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35364 */ HB_P_LINE, 4, 5,	/* 1284 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35426) */
/* 35384 */ HB_P_LINE, 5, 5,	/* 1285 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35426 */ HB_P_LINE, 7, 5,	/* 1287 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35488) */
/* 35446 */ HB_P_LINE, 8, 5,	/* 1288 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35488 */ HB_P_LINE, 10, 5,	/* 1290 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 35550) */
/* 35508 */ HB_P_LINE, 11, 5,	/* 1291 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35550 */ HB_P_LINE, 14, 5,	/* 1294 */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_JUMP, 69, 243,	/* -3259 (abs: 32301) */
/* 35563 */ HB_P_LINE, 15, 5,	/* 1295 */
	HB_P_PUSHLOCALNEAR, 71,	/* MIMP_OBSCLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 28, 1,	/* 284 (abs: 35857) */
/* 35576 */ HB_P_LINE, 16, 5,	/* 1296 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 72,	/* CON_CL */
/* 35584 */ HB_P_LINE, 17, 5,	/* 1297 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'i', 'd', 'a', 'd', 'e', ',', 'o', 'b', 's', ',', 'l', '_', 'o', 'b', 's', '1', ',', 'l', '_', 'o', 'b', 's', '2', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 35684 */ HB_P_LINE, 18, 5,	/* 1298 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35709 */ HB_P_LINE, 19, 5,	/* 1299 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 16,	/* 16 (abs: 35738) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 119,	/* 119 (abs: 35857) */
/* 35740 */ HB_P_LINE, 20, 5,	/* 1300 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'B', 'S', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35779 */ HB_P_LINE, 21, 5,	/* 1301 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35818 */ HB_P_LINE, 22, 5,	/* 1302 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 35857 */ HB_P_LINE, 25, 5,	/* 1305 */
	HB_P_PUSHLOCALNEAR, 73,	/* MHIST_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 194, 0,	/* 194 (abs: 36061) */
/* 35870 */ HB_P_LINE, 26, 5,	/* 1306 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 85,	/* CON_CLHIST */
/* 35878 */ HB_P_LINE, 27, 5,	/* 1307 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'h', 'i', 's', 't', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 35952 */ HB_P_LINE, 28, 5,	/* 1308 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 35977 */ HB_P_LINE, 29, 5,	/* 1309 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 72,	/* 72 (abs: 36061) */
/* 35991 */ HB_P_LINE, 30, 5,	/* 1310 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 93, 0,	/* L */
/* 35998 */ HB_P_LINE, 31, 5,	/* 1311 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 36061) */
/* 36018 */ HB_P_LINE, 32, 5,	/* 1312 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 85,	/* CON_CLHIST */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 36049 */ HB_P_LINE, 33, 5,	/* 1313 */
	HB_P_PUSHVARIABLE, 93, 0,	/* L */
	HB_P_INC,
	HB_P_POPVARIABLE, 93, 0,	/* L */
	HB_P_JUMPNEAR, 202,	/* -54 (abs: 36005) */
/* 36061 */ HB_P_LINE, 36, 5,	/* 1316 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 84,	/* MAVA_CONJ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 36084) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 72,	/* CON_CL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 213, 0,	/* 213 (abs: 36297) */
/* 36087 */ HB_P_LINE, 37, 5,	/* 1317 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 86,	/* CON_CLAUX */
/* 36095 */ HB_P_LINE, 38, 5,	/* 1318 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', 'a', 'u', 'x', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 36172 */ HB_P_LINE, 39, 5,	/* 1319 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 36197 */ HB_P_LINE, 40, 5,	/* 1320 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 36297) */
/* 36211 */ HB_P_LINE, 41, 5,	/* 1321 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'C', 'o', 'n', 'j', 'u', 'g', 'e', '.', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36254 */ HB_P_LINE, 42, 5,	/* 1322 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'A', 'v', 'a', 'l', 'i', 's', 't', 'a', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 86,	/* CON_CLAUX */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36297 */ HB_P_LINE, 45, 5,	/* 1325 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 238, 1,	/* 494 (abs: 36801) */
/* 36310 */ HB_P_LINE, 46, 5,	/* 1326 */
	HB_P_PUSHLOCALNEAR, 53,	/* MOBS_CLI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 36363) */
/* 36322 */ HB_P_LINE, 47, 5,	/* 1327 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'O', 'b', 's', '.', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36363 */ HB_P_LINE, 49, 5,	/* 1329 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 36443) */
/* 36375 */ HB_P_LINE, 50, 5,	/* 1330 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36409 */ HB_P_LINE, 51, 5,	/* 1331 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36443 */ HB_P_LINE, 53, 5,	/* 1333 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36477 */ HB_P_LINE, 54, 5,	/* 1334 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 36738 */ HB_P_LINE, 55, 5,	/* 1335 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36772 */ HB_P_LINE, 56, 5,	/* 1336 */
	HB_P_LOCALNEARSETINT, 82, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 36801 */ HB_P_LINE, 59, 5,	/* 1339 */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 36848) */
/* 36814 */ HB_P_LINE, 60, 5,	/* 1340 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 36822 */ HB_P_LINE, 61, 5,	/* 1341 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 36829 */ HB_P_LINE, 62, 5,	/* 1342 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 36848 */ HB_P_LINE, 64, 5,	/* 1344 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 185, 1,	/* 441 (abs: 37299) */
/* 36861 */ HB_P_LINE, 65, 5,	/* 1345 */
	HB_P_PUSHLOCALNEAR, 52,	/* MLINHAS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 36941) */
/* 36873 */ HB_P_LINE, 66, 5,	/* 1346 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36907 */ HB_P_LINE, 67, 5,	/* 1347 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36941 */ HB_P_LINE, 69, 5,	/* 1349 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 36975 */ HB_P_LINE, 70, 5,	/* 1350 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'o', 'c', '.', 'V', 'e', 'n', 'c', 'i', 'd', 'o', 's', ':', '(', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'A', ' ', 'v', 'e', 'n', 'c', 'e', 'r', ':', '(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	')', '-', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', 'T', 'o', 't', '.', 'D', 'o', 'c', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	' ', '-', ' ', 'R', '$', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'J', 'u', 'r', 'o', 's', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'T', 'O', 'T', 'A', 'L', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37236 */ HB_P_LINE, 71, 5,	/* 1351 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 37270 */ HB_P_LINE, 72, 5,	/* 1352 */
	HB_P_LOCALNEARSETINT, 82, 0, 0,	/* MTOT_VENCER 0*/
	HB_P_PUSHLOCALNEAR, 82,	/* MTOT_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 80,	/* MDOC_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 83,	/* MTOT_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 81,	/* MDOC_VENC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 37299 */ HB_P_LINE, 74, 5,	/* 1354 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 37314 */ HB_P_LINE, 75, 5,	/* 1355 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 37359 */ HB_P_LINE, 76, 5,	/* 1356 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37562 */ HB_P_LINE, 77, 5,	/* 1357 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37679 */ HB_P_LINE, 78, 5,	/* 1358 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37831 */ HB_P_LINE, 79, 5,	/* 1359 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 37910 */ HB_P_LINE, 80, 5,	/* 1360 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 38034 */ HB_P_LINE, 81, 5,	/* 1361 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 38061 */ HB_P_LINE, 82, 5,	/* 1362 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 38069 */ HB_P_LINE, 83, 5,	/* 1363 */
	HB_P_PUSHSYMNEAR, 97,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 142, 15,	/* 3982 (abs: 42061) */
/* 38082 */ HB_P_LINE, 84, 5,	/* 1364 */
	HB_P_PUSHLOCALNEAR, 37,	/* MTIPO_CON */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 129, 15,	/* 3969 (abs: 42061) */
/* 38095 */ HB_P_LINE, 85, 5,	/* 1365 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 38102 */ HB_P_LINE, 86, 5,	/* 1366 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 38154) */
/* 38114 */ HB_P_LINE, 87, 5,	/* 1367 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'C', 'O', 'D', 'I', 'G', 'O', ' ', 'C', 'L', 'I', 'E', 'N', 'T', 'E', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 38241) */
/* 38154 */ HB_P_LINE, 88, 5,	/* 1368 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 38204) */
/* 38166 */ HB_P_LINE, 89, 5,	/* 1369 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'R', 'A', 'Z', 'A', 'O', ' ', 'S', 'O', 'C', 'I', 'A', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 38241) */
/* 38204 */ HB_P_LINE, 91, 5,	/* 1371 */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'S', 'I', 'N', 'T', 'E', 'T', 'I', 'C', 'O', ' ', 'p', '/', 'N', 'O', 'M', 'E', ' ', 'F', 'A', 'N', 'T', 'A', 'S', 'I', 'A', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 23,	/* MTIT */
/* 38241 */ HB_P_LINE, 93, 5,	/* 1373 */
	HB_P_PUSHSYMNEAR, 60,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'C', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', '/', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', '-', ' ', '[', 'E', 'S', 'C', ']', ' ', 'A', 'b', 'a', 'n', 'd', 'o', 'n', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 38308 */ HB_P_LINE, 95, 5,	/* 1375 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 20, 0,	/* CONS_CLI */
/* 38317 */ HB_P_LINE, 96, 5,	/* 1376 */
	HB_P_LOCALNEARSETSTR, 78, 47, 0,	/* CCOMM 47*/
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'l', 'i', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
/* 38371 */ HB_P_LINE, 97, 5,	/* 1377 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 38416) */
/* 38383 */ HB_P_LINE, 98, 5,	/* 1378 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'i', 'd', 'a', 'd', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 48,	/* MCIDADE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38416 */ HB_P_LINE, 100, 5,	/* 1380 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 38464) */
/* 38429 */ HB_P_LINE, 101, 5,	/* 1381 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38464 */ HB_P_LINE, 103, 5,	/* 1383 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 38507) */
/* 38476 */ HB_P_LINE, 104, 5,	/* 1384 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 'a', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 49,	/* MAREA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38507 */ HB_P_LINE, 106, 5,	/* 1386 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 38552) */
/* 38519 */ HB_P_LINE, 107, 5,	/* 1387 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'r', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 89,	/* MBAIRRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38552 */ HB_P_LINE, 109, 5,	/* 1389 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 42,	/* 42 (abs: 38604) */
/* 38564 */ HB_P_LINE, 110, 5,	/* 1390 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'r', 'a', 'z', 'a', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 88,	/* MLETRA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38604 */ HB_P_LINE, 112, 5,	/* 1392 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 38646) */
/* 38616 */ HB_P_LINE, 113, 5,	/* 1393 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 83,	/* 83 (abs: 38727) */
/* 38646 */ HB_P_LINE, 114, 5,	/* 1394 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 38694) */
/* 38658 */ HB_P_LINE, 115, 5,	/* 1395 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 35,	/* 35 (abs: 38727) */
/* 38694 */ HB_P_LINE, 117, 5,	/* 1397 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'n', 'o', 'm', 'e', ',', 'c', 'o', 'd', '_', 'c', 'l', 'i', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 38727 */ HB_P_LINE, 119, 5,	/* 1399 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 20, 0,	/* CONS_CLI */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 38748 */ HB_P_LINE, 120, 5,	/* 1400 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 38773 */ HB_P_LINE, 121, 5,	/* 1401 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 45,	/* 45 (abs: 38831) */
/* 38788 */ HB_P_LINE, 122, 5,	/* 1402 */
	HB_P_PUSHSYMNEAR, 66,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPFAR, 96, 114, 255,	/* -36256 (abs: 00002571) */
/* 38831 */ HB_P_LINE, 125, 5,	/* 1405 */
	HB_P_PUSHSYMNEAR, 67,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPTRUENEAR, 6,	/* 6 (abs: 38871) */
	HB_P_JUMPFAR, 56, 114, 255,	/* -36296 (abs: 00002571) */
/* 38871 */ HB_P_LINE, 129, 5,	/* 1409 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 27,	/* MT_DIA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* TOT_DIN */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 17,	/* TOT_G */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 16,	/* TOT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 12,	/* VENCER */
	HB_P_POPLOCALNEAR, 10,	/* PAG */
/* 38914 */ HB_P_LINE, 130, 5,	/* 1410 */
	HB_P_LOCALNEARSETINT, 65, 1, 0,	/* CONT_CLI 1*/
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* CONS_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 254, 8,	/* 2302 (abs: 41234) */
/* 38935 */ HB_P_LINE, 131, 5,	/* 1411 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 38979 */ HB_P_LINE, 132, 5,	/* 1412 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 17, 0,	/* CONS_DOC */
/* 38988 */ HB_P_LINE, 133, 5,	/* 1413 */
	HB_P_PUSHLOCALNEAR, 1,	/* MTP_423 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 104,	/* 104 (abs: 39099) */
/* 38997 */ HB_P_LINE, 134, 5,	/* 1414 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'd', 'u', 'p', 'r', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 39199) */
/* 39099 */ HB_P_LINE, 136, 5,	/* 1416 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'c', 'r', 'e', 'd', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'v', 'e', 'n', 'c', ' ', '>', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* T_INI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'c', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* T_FIM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39199 */ HB_P_LINE, 138, 5,	/* 1418 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39239 */ HB_P_LINE, 139, 5,	/* 1419 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 39284) */
/* 39251 */ HB_P_LINE, 140, 5,	/* 1420 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39284 */ HB_P_LINE, 142, 5,	/* 1422 */
	HB_P_PUSHLOCALNEAR, 50,	/* MBAIX_PARC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 39333) */
/* 39296 */ HB_P_LINE, 143, 5,	/* 1423 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'i', 'x', '_', 'p', 'a', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39333 */ HB_P_LINE, 145, 5,	/* 1425 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 39389) */
/* 39346 */ HB_P_LINE, 146, 5,	/* 1426 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39389 */ HB_P_LINE, 148, 5,	/* 1428 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 33,	/* 33 (abs: 39432) */
/* 39401 */ HB_P_LINE, 149, 5,	/* 1429 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 25,	/* MTIP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39432 */ HB_P_LINE, 151, 5,	/* 1431 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39477) */
/* 39444 */ HB_P_LINE, 152, 5,	/* 1432 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'p', 'g', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 45,	/* MTIP_PG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39477 */ HB_P_LINE, 154, 5,	/* 1434 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 39523) */
/* 39489 */ HB_P_LINE, 155, 5,	/* 1435 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', '_', 'c', 'l', 'i', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 51,	/* MTIPO_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39523 */ HB_P_LINE, 157, 5,	/* 1437 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39568) */
/* 39535 */ HB_P_LINE, 158, 5,	/* 1438 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 30,	/* MCOD_CARTAO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39568 */ HB_P_LINE, 160, 5,	/* 1440 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 44,	/* 44 (abs: 39622) */
/* 39580 */ HB_P_LINE, 161, 5,	/* 1441 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'v', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39622 */ HB_P_LINE, 163, 5,	/* 1443 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 39668) */
/* 39635 */ HB_P_LINE, 164, 5,	/* 1444 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'b', 'a', 'n', 'c', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 6, 0,	/* BANK */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39668 */ HB_P_LINE, 166, 5,	/* 1446 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 37,	/* 37 (abs: 39716) */
/* 39681 */ HB_P_LINE, 167, 5,	/* 1447 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39716 */ HB_P_LINE, 169, 5,	/* 1449 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'#', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 39765) */
/* 39728 */ HB_P_LINE, 170, 5,	/* 1450 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 39856) */
/* 39765 */ HB_P_LINE, 171, 5,	/* 1451 */
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 39810) */
/* 39777 */ HB_P_LINE, 172, 5,	/* 1452 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 39856) */
/* 39810 */ HB_P_LINE, 173, 5,	/* 1453 */
	HB_P_PUSHSYMNEAR, 46,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 39856) */
/* 39822 */ HB_P_LINE, 174, 5,	/* 1454 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'm', '_', 's', 'e', 'm', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 61,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 75,	/* MTIPO_EMI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39856 */ HB_P_LINE, 177, 5,	/* 1457 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 39917) */
/* 39868 */ HB_P_LINE, 178, 5,	/* 1458 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'f', 'o', 'r', 'n', 'e', 'c', ',', 't', 'i', 'p', 'o', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 39965) */
/* 39917 */ HB_P_LINE, 180, 5,	/* 1460 */
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'l', 'i', 'e', 'n', 't', 'e', ',', 't', 'i', 'p', 'o', ',', 'v', 'e', 'n', 'c', ',', 'd', 'u', 'p', 'l', 'i', 'c', 'a', 't', 'a', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 78,	/* CCOMM */
/* 39965 */ HB_P_LINE, 182, 5,	/* 1462 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHLOCALNEAR, 78,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 39986 */ HB_P_LINE, 183, 5,	/* 1463 */
	HB_P_MESSAGE, 63, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 64,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 40011 */ HB_P_LINE, 184, 5,	/* 1464 */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 40029) */
	HB_P_JUMP, 177, 4,	/* 1201 (abs: 41227) */
/* 40029 */ HB_P_LINE, 188, 5,	/* 1468 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 26,	/* MDIA */
/* 40042 */ HB_P_LINE, 189, 5,	/* 1469 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 40061 */ HB_P_LINE, 190, 5,	/* 1470 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 32,	/* MCOD_AUX */
/* 40074 */ HB_P_LINE, 191, 5,	/* 1471 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 42,	/* MFORNEC */
/* 40087 */ HB_P_LINE, 192, 5,	/* 1472 */
	HB_P_LOCALNEARSETSTR, 47, 2, 0,	/* MCAB 2*/
	' ', 0, 
/* 40096 */ HB_P_LINE, 193, 5,	/* 1473 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 17, 0,	/* CONS_DOC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 135, 1,	/* 391 (abs: 40506) */
/* 40118 */ HB_P_LINE, 194, 5,	/* 1474 */
	HB_P_PUSHSYMNEAR, 75,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_DOSHORT, 1,
/* 40129 */ HB_P_LINE, 195, 5,	/* 1475 */
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
/* 40147 */ HB_P_LINE, 196, 5,	/* 1476 */
	HB_P_LOCALNEARADDINT, 33, 1, 0,	/* MTOT_IND 1*/
/* 40154 */ HB_P_LINE, 197, 5,	/* 1477 */
	HB_P_LOCALNEARADDINT, 17, 1, 0,	/* TOT_G 1*/
/* 40161 */ HB_P_LINE, 198, 5,	/* 1478 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 40175 */ HB_P_LINE, 199, 5,	/* 1479 */
	HB_P_PUSHMEMVAR, 34, 0,	/* MDATA_SIS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 40,	/* MDIAS_ATRAS */
/* 40194 */ HB_P_LINE, 200, 5,	/* 1480 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 40216 */ HB_P_LINE, 201, 5,	/* 1481 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 40245) */
/* 40225 */ HB_P_LINE, 202, 5,	/* 1482 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
/* 40245 */ HB_P_LINE, 204, 5,	/* 1484 */
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 148, 0,	/* 148 (abs: 40400) */
/* 40255 */ HB_P_LINE, 205, 5,	/* 1485 */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_POPLOCALNEAR, 38,	/* MMULTA */
/* 40282 */ HB_P_LINE, 206, 5,	/* 1486 */
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 40,	/* MDIAS_ATRAS */
	HB_P_PUSHMEMVAR, 76, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 51,	/* 51 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 39,	/* MJUROS */
/* 40315 */ HB_P_LINE, 207, 5,	/* 1487 */
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 15,	/* T_VENCIDAS */
/* 40333 */ HB_P_LINE, 208, 5,	/* 1488 */
	HB_P_LOCALNEARADDINT, 13, 1, 0,	/* VENCIDAS 1*/
/* 40340 */ HB_P_LINE, 209, 5,	/* 1489 */
	HB_P_LOCALNEARSETINT, 56, 0, 0,	/* MPT 0*/
/* 40347 */ HB_P_LINE, 210, 5,	/* 1490 */
	HB_P_PUSHSYMNEAR, 90,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 56,	/* MPT */
/* 40369 */ HB_P_LINE, 211, 5,	/* 1491 */
	HB_P_PUSHLOCALNEAR, 56,	/* MPT */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 40425) */
/* 40378 */ HB_P_LINE, 212, 5,	/* 1492 */
	HB_P_PUSHSYMNEAR, 37,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 40425) */
/* 40400 */ HB_P_LINE, 215, 5,	/* 1495 */
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 14,	/* T_VENCER */
/* 40418 */ HB_P_LINE, 216, 5,	/* 1496 */
	HB_P_LOCALNEARADDINT, 12, 1, 0,	/* VENCER 1*/
/* 40425 */ HB_P_LINE, 218, 5,	/* 1498 */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 41,	/* MTOT_JUROS */
/* 40438 */ HB_P_LINE, 219, 5,	/* 1499 */
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 36,	/* MJUROS_IND */
/* 40451 */ HB_P_LINE, 220, 5,	/* 1500 */
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 38,	/* MMULTA */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 39,	/* MJUROS */
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
/* 40475 */ HB_P_LINE, 221, 5,	/* 1501 */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHMEMVAR, 17, 0,	/* CONS_DOC */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 19,	/* TOT_GIN */
/* 40493 */ HB_P_LINE, 222, 5,	/* 1502 */
	HB_P_PUSHVARIABLE, 74, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 74, 0,	/* I */
	HB_P_JUMP, 112, 254,	/* -400 (abs: 40103) */
/* 40506 */ HB_P_LINE, 223, 5,	/* 1503 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 40525) */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 106, 1,	/* 362 (abs: 40887) */
/* 40528 */ HB_P_LINE, 224, 5,	/* 1504 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 40546) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 40557) */
	HB_P_PUSHLOCALNEAR, 76,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 74, 1,	/* 330 (abs: 40887) */
/* 40560 */ HB_P_LINE, 225, 5,	/* 1505 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 40567 */ HB_P_LINE, 226, 5,	/* 1506 */
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 40584) */
/* 40576 */ HB_P_LINE, 227, 5,	/* 1507 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 40584 */ HB_P_LINE, 229, 5,	/* 1509 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 40603 */ HB_P_LINE, 230, 5,	/* 1510 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 40618 */ HB_P_LINE, 231, 5,	/* 1511 */
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 40736) */
/* 40627 */ HB_P_LINE, 232, 5,	/* 1512 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'V', 'e', 'n', 'd', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40683 */ HB_P_LINE, 233, 5,	/* 1513 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MCOD_VEND */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 7, 0,	/* MNOME_VEND */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 40736 */ HB_P_LINE, 235, 5,	/* 1515 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'C', 'o', 'd', '.', ' ', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'Q', 't', 'd', '.', 'D', 'o', 'c', '.', ' ', ' ', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ' ', 'J', 'u', 'r', 'o', 's', '/', 'M', 'u', 'l', 't', 'a', ' ', ' ', ' ', ' ', ' ', 'V', 'l', 'r', '.', 'T', 'o', 't', 'a', 'l', 0, 
	HB_P_DOSHORT, 1,
/* 40853 */ HB_P_LINE, 236, 5,	/* 1516 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 40887 */ HB_P_LINE, 240, 5,	/* 1520 */
	HB_P_PUSHLOCALNEAR, 58,	/* MTP_CONS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'8', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 158, 0,	/* 158 (abs: 41055) */
/* 40900 */ HB_P_LINE, 241, 5,	/* 1521 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 155, 0,	/* 155 (abs: 41207) */
/* 41055 */ HB_P_LINE, 243, 5,	/* 1523 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 20, 0,	/* CONS_CLI */
	HB_P_PUSHLOCALNEAR, 65,	/* CONT_CLI */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 62,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MTOT_IND */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41207 */ HB_P_LINE, 245, 5,	/* 1525 */
	HB_P_LOCALNEARSETINT, 36, 0, 0,	/* MJUROS_IND 0*/
	HB_P_PUSHLOCALNEAR, 36,	/* MJUROS_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MSUB_IND */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MVLR_IND */
	HB_P_POPLOCALNEAR, 33,	/* MTOT_IND */
/* 41224 */ HB_P_LINE, 246, 5,	/* 1526 */
	HB_P_LOCALNEARADDINT, 65, 1, 0,	/* CONT_CLI 1*/
	HB_P_JUMP, 250, 246,	/* -2310 (abs: 38921) */
/* 41234 */ HB_P_LINE, 247, 5,	/* 1527 */
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 41281) */
/* 41247 */ HB_P_LINE, 248, 5,	/* 1528 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 41255 */ HB_P_LINE, 249, 5,	/* 1529 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* PAG 1*/
/* 41262 */ HB_P_LINE, 250, 5,	/* 1530 */
	HB_P_PUSHSYMNEAR, 83,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* PAG */
	HB_P_PUSHLOCALNEAR, 23,	/* MTIT */
	HB_P_PUSHLOCALNEAR, 24,	/* MTIPO */
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHVARIABLE, 15, 0,	/* MCODEMP */
	HB_P_DOSHORT, 5,
/* 41281 */ HB_P_LINE, 252, 5,	/* 1532 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 41296 */ HB_P_LINE, 253, 5,	/* 1533 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'*', '*', '*', ' ', 'R', 'E', 'S', 'U', 'M', 'O', ' ', 'F', 'I', 'N', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_DOSHORT, 1,
/* 41341 */ HB_P_LINE, 254, 5,	/* 1534 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'D', 'O', 'C', 'U', 'M', 'E', 'N', 'T', 'O', 'S', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* TOT_G */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', '-', ' ', 'S', 'u', 'b', '-', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'J', 'u', 'r', 'o', 's', '+', 'M', 'u', 'l', 't', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_PUSHLOCALNEAR, 41,	/* MTOT_JUROS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41544 */ HB_P_LINE, 255, 5,	/* 1535 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'a', ' ', 'A', ' ', 'V', 'E', 'N', 'C', 'E', 'R', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* VENCER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* T_VENCER */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41661 */ HB_P_LINE, 0, 6,	/* 1536 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'V', 'E', 'N', 'C', 'I', 'D', 'A', 'S', ' ', ' ', '=', '>', ' ', 'Q', 'u', 'a', 'n', 't', 'd', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* VENCIDAS */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'R', '$', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'@', 'E', ' ', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* T_VENCIDAS */
	HB_P_PUSHLOCALNEAR, 19,	/* TOT_GIN */
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41813 */ HB_P_LINE, 1, 6,	/* 1537 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'n', 'o', ' ', 'P', 'e', 'r', 'i', 'o', 'd', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 41892 */ HB_P_LINE, 2, 6,	/* 1538 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'C', 'l', 'i', 'e', 'n', 't', 'e', 's', ' ', 'D', 'E', 'V', 'E', 'D', 'O', 'R', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'@', 'E', ' ', '9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', '(', '%', ')', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 77,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 54,	/* CLI_VENC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 65,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 55,	/* CLI_REC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 42016 */ HB_P_LINE, 3, 6,	/* 1539 */
	HB_P_PUSHSYMNEAR, 28,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 81,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 29,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 78,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 42043 */ HB_P_LINE, 4, 6,	/* 1540 */
	HB_P_PUSHSYMNEAR, 82,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 42051 */ HB_P_LINE, 5, 6,	/* 1541 */
	HB_P_PUSHSYMNEAR, 97,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 42061 */ HB_P_LINE, 7, 6,	/* 1543 */
	HB_P_PUSHSYMNEAR, 84,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 12, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'P', '6', 0, 
	HB_P_DOSHORT, 2,
/* 42077 */ HB_P_LINE, 8, 6,	/* 1544 */
	HB_P_PUSHSYMNEAR, 99,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 99,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 99,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 42119 */ HB_P_LINE, 9, 6,	/* 1545 */
	HB_P_PUSHSYMNEAR, 100,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'D', 'O', 'C', '_', 'V', 'E', 'N', 'C', 'E', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 42143 */ HB_P_LINE, 12, 6,	/* 1548 */
	HB_P_PUSHSYMNEAR, 53,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 42151 */ HB_P_LINE, 13, 6,	/* 1549 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 42157 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

