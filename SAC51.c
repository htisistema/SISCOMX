/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC51.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC51.PRG /q /oC:\hti\SISCOM\SAC51.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.10.02 16:11:06 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC51.PRG"

HB_FUNC( SAC51 );
HB_FUNC( IMP_FORN );
HB_FUNC( IMP_ );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( VER_EMP );
HB_FUNC_EXTERN( V_GRU_COD );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( VER_COND );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( ASORT );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( XLSOPEN );
HB_FUNC_EXTERN( XLSWRITE );
HB_FUNC_EXTERN( PROG_IMP );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( XLSCLOSE );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( __EJECT );
HB_FUNC_EXTERN( CABECALHO );
HB_FUNC_EXTERN( PCOL );
HB_FUNC_EXTERN( PRT_GRU );
HB_FUNC_EXTERN( PRT_SGRU );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( PADC );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( SUBSTR );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC51 )
{ "SAC51", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC51 )}, NULL },
{ "MPRG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_PR1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPROMOCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTRACO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOT_ITEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TELAPRINT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPAG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_TAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSALDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MUF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_ESPE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDETALHE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MALIQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODEMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MSALDO_NEG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPROMO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFALTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAB_PR1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAB_PR2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAB_PR3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAB_PR4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTAB_PR5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MGRUPO1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MISENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MALIQUOTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TOTAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MBARR_REF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCONT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MOP_CAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVLR_ZERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDISP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNCM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCODFORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_NCM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_LUCRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_ZERO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPERC_LUCRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MLOCAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPESQUISA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "VER_EMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_EMP )}, NULL },
{ "MMULT_EMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_GRU_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_GRU_COD )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "GRUP", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_COND", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_COND )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "IMP_FORN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_FORN )}, NULL },
{ "IMP_", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_ )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "ASORT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASORT )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "NXLS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "XLSOPEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSOPEN )}, NULL },
{ "XLSWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSWRITE )}, NULL },
{ "MCOL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROG_IMP", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROG_IMP )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "CONS_", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "XLSCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( XLSCLOSE )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "__EJECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __EJECT )}, NULL },
{ "CABECALHO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CABECALHO )}, NULL },
{ "PCOL", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOL )}, NULL },
{ "PRT_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( PRT_GRU )}, NULL },
{ "PRT_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( PRT_SGRU )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "DETA", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "CHASSIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADC", {HB_FS_PUBLIC}, {HB_FUNCNAME( PADC )}, NULL },
{ "MEND_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCID_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFONE_FIRM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "MTOTAL_PRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTOTAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "ISENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCONT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "P_LUCRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOCAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESPECIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SALDO_MER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_FALTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROMOCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_BARR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UNIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAREJO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SITTRIB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IND_ICMS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "QTD_FALTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRU_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC51 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC51
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC51 = hb_vm_SymbolInit_SAC51;
   #pragma data_seg()
#endif

HB_FUNC( SAC51 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_MERC */
/* 00011 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'A', 'C', '5', '1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 53,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MPRG */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_PR1 */
	HB_P_PUSHSYMNEAR, 3,	/* MPROMOCAO */
	HB_P_PUSHSYMNEAR, 4,	/* MTRACO */
	HB_P_PUSHSYMNEAR, 5,	/* MTOT_ITEM */
	HB_P_PUSHSYMNEAR, 6,	/* TELAPRINT */
	HB_P_PUSHSYMNEAR, 7,	/* MTIT */
	HB_P_PUSHSYMNEAR, 8,	/* MTIPO */
	HB_P_PUSHSYMNEAR, 9,	/* MPAG */
	HB_P_PUSHSYMNEAR, 10,	/* MQUANTD */
	HB_P_PUSHSYMNEAR, 11,	/* MTIPO_TAB */
	HB_P_PUSHSYMNEAR, 12,	/* MSALDO */
	HB_P_PUSHSYMNEAR, 13,	/* MFORNECE */
	HB_P_PUSHSYMNEAR, 14,	/* MUF */
	HB_P_PUSHSYMNEAR, 15,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 16,	/* MCOD_ESPE */
	HB_P_PUSHSYMNEAR, 17,	/* MDETALHE */
	HB_P_PUSHSYMNEAR, 18,	/* MOBS */
	HB_P_PUSHSYMNEAR, 19,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 20,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 21,	/* MARQ */
	HB_P_PUSHSYMNEAR, 23,	/* MALIQ */
	HB_P_PUSHSYMNEAR, 24,	/* MCODEMP */
	HB_P_PUSHSYMNEAR, 25,	/* MSALDO_NEG */
	HB_P_PUSHSYMNEAR, 26,	/* MDATA_CAD */
	HB_P_PUSHSYMNEAR, 27,	/* MPROMO */
	HB_P_PUSHSYMNEAR, 28,	/* MFALTA */
	HB_P_PUSHSYMNEAR, 29,	/* MTAB_PR1 */
	HB_P_PUSHSYMNEAR, 30,	/* MTAB_PR2 */
	HB_P_PUSHSYMNEAR, 31,	/* MTAB_PR3 */
	HB_P_PUSHSYMNEAR, 32,	/* MTAB_PR4 */
	HB_P_PUSHSYMNEAR, 33,	/* MTAB_PR5 */
	HB_P_PUSHSYMNEAR, 34,	/* M_MERC */
	HB_P_PUSHSYMNEAR, 35,	/* F */
	HB_P_PUSHSYMNEAR, 36,	/* MGRUPO1 */
	HB_P_PUSHSYMNEAR, 37,	/* MISENTO */
	HB_P_PUSHSYMNEAR, 38,	/* MALIQUOTA */
	HB_P_PUSHSYMNEAR, 39,	/* MIMP_TOTAL */
	HB_P_PUSHSYMNEAR, 40,	/* MBARR_REF */
	HB_P_PUSHSYMNEAR, 41,	/* MDESCONT */
	HB_P_PUSHSYMNEAR, 42,	/* MOP_CAB */
	HB_P_PUSHSYMNEAR, 43,	/* MVLR_ZERO */
	HB_P_PUSHSYMNEAR, 44,	/* MDISP */
	HB_P_PUSHSYMNEAR, 45,	/* MNCM */
	HB_P_PUSHSYMNEAR, 46,	/* MCODFORN */
	HB_P_PUSHSYMNEAR, 47,	/* MIMP_NCM */
	HB_P_PUSHSYMNEAR, 48,	/* MIMP_LUCRO */
	HB_P_PUSHSYMNEAR, 49,	/* MIMP_ZERO */
	HB_P_PUSHSYMNEAR, 50,	/* MPERC_LUCRO */
	HB_P_PUSHSYMNEAR, 51,	/* MLOCAL */
	HB_P_PUSHSYMNEAR, 52,	/* MPESQUISA */
	HB_P_DOSHORT, 51,
	HB_P_POPVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_POPVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_POPVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_POPVARIABLE, 45, 0,	/* MNCM */
	HB_P_POPVARIABLE, 44, 0,	/* MDISP */
	HB_P_POPVARIABLE, 43, 0,	/* MVLR_ZERO */
	HB_P_POPVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_POPVARIABLE, 41, 0,	/* MDESCONT */
	HB_P_POPVARIABLE, 40, 0,	/* MBARR_REF */
	HB_P_POPVARIABLE, 39, 0,	/* MIMP_TOTAL */
	HB_P_POPVARIABLE, 34, 0,	/* M_MERC */
	HB_P_POPVARIABLE, 28, 0,	/* MFALTA */
	HB_P_POPVARIABLE, 25, 0,	/* MSALDO_NEG */
	HB_P_POPVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_POPVARIABLE, 23, 0,	/* MALIQ */
	HB_P_POPVARIABLE, 21, 0,	/* MARQ */
	HB_P_POPVARIABLE, 20, 0,	/* MIMP_TIPO */
	HB_P_POPVARIABLE, 18, 0,	/* MOBS */
	HB_P_POPVARIABLE, 1, 0,	/* MPRG */
/* 00262 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 54,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', 'D', 'E', ' ', 'T', 'A', 'B', 'E', 'L', 'A', ' ', 'P', 'R', 'E', 'C', 'O', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'1', '5', '6', 0, 
	HB_P_PUSHMEMVAR, 55, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00325) */
/* 00320 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00325 */ HB_P_LINEOFFSET, 13,	/* 21 */
	HB_P_PUSHSYMNEAR, 56,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'=', 0, 
	HB_P_PUSHINT, 137, 0,	/* 137 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 4, 0,	/* MTRACO */
/* 00342 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 57,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 80,	/* 80 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 0, 
	HB_P_DOSHORT, 5,
/* 00374 */ HB_P_LINEOFFSET, 16,	/* 24 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00404) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00404 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00433) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00433 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'r', 'c', '_', 'd', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00463) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00463 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00492) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00492 */ HB_P_LINEOFFSET, 20,	/* 28 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00521) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00521 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 58,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'c', 'a', 'r', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'a', 'r', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00550) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00550 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHMEMVAR, 59, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 19, 0,	/* MTIPO_IMP */
/* 00563 */ HB_P_LINEOFFSET, 27,	/* 35 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_PR1 */
/* 00572 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 3, 0,	/* MPROMOCAO */
/* 00583 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 38, 0,	/* MALIQUOTA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 16, 0,	/* MCOD_ESPE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_ITEM */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_POPLOCALNEAR, 5,	/* MTOTAL */
/* 00627 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 23, 0,	/* MALIQ */
	HB_P_POPVARIABLE, 12, 0,	/* MSALDO */
/* 00644 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 45, 0,	/* MNCM */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 37, 0,	/* MISENTO */
	HB_P_POPVARIABLE, 11, 0,	/* MTIPO_TAB */
/* 00661 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_POPVARIABLE, 40, 0,	/* MBARR_REF */
/* 00670 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 10, 0,	/* MQUANTD */
/* 00676 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 7,	/* MSUB_GRUPO */
/* 00687 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 36, 0,	/* MGRUPO1 */
/* 00699 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 13, 0,	/* MFORNECE */
/* 00711 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 14, 0,	/* MUF */
/* 00723 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 44, 0,	/* MDISP */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 43, 0,	/* MVLR_ZERO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 41, 0,	/* MDESCONT */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 39, 0,	/* MIMP_TOTAL */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 28, 0,	/* MFALTA */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 27, 0,	/* MPROMO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 25, 0,	/* MSALDO_NEG */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 18, 0,	/* MOBS */
	HB_P_POPVARIABLE, 17, 0,	/* MDETALHE */
/* 00764 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 60,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', '/', ' ', ' ', '/', ' ', ' ', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* MDATA_CAD */
/* 00785 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_POPVARIABLE, 46, 0,	/* MCODFORN */
/* 00806 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 50, 0,	/* MPERC_LUCRO */
/* 00812 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 51, 0,	/* MLOCAL */
/* 00824 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 52, 0,	/* MPESQUISA */
/* 00836 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 61,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00847 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', 'e', 'm', ' ', 'B', 'r', 'a', 'n', 'c', 'o', ' ', 'p', '/', 'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 't', 'o', 'd', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00919 */ HB_P_LINEOFFSET, 47,	/* 55 */
	HB_P_PUSHSYMNEAR, 63,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00934 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 64,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00942 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00976 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'C', 'a', 'b', 'e', 'c', 'a', 'l', 'h', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01015 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01050 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01085 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01120 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01155 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', '-', ' ', 'C', 'o', 'd', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01191 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', '-', ' ', 'C', 'o', 'd', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01226 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', '-', ' ', 'C', 'o', 'd', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01261 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', '-', ' ', 'C', 'o', 'd', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01296 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', 's', ' ', '-', ' ', 'C', 'o', 'd', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01331 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', 'S', 'A', 'L', 'D', 'O', ':', ' ', '[', 'S', ']', 'e', 'm', ' ', 'S', 'a', 'l', 'd', 'o', ' ', '-', ' ', '[', 'C', ']', 'o', 'm', ' ', 'S', 'a', 'l', 'd', 'o', ' ', '-', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01402 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'S', 'a', 'l', 'd', 'o', ' ', 'd', 'o', '(', 's', ')', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01473 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'o', 'm', ' ', 'D', 'e', 't', 'a', 'l', 'h', 'e', ' ', 'd', 'o', '(', 's', ')', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01544 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'o', 'm', ' ', 'O', 'B', 'S', 'E', 'R', 'V', 'A', 'C', 'O', 'E', 'S', ' ', 'd', 'o', '(', 's', ')', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01615 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'P', 'r', 'e', 'c', 'o', ' ', 'd', 'e', ' ', '[', 'V', ']', 'e', 'n', 'd', 'a', ' ', 'o', 'u', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '[', 'C', ']', 'u', 's', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ' ', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01686 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'A', 'l', 'i', 'q', 'u', 'o', 't', 'a', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'n', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01757 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', '/', 'S', 'a', 'l', 'd', 'o', ' ', 'N', 'e', 'g', 'a', 't', 'i', 'v', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01828 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'e', 'm', ' ', 'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01899 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'n', 'a', ' ', 'L', 'i', 's', 't', 'a', ' ', 'F', 'a', 'l', 't', 'a', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01970 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'I', ']', 'S', 'E', 'N', 'T', 'O', 'S', ' ', '[', 'T', ']', 'r', 'i', 'b', 'u', 't', 'a', 'v', 'e', 'l', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02041 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', 'o', 'm', ' ', 'A', 'L', 'I', 'Q', 'U', 'O', 'T', 'A', 'S', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02112 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'P', 'o', 'r', 'd', 'u', 't', 'o', 's', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', 'A', 'p', 'a', 'r', 't', 'i', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02183 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02254 */ HB_P_LINEOFFSET, 73,	/* 81 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '[', 'C', ']', 'o', 'd', 'i', 'g', 'o', ' ', 'B', 'a', 'r', 'r', 'a', ' ', '[', 'R', ']', 'e', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02325 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'D', 'O', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02396 */ HB_P_LINEOFFSET, 75,	/* 83 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'S', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'c', '/', 'V', 'a', 'l', 'o', 'r', ' ', 'Z', 'e', 'r', 'o', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02467 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'N', 'A', 'O', ' ', 'D', 'I', 'S', 'P', 'O', 'N', 'I', 'V', 'E', 'L', ' ', '[', 'S', ']', 'o', ' ', '[', 'N', ']', 'a', 'o', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02538 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', 'r', ' ', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 's', 'o', ' ', '[', 'C', ']', 'o', 'm', ' ', 'N', 'C', 'M', ' ', '[', 'S', ']', 'e', 'm', ' ', 'N', 'C', 'M', ' ', 'o', 'u', ' ', '[', 'G', ']', 'e', 'r', 'a', 'l', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02609 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'o', ' ', 'N', 'C', 'M', ' ', 'e', ' ', 'C', 'S', 'T', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02680 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02751 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'r', ' ', '%', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'e', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02822 */ HB_P_LINEOFFSET, 81,	/* 89 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'd', 'e', ' ', 'L', 'u', 'c', 'r', 'o', ' ', '=', ' ', 'Z', 'E', 'R', 'O', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02893 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'c', 'o', 'm', ' ', 'P', 'e', 'r', 'c', 'e', 'n', 't', 'u', 'a', 'l', ' ', 'd', 'e', ' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02964 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'F', 'i', 'l', 't', 'r', 'a', ' ', 'p', 'o', 'r', ' ', 'L', 'o', 'c', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03035 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'C', 'o', 'p', 'i', 'a', 's', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03106 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'P', 'e', 's', 'q', 'u', 'i', 's', 'a', ' ', 'G', 'e', 'r', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03177 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'c', 'o', 'd', 'e', 'm', 'p', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 19,	/* 19 */
	HB_P_PUSHSYMNEAR, 71,	/* VER_EMP */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_ONE,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 72, 0,	/* MMULT_EMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03259 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'o', 'p', '_', 'c', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03324 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'g', 'r', 'u', 'p', 'o', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 74,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03395 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 03434) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03439) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 34, 0,	/* 34 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MSUB_GRUPO */
	HB_P_PUSHSYMNEAR, 75,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 12,	/* 12 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03520 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 78,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03592 */ HB_P_LINEOFFSET, 91,	/* 99 */
	HB_P_PUSHSYMNEAR, 79,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 69, 0,	/* GETLIST */
/* 03614 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 80,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03652) */
/* 03626 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 81,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'r', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 03640 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03647 */ HB_P_LINEOFFSET, 95,	/* 103 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03652 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 78,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 3,
/* 03666 */ HB_P_LINEOFFSET, 98,	/* 106 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 17,	/* 17 */
	HB_P_PUSHSYMNEAR, 83,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03740 */ HB_P_LINEOFFSET, 99,	/* 107 */
	HB_P_PUSHSYMNEAR, 79,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 69, 0,	/* GETLIST */
/* 03762 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSYMNEAR, 80,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 03800) */
/* 03774 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHSYMNEAR, 81,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'p', 'r', 'g', 0, 
	HB_P_DOSHORT, 1,
/* 03788 */ HB_P_LINEOFFSET, 102,	/* 110 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03795 */ HB_P_LINEOFFSET, 103,	/* 111 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 03800 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 03819) */
/* 03811 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHSYMNEAR, 84,	/* GRUP */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* MERC */
	HB_P_POPLOCALNEAR, 8,	/* MDESC_SUB */
/* 03819 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'a', 'b', '_', 'p', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 86,	/* VER_COND */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03889 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'a', 'b', '_', 'p', 'r', '2', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 86,	/* VER_COND */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03959 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'a', 'b', '_', 'p', 'r', '3', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 86,	/* VER_COND */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04029 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'a', 'b', '_', 'p', 'r', '4', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 86,	/* VER_COND */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04099 */ HB_P_LINEOFFSET, 112,	/* 120 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 't', 'a', 'b', '_', 'p', 'r', '5', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHSYMNEAR, 86,	/* VER_COND */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04169 */ HB_P_LINEOFFSET, 113,	/* 121 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 't', 'i', 'p', 'o', '_', 't', 'a', 'b', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04239 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 's', 'a', 'l', 'd', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04304 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 't', 'a', 'l', 'h', 'e', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 17, 0,	/* MDETALHE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04371 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'o', 'b', 's', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 18, 0,	/* MOBS */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 17, 0,	/* MDETALHE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04444 */ HB_P_LINEOFFSET, 117,	/* 125 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 'p', 'r', '1', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'V', ',', 'C', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 86,	/* 86 */
	HB_P_PUSHSYMNEAR, 54,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'U', 'S', 'T', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'A', 'L', 'T', 'E', 'R', 'A', 'R', ' ', 'T', 'I', 'P', 'O', ' ', 'D', 'E', ' ', 'P', 'R', 'E', 'C', 'O', ' ', 'N', 'O', ' ', 'R', 'E', 'L', 'A', 'T', 'O', 'R', 'I', 'O', ' ', '(', 'T', 'A', 'B', 'E', 'L', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'E', 'C', 'O', ')', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 55, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04596 */ HB_P_LINEOFFSET, 118,	/* 126 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'a', 'l', 'i', 'q', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04660 */ HB_P_LINEOFFSET, 119,	/* 127 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'a', 'l', 'd', 'o', '_', 'n', 'e', 'g', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MSALDO_NEG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04729 */ HB_P_LINEOFFSET, 120,	/* 128 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'p', 'r', 'o', 'm', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 27, 0,	/* MPROMO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04794 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'f', 'a', 'l', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04859 */ HB_P_LINEOFFSET, 122,	/* 130 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'i', 's', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'I', ',', 'T', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04927 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'a', 'l', 'i', 'q', 'u', 'o', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 04997 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05049 */ HB_P_LINEOFFSET, 125,	/* 133 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'm', 'p', '_', 't', 'o', 't', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 39, 0,	/* MIMP_TOTAL */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05118 */ HB_P_LINEOFFSET, 126,	/* 134 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'b', 'a', 'r', 'r', '_', 'r', 'e', 'f', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 40, 0,	/* MBARR_REF */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', ',', 'R', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05186 */ HB_P_LINEOFFSET, 127,	/* 135 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'd', 'e', 's', 'c', 'o', 'n', 't', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 41, 0,	/* MDESCONT */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05253 */ HB_P_LINEOFFSET, 128,	/* 136 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'v', 'l', 'r', '_', 'z', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05321 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'i', 's', 'p', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MDISP */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'N', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05387 */ HB_P_LINEOFFSET, 130,	/* 138 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'n', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 15,	/* 15 */
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', ',', 'C', ',', 'G', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05452 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'i', 'm', 'p', '_', 'n', 'c', 'm', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05519 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'o', 'd', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05586 */ HB_P_LINEOFFSET, 133,	/* 141 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 'i', 'm', 'p', '_', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05655 */ HB_P_LINEOFFSET, 134,	/* 142 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'i', 'm', 'p', '_', 'z', 'e', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHBLOCKSHORT, 13,	/* 13 */
	HB_P_PUSHVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'S', ',', 'N', 0, 
	HB_P_INSTRING,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCKSHORT, 11,	/* 11 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05733 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 34,	/* 34 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'm', 'p', 'e', 'r', 'c', '_', 'l', 'u', 'c', 'r', 'o', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCKSHORT, 23,	/* 23 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 05802) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05819 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'l', 'o', 'c', 'a', 'l', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'@', '!', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05872 */ HB_P_LINEOFFSET, 137,	/* 145 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'm', 'q', 'u', 'a', 'n', 't', 'd', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCKSHORT, 14,	/* 14 */
	HB_P_PUSHVARIABLE, 10, 0,	/* MQUANTD */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 05923) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 05924) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 05942 */ HB_P_LINEOFFSET, 138,	/* 146 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 70,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'p', 'e', 's', 'q', 'u', 'i', 's', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'@', '!', 'K', 'S', '5', '0', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 73, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06002 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_PUSHSYMNEAR, 79,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 69, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 69, 0,	/* GETLIST */
/* 06024 */ HB_P_LINEOFFSET, 141,	/* 149 */
	HB_P_PUSHSYMNEAR, 80,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06039) */
	HB_P_JUMP, 146, 234,	/* -5486 (abs: 00550) */
/* 06039 */ HB_P_LINEOFFSET, 144,	/* 152 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'p', 'r', 'e', 'p', 'a', 'r', 'a', 'n', 'd', 'o', ' ', 'a', 'm', 'b', 'i', 'e', 'n', 't', 'e', ' ', 'p', 'a', 'r', 'a', ' ', 'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 06100 */ HB_P_LINEOFFSET, 145,	/* 153 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 63,	/* 63 (abs: 06173) */
/* 06112 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 13, 0,	/* MFORNECE */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 7, 0,	/* MTIT */
	HB_P_JUMPNEAR, 26,	/* 26 (abs: 06197) */
/* 06173 */ HB_P_LINEOFFSET, 148,	/* 156 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* MTIT */
/* 06197 */ HB_P_LINEOFFSET, 150,	/* 158 */
	HB_P_LOCALNEARSETSTR, 4, 2, 0,	/* MTECLA 2*/
	'1', 0, 
/* 06205 */ HB_P_LINEOFFSET, 151,	/* 159 */
	HB_P_PUSHSYMNEAR, 88,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 117,	/* 117 */
	'O', 'r', 'd', 'e', 'm', ':', ' ', '[', '1', ']', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', '-', ' ', '[', '2', ']', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '-', ' ', '[', '3', ']', 'G', 'r', 'u', 'p', 'o', 's', '/', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', 's', ' ', '-', ' ', '[', '4', ']', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', '-', ' ', '[', '5', ']', 'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', ' ', '-', ' ', '[', '6', ']', 'R', 'e', 'f', '.', 'A', 'u', 'x', '.', ' ', '-', ' ', '[', '7', ']', 'A', 'l', 'i', 'q', '.', 'I', 'C', 'M', 'S', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'1', ',', '2', ',', '3', ',', '4', ',', '6', ',', '7', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* MTECLA */
/* 06351 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 80,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06366) */
	HB_P_JUMP, 75, 233,	/* -5813 (abs: 00550) */
/* 06366 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 106,	/* 106 (abs: 06481) */
/* 06377 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'o', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 06450 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'p', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO */
	HB_P_JUMP, 215, 0,	/* 215 (abs: 06693) */
/* 06481 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 103,	/* 103 (abs: 06593) */
/* 06492 */ HB_P_LINEOFFSET, 159,	/* 167 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06560 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'p', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 102,	/* 102 (abs: 06693) */
/* 06593 */ HB_P_LINEOFFSET, 162,	/* 170 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 64,	/* 64 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'o', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 06666 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'p', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO */
/* 06693 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 34, 0,	/* M_MERC */
/* 06701 */ HB_P_LINEOFFSET, 166,	/* 174 */
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', ' ', ',', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ',', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ',', 'd', 'i', 's', 'p', ' ', ' ', ' ', ' ', ' ', ',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ',', 0, 
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 06766 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'd', 'a', 't', 'a', '_', 'f', 'a', 'l', 't', 'a', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ',', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ',', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ',', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 06828 */ HB_P_LINEOFFSET, 168,	/* 176 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ' ', ',', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ',', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 06890 */ HB_P_LINEOFFSET, 169,	/* 177 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', ' ', ',', 'i', 'n', 'd', '_', 'i', 'c', 'm', 's', ',', 'q', 't', 'd', '_', 'f', 'a', 'l', 't', 'a', ',', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', ' ', ',', 'i', 's', 'e', 'n', 't', 'o', ' ', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 06952 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'b', 'e', 'b', 'i', 'd', 'a', ' ', ' ', ' ', ' ', ',', 'r', 'e', 'f', ' ', ' ', ' ', ' ', ' ', ',', 'p', 'i', 's', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'c', 'o', 'n', 'f', 'i', 's', ' ', ' ', ' ', ',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07014 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'0', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ',', 'n', 'b', 'm', ' ', ' ', ' ', ' ', ' ', ',', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', ' ', ',', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ',', 'l', 'o', 'c', 'a', 'l', ' ', ' ', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07076 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07098 */ HB_P_LINEOFFSET, 174,	/* 182 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07150 */ HB_P_LINEOFFSET, 175,	/* 183 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 35, 1,	/* 291 (abs: 07451) */
/* 07163 */ HB_P_LINEOFFSET, 182,	/* 190 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'm', 'e', 'r', 'c', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'O', 'R', ' ', 'a', 'p', 'l', 'i', 'c', '0', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'O', 'R', ' ', 'r', 'e', 'f', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', ' ', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 52, 0,	/* MPESQUISA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07451 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 07506) */
/* 07463 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 16, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07506 */ HB_P_LINEOFFSET, 187,	/* 195 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 07551) */
/* 07518 */ HB_P_LINEOFFSET, 188,	/* 196 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 07598) */
/* 07551 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 07598) */
/* 07563 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07598 */ HB_P_LINEOFFSET, 192,	/* 200 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 38, 0,	/* MALIQUOTA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 07646) */
/* 07610 */ HB_P_LINEOFFSET, 193,	/* 201 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', 'A', 'N', 'D', ' ', 'b', 'e', 'b', 'i', 'd', 'a', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07646 */ HB_P_LINEOFFSET, 195,	/* 203 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MSALDO_NEG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 07689) */
/* 07658 */ HB_P_LINEOFFSET, 196,	/* 204 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', ' ', '0', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07689 */ HB_P_LINEOFFSET, 198,	/* 206 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 07741) */
/* 07701 */ HB_P_LINEOFFSET, 199,	/* 207 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'a', 'l', 't', 'a', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07741 */ HB_P_LINEOFFSET, 201,	/* 209 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 07796) */
/* 07753 */ HB_P_LINEOFFSET, 202,	/* 210 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 15, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07796 */ HB_P_LINEOFFSET, 204,	/* 212 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 07842) */
/* 07808 */ HB_P_LINEOFFSET, 205,	/* 213 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'l', 'o', 'c', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07842 */ HB_P_LINEOFFSET, 207,	/* 215 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 39,	/* 39 (abs: 07891) */
/* 07854 */ HB_P_LINEOFFSET, 208,	/* 216 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07891 */ HB_P_LINEOFFSET, 210,	/* 218 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 07954) */
/* 07903 */ HB_P_LINEOFFSET, 211,	/* 219 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	' ', 'A', 'N', 'D', ' ', '(', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', ' ', '0', ' ', 'O', 'R', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '=', ' ', '0', ' ', ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07954 */ HB_P_LINEOFFSET, 213,	/* 221 */
	HB_P_PUSHVARIABLE, 27, 0,	/* MPROMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 07999) */
/* 07966 */ HB_P_LINEOFFSET, 214,	/* 222 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 07999 */ HB_P_LINEOFFSET, 216,	/* 224 */
	HB_P_PUSHVARIABLE, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 08041) */
/* 08011 */ HB_P_LINEOFFSET, 217,	/* 225 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08041 */ HB_P_LINEOFFSET, 219,	/* 227 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 08089) */
/* 08053 */ HB_P_LINEOFFSET, 220,	/* 228 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08089 */ HB_P_LINEOFFSET, 222,	/* 230 */
	HB_P_PUSHVARIABLE, 41, 0,	/* MDESCONT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 08169) */
/* 08101 */ HB_P_LINEOFFSET, 223,	/* 231 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08131 */ HB_P_LINEOFFSET, 224,	/* 232 */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', '-', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'D', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 8, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 70,	/* 70 (abs: 08237) */
/* 08169 */ HB_P_LINEOFFSET, 226,	/* 234 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, 'N', 39, ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08237 */ HB_P_LINEOFFSET, 228,	/* 236 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 08299) */
/* 08248 */ HB_P_LINEOFFSET, 229,	/* 237 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 63,	/* 63 (abs: 08360) */
/* 08299 */ HB_P_LINEOFFSET, 230,	/* 238 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 51,	/* 51 (abs: 08360) */
/* 08311 */ HB_P_LINEOFFSET, 231,	/* 239 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', 'L', 'I', 'K', 'E', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 91,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08360 */ HB_P_LINEOFFSET, 233,	/* 241 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 08401) */
/* 08372 */ HB_P_LINEOFFSET, 234,	/* 242 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08401 */ HB_P_LINEOFFSET, 236,	/* 244 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MDISP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 08443) */
/* 08413 */ HB_P_LINEOFFSET, 237,	/* 245 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'i', 's', 'p', ' ', '=', ' ', ' ', 39, 'N', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 75,	/* 75 (abs: 08516) */
/* 08443 */ HB_P_LINEOFFSET, 238,	/* 246 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MDISP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 08516) */
/* 08455 */ HB_P_LINEOFFSET, 239,	/* 247 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'i', 's', 'p', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 'O', 'R', ' ', 'd', 'i', 's', 'p', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'd', 'i', 's', 'p', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08516 */ HB_P_LINEOFFSET, 241,	/* 249 */
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 08573) */
/* 08528 */ HB_P_LINEOFFSET, 242,	/* 250 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', '(', 'n', 'b', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'n', 'b', 'm', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 08635) */
/* 08573 */ HB_P_LINEOFFSET, 243,	/* 251 */
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 08635) */
/* 08585 */ HB_P_LINEOFFSET, 244,	/* 252 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'A', 'N', 'D', ' ', 'n', 'b', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'b', 'm', ' ', '=', ' ', 39, ' ', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08635 */ HB_P_LINEOFFSET, 246,	/* 254 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 08734) */
/* 08647 */ HB_P_LINEOFFSET, 247,	/* 255 */
	HB_P_PUSHVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 08689) */
/* 08659 */ HB_P_LINEOFFSET, 248,	/* 256 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 08734) */
/* 08689 */ HB_P_LINEOFFSET, 249,	/* 257 */
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 08734) */
/* 08698 */ HB_P_LINEOFFSET, 250,	/* 258 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 08734 */ HB_P_LINEOFFSET, 253,	/* 261 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 08783) */
/* 08745 */ HB_P_LINEOFFSET, 254,	/* 262 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', ',', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMP, 226, 0,	/* 226 (abs: 09006) */
/* 08783 */ HB_P_LINEOFFSET, 255,	/* 263 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 08828) */
/* 08794 */ HB_P_LINE, 8, 1,	/* 264 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMP, 181, 0,	/* 181 (abs: 09006) */
/* 08828 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 08874) */
/* 08840 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMP, 135, 0,	/* 135 (abs: 09006) */
/* 08874 */ HB_P_LINE, 11, 1,	/* 267 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'6', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 08919) */
/* 08886 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'e', 'f', ',', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 89,	/* 89 (abs: 09006) */
/* 08919 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 08960) */
/* 08931 */ HB_P_LINE, 14, 1,	/* 270 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 09006) */
/* 08960 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'4', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 08983) */
/* 08972 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 92,	/* IMP_FORN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 18, 223,	/* -8430 (abs: 00550) */
/* 08983 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'3', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09006) */
/* 08995 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 93,	/* IMP_ */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 251, 222,	/* -8453 (abs: 00550) */
/* 09006 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 34, 0,	/* M_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 09028 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09053 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 82,	/* 82 (abs: 09148) */
/* 09068 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 97,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 67,	/* 67 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'e', 'm', ' ', 'n', 'o', 's', 's', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', 's', ' ', 'c', 'o', 'm', ' ', 'e', 's', 't', 'a', 's', ' ', 'c', 'o', 'n', 'd', 'i', 'c', 'o', 'e', 's', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 109, 222,	/* -8595 (abs: 00550) */
/* 09148 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 09155 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 101,	/* 101 (abs: 09274) */
/* 09175 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 09217) */
/* 09194 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 09265) */
/* 09217 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 09251) */
/* 09236 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_ZERO,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPOP,
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 09265) */
/* 09251 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPOP,
/* 09265 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMPNEAR, 146,	/* -110 (abs: 09162) */
/* 09274 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 09321) */
/* 09286 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHSYMNEAR, 98,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
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
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
	HB_P_JUMP, 137, 0,	/* 137 (abs: 09455) */
/* 09321 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 09365) */
/* 09333 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHSYMNEAR, 98,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 17, 0,	/* 17 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 92,	/* 92 (abs: 09455) */
/* 09365 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'5', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 09411) */
/* 09377 */ HB_P_LINE, 45, 1,	/* 301 */
	HB_P_PUSHSYMNEAR, 98,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 46,	/* 46 (abs: 09455) */
/* 09411 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHLOCALNEAR, 4,	/* MTECLA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'7', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 09455) */
/* 09423 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHSYMNEAR, 98,	/* ASORT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 19, 0,	/* 19 */
	2, 0,	/* number of local parameters (2) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* codeblockvar2 */
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 4,
/* 09455 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 09462 */ HB_P_LINE, 50, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 99,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
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
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 09504) */
	HB_P_JUMP, 9, 221,	/* -8951 (abs: 00550) */
/* 09504 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHSYMNEAR, 57,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 4,
/* 09520 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 100,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09557 */ HB_P_LINE, 55, 1,	/* 311 */
	HB_P_PUSHVARIABLE, 20, 0,	/* MIMP_TIPO */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 103, 13,	/* 3431 (abs: 12997) */
/* 09569 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 101, 0,	/* NXLS */
/* 09578 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 09585 */ HB_P_LINE, 58, 1,	/* 314 */
	HB_P_PUSHSYMNEAR, 102,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHVARIABLE, 21, 0,	/* MARQ */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09604 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHSYMNEAR, 103,	/* XLSOPEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 21, 0,	/* MARQ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 101, 0,	/* NXLS */
/* 09618 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_DOSHORT, 4,
/* 09636 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 09646 */ HB_P_LINE, 62, 1,	/* 318 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_DOSHORT, 4,
/* 09664 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 09674 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'D', 'I', 'G', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09698 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'E', 'S', 'C', 'R', 'I', 'C', 'A', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09726 */ HB_P_LINE, 66, 1,	/* 322 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'O', 'D', '.', 'B', 'A', 'R', 'R', 'A', '/', 'R', 'E', 'F', 0, 
	HB_P_DOSHORT, 4,
/* 09758 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 4,
/* 09779 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 09787 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 09835) */
/* 09800 */ HB_P_LINE, 70, 1,	/* 326 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 09810 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'A', 'L', 'D', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09835 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 09886) */
/* 09848 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 09858 */ HB_P_LINE, 75, 1,	/* 331 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'A', 'B', 'E', 'L', 'A', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 09927) */
/* 09886 */ HB_P_LINE, 77, 1,	/* 333 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 09896 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'P', 'R', 'E', 'C', 'O', ' ', 'C', 'U', 'S', 'T', 'O', 0, 
	HB_P_DOSHORT, 4,
/* 09927 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 09987) */
/* 09940 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 09950 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 09987 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 10047) */
/* 10000 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10010 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 10047 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 10107) */
/* 10060 */ HB_P_LINE, 89, 1,	/* 345 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10070 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 10107 */ HB_P_LINE, 92, 1,	/* 348 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 10167) */
/* 10120 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10130 */ HB_P_LINE, 94, 1,	/* 350 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 10167 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 49,	/* 49 (abs: 10227) */
/* 10180 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10190 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 10227 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 10272) */
/* 10240 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10250 */ HB_P_LINE, 102, 1,	/* 358 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 4,
/* 10272 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 10322) */
/* 10285 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10295 */ HB_P_LINE, 106, 1,	/* 362 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 4,
/* 10322 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 10385) */
/* 10335 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10345 */ HB_P_LINE, 110, 1,	/* 366 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 4,
/* 10385 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 10436) */
/* 10398 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10408 */ HB_P_LINE, 114, 1,	/* 370 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 4,
/* 10436 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 10443 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 216, 8,	/* 2264 (abs: 12725) */
/* 10464 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 10474 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_PUSHSYMNEAR, 106,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 10507 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10522 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10545 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10570 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHVARIABLE, 40, 0,	/* MBARR_REF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 10610) */
/* 10583 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 27,	/* 27 (abs: 10635) */
/* 10610 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10635 */ HB_P_LINE, 136, 1,	/* 392 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 4,
/* 10660 */ HB_P_LINE, 137, 1,	/* 393 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10668 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 54,	/* 54 (abs: 10733) */
/* 10681 */ HB_P_LINE, 139, 1,	/* 395 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10691 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10733 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 10801) */
/* 10746 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10756 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 55,	/* 55 (abs: 10854) */
/* 10801 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 10811 */ HB_P_LINE, 147, 1,	/* 403 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 10854 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 2, 1,	/* 258 (abs: 11123) */
/* 10868 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 10877 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 10959 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 10984 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 11068) */
/* 10999 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11009 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 11123) */
/* 11068 */ HB_P_LINE, 157, 1,	/* 413 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11078 */ HB_P_LINE, 158, 1,	/* 414 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 11123 */ HB_P_LINE, 161, 1,	/* 417 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 2, 1,	/* 258 (abs: 11392) */
/* 11137 */ HB_P_LINE, 162, 1,	/* 418 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 11146 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 11228 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11253 */ HB_P_LINE, 165, 1,	/* 421 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 11337) */
/* 11268 */ HB_P_LINE, 166, 1,	/* 422 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11278 */ HB_P_LINE, 167, 1,	/* 423 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 11392) */
/* 11337 */ HB_P_LINE, 169, 1,	/* 425 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11347 */ HB_P_LINE, 170, 1,	/* 426 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 11392 */ HB_P_LINE, 173, 1,	/* 429 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 2, 1,	/* 258 (abs: 11661) */
/* 11406 */ HB_P_LINE, 174, 1,	/* 430 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 11415 */ HB_P_LINE, 175, 1,	/* 431 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 11497 */ HB_P_LINE, 176, 1,	/* 432 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11522 */ HB_P_LINE, 177, 1,	/* 433 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 11606) */
/* 11537 */ HB_P_LINE, 178, 1,	/* 434 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11547 */ HB_P_LINE, 179, 1,	/* 435 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 11661) */
/* 11606 */ HB_P_LINE, 181, 1,	/* 437 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11616 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 11661 */ HB_P_LINE, 185, 1,	/* 441 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 2, 1,	/* 258 (abs: 11930) */
/* 11675 */ HB_P_LINE, 186, 1,	/* 442 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 11684 */ HB_P_LINE, 187, 1,	/* 443 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 11766 */ HB_P_LINE, 188, 1,	/* 444 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 11791 */ HB_P_LINE, 189, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 11875) */
/* 11806 */ HB_P_LINE, 190, 1,	/* 446 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11816 */ HB_P_LINE, 191, 1,	/* 447 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 57,	/* 57 (abs: 11930) */
/* 11875 */ HB_P_LINE, 193, 1,	/* 449 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11885 */ HB_P_LINE, 194, 1,	/* 450 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 11930 */ HB_P_LINE, 197, 1,	/* 453 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 248, 0,	/* 248 (abs: 12189) */
/* 11944 */ HB_P_LINE, 198, 1,	/* 454 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 11954 */ HB_P_LINE, 199, 1,	/* 455 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 11963 */ HB_P_LINE, 200, 1,	/* 456 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 12045 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 12070 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 61,	/* 61 (abs: 12144) */
/* 12085 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 12189) */
/* 12144 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 4,
/* 12189 */ HB_P_LINE, 209, 1,	/* 465 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 162, 0,	/* 162 (abs: 12362) */
/* 12203 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 12213 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 12260) */
/* 12232 */ HB_P_LINE, 212, 1,	/* 468 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'S', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 104,	/* 104 (abs: 12362) */
/* 12260 */ HB_P_LINE, 213, 1,	/* 469 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 12325) */
/* 12279 */ HB_P_LINE, 214, 1,	/* 470 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 12362) */
/* 12325 */ HB_P_LINE, 216, 1,	/* 472 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12362 */ HB_P_LINE, 219, 1,	/* 475 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 12448) */
/* 12375 */ HB_P_LINE, 220, 1,	/* 476 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 12385 */ HB_P_LINE, 221, 1,	/* 477 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 110,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12448 */ HB_P_LINE, 223, 1,	/* 479 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 12474) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 12597) */
/* 12476 */ HB_P_LINE, 224, 1,	/* 480 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 12486 */ HB_P_LINE, 225, 1,	/* 481 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'P', 'R', 'O', 'M', 'O', 'C', 'A', 'O', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 110,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12587 */ HB_P_LINE, 226, 1,	/* 482 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MPROMOCAO */
/* 12597 */ HB_P_LINE, 228, 1,	/* 484 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 12661) */
/* 12610 */ HB_P_LINE, 229, 1,	/* 485 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_INC,
	HB_P_POPVARIABLE, 105, 0,	/* MCOL */
/* 12620 */ HB_P_LINE, 230, 1,	/* 486 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 105, 0,	/* MCOL */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12661 */ HB_P_LINE, 232, 1,	/* 488 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_ITEM */
/* 12671 */ HB_P_LINE, 233, 1,	/* 489 */
	HB_P_PUSHLOCALNEAR, 5,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MTOTAL */
/* 12698 */ HB_P_LINE, 234, 1,	/* 490 */
	HB_P_PUSHLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTOTAL_PRO */
/* 12715 */ HB_P_LINE, 235, 1,	/* 491 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMP, 32, 247,	/* -2272 (abs: 10450) */
/* 12725 */ HB_P_LINE, 236, 1,	/* 492 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 12735 */ HB_P_LINE, 237, 1,	/* 493 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12801 */ HB_P_LINE, 238, 1,	/* 494 */
	HB_P_PUSHVARIABLE, 39, 0,	/* MIMP_TOTAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 133, 0,	/* 133 (abs: 12945) */
/* 12815 */ HB_P_LINE, 239, 1,	/* 495 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 12825 */ HB_P_LINE, 240, 1,	/* 496 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'S', 'a', 'l', 'd', 'o', 's', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'G', 'E', 'R', 'A', 'L', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 4,
/* 12945 */ HB_P_LINE, 242, 1,	/* 498 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 12955 */ HB_P_LINE, 243, 1,	/* 499 */
	HB_P_PUSHSYMNEAR, 104,	/* XLSWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 112,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 4,
/* 12975 */ HB_P_LINE, 244, 1,	/* 500 */
	HB_P_PUSHSYMNEAR, 113,	/* XLSCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 101, 0,	/* NXLS */
	HB_P_DOSHORT, 1,
/* 12986 */ HB_P_LINE, 245, 1,	/* 501 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 100, 207,	/* -12444 (abs: 00550) */
/* 12997 */ HB_P_LINE, 247, 1,	/* 503 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 13004 */ HB_P_LINE, 248, 1,	/* 504 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 10, 0,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 35, 29,	/* 7459 (abs: 20477) */
/* 13021 */ HB_P_LINE, 249, 1,	/* 505 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 5,	/* MTOTAL */
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_ITEM */
/* 13038 */ HB_P_LINE, 250, 1,	/* 506 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* I 0*/
/* 13045 */ HB_P_LINE, 251, 1,	/* 507 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 58, 23,	/* 5946 (abs: 19009) */
/* 13066 */ HB_P_LINE, 252, 1,	/* 508 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 13086) */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 25, 5,	/* 1305 (abs: 14391) */
/* 13089 */ HB_P_LINE, 253, 1,	/* 509 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 13109) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 13121) */
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 246, 4,	/* 1270 (abs: 14391) */
/* 13124 */ HB_P_LINE, 254, 1,	/* 510 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 13134 */ HB_P_LINE, 255, 1,	/* 511 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 13152) */
/* 13144 */ HB_P_LINE, 0, 2,	/* 512 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 13152 */ HB_P_LINE, 2, 2,	/* 514 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 13178 */ HB_P_LINE, 3, 2,	/* 515 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 13193 */ HB_P_LINE, 4, 2,	/* 516 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 13358) */
/* 13207 */ HB_P_LINE, 5, 2,	/* 517 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'a', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'd', 'e', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'm', 'e', 'r', 'c', 'i', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ',', ' ', 'p', 'o', 'r', ' ', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 13333 */ HB_P_LINE, 6, 2,	/* 518 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 13358 */ HB_P_LINE, 8, 2,	/* 520 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 13388 */ HB_P_LINE, 9, 2,	/* 521 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13457 */ HB_P_LINE, 10, 2,	/* 522 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 13494 */ HB_P_LINE, 11, 2,	/* 523 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 13536 */ HB_P_LINE, 12, 2,	/* 524 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 13567 */ HB_P_LINE, 13, 2,	/* 525 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 13617) */
/* 13580 */ HB_P_LINE, 14, 2,	/* 526 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 13617 */ HB_P_LINE, 16, 2,	/* 528 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 13670) */
/* 13630 */ HB_P_LINE, 17, 2,	/* 529 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 13708) */
/* 13670 */ HB_P_LINE, 19, 2,	/* 531 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 13708 */ HB_P_LINE, 21, 2,	/* 533 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 13767) */
/* 13721 */ HB_P_LINE, 22, 2,	/* 534 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13767 */ HB_P_LINE, 24, 2,	/* 536 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 13826) */
/* 13780 */ HB_P_LINE, 25, 2,	/* 537 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13826 */ HB_P_LINE, 27, 2,	/* 539 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 13885) */
/* 13839 */ HB_P_LINE, 28, 2,	/* 540 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13885 */ HB_P_LINE, 30, 2,	/* 542 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 13944) */
/* 13898 */ HB_P_LINE, 31, 2,	/* 543 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 13944 */ HB_P_LINE, 33, 2,	/* 545 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 14003) */
/* 13957 */ HB_P_LINE, 34, 2,	/* 546 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14003 */ HB_P_LINE, 36, 2,	/* 548 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 14048) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 14048 */ HB_P_LINE, 37, 2,	/* 549 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 14107) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 14107 */ HB_P_LINE, 38, 2,	/* 550 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 14151) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 14151 */ HB_P_LINE, 39, 2,	/* 551 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 14197) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 14197 */ HB_P_LINE, 40, 2,	/* 552 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 14258) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 14258 */ HB_P_LINE, 41, 2,	/* 553 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 14302) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 14302 */ HB_P_LINE, 42, 2,	/* 554 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 14327 */ HB_P_LINE, 43, 2,	/* 555 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 14356) */
/* 14340 */ HB_P_LINE, 44, 2,	/* 556 */
	HB_P_PUSHSYMNEAR, 118,	/* PRT_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 14356 */ HB_P_LINE, 46, 2,	/* 558 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 25,	/* 25 (abs: 14391) */
/* 14368 */ HB_P_LINE, 47, 2,	/* 559 */
	HB_P_PUSHSYMNEAR, 119,	/* PRT_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 36, 0,	/* MGRUPO1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MSUB_GRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 14391 */ HB_P_LINE, 51, 2,	/* 563 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 100,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14430 */ HB_P_LINE, 52, 2,	/* 564 */
	HB_P_PUSHSYMNEAR, 106,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 14443 */ HB_P_LINE, 53, 2,	/* 565 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 14458 */ HB_P_LINE, 54, 2,	/* 566 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14488 */ HB_P_LINE, 55, 2,	/* 567 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14523 */ HB_P_LINE, 56, 2,	/* 568 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14558 */ HB_P_LINE, 57, 2,	/* 569 */
	HB_P_PUSHVARIABLE, 40, 0,	/* MBARR_REF */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 14611) */
/* 14571 */ HB_P_LINE, 58, 2,	/* 570 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 16, 0,	/* 16 */
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 44,	/* 44 (abs: 14653) */
/* 14611 */ HB_P_LINE, 60, 2,	/* 572 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 14653 */ HB_P_LINE, 62, 2,	/* 574 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 14688 */ HB_P_LINE, 63, 2,	/* 575 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 14752) */
/* 14701 */ HB_P_LINE, 64, 2,	/* 576 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 14752 */ HB_P_LINE, 66, 2,	/* 578 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 14814) */
/* 14765 */ HB_P_LINE, 67, 2,	/* 579 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 14861) */
/* 14814 */ HB_P_LINE, 69, 2,	/* 581 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 14861 */ HB_P_LINE, 71, 2,	/* 583 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 15206) */
/* 14875 */ HB_P_LINE, 72, 2,	/* 584 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 14884 */ HB_P_LINE, 73, 2,	/* 585 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 14972 */ HB_P_LINE, 74, 2,	/* 586 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 14997 */ HB_P_LINE, 75, 2,	/* 587 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 15157) */
/* 15013 */ HB_P_LINE, 76, 2,	/* 588 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 15094) */
/* 15031 */ HB_P_LINE, 77, 2,	/* 589 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 15206) */
/* 15094 */ HB_P_LINE, 79, 2,	/* 591 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 15206) */
/* 15157 */ HB_P_LINE, 82, 2,	/* 594 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 15206 */ HB_P_LINE, 85, 2,	/* 597 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 15551) */
/* 15220 */ HB_P_LINE, 86, 2,	/* 598 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 15229 */ HB_P_LINE, 87, 2,	/* 599 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 15317 */ HB_P_LINE, 88, 2,	/* 600 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15342 */ HB_P_LINE, 89, 2,	/* 601 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 15502) */
/* 15358 */ HB_P_LINE, 90, 2,	/* 602 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 15439) */
/* 15376 */ HB_P_LINE, 91, 2,	/* 603 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 15551) */
/* 15439 */ HB_P_LINE, 93, 2,	/* 605 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 15551) */
/* 15502 */ HB_P_LINE, 96, 2,	/* 608 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 15551 */ HB_P_LINE, 99, 2,	/* 611 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 15896) */
/* 15565 */ HB_P_LINE, 100, 2,	/* 612 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 15574 */ HB_P_LINE, 101, 2,	/* 613 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 15662 */ HB_P_LINE, 102, 2,	/* 614 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 15687 */ HB_P_LINE, 103, 2,	/* 615 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 15847) */
/* 15703 */ HB_P_LINE, 104, 2,	/* 616 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 15784) */
/* 15721 */ HB_P_LINE, 105, 2,	/* 617 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 15896) */
/* 15784 */ HB_P_LINE, 107, 2,	/* 619 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 15896) */
/* 15847 */ HB_P_LINE, 110, 2,	/* 622 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 15896 */ HB_P_LINE, 113, 2,	/* 625 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 16241) */
/* 15910 */ HB_P_LINE, 114, 2,	/* 626 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 15919 */ HB_P_LINE, 115, 2,	/* 627 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 16007 */ HB_P_LINE, 116, 2,	/* 628 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16032 */ HB_P_LINE, 117, 2,	/* 629 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 16192) */
/* 16048 */ HB_P_LINE, 118, 2,	/* 630 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 16129) */
/* 16066 */ HB_P_LINE, 119, 2,	/* 631 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 16241) */
/* 16129 */ HB_P_LINE, 121, 2,	/* 633 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 16241) */
/* 16192 */ HB_P_LINE, 124, 2,	/* 636 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 16241 */ HB_P_LINE, 127, 2,	/* 639 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 16586) */
/* 16255 */ HB_P_LINE, 128, 2,	/* 640 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 16264 */ HB_P_LINE, 129, 2,	/* 641 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 16352 */ HB_P_LINE, 130, 2,	/* 642 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 16377 */ HB_P_LINE, 131, 2,	/* 643 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 16537) */
/* 16393 */ HB_P_LINE, 132, 2,	/* 644 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 16474) */
/* 16411 */ HB_P_LINE, 133, 2,	/* 645 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 16586) */
/* 16474 */ HB_P_LINE, 135, 2,	/* 647 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 16586) */
/* 16537 */ HB_P_LINE, 138, 2,	/* 650 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 16586 */ HB_P_LINE, 142, 2,	/* 654 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 16833) */
/* 16600 */ HB_P_LINE, 143, 2,	/* 655 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 16657) */
/* 16619 */ HB_P_LINE, 144, 2,	/* 656 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'S', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 0,	/* 179 (abs: 16833) */
/* 16657 */ HB_P_LINE, 145, 2,	/* 657 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 16713) */
/* 16676 */ HB_P_LINE, 146, 2,	/* 658 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'[', 'F', ']', 'S', 'U', 'B', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 122,	/* 122 (abs: 16833) */
/* 16713 */ HB_P_LINE, 147, 2,	/* 659 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 16787) */
/* 16732 */ HB_P_LINE, 148, 2,	/* 660 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 16833) */
/* 16787 */ HB_P_LINE, 150, 2,	/* 662 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16833 */ HB_P_LINE, 153, 2,	/* 665 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 16915) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 110,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 16915 */ HB_P_LINE, 154, 2,	/* 666 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 16960) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 16960 */ HB_P_LINE, 155, 2,	/* 667 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 17020) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17020 */ HB_P_LINE, 156, 2,	/* 668 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 17128) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17128 */ HB_P_LINE, 157, 2,	/* 669 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 17154) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 124,	/* 124 (abs: 17278) */
/* 17156 */ HB_P_LINE, 158, 2,	/* 670 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'e', 'm', ' ', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 17204 */ HB_P_LINE, 159, 2,	/* 671 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 17268 */ HB_P_LINE, 160, 2,	/* 672 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPVARIABLE, 3, 0,	/* MPROMOCAO */
/* 17278 */ HB_P_LINE, 162, 2,	/* 674 */
	HB_P_PUSHVARIABLE, 17, 0,	/* MDETALHE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 9, 6,	/* 1545 (abs: 18834) */
/* 17292 */ HB_P_LINE, 164, 2,	/* 676 */
	HB_P_PUSHSYMNEAR, 122,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 123,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 17313 */ HB_P_LINE, 166, 2,	/* 678 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 125,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSE, 220, 5,	/* 1500 (abs: 18834) */
/* 17337 */ HB_P_LINE, 167, 2,	/* 679 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 126,	/* CODIGO */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 17363) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 127,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 191, 5,	/* 1471 (abs: 18834) */
/* 17366 */ HB_P_LINE, 168, 2,	/* 680 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 128,	/* VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 17391) */
/* 17380 */ HB_P_LINE, 169, 2,	/* 681 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 204,	/* -52 (abs: 17337) */
/* 17391 */ HB_P_LINE, 172, 2,	/* 684 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 't', 'a', 'l', 'h', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 130,	/* CHASSIS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 17448 */ HB_P_LINE, 173, 2,	/* 685 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 131,	/* VLR_VENDA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 17490 */ HB_P_LINE, 174, 2,	/* 686 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* MOBS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 17541) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 132,	/* OBS */
	HB_P_PLUS,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 17545) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 17547 */ HB_P_LINE, 175, 2,	/* 687 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 17570) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 23, 255,	/* -233 (abs: 17337) */
/* 17573 */ HB_P_LINE, 176, 2,	/* 688 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 17598 */ HB_P_LINE, 177, 2,	/* 689 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 17659 */ HB_P_LINE, 178, 2,	/* 690 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 17667 */ HB_P_LINE, 179, 2,	/* 691 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 17677 */ HB_P_LINE, 180, 2,	/* 692 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 17703 */ HB_P_LINE, 181, 2,	/* 693 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 17718 */ HB_P_LINE, 182, 2,	/* 694 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 17748 */ HB_P_LINE, 183, 2,	/* 695 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 17817 */ HB_P_LINE, 184, 2,	/* 696 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 17854 */ HB_P_LINE, 185, 2,	/* 697 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 17896 */ HB_P_LINE, 186, 2,	/* 698 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 17927 */ HB_P_LINE, 187, 2,	/* 699 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 17977) */
/* 17940 */ HB_P_LINE, 188, 2,	/* 700 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 17977 */ HB_P_LINE, 190, 2,	/* 702 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 18030) */
/* 17990 */ HB_P_LINE, 191, 2,	/* 703 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 18068) */
/* 18030 */ HB_P_LINE, 193, 2,	/* 705 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 18068 */ HB_P_LINE, 195, 2,	/* 707 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 18127) */
/* 18081 */ HB_P_LINE, 196, 2,	/* 708 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18127 */ HB_P_LINE, 198, 2,	/* 710 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 18186) */
/* 18140 */ HB_P_LINE, 199, 2,	/* 711 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18186 */ HB_P_LINE, 201, 2,	/* 713 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 18245) */
/* 18199 */ HB_P_LINE, 202, 2,	/* 714 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18245 */ HB_P_LINE, 204, 2,	/* 716 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 18304) */
/* 18258 */ HB_P_LINE, 205, 2,	/* 717 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18304 */ HB_P_LINE, 207, 2,	/* 719 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 18363) */
/* 18317 */ HB_P_LINE, 208, 2,	/* 720 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 18363 */ HB_P_LINE, 210, 2,	/* 722 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 18411) */
/* 18376 */ HB_P_LINE, 211, 2,	/* 723 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 18411 */ HB_P_LINE, 213, 2,	/* 725 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 18473) */
/* 18424 */ HB_P_LINE, 214, 2,	/* 726 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 18473 */ HB_P_LINE, 216, 2,	/* 728 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 18520) */
/* 18486 */ HB_P_LINE, 217, 2,	/* 729 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 18520 */ HB_P_LINE, 219, 2,	/* 731 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 18565) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 18565 */ HB_P_LINE, 220, 2,	/* 732 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 18624) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 18624 */ HB_P_LINE, 221, 2,	/* 733 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 18668) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 18668 */ HB_P_LINE, 222, 2,	/* 734 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 18714) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 18714 */ HB_P_LINE, 223, 2,	/* 735 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 18775) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 18775 */ HB_P_LINE, 224, 2,	/* 736 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 18822) */
/* 18788 */ HB_P_LINE, 225, 2,	/* 737 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 18822 */ HB_P_LINE, 227, 2,	/* 739 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 42, 250,	/* -1494 (abs: 17337) */
/* 18834 */ HB_P_LINE, 232, 2,	/* 744 */
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPVARIABLE, 5, 0,	/* MTOT_ITEM */
/* 18844 */ HB_P_LINE, 233, 2,	/* 745 */
	HB_P_PUSHLOCALNEAR, 5,	/* MTOTAL */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_MULT,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 5,	/* MTOTAL */
/* 18871 */ HB_P_LINE, 234, 2,	/* 746 */
	HB_P_PUSHLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 3,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 6,	/* MTOTAL_PRO */
/* 18888 */ HB_P_LINE, 235, 2,	/* 747 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 18911) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 18999) */
/* 18913 */ HB_P_LINE, 236, 2,	/* 748 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 18938 */ HB_P_LINE, 237, 2,	/* 749 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 18999 */ HB_P_LINE, 239, 2,	/* 751 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* I 1*/
	HB_P_JUMP, 190, 232,	/* -5954 (abs: 13052) */
/* 19009 */ HB_P_LINE, 240, 2,	/* 752 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 19032) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 7, 4,	/* 1031 (abs: 20063) */
/* 19035 */ HB_P_LINE, 241, 2,	/* 753 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 19043 */ HB_P_LINE, 242, 2,	/* 754 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPVARIABLE, 9, 0,	/* MPAG */
/* 19053 */ HB_P_LINE, 243, 2,	/* 755 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MPAG */
	HB_P_PUSHVARIABLE, 7, 0,	/* MTIT */
	HB_P_PUSHVARIABLE, 8, 0,	/* MTIPO */
	HB_P_PUSHVARIABLE, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 19079 */ HB_P_LINE, 244, 2,	/* 756 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 19094 */ HB_P_LINE, 245, 2,	/* 757 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 19124 */ HB_P_LINE, 246, 2,	/* 758 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 19193 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 19230 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 19272 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 19303 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHVARIABLE, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 19353) */
/* 19316 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 19353 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHVARIABLE, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 19406) */
/* 19366 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 19444) */
/* 19406 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 19444 */ HB_P_LINE, 2, 3,	/* 770 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 19503) */
/* 19457 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19503 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 19562) */
/* 19516 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19562 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 19621) */
/* 19575 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19621 */ HB_P_LINE, 11, 3,	/* 779 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 19680) */
/* 19634 */ HB_P_LINE, 12, 3,	/* 780 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19680 */ HB_P_LINE, 14, 3,	/* 782 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 19739) */
/* 19693 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 19739 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_PUSHVARIABLE, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 19784) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'T', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 19784 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 19843) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 19843 */ HB_P_LINE, 19, 3,	/* 787 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 19887) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 19887 */ HB_P_LINE, 20, 3,	/* 788 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 19933) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 19933 */ HB_P_LINE, 21, 3,	/* 789 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 19994) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 19994 */ HB_P_LINE, 22, 3,	/* 790 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 20038) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 20038 */ HB_P_LINE, 23, 3,	/* 791 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 20063 */ HB_P_LINE, 25, 3,	/* 793 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 20078 */ HB_P_LINE, 26, 3,	/* 794 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 20127 */ HB_P_LINE, 27, 3,	/* 795 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 20176 */ HB_P_LINE, 28, 3,	/* 796 */
	HB_P_PUSHVARIABLE, 39, 0,	/* MIMP_TOTAL */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 130, 0,	/* 130 (abs: 20317) */
/* 20190 */ HB_P_LINE, 29, 3,	/* 797 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'S', 'a', 'l', 'd', 'o', 's', ' ', 'd', 'o', 's', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MTOTAL_PRO */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', '-', ' ', 'T', 'o', 't', 'a', 'l', ' ', 'G', 'E', 'R', 'A', 'L', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* MTOTAL */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 20317 */ HB_P_LINE, 31, 3,	/* 799 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 20344 */ HB_P_LINE, 32, 3,	/* 800 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 20359 */ HB_P_LINE, 33, 3,	/* 801 */
	HB_P_PUSHVARIABLE, 42, 0,	/* MOP_CAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 20446) */
/* 20372 */ HB_P_LINE, 34, 3,	/* 802 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 20391 */ HB_P_LINE, 35, 3,	/* 803 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 20446 */ HB_P_LINE, 37, 3,	/* 805 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 20454 */ HB_P_LINE, 38, 3,	/* 806 */
	HB_P_PUSHSYMNEAR, 137,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 20464 */ HB_P_LINE, 39, 3,	/* 807 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_JUMP, 217, 226,	/* -7463 (abs: 13011) */
/* 20477 */ HB_P_LINE, 40, 3,	/* 808 */
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 20519 */ HB_P_LINE, 41, 3,	/* 809 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 20527 */ HB_P_LINE, 42, 3,	/* 810 */
	HB_P_PUSHSYMNEAR, 139,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 223, 177,	/* -20001 (abs: 00550) */
	HB_P_ENDPROC
/* 20555 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_FORN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 52, 3,	/* 820 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_FORN */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MCONT_F 0*/
/* 00020 */ HB_P_LINEOFFSET, 5,	/* 825 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00088 */ HB_P_LINEOFFSET, 6,	/* 826 */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'p', 'o', 'r', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'A', 'l', 'f', 'a', 'b', 'e', 't', 'i', 'c', 'a', 0, 
	HB_P_POPMEMVAR, 8, 0,	/* MTIPO */
/* 00130 */ HB_P_LINEOFFSET, 7,	/* 827 */
	HB_P_PUSHSYMNEAR, 99,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00164) */
/* 00159 */ HB_P_LINEOFFSET, 8,	/* 828 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00164 */ HB_P_LINEOFFSET, 10,	/* 830 */
	HB_P_PUSHSYMNEAR, 57,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 4,
/* 00176 */ HB_P_LINEOFFSET, 12,	/* 832 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 100,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 'P', 'r', 'o', 'c', 'e', 's', 's', 'a', 'd', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00212 */ HB_P_LINEOFFSET, 14,	/* 834 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* M_FORN */
/* 00219 */ HB_P_LINEOFFSET, 15,	/* 835 */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00248 */ HB_P_LINEOFFSET, 16,	/* 836 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'r', 'a', 'z', 'a', 'o', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00275 */ HB_P_LINEOFFSET, 17,	/* 837 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* M_FORN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00296 */ HB_P_LINEOFFSET, 18,	/* 838 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00320 */ HB_P_LINEOFFSET, 19,	/* 839 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00386) */
/* 00333 */ HB_P_LINEOFFSET, 20,	/* 840 */
	HB_P_PUSHSYMNEAR, 97,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00374 */ HB_P_LINEOFFSET, 21,	/* 841 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00381 */ HB_P_LINEOFFSET, 22,	/* 842 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00386 */ HB_P_LINEOFFSET, 24,	/* 844 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 00392 */ HB_P_LINEOFFSET, 25,	/* 845 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHMEMVAR, 10, 0,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 8, 38,	/* 9736 (abs: 10141) */
/* 00408 */ HB_P_LINEOFFSET, 26,	/* 846 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MCONT_F 0*/
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_DUPLICATE,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 140, 0,	/* MTOTAL_PRO */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 141, 0,	/* MTOTAL */
	HB_P_POPMEMVAR, 5, 0,	/* MTOT_ITEM */
/* 00431 */ HB_P_LINEOFFSET, 27,	/* 847 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* MCONT_F 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 17, 33,	/* 8465 (abs: 08912) */
/* 00450 */ HB_P_LINEOFFSET, 28,	/* 848 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_MERC */
/* 00457 */ HB_P_LINEOFFSET, 29,	/* 849 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 0, 
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00472 */ HB_P_LINEOFFSET, 30,	/* 850 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', ' ', ',', ' ', 'm', 'e', 'r', 'c', ' ', ' ', ' ', ' ', ',', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', ' ', ',', ' ', 'd', 'i', 's', 'p', ',', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00534 */ HB_P_LINEOFFSET, 31,	/* 851 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	' ', 'd', 'a', 't', 'a', '_', 'f', 'a', 'l', 't', 'a', ',', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', ',', ' ', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', ',', ' ', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', ',', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00601 */ HB_P_LINEOFFSET, 32,	/* 852 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', ' ', ',', ' ', 'u', 'n', 'i', 'd', 'a', 'd', 'e', ' ', ',', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ',', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ',', ' ', 'v', 'a', 'r', 'e', 'j', 'o', ' ', ' ', ' ', ',', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00668 */ HB_P_LINEOFFSET, 33,	/* 853 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	' ', 's', 'i', 't', 't', 'r', 'i', 'b', ' ', ' ', ',', ' ', 'i', 'n', 'd', '_', 'i', 'c', 'm', 's', ',', ' ', 'q', 't', 'd', '_', 'f', 'a', 'l', 't', 'a', ',', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ',', 'i', 's', 'e', 'n', 't', 'o', ',', 'b', 'e', 'b', 'i', 'd', 'a', ',', 'n', 'b', 'm', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00738 */ HB_P_LINEOFFSET, 34,	/* 854 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00793 */ HB_P_LINEOFFSET, 35,	/* 855 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'i', 's', 'p', ' ', '=', ' ', 39, 'S', 39, ' ', 'O', 'R', ' ', 'd', 'i', 's', 'p', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ')', ' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00863 */ HB_P_LINEOFFSET, 36,	/* 856 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 00908) */
/* 00875 */ HB_P_LINEOFFSET, 37,	/* 857 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 49,	/* 49 (abs: 00955) */
/* 00908 */ HB_P_LINEOFFSET, 38,	/* 858 */
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'T', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 00955) */
/* 00920 */ HB_P_LINEOFFSET, 39,	/* 859 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'i', 's', 'e', 'n', 't', 'o', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00955 */ HB_P_LINEOFFSET, 41,	/* 861 */
	HB_P_PUSHMEMVAR, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00998) */
/* 00967 */ HB_P_LINEOFFSET, 42,	/* 862 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 00998 */ HB_P_LINEOFFSET, 44,	/* 864 */
	HB_P_PUSHMEMVAR, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 01040) */
/* 01010 */ HB_P_LINEOFFSET, 45,	/* 865 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '>', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01040 */ HB_P_LINEOFFSET, 47,	/* 867 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 36,	/* 36 (abs: 01086) */
/* 01052 */ HB_P_LINEOFFSET, 48,	/* 868 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'A', 'N', 'D', ' ', 'l', 'o', 'c', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01086 */ HB_P_LINEOFFSET, 50,	/* 870 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* MCOD_ESPE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 45,	/* 45 (abs: 01141) */
/* 01098 */ HB_P_LINEOFFSET, 51,	/* 871 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 's', 'p', 'e', 'c', 'i', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 16, 0,	/* MCOD_ESPE */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01141 */ HB_P_LINEOFFSET, 53,	/* 873 */
	HB_P_PUSHVARIABLE, 25, 0,	/* MSALDO_NEG */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01189) */
/* 01153 */ HB_P_LINEOFFSET, 54,	/* 874 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '<', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01189 */ HB_P_LINEOFFSET, 56,	/* 876 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 01240) */
/* 01201 */ HB_P_LINEOFFSET, 57,	/* 877 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'f', 'a', 'l', 't', 'a', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01240 */ HB_P_LINEOFFSET, 59,	/* 879 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 01290) */
/* 01252 */ HB_P_LINEOFFSET, 60,	/* 880 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 'c', 'a', 'd', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 26, 0,	/* MDATA_CAD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01290 */ HB_P_LINEOFFSET, 62,	/* 882 */
	HB_P_PUSHVARIABLE, 27, 0,	/* MPROMO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01335) */
/* 01302 */ HB_P_LINEOFFSET, 63,	/* 883 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01335 */ HB_P_LINEOFFSET, 65,	/* 885 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 38,	/* 38 (abs: 01383) */
/* 01347 */ HB_P_LINEOFFSET, 66,	/* 886 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'e', 'm', 'p', 'r', 'e', 's', 'a', ' ', '>', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 24, 0,	/* MCODEMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01383 */ HB_P_LINEOFFSET, 68,	/* 888 */
	HB_P_PUSHVARIABLE, 41, 0,	/* MDESCONT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 01463) */
/* 01395 */ HB_P_LINEOFFSET, 69,	/* 889 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'A', 'N', 'D', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, 'S', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01425 */ HB_P_LINEOFFSET, 70,	/* 890 */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', '-', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ' ', 'D', 'E', 'S', 'C', 'O', 'N', 'T', 'I', 'N', 'U', 'A', 'D', 'O', 0, 
	HB_P_PLUS,
	HB_P_POPMEMVAR, 8, 0,	/* MTIPO */
	HB_P_JUMPNEAR, 69,	/* 69 (abs: 01530) */
/* 01463 */ HB_P_LINEOFFSET, 72,	/* 892 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'A', 'N', 'D', ' ', '(', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, 'N', 39, ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'd', 'e', 's', 'c', 'o', 'n', 't', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01530 */ HB_P_LINEOFFSET, 74,	/* 894 */
	HB_P_PUSHVARIABLE, 43, 0,	/* MVLR_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 01571) */
/* 01542 */ HB_P_LINEOFFSET, 75,	/* 895 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01571 */ HB_P_LINEOFFSET, 77,	/* 897 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MDISP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 01613) */
/* 01583 */ HB_P_LINEOFFSET, 78,	/* 898 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'i', 's', 'p', ' ', '=', ' ', ' ', 39, 'N', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 75,	/* 75 (abs: 01686) */
/* 01613 */ HB_P_LINEOFFSET, 79,	/* 899 */
	HB_P_PUSHVARIABLE, 44, 0,	/* MDISP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 63,	/* 63 (abs: 01686) */
/* 01625 */ HB_P_LINEOFFSET, 80,	/* 900 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	' ', 'A', 'N', 'D', ' ', '(', 'd', 'i', 's', 'p', ' ', '=', ' ', ' ', 39, 'S', 39, ' ', 'O', 'R', ' ', 'd', 'i', 's', 'p', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'd', 'i', 's', 'p', ' ', '=', ' ', 39, ' ', 39, ')', ' ', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01686 */ HB_P_LINEOFFSET, 82,	/* 902 */
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 01743) */
/* 01698 */ HB_P_LINEOFFSET, 83,	/* 903 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	' ', 'A', 'N', 'D', ' ', '(', 'n', 'b', 'm', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'n', 'b', 'm', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 64,	/* 64 (abs: 01805) */
/* 01743 */ HB_P_LINEOFFSET, 84,	/* 904 */
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 01805) */
/* 01755 */ HB_P_LINEOFFSET, 85,	/* 905 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	' ', 'A', 'N', 'D', ' ', 'n', 'b', 'm', ' ', 'I', 'S', ' ', 'N', 'O', 'T', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 'N', 'O', 'T', ' ', 'n', 'b', 'm', ' ', '=', ' ', 39, ' ', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01805 */ HB_P_LINEOFFSET, 87,	/* 907 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 01904) */
/* 01817 */ HB_P_LINEOFFSET, 88,	/* 908 */
	HB_P_PUSHVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 32,	/* 32 (abs: 01859) */
/* 01829 */ HB_P_LINEOFFSET, 89,	/* 909 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', '=', ' ', '0', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 47,	/* 47 (abs: 01904) */
/* 01859 */ HB_P_LINEOFFSET, 90,	/* 910 */
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 01904) */
/* 01868 */ HB_P_LINEOFFSET, 91,	/* 911 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'A', 'N', 'D', ' ', 'p', '_', 'l', 'u', 'c', 'r', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01904 */ HB_P_LINEOFFSET, 95,	/* 915 */
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'm', 'e', 'r', 'c', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 89, 0,	/* CCOMM */
/* 01930 */ HB_P_LINEOFFSET, 96,	/* 916 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 89, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 1, 0,	/* M_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01951 */ HB_P_LINEOFFSET, 97,	/* 917 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01975 */ HB_P_LINEOFFSET, 98,	/* 918 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 01991) */
	HB_P_JUMP, 5, 27,	/* 6917 (abs: 08905) */
/* 01991 */ HB_P_LINEOFFSET, 101,	/* 921 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 02010) */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 207, 4,	/* 1231 (abs: 03241) */
/* 02013 */ HB_P_LINEOFFSET, 102,	/* 922 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 02022 */ HB_P_LINEOFFSET, 103,	/* 923 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 02038) */
/* 02031 */ HB_P_LINEOFFSET, 104,	/* 924 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02038 */ HB_P_LINEOFFSET, 106,	/* 926 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 02063 */ HB_P_LINEOFFSET, 107,	/* 927 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02077 */ HB_P_LINEOFFSET, 108,	/* 928 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 0,	/* 152 (abs: 02239) */
/* 02090 */ HB_P_LINEOFFSET, 109,	/* 929 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'a', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'd', 'e', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'm', 'e', 'r', 'c', 'i', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ',', ' ', 'p', 'o', 'r', ' ', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 02215 */ HB_P_LINEOFFSET, 110,	/* 930 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02239 */ HB_P_LINEOFFSET, 112,	/* 932 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02268 */ HB_P_LINEOFFSET, 113,	/* 933 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02336 */ HB_P_LINEOFFSET, 114,	/* 934 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 02372 */ HB_P_LINEOFFSET, 115,	/* 935 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 02413 */ HB_P_LINEOFFSET, 116,	/* 936 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 02443 */ HB_P_LINEOFFSET, 117,	/* 937 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 02491) */
/* 02455 */ HB_P_LINEOFFSET, 118,	/* 938 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02491 */ HB_P_LINEOFFSET, 120,	/* 940 */
	HB_P_PUSHMEMVAR, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 02542) */
/* 02503 */ HB_P_LINEOFFSET, 121,	/* 941 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 02579) */
/* 02542 */ HB_P_LINEOFFSET, 123,	/* 943 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02579 */ HB_P_LINEOFFSET, 125,	/* 945 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 02636) */
/* 02591 */ HB_P_LINEOFFSET, 126,	/* 946 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02636 */ HB_P_LINEOFFSET, 128,	/* 948 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 02693) */
/* 02648 */ HB_P_LINEOFFSET, 129,	/* 949 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02693 */ HB_P_LINEOFFSET, 131,	/* 951 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 02750) */
/* 02705 */ HB_P_LINEOFFSET, 132,	/* 952 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02750 */ HB_P_LINEOFFSET, 134,	/* 954 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 02807) */
/* 02762 */ HB_P_LINEOFFSET, 135,	/* 955 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02807 */ HB_P_LINEOFFSET, 137,	/* 957 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 02864) */
/* 02819 */ HB_P_LINEOFFSET, 138,	/* 958 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02864 */ HB_P_LINEOFFSET, 141,	/* 961 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 02904) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 02904 */ HB_P_LINEOFFSET, 142,	/* 962 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 02962) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 02962 */ HB_P_LINEOFFSET, 143,	/* 963 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 03007) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 03007 */ HB_P_LINEOFFSET, 144,	/* 964 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 03067) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 03067 */ HB_P_LINEOFFSET, 145,	/* 965 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 03110) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03110 */ HB_P_LINEOFFSET, 146,	/* 966 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03134 */ HB_P_LINEOFFSET, 147,	/* 967 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 03149 */ HB_P_LINEOFFSET, 148,	/* 968 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03209 */ HB_P_LINEOFFSET, 149,	/* 969 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 03224 */ HB_P_LINEOFFSET, 150,	/* 970 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 137, 0,	/* 137 (abs: 03375) */
/* 03241 */ HB_P_LINEOFFSET, 152,	/* 972 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 03257 */ HB_P_LINEOFFSET, 153,	/* 973 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 03271 */ HB_P_LINEOFFSET, 154,	/* 974 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 03286 */ HB_P_LINEOFFSET, 155,	/* 975 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03346 */ HB_P_LINEOFFSET, 156,	/* 976 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 03361 */ HB_P_LINEOFFSET, 157,	/* 977 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03375 */ HB_P_LINEOFFSET, 160,	/* 980 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 142, 0,	/* I */
/* 03381 */ HB_P_LINEOFFSET, 161,	/* 981 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 142, 0,	/* I */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 128, 21,	/* 5504 (abs: 08902) */
/* 03401 */ HB_P_LINEOFFSET, 162,	/* 982 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 03420) */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 247, 4,	/* 1271 (abs: 04691) */
/* 03423 */ HB_P_LINEOFFSET, 163,	/* 983 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 03432 */ HB_P_LINEOFFSET, 164,	/* 984 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03448) */
/* 03441 */ HB_P_LINEOFFSET, 165,	/* 985 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03448 */ HB_P_LINEOFFSET, 167,	/* 987 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 03473 */ HB_P_LINEOFFSET, 168,	/* 988 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03487 */ HB_P_LINEOFFSET, 169,	/* 989 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 152, 0,	/* 152 (abs: 03649) */
/* 03500 */ HB_P_LINEOFFSET, 170,	/* 990 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'L', 'i', 's', 't', 'a', 'g', 'e', 'm', ' ', 'a', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'd', 'a', ' ', 'd', 'e', ' ', 't', 'o', 'd', 'a', 's', ' ', 'a', 's', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', 's', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'a', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'm', 'e', 'r', 'c', 'i', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ',', ' ', 'p', 'o', 'r', ' ', 's', 'i', 't', 'u', 'a', 'c', 'a', 'o', ' ', 't', 'r', 'i', 'b', 'u', 't', 'a', 'r', 'i', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 03625 */ HB_P_LINEOFFSET, 171,	/* 991 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03649 */ HB_P_LINEOFFSET, 173,	/* 993 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03678 */ HB_P_LINEOFFSET, 174,	/* 994 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03746 */ HB_P_LINEOFFSET, 175,	/* 995 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03782 */ HB_P_LINEOFFSET, 176,	/* 996 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 03823 */ HB_P_LINEOFFSET, 177,	/* 997 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 03853 */ HB_P_LINEOFFSET, 178,	/* 998 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 03901) */
/* 03865 */ HB_P_LINEOFFSET, 179,	/* 999 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03901 */ HB_P_LINEOFFSET, 181,	/* 1001 */
	HB_P_PUSHMEMVAR, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 03952) */
/* 03913 */ HB_P_LINEOFFSET, 182,	/* 1002 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 39,	/* 39 (abs: 03989) */
/* 03952 */ HB_P_LINEOFFSET, 184,	/* 1004 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03989 */ HB_P_LINEOFFSET, 186,	/* 1006 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 04046) */
/* 04001 */ HB_P_LINEOFFSET, 187,	/* 1007 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04046 */ HB_P_LINEOFFSET, 189,	/* 1009 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 04103) */
/* 04058 */ HB_P_LINEOFFSET, 190,	/* 1010 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04103 */ HB_P_LINEOFFSET, 192,	/* 1012 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 04160) */
/* 04115 */ HB_P_LINEOFFSET, 193,	/* 1013 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04160 */ HB_P_LINEOFFSET, 195,	/* 1015 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 04217) */
/* 04172 */ HB_P_LINEOFFSET, 196,	/* 1016 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04217 */ HB_P_LINEOFFSET, 198,	/* 1018 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 47,	/* 47 (abs: 04274) */
/* 04229 */ HB_P_LINEOFFSET, 199,	/* 1019 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04274 */ HB_P_LINEOFFSET, 202,	/* 1022 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 04314) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 04314 */ HB_P_LINEOFFSET, 203,	/* 1023 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 04372) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', '.', ' ', ' ', 'D', 'a', 't', '.', 'F', 'a', 'l', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 04372 */ HB_P_LINEOFFSET, 204,	/* 1024 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04415) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04415 */ HB_P_LINEOFFSET, 205,	/* 1025 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 04460) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 04460 */ HB_P_LINEOFFSET, 206,	/* 1026 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 04520) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 04520 */ HB_P_LINEOFFSET, 207,	/* 1027 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04563) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04563 */ HB_P_LINEOFFSET, 208,	/* 1028 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04587 */ HB_P_LINEOFFSET, 209,	/* 1029 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
/* 04602 */ HB_P_LINEOFFSET, 210,	/* 1030 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* M_FORN */
	HB_P_PUSHLOCALNEAR, 3,	/* MCONT_F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04662 */ HB_P_LINEOFFSET, 211,	/* 1031 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '-', 0, 
	HB_P_DOSHORT, 2,
/* 04677 */ HB_P_LINEOFFSET, 212,	/* 1032 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04691 */ HB_P_LINEOFFSET, 214,	/* 1034 */
	HB_P_PUSHSYMNEAR, 67,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 100,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 04729 */ HB_P_LINEOFFSET, 215,	/* 1035 */
	HB_P_PUSHSYMNEAR, 106,	/* PROG_IMP */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 120,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04741 */ HB_P_LINEOFFSET, 216,	/* 1036 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04755 */ HB_P_LINEOFFSET, 217,	/* 1037 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04784 */ HB_P_LINEOFFSET, 218,	/* 1038 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04818 */ HB_P_LINEOFFSET, 219,	/* 1039 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04852 */ HB_P_LINEOFFSET, 220,	/* 1040 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ARRAYPUSH,
	HB_P_LEFT, 16, 0,	/* 16 */
	HB_P_DOSHORT, 1,
/* 04889 */ HB_P_LINEOFFSET, 221,	/* 1041 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 04923 */ HB_P_LINEOFFSET, 222,	/* 1042 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 52,	/* 52 (abs: 04985) */
/* 04935 */ HB_P_LINEOFFSET, 223,	/* 1043 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04985 */ HB_P_LINEOFFSET, 225,	/* 1045 */
	HB_P_PUSHMEMVAR, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 05045) */
/* 04997 */ HB_P_LINEOFFSET, 226,	/* 1046 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 05091) */
/* 05045 */ HB_P_LINEOFFSET, 228,	/* 1048 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05091 */ HB_P_LINEOFFSET, 230,	/* 1050 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 70, 1,	/* 326 (abs: 05427) */
/* 05104 */ HB_P_LINEOFFSET, 231,	/* 1051 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 05112 */ HB_P_LINEOFFSET, 232,	/* 1052 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05199 */ HB_P_LINEOFFSET, 233,	/* 1053 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05223 */ HB_P_LINEOFFSET, 234,	/* 1054 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 05379) */
/* 05238 */ HB_P_LINEOFFSET, 235,	/* 1055 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 05317) */
/* 05255 */ HB_P_LINEOFFSET, 236,	/* 1056 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 112,	/* 112 (abs: 05427) */
/* 05317 */ HB_P_LINEOFFSET, 238,	/* 1058 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 05427) */
/* 05379 */ HB_P_LINEOFFSET, 241,	/* 1061 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05427 */ HB_P_LINEOFFSET, 244,	/* 1064 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 70, 1,	/* 326 (abs: 05763) */
/* 05440 */ HB_P_LINEOFFSET, 245,	/* 1065 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 05448 */ HB_P_LINEOFFSET, 246,	/* 1066 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05535 */ HB_P_LINEOFFSET, 247,	/* 1067 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05559 */ HB_P_LINEOFFSET, 248,	/* 1068 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 144, 0,	/* 144 (abs: 05715) */
/* 05574 */ HB_P_LINEOFFSET, 249,	/* 1069 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 64,	/* 64 (abs: 05653) */
/* 05591 */ HB_P_LINEOFFSET, 250,	/* 1070 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 112,	/* 112 (abs: 05763) */
/* 05653 */ HB_P_LINEOFFSET, 252,	/* 1072 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 50,	/* 50 (abs: 05763) */
/* 05715 */ HB_P_LINEOFFSET, 255,	/* 1075 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 05763 */ HB_P_LINE, 54, 4,	/* 1078 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 06108) */
/* 05777 */ HB_P_LINE, 55, 4,	/* 1079 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 05786 */ HB_P_LINE, 56, 4,	/* 1080 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 05874 */ HB_P_LINE, 57, 4,	/* 1081 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05899 */ HB_P_LINE, 58, 4,	/* 1082 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 06059) */
/* 05915 */ HB_P_LINE, 59, 4,	/* 1083 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 05996) */
/* 05933 */ HB_P_LINE, 60, 4,	/* 1084 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 06108) */
/* 05996 */ HB_P_LINE, 62, 4,	/* 1086 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 06108) */
/* 06059 */ HB_P_LINE, 65, 4,	/* 1089 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06108 */ HB_P_LINE, 68, 4,	/* 1092 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 06453) */
/* 06122 */ HB_P_LINE, 69, 4,	/* 1093 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 06131 */ HB_P_LINE, 70, 4,	/* 1094 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06219 */ HB_P_LINE, 71, 4,	/* 1095 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06244 */ HB_P_LINE, 72, 4,	/* 1096 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 06404) */
/* 06260 */ HB_P_LINE, 73, 4,	/* 1097 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 06341) */
/* 06278 */ HB_P_LINE, 74, 4,	/* 1098 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 06453) */
/* 06341 */ HB_P_LINE, 76, 4,	/* 1100 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 06453) */
/* 06404 */ HB_P_LINE, 79, 4,	/* 1103 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06453 */ HB_P_LINE, 82, 4,	/* 1106 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 78, 1,	/* 334 (abs: 06798) */
/* 06467 */ HB_P_LINE, 83, 4,	/* 1107 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 109, 0,	/* CONS_ */
/* 06476 */ HB_P_LINE, 84, 4,	/* 1108 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'e', 'r', 'c', 'e', 'n', 't', ',', 'p', 'r', 'e', 'c', 'o', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 't', 'a', 'b', 'p', 'g', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 90,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 109, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06564 */ HB_P_LINE, 85, 4,	/* 1109 */
	HB_P_MESSAGE, 94, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 95,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06589 */ HB_P_LINE, 86, 4,	/* 1110 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 109, 0,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 147, 0,	/* 147 (abs: 06749) */
/* 06605 */ HB_P_LINE, 87, 4,	/* 1111 */
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 06686) */
/* 06623 */ HB_P_LINE, 88, 4,	/* 1112 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 114,	/* 114 (abs: 06798) */
/* 06686 */ HB_P_LINE, 90, 4,	/* 1114 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 109, 0,	/* CONS_ */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 51,	/* 51 (abs: 06798) */
/* 06749 */ HB_P_LINE, 93, 4,	/* 1117 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 06798 */ HB_P_LINE, 96, 4,	/* 1120 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 236, 0,	/* 236 (abs: 07045) */
/* 06812 */ HB_P_LINE, 97, 4,	/* 1121 */
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 06869) */
/* 06831 */ HB_P_LINE, 98, 4,	/* 1122 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'I', 'S', 'E', 'N', 'T', 'O', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 179, 0,	/* 179 (abs: 07045) */
/* 06869 */ HB_P_LINE, 99, 4,	/* 1123 */
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 06925) */
/* 06888 */ HB_P_LINE, 100, 4,	/* 1124 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'[', 'F', ']', 'S', 'U', 'B', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 122,	/* 122 (abs: 07045) */
/* 06925 */ HB_P_LINE, 101, 4,	/* 1125 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 06999) */
/* 06944 */ HB_P_LINE, 102, 4,	/* 1126 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 07045) */
/* 06999 */ HB_P_LINE, 104, 4,	/* 1128 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07045 */ HB_P_LINE, 107, 4,	/* 1131 */
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 71,	/* 71 (abs: 07127) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 110,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07127 */ HB_P_LINE, 108, 4,	/* 1132 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 34,	/* 34 (abs: 07172) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 07172 */ HB_P_LINE, 109, 4,	/* 1133 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 07232) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07232 */ HB_P_LINE, 110, 4,	/* 1134 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 07340) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07340 */ HB_P_LINE, 111, 4,	/* 1135 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 07366) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 28, 0,	/* MFALTA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 124,	/* 124 (abs: 07490) */
/* 07368 */ HB_P_LINE, 112, 4,	/* 1136 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'e', 'm', ' ', 'p', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 07416 */ HB_P_LINE, 113, 4,	/* 1137 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07480 */ HB_P_LINE, 114, 4,	/* 1138 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_POPMEMVAR, 3, 0,	/* MPROMOCAO */
/* 07490 */ HB_P_LINE, 116, 4,	/* 1140 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDETALHE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 255, 4,	/* 1279 (abs: 08780) */
/* 07504 */ HB_P_LINE, 118, 4,	/* 1142 */
	HB_P_PUSHSYMNEAR, 122,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 123,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 07525 */ HB_P_LINE, 120, 4,	/* 1144 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 125,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSE, 210, 4,	/* 1234 (abs: 08780) */
/* 07549 */ HB_P_LINE, 121, 4,	/* 1145 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 126,	/* CODIGO */
	HB_P_PUSHLOCALNEAR, 1,	/* M_MERC */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 07575) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 127,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 181, 4,	/* 1205 (abs: 08780) */
/* 07578 */ HB_P_LINE, 122, 4,	/* 1146 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 128,	/* VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 07603) */
/* 07592 */ HB_P_LINE, 123, 4,	/* 1147 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 204,	/* -52 (abs: 07549) */
/* 07603 */ HB_P_LINE, 126, 4,	/* 1150 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 't', 'a', 'l', 'h', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 130,	/* CHASSIS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 07660 */ HB_P_LINE, 127, 4,	/* 1151 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 131,	/* VLR_VENDA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 07702 */ HB_P_LINE, 128, 4,	/* 1152 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* MOBS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 07753) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 132,	/* OBS */
	HB_P_PLUS,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 07757) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 07759 */ HB_P_LINE, 129, 4,	/* 1153 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 230, 3,	/* 998 (abs: 08768) */
/* 07773 */ HB_P_LINE, 130, 4,	/* 1154 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 07798 */ HB_P_LINE, 131, 4,	/* 1155 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07859 */ HB_P_LINE, 132, 4,	/* 1156 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07867 */ HB_P_LINE, 133, 4,	/* 1157 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 07877 */ HB_P_LINE, 134, 4,	/* 1158 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 07903 */ HB_P_LINE, 135, 4,	/* 1159 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 07918 */ HB_P_LINE, 136, 4,	/* 1160 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 07948 */ HB_P_LINE, 137, 4,	/* 1161 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08017 */ HB_P_LINE, 138, 4,	/* 1162 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 08054 */ HB_P_LINE, 139, 4,	/* 1163 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 08096 */ HB_P_LINE, 140, 4,	/* 1164 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 08127 */ HB_P_LINE, 141, 4,	/* 1165 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 08177) */
/* 08140 */ HB_P_LINE, 142, 4,	/* 1166 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08177 */ HB_P_LINE, 144, 4,	/* 1168 */
	HB_P_PUSHMEMVAR, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 08230) */
/* 08190 */ HB_P_LINE, 145, 4,	/* 1169 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', ' ', 'T', 'a', 'b', 'e', 'l', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 08268) */
/* 08230 */ HB_P_LINE, 147, 4,	/* 1171 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08268 */ HB_P_LINE, 149, 4,	/* 1173 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 08327) */
/* 08281 */ HB_P_LINE, 150, 4,	/* 1174 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08327 */ HB_P_LINE, 152, 4,	/* 1176 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 08386) */
/* 08340 */ HB_P_LINE, 153, 4,	/* 1177 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08386 */ HB_P_LINE, 155, 4,	/* 1179 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 08445) */
/* 08399 */ HB_P_LINE, 156, 4,	/* 1180 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08445 */ HB_P_LINE, 158, 4,	/* 1182 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 08504) */
/* 08458 */ HB_P_LINE, 159, 4,	/* 1183 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08504 */ HB_P_LINE, 161, 4,	/* 1185 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 08563) */
/* 08517 */ HB_P_LINE, 162, 4,	/* 1186 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 08563 */ HB_P_LINE, 164, 4,	/* 1188 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 08604) */
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 08604 */ HB_P_LINE, 165, 4,	/* 1189 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 08648) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 08648 */ HB_P_LINE, 166, 4,	/* 1190 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 08709) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 08709 */ HB_P_LINE, 167, 4,	/* 1191 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 08743 */ HB_P_LINE, 168, 4,	/* 1192 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08768 */ HB_P_LINE, 170, 4,	/* 1194 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 52, 251,	/* -1228 (abs: 07549) */
/* 08780 */ HB_P_LINE, 174, 4,	/* 1198 */
	HB_P_PUSHMEMVAR, 5, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPMEMVAR, 5, 0,	/* MTOT_ITEM */
/* 08790 */ HB_P_LINE, 175, 4,	/* 1199 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 88,	/* 88 (abs: 08889) */
/* 08803 */ HB_P_LINE, 176, 4,	/* 1200 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 08828 */ HB_P_LINE, 177, 4,	/* 1201 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08889 */ HB_P_LINE, 179, 4,	/* 1203 */
	HB_P_PUSHVARIABLE, 142, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 142, 0,	/* I */
	HB_P_JUMP, 120, 234,	/* -5512 (abs: 03387) */
/* 08902 */ HB_P_LINE, 180, 4,	/* 1204 */
	HB_P_LOCALNEARADDINT, 3, 1, 0,	/* MCONT_F 1*/
	HB_P_JUMP, 232, 222,	/* -8472 (abs: 00437) */
/* 08912 */ HB_P_LINE, 181, 4,	/* 1205 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 190, 3,	/* 958 (abs: 09881) */
/* 08926 */ HB_P_LINE, 182, 4,	/* 1206 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08934 */ HB_P_LINE, 183, 4,	/* 1207 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 08944 */ HB_P_LINE, 184, 4,	/* 1208 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 08970 */ HB_P_LINE, 185, 4,	/* 1209 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 08985 */ HB_P_LINE, 186, 4,	/* 1210 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09015 */ HB_P_LINE, 187, 4,	/* 1211 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09084 */ HB_P_LINE, 188, 4,	/* 1212 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 09121 */ HB_P_LINE, 189, 4,	/* 1213 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 09163 */ HB_P_LINE, 190, 4,	/* 1214 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 09194 */ HB_P_LINE, 191, 4,	/* 1215 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 09244) */
/* 09207 */ HB_P_LINE, 192, 4,	/* 1216 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09244 */ HB_P_LINE, 194, 4,	/* 1218 */
	HB_P_PUSHMEMVAR, 2, 0,	/* MIMP_PR1 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 42,	/* 42 (abs: 09297) */
/* 09257 */ HB_P_LINE, 195, 4,	/* 1219 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 09335) */
/* 09297 */ HB_P_LINE, 197, 4,	/* 1221 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'P', 'r', 'c', '.', 'C', 'u', 's', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09335 */ HB_P_LINE, 199, 4,	/* 1223 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 09394) */
/* 09348 */ HB_P_LINE, 200, 4,	/* 1224 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 29, 0,	/* MTAB_PR1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09394 */ HB_P_LINE, 202, 4,	/* 1226 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 09453) */
/* 09407 */ HB_P_LINE, 203, 4,	/* 1227 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 30, 0,	/* MTAB_PR2 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09453 */ HB_P_LINE, 205, 4,	/* 1229 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 09512) */
/* 09466 */ HB_P_LINE, 206, 4,	/* 1230 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 31, 0,	/* MTAB_PR3 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09512 */ HB_P_LINE, 208, 4,	/* 1232 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 09571) */
/* 09525 */ HB_P_LINE, 209, 4,	/* 1233 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* MTAB_PR4 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09571 */ HB_P_LINE, 211, 4,	/* 1235 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 09630) */
/* 09584 */ HB_P_LINE, 212, 4,	/* 1236 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'T', 'a', 'b', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 33, 0,	/* MTAB_PR5 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 09630 */ HB_P_LINE, 214, 4,	/* 1238 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 09671) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 09671 */ HB_P_LINE, 215, 4,	/* 1239 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 09715) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 09715 */ HB_P_LINE, 216, 4,	/* 1240 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 09761) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 09761 */ HB_P_LINE, 217, 4,	/* 1241 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 09822) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 09822 */ HB_P_LINE, 218, 4,	/* 1242 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 09856 */ HB_P_LINE, 219, 4,	/* 1243 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 09881 */ HB_P_LINE, 221, 4,	/* 1245 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 09896 */ HB_P_LINE, 222, 4,	/* 1246 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 09945 */ HB_P_LINE, 223, 4,	/* 1247 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', ',', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 09994 */ HB_P_LINE, 224, 4,	/* 1248 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 10021 */ HB_P_LINE, 225, 4,	/* 1249 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 10036 */ HB_P_LINE, 226, 4,	/* 1250 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 10055 */ HB_P_LINE, 227, 4,	/* 1251 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 10110 */ HB_P_LINE, 228, 4,	/* 1252 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10118 */ HB_P_LINE, 229, 4,	/* 1253 */
	HB_P_PUSHSYMNEAR, 137,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 10128 */ HB_P_LINE, 230, 4,	/* 1254 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_JUMP, 244, 217,	/* -9740 (abs: 00398) */
/* 10141 */ HB_P_LINE, 231, 4,	/* 1255 */
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 10183 */ HB_P_LINE, 232, 4,	/* 1256 */
	HB_P_PUSHSYMNEAR, 82,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 10191 */ HB_P_LINE, 233, 4,	/* 1257 */
	HB_P_PUSHSYMNEAR, 139,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 10215 */ HB_P_LINE, 234, 4,	/* 1258 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 10221 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 240, 4,	/* 1264 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* MATRIZ1 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 7,	/* MATRIZ2 */
/* 00016 */ HB_P_LINEOFFSET, 6,	/* 1270 */
	HB_P_PUSHSYMNEAR, 122,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 123,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 1,
/* 00037 */ HB_P_LINEOFFSET, 7,	/* 1271 */
	HB_P_PUSHSYMNEAR, 143,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00044 */ HB_P_LINEOFFSET, 9,	/* 1273 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'm', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'c', 'o', 'l', 'e', 't', 'a', 'n', 'd', 'o', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'p', 'a', 'r', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00116 */ HB_P_LINEOFFSET, 10,	/* 1274 */
	HB_P_PUSHSYMNEAR, 61,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00127 */ HB_P_LINEOFFSET, 11,	/* 1275 */
	HB_P_PUSHSYMNEAR, 127,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 97, 1,	/* 353 (abs: 00487) */
/* 00137 */ HB_P_LINEOFFSET, 12,	/* 1276 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 37, 0,	/* MISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'I', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00160) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 144,	/* ISENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00172) */
/* 00162 */ HB_P_LINEOFFSET, 13,	/* 1277 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 213,	/* -43 (abs: 00127) */
/* 00172 */ HB_P_LINEOFFSET, 16,	/* 1280 */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 145,	/* DESCONT */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00195) */
/* 00185 */ HB_P_LINEOFFSET, 17,	/* 1281 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 190,	/* -66 (abs: 00127) */
/* 00195 */ HB_P_LINEOFFSET, 19,	/* 1283 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00219) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 146,	/* NCM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00231) */
/* 00221 */ HB_P_LINEOFFSET, 20,	/* 1284 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 154,	/* -102 (abs: 00127) */
/* 00231 */ HB_P_LINEOFFSET, 21,	/* 1285 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 45, 0,	/* MNCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00254) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 146,	/* NCM */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00267) */
/* 00256 */ HB_P_LINEOFFSET, 22,	/* 1286 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 119, 255,	/* -137 (abs: 00127) */
/* 00267 */ HB_P_LINEOFFSET, 24,	/* 1288 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00344) */
/* 00279 */ HB_P_LINEOFFSET, 25,	/* 1289 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 49, 0,	/* MIMP_ZERO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00299) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 147,	/* P_LUCRO */
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00312) */
/* 00301 */ HB_P_LINEOFFSET, 26,	/* 1290 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 74, 255,	/* -182 (abs: 00127) */
/* 00312 */ HB_P_LINEOFFSET, 27,	/* 1291 */
	HB_P_FALSE,
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00331) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 147,	/* P_LUCRO */
	HB_P_PUSHVARIABLE, 50, 0,	/* MPERC_LUCRO */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00344) */
/* 00333 */ HB_P_LINEOFFSET, 28,	/* 1292 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 42, 255,	/* -214 (abs: 00127) */
/* 00344 */ HB_P_LINEOFFSET, 31,	/* 1295 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00366) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 148,	/* LOCAL */
	HB_P_PUSHVARIABLE, 51, 0,	/* MLOCAL */
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00379) */
/* 00368 */ HB_P_LINEOFFSET, 32,	/* 1296 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 7, 255,	/* -249 (abs: 00127) */
/* 00379 */ HB_P_LINEOFFSET, 43,	/* 1307 */
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 149,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* MERC */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 150,	/* ESPECIE */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 151,	/* DISP */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 152,	/* SALDO_MER */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 153,	/* DATA_FALTA */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 154,	/* COD_FAB */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 155,	/* DATA_CAD */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 156,	/* PROMOCAO */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 157,	/* EMPRESA */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 158,	/* COD_BARR */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 159,	/* UNIDADE */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 160,	/* PR_VENDA */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 161,	/* PR_VENDA1 */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 162,	/* VAREJO */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 163,	/* SITTRIB */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 164,	/* IND_ICMS */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 165,	/* QTD_FALTA */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 166,	/* GRU_SUB */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 167,	/* NBM */
	HB_P_PUSHSYMNEAR, 85,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 148,	/* LOCAL */
	HB_P_ARRAYGEN, 21, 0,	/* 21 */
	HB_P_DOSHORT, 2,
/* 00476 */ HB_P_LINEOFFSET, 44,	/* 1308 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 155, 254,	/* -357 (abs: 00127) */
/* 00487 */ HB_P_LINEOFFSET, 48,	/* 1312 */
	HB_P_PUSHSYMNEAR, 62,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'G', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'p', '/', 'G', 'r', 'u', 'p', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00557 */ HB_P_LINEOFFSET, 50,	/* 1314 */
	HB_P_PUSHSYMNEAR, 122,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 123,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00577 */ HB_P_LINEOFFSET, 51,	/* 1315 */
	HB_P_PUSHSYMNEAR, 143,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00584 */ HB_P_LINEOFFSET, 53,	/* 1317 */
	HB_P_PUSHSYMNEAR, 127,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 57,	/* 57 (abs: 00648) */
/* 00593 */ HB_P_LINEOFFSET, 54,	/* 1318 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* GRUP */
	HB_P_PUSHALIASEDFIELDNEAR, 166,	/* GRU_SUB */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00625) */
/* 00615 */ HB_P_LINEOFFSET, 55,	/* 1319 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 217,	/* -39 (abs: 00584) */
/* 00625 */ HB_P_LINEOFFSET, 57,	/* 1321 */
	HB_P_PUSHSYMNEAR, 68,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHSYMNEAR, 84,	/* GRUP */
	HB_P_PUSHALIASEDFIELDNEAR, 166,	/* GRU_SUB */
	HB_P_DOSHORT, 2,
/* 00638 */ HB_P_LINEOFFSET, 58,	/* 1322 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 194,	/* -62 (abs: 00584) */
/* 00648 */ HB_P_LINEOFFSET, 60,	/* 1324 */
	HB_P_PUSHSYMNEAR, 99,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00682) */
/* 00677 */ HB_P_LINEOFFSET, 61,	/* 1325 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00682 */ HB_P_LINEOFFSET, 63,	/* 1327 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* L 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* L */
	HB_P_POPLOCALNEAR, 8,	/* I */
/* 00692 */ HB_P_LINEOFFSET, 64,	/* 1328 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* L 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* L */
	HB_P_PUSHMEMVAR, 10, 0,	/* MQUANTD */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 242, 15,	/* 4082 (abs: 04786) */
/* 00707 */ HB_P_LINEOFFSET, 65,	/* 1329 */
	HB_P_ONE,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 00713 */ HB_P_LINEOFFSET, 66,	/* 1330 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 5, 0,	/* MTOT_ITEM */
/* 00719 */ HB_P_LINEOFFSET, 67,	/* 1331 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'T', 'a', 'b', 'e', 'l', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'e', 'c', 'o', 's', 0, 
	HB_P_POPMEMVAR, 7, 0,	/* MTIT */
/* 00743 */ HB_P_LINEOFFSET, 68,	/* 1332 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'o', 'r', ' ', 'O', 'r', 'd', 'e', 'm', ' ', 'd', 'e', ' ', 'G', 'r', 'u', 'p', 'o', 's', ' ', 'e', ' ', 'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', 's', 0, 
	HB_P_POPMEMVAR, 8, 0,	/* MTIPO */
/* 00783 */ HB_P_LINEOFFSET, 69,	/* 1333 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 00808 */ HB_P_LINEOFFSET, 70,	/* 1334 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00822 */ HB_P_LINEOFFSET, 71,	/* 1335 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00850 */ HB_P_LINEOFFSET, 72,	/* 1336 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00881 */ HB_P_LINEOFFSET, 73,	/* 1337 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00905 */ HB_P_LINEOFFSET, 74,	/* 1338 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 00944) */
/* 00917 */ HB_P_LINEOFFSET, 75,	/* 1339 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00944 */ HB_P_LINEOFFSET, 77,	/* 1341 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00976 */ HB_P_LINEOFFSET, 78,	/* 1342 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01019) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01019 */ HB_P_LINEOFFSET, 79,	/* 1343 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01064) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 01064 */ HB_P_LINEOFFSET, 80,	/* 1344 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 01124) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 01124 */ HB_P_LINEOFFSET, 81,	/* 1345 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01157 */ HB_P_LINEOFFSET, 82,	/* 1346 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01181 */ HB_P_LINEOFFSET, 83,	/* 1347 */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* MGRU */
/* 01197 */ HB_P_LINEOFFSET, 84,	/* 1348 */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* MSGRU */
/* 01214 */ HB_P_LINEOFFSET, 85,	/* 1349 */
	HB_P_PUSHSYMNEAR, 118,	/* PRT_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01238 */ HB_P_LINEOFFSET, 86,	/* 1350 */
	HB_P_PUSHSYMNEAR, 119,	/* PRT_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 01280 */ HB_P_LINEOFFSET, 87,	/* 1351 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* I 0*/
/* 01286 */ HB_P_LINEOFFSET, 88,	/* 1352 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 196, 12,	/* 3268 (abs: 04570) */
/* 01305 */ HB_P_LINEOFFSET, 89,	/* 1353 */
	HB_P_PUSHLOCALNEAR, 3,	/* MGRU */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 27, 2,	/* 539 (abs: 01862) */
/* 01326 */ HB_P_LINEOFFSET, 90,	/* 1354 */
	HB_P_PUSHSYMNEAR, 118,	/* PRT_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01351 */ HB_P_LINEOFFSET, 91,	/* 1355 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 245, 1,	/* 501 (abs: 01862) */
/* 01364 */ HB_P_LINEOFFSET, 92,	/* 1356 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01388 */ HB_P_LINEOFFSET, 93,	/* 1357 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01448 */ HB_P_LINEOFFSET, 94,	/* 1358 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01455 */ HB_P_LINEOFFSET, 95,	/* 1359 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 01464 */ HB_P_LINEOFFSET, 96,	/* 1360 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 01489 */ HB_P_LINEOFFSET, 97,	/* 1361 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01503 */ HB_P_LINEOFFSET, 98,	/* 1362 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01531 */ HB_P_LINEOFFSET, 99,	/* 1363 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01562 */ HB_P_LINEOFFSET, 100,	/* 1364 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 01586 */ HB_P_LINEOFFSET, 101,	/* 1365 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 01625) */
/* 01598 */ HB_P_LINEOFFSET, 102,	/* 1366 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01625 */ HB_P_LINEOFFSET, 104,	/* 1368 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01657 */ HB_P_LINEOFFSET, 106,	/* 1370 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 01700) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01700 */ HB_P_LINEOFFSET, 107,	/* 1371 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 01745) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 01745 */ HB_P_LINEOFFSET, 108,	/* 1372 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 01805) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 01805 */ HB_P_LINEOFFSET, 109,	/* 1373 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01838 */ HB_P_LINEOFFSET, 110,	/* 1374 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01862 */ HB_P_LINEOFFSET, 113,	/* 1377 */
	HB_P_PUSHLOCALNEAR, 4,	/* MSGRU */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 46, 2,	/* 558 (abs: 02439) */
/* 01884 */ HB_P_LINEOFFSET, 114,	/* 1378 */
	HB_P_PUSHSYMNEAR, 119,	/* PRT_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 76,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 01928 */ HB_P_LINEOFFSET, 115,	/* 1379 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 245, 1,	/* 501 (abs: 02439) */
/* 01941 */ HB_P_LINEOFFSET, 116,	/* 1380 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 01965 */ HB_P_LINEOFFSET, 117,	/* 1381 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02025 */ HB_P_LINEOFFSET, 118,	/* 1382 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02032 */ HB_P_LINEOFFSET, 119,	/* 1383 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 02041 */ HB_P_LINEOFFSET, 120,	/* 1384 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 02066 */ HB_P_LINEOFFSET, 121,	/* 1385 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02080 */ HB_P_LINEOFFSET, 122,	/* 1386 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02108 */ HB_P_LINEOFFSET, 123,	/* 1387 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02139 */ HB_P_LINEOFFSET, 124,	/* 1388 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 02163 */ HB_P_LINEOFFSET, 125,	/* 1389 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 02202) */
/* 02175 */ HB_P_LINEOFFSET, 126,	/* 1390 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02202 */ HB_P_LINEOFFSET, 128,	/* 1392 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
/* 02234 */ HB_P_LINEOFFSET, 129,	/* 1393 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 02277) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02277 */ HB_P_LINEOFFSET, 130,	/* 1394 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 02322) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 02322 */ HB_P_LINEOFFSET, 131,	/* 1395 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 02382) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 02382 */ HB_P_LINEOFFSET, 132,	/* 1396 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02415 */ HB_P_LINEOFFSET, 133,	/* 1397 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 02439 */ HB_P_LINEOFFSET, 136,	/* 1400 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 02445 */ HB_P_LINEOFFSET, 137,	/* 1401 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 15, 8,	/* 2063 (abs: 04526) */
/* 02466 */ HB_P_LINEOFFSET, 139,	/* 1403 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* MCOD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 02501) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 87,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 15, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 02522) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 22,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 02553) */
/* 02524 */ HB_P_LINEOFFSET, 140,	/* 1404 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 02533 */ HB_P_LINEOFFSET, 141,	/* 1405 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_LESS,
	HB_P_JUMPFALSE, 177, 7,	/* 1969 (abs: 04516) */
	HB_P_JUMP, 184, 7,	/* 1976 (abs: 04526) */
/* 02553 */ HB_P_LINEOFFSET, 146,	/* 1410 */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 151, 7,	/* 1943 (abs: 04514) */
/* 02574 */ HB_P_LINEOFFSET, 148,	/* 1412 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 02600) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 27,	/* 27 (abs: 02628) */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 11, 0,	/* MTIPO_TAB */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 02627) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 02659) */
/* 02630 */ HB_P_LINEOFFSET, 149,	/* 1413 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 02639 */ HB_P_LINEOFFSET, 150,	/* 1414 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_LESS,
	HB_P_JUMPFALSE, 66, 7,	/* 1858 (abs: 04511) */
	HB_P_JUMP, 66, 7,	/* 1858 (abs: 04514) */
/* 02659 */ HB_P_LINEOFFSET, 155,	/* 1419 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 02673 */ HB_P_LINEOFFSET, 156,	/* 1420 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02703 */ HB_P_LINEOFFSET, 157,	/* 1421 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02732 */ HB_P_LINEOFFSET, 158,	/* 1422 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02761 */ HB_P_LINEOFFSET, 159,	/* 1423 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 02818) */
/* 02773 */ HB_P_LINEOFFSET, 160,	/* 1424 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02818 */ HB_P_LINEOFFSET, 162,	/* 1426 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 02859 */ HB_P_LINEOFFSET, 163,	/* 1427 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 02904) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 02904 */ HB_P_LINEOFFSET, 164,	/* 1428 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 02965) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02965 */ HB_P_LINEOFFSET, 165,	/* 1429 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 97,	/* 97 (abs: 03072) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 108,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03072 */ HB_P_LINEOFFSET, 166,	/* 1430 */
	HB_P_PUSHMEMVAR, 5, 0,	/* MTOT_ITEM */
	HB_P_INC,
	HB_P_POPMEMVAR, 5, 0,	/* MTOT_ITEM */
/* 03081 */ HB_P_LINEOFFSET, 167,	/* 1431 */
	HB_P_PUSHMEMVAR, 17, 0,	/* MDETALHE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 113, 3,	/* 881 (abs: 03972) */
/* 03094 */ HB_P_LINEOFFSET, 169,	/* 1433 */
	HB_P_PUSHSYMNEAR, 122,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 123,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03114 */ HB_P_LINEOFFSET, 171,	/* 1435 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 125,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSE, 69, 3,	/* 837 (abs: 03972) */
/* 03138 */ HB_P_LINEOFFSET, 172,	/* 1436 */
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 126,	/* CODIGO */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_MERC */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 50, 3,	/* 818 (abs: 03972) */
/* 03157 */ HB_P_LINEOFFSET, 173,	/* 1437 */
	HB_P_PUSHSYMNEAR, 77,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 128,	/* VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 03180) */
/* 03170 */ HB_P_LINEOFFSET, 174,	/* 1438 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 216,	/* -40 (abs: 03138) */
/* 03180 */ HB_P_LINEOFFSET, 177,	/* 1441 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 't', 'a', 'l', 'h', 'e', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 130,	/* CHASSIS */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', ' ', 'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03236 */ HB_P_LINEOFFSET, 178,	/* 1442 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 131,	/* VLR_VENDA */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03277 */ HB_P_LINEOFFSET, 179,	/* 1443 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 18, 0,	/* MOBS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 03327) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	' ', ' ', 'O', 'B', 'S', '.', ':', 0, 
	HB_P_PUSHSYMNEAR, 124,	/* DETA */
	HB_P_PUSHALIASEDFIELDNEAR, 132,	/* OBS */
	HB_P_PLUS,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 03331) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_DOSHORT, 1,
/* 03333 */ HB_P_LINEOFFSET, 180,	/* 1444 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 106, 2,	/* 618 (abs: 03961) */
/* 03346 */ HB_P_LINEOFFSET, 181,	/* 1445 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03370 */ HB_P_LINEOFFSET, 182,	/* 1446 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03430 */ HB_P_LINEOFFSET, 183,	/* 1447 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03437 */ HB_P_LINEOFFSET, 184,	/* 1448 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 03446 */ HB_P_LINEOFFSET, 185,	/* 1449 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 03471 */ HB_P_LINEOFFSET, 186,	/* 1450 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 03485 */ HB_P_LINEOFFSET, 187,	/* 1451 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	' ', 'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03514 */ HB_P_LINEOFFSET, 188,	/* 1452 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 41,	/* 41 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03582 */ HB_P_LINEOFFSET, 189,	/* 1453 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'L', 'o', 'c', 'a', 'l', ' ', ' ', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 03618 */ HB_P_LINEOFFSET, 190,	/* 1454 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'C', 'o', 'd', '.', 'B', 'a', 'r', 'r', 'a', '/', 'R', 'e', 'f', 0, 
	HB_P_DOSHORT, 1,
/* 03659 */ HB_P_LINEOFFSET, 191,	/* 1455 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 03689 */ HB_P_LINEOFFSET, 192,	/* 1456 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 03737) */
/* 03701 */ HB_P_LINEOFFSET, 193,	/* 1457 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', ' ', ' ', 'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03737 */ HB_P_LINEOFFSET, 195,	/* 1459 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
/* 03774 */ HB_P_LINEOFFSET, 196,	/* 1460 */
	HB_P_PUSHMEMVAR, 23, 0,	/* MALIQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 30,	/* 30 (abs: 03814) */
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 03814 */ HB_P_LINEOFFSET, 197,	/* 1461 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 03874) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 03874 */ HB_P_LINEOFFSET, 198,	/* 1462 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03907 */ HB_P_LINEOFFSET, 199,	/* 1463 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 03937 */ HB_P_LINEOFFSET, 200,	/* 1464 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 03961 */ HB_P_LINEOFFSET, 202,	/* 1466 */
	HB_P_PUSHSYMNEAR, 129,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 193, 252,	/* -831 (abs: 03138) */
/* 03972 */ HB_P_LINEOFFSET, 206,	/* 1470 */
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSE, 245, 1,	/* 501 (abs: 04483) */
/* 03985 */ HB_P_LINEOFFSET, 207,	/* 1471 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04009 */ HB_P_LINEOFFSET, 208,	/* 1472 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04069 */ HB_P_LINEOFFSET, 209,	/* 1473 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04076 */ HB_P_LINEOFFSET, 210,	/* 1474 */
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_INC,
	HB_P_POPMEMVAR, 9, 0,	/* MPAG */
/* 04085 */ HB_P_LINEOFFSET, 211,	/* 1475 */
	HB_P_PUSHSYMNEAR, 116,	/* CABECALHO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* MPAG */
	HB_P_PUSHMEMVAR, 7, 0,	/* MTIT */
	HB_P_PUSHMEMVAR, 8, 0,	/* MTIPO */
	HB_P_PUSHMEMVAR, 1, 0,	/* MPRG */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_DOSHORT, 5,
/* 04110 */ HB_P_LINEOFFSET, 212,	/* 1476 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04124 */ HB_P_LINEOFFSET, 213,	/* 1477 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'C', 'o', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04152 */ HB_P_LINEOFFSET, 214,	/* 1478 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04183 */ HB_P_LINEOFFSET, 215,	/* 1479 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'U', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 04207 */ HB_P_LINEOFFSET, 216,	/* 1480 */
	HB_P_PUSHMEMVAR, 12, 0,	/* MSALDO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 29,	/* 29 (abs: 04246) */
/* 04219 */ HB_P_LINEOFFSET, 217,	/* 1481 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'a', 'l', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04246 */ HB_P_LINEOFFSET, 219,	/* 1483 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	' ', ' ', ' ', 'P', 'r', 'e', 'c', 'o', ' ', '1', 0, 
	HB_P_DOSHORT, 1,
/* 04278 */ HB_P_LINEOFFSET, 220,	/* 1484 */
	HB_P_PUSHVARIABLE, 46, 0,	/* MCODFORN */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 04321) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'F', 'o', 'r', 'n', '.', 0, 
	HB_P_DOSHORT, 1,
/* 04321 */ HB_P_LINEOFFSET, 221,	/* 1485 */
	HB_P_PUSHVARIABLE, 47, 0,	/* MIMP_NCM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 04366) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'N', 'C', 'M', '-', 'C', 'S', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 04366 */ HB_P_LINEOFFSET, 222,	/* 1486 */
	HB_P_PUSHVARIABLE, 48, 0,	/* MIMP_LUCRO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 04426) */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', ' ', '-', ' ', ' ', 'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', 0, 
	HB_P_DOSHORT, 1,
/* 04426 */ HB_P_LINEOFFSET, 223,	/* 1487 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHBYTE, 72,	/* 72 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 04459 */ HB_P_LINEOFFSET, 224,	/* 1488 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04483 */ HB_P_LINEOFFSET, 226,	/* 1490 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
/* 04492 */ HB_P_LINEOFFSET, 227,	/* 1491 */
	HB_P_PUSHSYMNEAR, 96,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_LESS,
	HB_P_JUMPFALSE, 95, 248,	/* -1953 (abs: 02553) */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 04514) */
	HB_P_JUMP, 90, 248,	/* -1958 (abs: 02553) */
/* 04514 */ HB_P_LINEOFFSET, 231,	/* 1495 */
	HB_P_PUSHVARIABLE, 35, 0,	/* F */
	HB_P_INC,
	HB_P_POPVARIABLE, 35, 0,	/* F */
	HB_P_JUMP, 232, 247,	/* -2072 (abs: 02451) */
/* 04526 */ HB_P_LINEOFFSET, 232,	/* 1496 */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 4,	/* MSGRU */
/* 04544 */ HB_P_LINEOFFSET, 233,	/* 1497 */
	HB_P_PUSHSYMNEAR, 168,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MATRIZ2 */
	HB_P_PUSHLOCALNEAR, 8,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 3,	/* MGRU */
/* 04561 */ HB_P_LINEOFFSET, 234,	/* 1498 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* I 1*/
	HB_P_JUMP, 53, 243,	/* -3275 (abs: 01292) */
/* 04570 */ HB_P_LINEOFFSET, 235,	/* 1499 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'e', ' ', 'I', 't', 'e', 'm', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04608 */ HB_P_LINEOFFSET, 236,	/* 1500 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 117,	/* PCOL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 121,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 5, 0,	/* MTOT_ITEM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04649 */ HB_P_LINEOFFSET, 237,	/* 1501 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 114,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 1,
/* 04675 */ HB_P_LINEOFFSET, 238,	/* 1502 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 19, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 04689 */ HB_P_LINEOFFSET, 239,	/* 1503 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 4, 0,	/* MTRACO */
	HB_P_DOSHORT, 1,
/* 04707 */ HB_P_LINEOFFSET, 240,	/* 1504 */
	HB_P_PUSHSYMNEAR, 65,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 66,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* PADC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 134, 0,	/* MEND_FIRM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 135, 0,	/* MCID_FIRM */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', '-', ' ', 'F', 'o', 'n', 'e', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 136, 0,	/* MFONE_FIRM */
	HB_P_PLUS,
	HB_P_PUSHINT, 132, 0,	/* 132 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04761 */ HB_P_LINEOFFSET, 241,	/* 1505 */
	HB_P_PUSHSYMNEAR, 115,	/* __EJECT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 04768 */ HB_P_LINEOFFSET, 242,	/* 1506 */
	HB_P_PUSHSYMNEAR, 137,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 04777 */ HB_P_LINEOFFSET, 243,	/* 1507 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* L 1*/
	HB_P_JUMP, 11, 240,	/* -4085 (abs: 00698) */
/* 04786 */ HB_P_LINEOFFSET, 244,	/* 1508 */
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 138,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 04827 */ HB_P_LINEOFFSET, 245,	/* 1509 */
	HB_P_PUSHSYMNEAR, 139,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'T', 'A', 'B', '_', 'P', 'R', 'E', 'C', 'O', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 04850 */ HB_P_LINEOFFSET, 246,	/* 1510 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 04855 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

