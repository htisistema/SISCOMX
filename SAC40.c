/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SAC40.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SAC40.PRG /q /oC:\hti\SISCOM\SAC40.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.11.21 09:47:50 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SAC40.PRG"

HB_FUNC( SAC40 );
HB_FUNC( SAC40_2 );
HB_FUNC( PRODSERIE );
HB_FUNC( CONS_CUSTO );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( LIMPA );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( DISPBOX );
HB_FUNC_EXTERN( JANELA );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( __MVXRELEASE );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( F4_MERC );
HB_FUNC_EXTERN( F4_MERC1 );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( RECNO );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( VER_ESPE );
HB_FUNC_EXTERN( DEVOUTPICT );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( VER_GRU );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VER_FAB );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( DBGOTO );
HB_FUNC_EXTERN( BOTAO );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( WVW_DRAWIMAGE );
HB_FUNC_EXTERN( WVW_DRAWLABEL );
HB_FUNC_EXTERN( SMEDALBUM );
HB_FUNC_EXTERN( ASC );
HB_FUNC_EXTERN( SAC520 );
HB_FUNC_EXTERN( CONS_CHASS );
HB_FUNC_EXTERN( CONS_SERIAL );
HB_FUNC_EXTERN( SAC5PED3 );
HB_FUNC_EXTERN( SACBAL3 );
HB_FUNC_EXTERN( SACBAL4 );
HB_FUNC_EXTERN( AUTORIZAR );
HB_FUNC_EXTERN( SAC526 );
HB_FUNC_EXTERN( DBSKIP );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( SAVESCREEN );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( DBGOTOP );
HB_FUNC_EXTERN( ASIZE );
HB_FUNC_EXTERN( EOF );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( ACHOICE );
HB_FUNC_EXTERN( RESTSCREEN );
HB_FUNC_EXTERN( COL );
HB_FUNC_EXTERN( MENSAGEM1 );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( VER_CLI );
HB_FUNC_EXTERN( __GETA );
HB_FUNC_EXTERN( OP_SIMNAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SAC40 )
{ "SAC40", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SAC40 )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFABRICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIMPA", {HB_FS_PUBLIC}, {HB_FUNCNAME( LIMPA )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "DISPBOX", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPBOX )}, NULL },
{ "JANELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( JANELA )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "__MVXRELEASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVXRELEASE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "M_SET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "F4_MERC", {HB_FS_PUBLIC}, {HB_FUNCNAME( F4_MERC )}, NULL },
{ "F4_MERC1", {HB_FS_PUBLIC}, {HB_FUNCNAME( F4_MERC1 )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "RECNO", {HB_FS_PUBLIC}, {HB_FUNCNAME( RECNO )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "MORDER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_CAD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_BARR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRI1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "GRU_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ESPECIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FAB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LOCAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DISP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LIVRE_DESC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_ESPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_ESPE )}, NULL },
{ "UNIDADE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DEVOUTPICT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUTPICT )}, NULL },
{ "PESO_LIQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PESO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EST_MIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EST_MAX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "P_LUCRO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ISENTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMISSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAREJO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ICM_SUB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PROMOCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRAMATURA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESC_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_ULT_E", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DAT_ULT_S", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_ATU", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SITTRIB", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DOLAR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRAZO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "POCKET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "SALDO_MER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_VLR_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "A_CUST_MER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_CUST_REA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_PR_MEDIO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "A_PR_VENDA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLR_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUST_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CUST_REAL", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PR_MEDIO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APLIC0", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APLIC1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APLIC2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APLIC3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "APLIC4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_GRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_GRU )}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VER_FAB", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_FAB )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "DBGOTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTO )}, NULL },
{ "BOTAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( BOTAO )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WVW_DRAWIMAGE", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_DRAWIMAGE )}, NULL },
{ "WVW_DRAWLABEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_DRAWLABEL )}, NULL },
{ "SMEDALBUM", {HB_FS_PUBLIC}, {HB_FUNCNAME( SMEDALBUM )}, NULL },
{ "ASC", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASC )}, NULL },
{ "SAC520", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC520 )}, NULL },
{ "SAC40_2", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( SAC40_2 )}, NULL },
{ "CONS_CHASS", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONS_CHASS )}, NULL },
{ "CONS_SERIAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONS_SERIAL )}, NULL },
{ "SAC5PED3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC5PED3 )}, NULL },
{ "CONS_CUSTO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CONS_CUSTO )}, NULL },
{ "SACBAL3", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACBAL3 )}, NULL },
{ "SACBAL4", {HB_FS_PUBLIC}, {HB_FUNCNAME( SACBAL4 )}, NULL },
{ "AUTORIZAR", {HB_FS_PUBLIC}, {HB_FUNCNAME( AUTORIZAR )}, NULL },
{ "SAC526", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAC526 )}, NULL },
{ "DBSKIP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSKIP )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SAVESCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SAVESCREEN )}, NULL },
{ "LCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "DBGOTOP", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBGOTOP )}, NULL },
{ "ASIZE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASIZE )}, NULL },
{ "EOF", {HB_FS_PUBLIC}, {HB_FUNCNAME( EOF )}, NULL },
{ "PED_E", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "RECEBI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "DAT_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "QUANTD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VLR_FAT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "ACHOICE", {HB_FS_PUBLIC}, {HB_FUNCNAME( ACHOICE )}, NULL },
{ "RESTSCREEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( RESTSCREEN )}, NULL },
{ "COL", {HB_FS_PUBLIC}, {HB_FUNCNAME( COL )}, NULL },
{ "PED_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FORNECE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COMPRADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PRODSERIE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PRODSERIE )}, NULL },
{ "MCLIENTE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCPF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCGC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM1", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM1 )}, NULL },
{ "SERIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CODIGO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_SAI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "FORN", {HB_FS_PUBLIC}, {NULL}, NULL },
{ "RAZAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DATA_ENT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERA_ENT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_CLI", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_CLI )}, NULL },
{ "COD_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERA_SAI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEXC_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEXC_CLI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEXC_VEND", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GETA", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GETA )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "OPCAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "Q_MOV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SAC40 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SAC40
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SAC40 = hb_vm_SymbolInit_SAC40;
   #pragma data_seg()
#endif

HB_FUNC( SAC40 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 10, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_LOCALNEARSETSTR, 2, 6, 0,	/* MPRG 6*/
	'S', 'A', 'C', '4', '0', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* MDATA */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_SLDPED */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_SLDCOMP */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_SLDAV */
/* 00036 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 4,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 2,	/* MFABRICA */
	HB_P_PUSHSYMNEAR, 3,	/* CONS_CLI */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* CONS_CLI */
/* 00055 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_PUSHSYMNEAR, 5,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', 'D', 'E', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 6, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00110) */
/* 00105 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00110 */ HB_P_LINEOFFSET, 6,	/* 14 */
	HB_P_LOCALNEARSETINT, 3, 40, 0,	/* LBA 40*/
/* 00116 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 120, 0,	/* CBA 120*/
/* 00122 */ HB_P_LINEOFFSET, 9,	/* 17 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'e', 's', 'p', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'e', 's', 'p', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00151) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00151 */ HB_P_LINEOFFSET, 10,	/* 18 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 's', 'e', 'r', 'i', 'e', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'e', 'r', 'i', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00182) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00182 */ HB_P_LINEOFFSET, 11,	/* 19 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00211) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00211 */ HB_P_LINEOFFSET, 12,	/* 20 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00241) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00241 */ HB_P_LINEOFFSET, 14,	/* 22 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00270) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00270 */ HB_P_LINEOFFSET, 15,	/* 23 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'S', 'A', 'C', 'P', 'E', 'D', '_', 'E', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00301) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00301 */ HB_P_LINEOFFSET, 17,	/* 25 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'e', 'r', 'c', '_', 'd', 'e', 't', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'd', 'e', 't', 'a', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00331) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00331 */ HB_P_LINEOFFSET, 18,	/* 26 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	's', 'a', 'c', 'c', 'l', 'i', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'c', 'l', 'i', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00358) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00358 */ HB_P_LINEOFFSET, 19,	/* 27 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'i', 'n', 's', 'o', 'p', 'e', 'r', 'a', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	's', 'e', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00387) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00387 */ HB_P_LINEOFFSET, 21,	/* 29 */
	HB_P_PUSHSYMNEAR, 8,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_DOSHORT, 2,
/* 00411 */ HB_P_LINEOFFSET, 22,	/* 30 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', 'd', 'e', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 7,
/* 00454 */ HB_P_LINEOFFSET, 23,	/* 31 */
	HB_P_PUSHSYMNEAR, 10,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 00468 */ HB_P_LINEOFFSET, 25,	/* 33 */
	HB_P_PUSHSYMNEAR, 12,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHLOCALNEAR, 3,	/* LBA */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_DOSHORT, 4,
/* 00484 */ HB_P_LINEOFFSET, 26,	/* 34 */
	HB_P_PUSHSYMNEAR, 13,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00493 */ HB_P_LINEOFFSET, 28,	/* 36 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
/* 00507 */ HB_P_LINEOFFSET, 30,	/* 38 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_POPLOCALNEAR, 7,	/* MPR_VENDA */
/* 00516 */ HB_P_LINEOFFSET, 31,	/* 39 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MFABRICA */
/* 00528 */ HB_P_LINEOFFSET, 32,	/* 40 */
	HB_P_PUSHLOCALNEAR, 1,	/* MPROD */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00548) */
/* 00536 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPROD */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 00548 */ HB_P_LINEOFFSET, 35,	/* 43 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00603 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00643 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 66,	/* 66 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'D', 'a', 't', 'a', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00675 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'e', ' ', 'B', 'a', 'r', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00708 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00749 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'p', '/', 'N', 'o', 't', 'a', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00790 */ HB_P_LINEOFFSET, 42,	/* 50 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00831 */ HB_P_LINEOFFSET, 43,	/* 51 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'S', 'u', 'b', '-', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00872 */ HB_P_LINEOFFSET, 44,	/* 52 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', '.', 'E', 's', 'p', 'e', 'c', 'i', 'e', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00913 */ HB_P_LINEOFFSET, 45,	/* 53 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'F', 'a', 'b', 'r', 'i', 'c', 'a', 'n', 't', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00954 */ HB_P_LINEOFFSET, 46,	/* 54 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00969 */ HB_P_LINEOFFSET, 48,	/* 56 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'L', 'o', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01010 */ HB_P_LINEOFFSET, 49,	/* 57 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', ' ', '[', 'S', '/', 'N', ']', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01051 */ HB_P_LINEOFFSET, 50,	/* 58 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'L', 'I', 'V', 'R', 'E', ' ', '[', 'S', '/', 'N', ']', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01092 */ HB_P_LINEOFFSET, 51,	/* 59 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'n', 'i', 'd', 'a', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01133 */ HB_P_LINEOFFSET, 52,	/* 60 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'e', 's', 'o', ' ', 'L', 'i', 'q', 'u', 'i', 'd', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01174 */ HB_P_LINEOFFSET, 53,	/* 61 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'e', 's', 'o', ' ', 'B', 'r', 'u', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01215 */ HB_P_LINEOFFSET, 54,	/* 62 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'i', 'n', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01256 */ HB_P_LINEOFFSET, 55,	/* 63 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01297 */ HB_P_LINEOFFSET, 56,	/* 64 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'L', 'u', 'c', 'r', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01338 */ HB_P_LINEOFFSET, 57,	/* 65 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 's', 'e', 'n', 't', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01379 */ HB_P_LINEOFFSET, 58,	/* 66 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'm', 'i', 's', 's', 'a', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01420 */ HB_P_LINEOFFSET, 59,	/* 67 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'V', 'e', 'n', 'd', 'a', ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'a', ' ', '(', '%', ')', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01461 */ HB_P_LINEOFFSET, 60,	/* 68 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'I', 'C', 'M', ' ', 'S', 'u', 'b', 's', 't', 'i', 't', 'u', 't', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01502 */ HB_P_LINEOFFSET, 61,	/* 69 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'F', 'i', 's', 'c', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01543 */ HB_P_LINEOFFSET, 62,	/* 70 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'r', 'o', 'm', 'o', 'c', 'a', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01584 */ HB_P_LINEOFFSET, 63,	/* 71 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'V', 'o', 'l', 'u', 'm', 'e', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01625 */ HB_P_LINEOFFSET, 64,	/* 72 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'D', 'e', 's', 'c', 'o', 'n', 't', 'o', ' ', '(', '%', ')', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01666 */ HB_P_LINEOFFSET, 65,	/* 73 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'l', 't', 'i', 'm', 'a', ' ', 'E', 'n', 't', 'r', 'a', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01707 */ HB_P_LINEOFFSET, 66,	/* 74 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'l', 't', 'i', 'm', 'a', ' ', 'S', 'a', 'i', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01748 */ HB_P_LINEOFFSET, 67,	/* 75 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'U', 'l', 't', 'i', 'm', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01789 */ HB_P_LINEOFFSET, 68,	/* 76 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'S', 'T', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01830 */ HB_P_LINEOFFSET, 69,	/* 77 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'N', 'C', 'M', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01871 */ HB_P_LINEOFFSET, 70,	/* 78 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'A', 'j', 'u', 's', 't', 'e', ' ', 'e', 'm', ' ', 'D', 'o', 'l', 'a', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01912 */ HB_P_LINEOFFSET, 71,	/* 79 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'P', 'r', 'a', 'z', 'o', ' ', 'M', 'a', 'x', 'i', 'm', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01953 */ HB_P_LINEOFFSET, 72,	/* 80 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'E', 'n', 'v', 'i', 'a', ' ', 'p', '/', 'A', 'P', 'P', '.', '.', '.', ' ', '[', 'S', '/', 'N', ']', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01994 */ HB_P_LINEOFFSET, 74,	/* 82 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02010 */ HB_P_LINEOFFSET, 76,	/* 84 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'e', 'd', '.', 'C', 'o', 'm', 'p', 'r', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02048 */ HB_P_LINEOFFSET, 77,	/* 85 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'H', 'a', 'v', 'e', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02086 */ HB_P_LINEOFFSET, 78,	/* 86 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'e', 'd', '.', 'P', 'e', 'n', 'd', 'e', 'n', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02124 */ HB_P_LINEOFFSET, 79,	/* 87 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02162 */ HB_P_LINEOFFSET, 80,	/* 88 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'a', 'l', 'd', 'o', ' ', 'F', 'i', 's', 'i', 'c', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02200 */ HB_P_LINEOFFSET, 82,	/* 90 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02216 */ HB_P_LINEOFFSET, 83,	/* 91 */
	HB_P_PUSHSYMNEAR, 21,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'A', 'n', 't', 'e', 'r', 'i', 'o', 'r', 'e', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 02257 */ HB_P_LINEOFFSET, 84,	/* 92 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02295 */ HB_P_LINEOFFSET, 85,	/* 93 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02333 */ HB_P_LINEOFFSET, 86,	/* 94 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02371 */ HB_P_LINEOFFSET, 87,	/* 95 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02409 */ HB_P_LINEOFFSET, 88,	/* 96 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'e', 'c', 'o', ' ', 'V', 'e', 'n', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02447 */ HB_P_LINEOFFSET, 89,	/* 97 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02463 */ HB_P_LINEOFFSET, 90,	/* 98 */
	HB_P_PUSHSYMNEAR, 21,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 'A', 't', 'u', 'a', 'i', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 02500 */ HB_P_LINEOFFSET, 92,	/* 100 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'V', 'a', 'l', 'o', 'r', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02538 */ HB_P_LINEOFFSET, 93,	/* 101 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02576 */ HB_P_LINEOFFSET, 94,	/* 102 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'R', 'e', 'a', 'l', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02614 */ HB_P_LINEOFFSET, 95,	/* 103 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02652 */ HB_P_LINEOFFSET, 96,	/* 104 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'P', 'r', 'e', 'c', 'o', ' ', 'V', 'e', 'n', 'd', 'a', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02690 */ HB_P_LINEOFFSET, 97,	/* 105 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02706 */ HB_P_LINEOFFSET, 98,	/* 106 */
	HB_P_PUSHSYMNEAR, 21,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', 'L', 'u', 'c', 'r', 'o', ' ', 'e', 'm', ' ', 'R', 'e', 'l', 'a', 'c', 'a', 'o', ' ', 'a', 'o', 's', ' ', 'P', 'r', 'e', 'c', 'o', 's', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 02757 */ HB_P_LINEOFFSET, 99,	/* 107 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'U', 'C', 'R', 'O', '/', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02795 */ HB_P_LINEOFFSET, 100,	/* 108 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'L', 'U', 'C', 'R', 'O', '/', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'D', 'I', 'O', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02833 */ HB_P_LINEOFFSET, 101,	/* 109 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02841 */ HB_P_LINEOFFSET, 104,	/* 112 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_PUSHLOCALNEAR, 4,	/* CBA */
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 02856 */ HB_P_LINEOFFSET, 105,	/* 113 */
	HB_P_PUSHSYMNEAR, 21,	/* JANELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 39,	/* 39 */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	' ', 'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', ' ', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 02899 */ HB_P_LINEOFFSET, 106,	/* 114 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'A', 'p', 'l', 'i', 'c', 'a', 'c', 'a', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02940 */ HB_P_LINEOFFSET, 108,	/* 116 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 14, 0,	/* 14 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	1, 0,	/* MPROD */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHNIL,
	HB_P_EQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 03011 */ HB_P_LINEOFFSET, 109,	/* 117 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 03033 */ HB_P_LINEOFFSET, 110,	/* 118 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 03096) */
/* 03045 */ HB_P_LINEOFFSET, 111,	/* 119 */
	HB_P_PUSHSYMNEAR, 29,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'f', 'a', 'b', 'r', 'i', 'c', 'a', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '1', 0, 
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'd', 'a', 't', 'a', '2', 0, 
	HB_P_DOSHORT, 4,
	HB_P_JUMP, 187, 14,	/* 3771 (abs: 06864) */
/* 03096 */ HB_P_LINEOFFSET, 114,	/* 122 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 03154) */
/* 03108 */ HB_P_LINEOFFSET, 115,	/* 123 */
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 93,	/* 93 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 03132) */
	HB_P_PUSHSYMNEAR, 32,	/* F4_MERC */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 03137) */
	HB_P_PUSHSYMNEAR, 33,	/* F4_MERC1 */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 1, 0,	/* MCOD_MERC */
/* 03140 */ HB_P_LINEOFFSET, 116,	/* 124 */
	HB_P_PUSHSYMNEAR, 10,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 03154 */ HB_P_LINEOFFSET, 121,	/* 129 */
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 03162 */ HB_P_LINEOFFSET, 123,	/* 131 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 36,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 40,	/* 40 (abs: 03224) */
/* 03186 */ HB_P_LINEOFFSET, 124,	/* 132 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'n', 'a', 'o', ' ', 'C', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 63, 245,	/* -2753 (abs: 00468) */
/* 03224 */ HB_P_LINEOFFSET, 128,	/* 136 */
	HB_P_PUSHSYMNEAR, 39,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 6,	/* POINT */
/* 03233 */ HB_P_LINEOFFSET, 129,	/* 137 */
	HB_P_PUSHSYMNEAR, 40,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 41, 0,	/* MORDER */
/* 03243 */ HB_P_LINEOFFSET, 130,	/* 138 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03252 */ HB_P_LINEOFFSET, 131,	/* 139 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_DOSHORT, 1,
/* 03271 */ HB_P_LINEOFFSET, 132,	/* 140 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 81,	/* 81 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 43,	/* DATA_CAD */
	HB_P_DOSHORT, 1,
/* 03290 */ HB_P_LINEOFFSET, 134,	/* 142 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 44,	/* COD_BARR */
	HB_P_DOSHORT, 1,
/* 03309 */ HB_P_LINEOFFSET, 135,	/* 143 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* MERC */
	HB_P_DOSHORT, 1,
/* 03329 */ HB_P_LINEOFFSET, 136,	/* 144 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 45,	/* DESCRI */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 46,	/* DESCRI1 */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03354 */ HB_P_LINEOFFSET, 137,	/* 145 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 03382 */ HB_P_LINEOFFSET, 138,	/* 146 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* GRU_SUB */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 03411 */ HB_P_LINEOFFSET, 139,	/* 147 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* ESPECIE */
	HB_P_DOSHORT, 1,
/* 03431 */ HB_P_LINEOFFSET, 140,	/* 148 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* COD_FAB */
	HB_P_DOSHORT, 1,
/* 03451 */ HB_P_LINEOFFSET, 142,	/* 150 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 51,	/* LOCAL */
	HB_P_DOSHORT, 1,
/* 03471 */ HB_P_LINEOFFSET, 143,	/* 151 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 52,	/* DISP */
	HB_P_DOSHORT, 1,
/* 03491 */ HB_P_LINEOFFSET, 144,	/* 152 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 53,	/* LIVRE_DESC */
	HB_P_DOSHORT, 1,
/* 03511 */ HB_P_LINEOFFSET, 145,	/* 153 */
	HB_P_PUSHSYMNEAR, 54,	/* VER_ESPE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 49,	/* ESPECIE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 5,
/* 03533 */ HB_P_LINEOFFSET, 146,	/* 154 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03542 */ HB_P_LINEOFFSET, 147,	/* 155 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 55,	/* UNIDADE */
	HB_P_DOSHORT, 1,
/* 03562 */ HB_P_LINEOFFSET, 148,	/* 156 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 57,	/* PESO_LIQ */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03593 */ HB_P_LINEOFFSET, 149,	/* 157 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 58,	/* PESO */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03624 */ HB_P_LINEOFFSET, 150,	/* 158 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 59,	/* EST_MIN */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03655 */ HB_P_LINEOFFSET, 151,	/* 159 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 60,	/* EST_MAX */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03686 */ HB_P_LINEOFFSET, 152,	/* 160 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 61,	/* P_LUCRO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03715 */ HB_P_LINEOFFSET, 153,	/* 161 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 62,	/* ISENTO */
	HB_P_DOSHORT, 1,
/* 03735 */ HB_P_LINEOFFSET, 154,	/* 162 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 63,	/* COMISSAO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03764 */ HB_P_LINEOFFSET, 155,	/* 163 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 64,	/* VAREJO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03793 */ HB_P_LINEOFFSET, 156,	/* 164 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 65,	/* ICM_SUB */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03822 */ HB_P_LINEOFFSET, 157,	/* 165 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 66,	/* COD_FIS */
	HB_P_DOSHORT, 1,
/* 03842 */ HB_P_LINEOFFSET, 158,	/* 166 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PROMOCAO */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03871 */ HB_P_LINEOFFSET, 159,	/* 167 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 68,	/* GRAMATURA */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03901 */ HB_P_LINEOFFSET, 160,	/* 168 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 69,	/* DESC_MERC */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 03930 */ HB_P_LINEOFFSET, 161,	/* 169 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 70,	/* DAT_ULT_E */
	HB_P_DOSHORT, 1,
/* 03950 */ HB_P_LINEOFFSET, 162,	/* 170 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 71,	/* DAT_ULT_S */
	HB_P_DOSHORT, 1,
/* 03970 */ HB_P_LINEOFFSET, 163,	/* 171 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 72,	/* DATA_ATU */
	HB_P_DOSHORT, 1,
/* 03990 */ HB_P_LINEOFFSET, 164,	/* 172 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 73,	/* SITTRIB */
	HB_P_DOSHORT, 1,
/* 04010 */ HB_P_LINEOFFSET, 165,	/* 173 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 74,	/* NBM */
	HB_P_DOSHORT, 1,
/* 04030 */ HB_P_LINEOFFSET, 166,	/* 174 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 75,	/* DOLAR */
	HB_P_DOSHORT, 1,
/* 04050 */ HB_P_LINEOFFSET, 167,	/* 175 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 76,	/* PRAZO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04076 */ HB_P_LINEOFFSET, 168,	/* 176 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 33,	/* 33 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 77,	/* POCKET */
	HB_P_DOSHORT, 1,
/* 04096 */ HB_P_LINEOFFSET, 170,	/* 178 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* CONS_SLDCOMP */
/* 04103 */ HB_P_LINEOFFSET, 171,	/* 179 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 'e', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	' ', 'A', 'N', 'D', ' ', '(', 'r', 'e', 'c', 'e', 'b', 'i', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'r', 'e', 'c', 'e', 'b', 'i', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 10, 0,	/* CONS_SLDCOMP */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04225 */ HB_P_LINEOFFSET, 172,	/* 180 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04249 */ HB_P_LINEOFFSET, 173,	/* 181 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* CONS_SLDCOMP */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04284 */ HB_P_LINEOFFSET, 175,	/* 183 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* CONS_SLDAV */
/* 04291 */ HB_P_LINEOFFSET, 176,	/* 184 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'a', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', 'A', 'N', 'D', ' ', '(', 'b', 'a', 'i', 'x', 'a', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'b', 'a', 'i', 'x', 'a', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 11, 0,	/* CONS_SLDAV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04408 */ HB_P_LINEOFFSET, 177,	/* 185 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04432 */ HB_P_LINEOFFSET, 178,	/* 186 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_SLDAV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04467 */ HB_P_LINEOFFSET, 179,	/* 187 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 1,
/* 04476 */ HB_P_LINEOFFSET, 180,	/* 188 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* SALDO_MER */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04509 */ HB_P_LINEOFFSET, 181,	/* 189 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 04518 */ HB_P_LINEOFFSET, 183,	/* 191 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* CONS_SLDPED */
/* 04525 */ HB_P_LINEOFFSET, 184,	/* 192 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 9, 0,	/* CONS_SLDPED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 04666 */ HB_P_LINEOFFSET, 185,	/* 193 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 04690 */ HB_P_LINEOFFSET, 186,	/* 194 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_SLDPED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04725 */ HB_P_LINEOFFSET, 187,	/* 195 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* CONS_SLDAV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 81,	/* SALDO_MER */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* CONS_SLDPED */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 04772 */ HB_P_LINEOFFSET, 188,	/* 196 */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PR_VENDA */
	HB_P_POPLOCALNEAR, 7,	/* MPR_VENDA */
/* 04780 */ HB_P_LINEOFFSET, 189,	/* 197 */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PROMOCAO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 23,	/* 23 (abs: 04811) */
/* 04790 */ HB_P_LINEOFFSET, 190,	/* 198 */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PR_VENDA */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 82,	/* PR_VENDA */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 67,	/* PROMOCAO */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_MULT,
	HB_P_MINUS,
	HB_P_POPLOCALNEAR, 7,	/* MPR_VENDA */
/* 04811 */ HB_P_LINEOFFSET, 192,	/* 200 */
	HB_P_PUSHSYMNEAR, 5,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'R', 'E', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', 'D', 'A', 'S', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', 'S', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', '/', 'C', 'O', 'N', 'S', 'U', 'L', 'T', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 6, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSE, 116, 1,	/* 372 (abs: 05269) */
/* 04900 */ HB_P_LINEOFFSET, 193,	/* 201 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 83,	/* A_VLR_MERC */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04933 */ HB_P_LINEOFFSET, 194,	/* 202 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 85,	/* A_CUST_MER */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04966 */ HB_P_LINEOFFSET, 195,	/* 203 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 86,	/* A_CUST_REA */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 04999 */ HB_P_LINEOFFSET, 196,	/* 204 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 87,	/* A_PR_MEDIO */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05032 */ HB_P_LINEOFFSET, 197,	/* 205 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 88,	/* A_PR_VENDA */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05065 */ HB_P_LINEOFFSET, 199,	/* 207 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 89,	/* VLR_MERC */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05098 */ HB_P_LINEOFFSET, 200,	/* 208 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 90,	/* CUST_MERC */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05131 */ HB_P_LINEOFFSET, 201,	/* 209 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* CUST_REAL */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05164 */ HB_P_LINEOFFSET, 202,	/* 210 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* PR_MEDIO */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05197 */ HB_P_LINEOFFSET, 204,	/* 212 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPR_VENDA */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 91,	/* CUST_REAL */
	HB_P_MINUS,
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05233 */ HB_P_LINEOFFSET, 205,	/* 213 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPR_VENDA */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 92,	/* PR_MEDIO */
	HB_P_MINUS,
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05269 */ HB_P_LINEOFFSET, 207,	/* 215 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_DOSHORT, 1,
/* 05278 */ HB_P_LINEOFFSET, 208,	/* 216 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 26,	/* 26 */
	HB_P_PUSHBYTE, 61,	/* 61 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* MPR_VENDA */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 31, 0,	/* M_SET */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 97,	/* 97 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 05309 */ HB_P_LINEOFFSET, 209,	/* 217 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05318 */ HB_P_LINEOFFSET, 211,	/* 219 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 93,	/* APLIC0 */
	HB_P_DOSHORT, 1,
/* 05338 */ HB_P_LINEOFFSET, 212,	/* 220 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 94,	/* APLIC1 */
	HB_P_DOSHORT, 1,
/* 05358 */ HB_P_LINEOFFSET, 213,	/* 221 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 95,	/* APLIC2 */
	HB_P_DOSHORT, 1,
/* 05378 */ HB_P_LINEOFFSET, 214,	/* 222 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 96,	/* APLIC3 */
	HB_P_DOSHORT, 1,
/* 05398 */ HB_P_LINEOFFSET, 215,	/* 223 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 97,	/* APLIC4 */
	HB_P_DOSHORT, 1,
/* 05418 */ HB_P_LINEOFFSET, 217,	/* 225 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05426 */ HB_P_LINEOFFSET, 220,	/* 228 */
	HB_P_PUSHSYMNEAR, 98,	/* VER_GRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOT,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 48,	/* 48 (abs: 05504) */
	HB_P_PUSHSYMNEAR, 99,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* GRU_SUB */
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 48,	/* GRU_SUB */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_NOT,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 05527) */
	HB_P_PUSHSYMNEAR, 100,	/* VER_FAB */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 50,	/* COD_FAB */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOT,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 05539) */
/* 05529 */ HB_P_LINEOFFSET, 221,	/* 229 */
	HB_P_PUSHSYMNEAR, 101,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 11,	/* 11 (abs: 05548) */
/* 05539 */ HB_P_LINEOFFSET, 224,	/* 232 */
	HB_P_PUSHSYMNEAR, 102,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_DOSHORT, 1,
/* 05548 */ HB_P_LINEOFFSET, 227,	/* 235 */
	HB_P_PUSHSYMNEAR, 103,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_DOSHORT, 4,
/* 05563 */ HB_P_LINEOFFSET, 228,	/* 236 */
	HB_P_PUSHSYMNEAR, 104,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 133, 0,	/* 133 (abs: 05734) */
/* 05604 */ HB_P_LINEOFFSET, 229,	/* 237 */
	HB_P_PUSHSYMNEAR, 106,	/* WVW_DRAWIMAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_DOSHORT, 8,
/* 05653 */ HB_P_LINEOFFSET, 230,	/* 238 */
	HB_P_PUSHSYMNEAR, 107,	/* WVW_DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'r', 'q', '.', ':', ' ', 'P', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'.', 'J', 'P', 'G', ' ', '-', ' ', '<', 'A', 'L', 'T', '+', 'F', '>', 'p', '/', 'A', 'm', 'p', 'l', 'i', 'a', 'r', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 16,
	HB_P_JUMP, 171, 0,	/* 171 (abs: 05902) */
/* 05734 */ HB_P_LINEOFFSET, 231,	/* 239 */
	HB_P_PUSHSYMNEAR, 104,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'b', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 130, 0,	/* 130 (abs: 05902) */
/* 05775 */ HB_P_LINEOFFSET, 232,	/* 240 */
	HB_P_PUSHSYMNEAR, 106,	/* WVW_DRAWIMAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 88,	/* 88 */
	HB_P_PUSHBYTE, 42,	/* 42 */
	HB_P_PUSHBYTE, 118,	/* 118 */
	HB_P_PUSHSYMNEAR, 84,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'b', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_TRUE,
	HB_P_FALSE,
	HB_P_DOSHORT, 8,
/* 05824 */ HB_P_LINEOFFSET, 233,	/* 241 */
	HB_P_PUSHSYMNEAR, 107,	/* WVW_DRAWLABEL */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'A', 'r', 'q', '.', ':', ' ', 'P', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'.', 'B', 'M', 'P', ' ', '-', ' ', '<', 'A', 'L', 'T', '+', 'F', '>', 'p', '/', 'A', 'm', 'p', 'l', 'i', 'a', 'r', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', 0, 
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 16,
/* 05902 */ HB_P_LINEOFFSET, 236,	/* 244 */
	HB_P_PUSHSYMNEAR, 13,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 05911 */ HB_P_LINEOFFSET, 237,	/* 245 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 127,	/* 127 */
	'<', 'M', '>', 'o', 'v', 'i', 'm', '.', ' ', '<', 'S', '>', 'P', 'e', 'd', '.', 'S', 'o', 'l', 'i', 'c', '.', 'C', 'O', 'M', 'P', 'R', 'A', 'S', ' ', '<', 'P', '>', 'M', 'o', 'v', '.', 'P', 'e', 'd', 'i', 'd', 'o', ' ', '<', 'E', '>', 'S', 'e', 'r', 'i', 'e', ' ', '<', 'C', '>', 'u', 's', 't', 'o', ' ', '<', 'V', '>', 'S', 'l', 'd', '.', 'P', 'e', 'd', ' ', '<', 'A', '>', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'r', ' ', '<', '4', '>', 'E', 's', 't', 'a', 't', 'i', 's', 't', 'i', 'c', 'a', ' ', '<', 'L', '>', 'S', 'e', 'r', 'i', 'a', 'l', ' ', '<', 'G', '>', 'L', 'o', 'g', ' ', '<', 'F', '>', 'L', 'o', 'g', ' ', 'F', 'i', 's', 0, 
	HB_P_DOSHORT, 1,
/* 06047 */ HB_P_LINEOFFSET, 238,	/* 246 */
	HB_P_PUSHSYMNEAR, 101,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 06055 */ HB_P_LINEOFFSET, 239,	/* 247 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06070) */
	HB_P_JUMP, 33, 234,	/* -5599 (abs: 00468) */
/* 06070 */ HB_P_LINEOFFSET, 241,	/* 249 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHINT, 33, 1,	/* 289 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 06134) */
/* 06083 */ HB_P_LINEOFFSET, 242,	/* 250 */
	HB_P_PUSHSYMNEAR, 108,	/* SMEDALBUM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 35,	/* MERC */
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 105, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	92, 'P', 'R', 'O', 'D', 'U', 'T', 'O', 92, 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 165, 244,	/* -2907 (abs: 03224) */
/* 06134 */ HB_P_LINEOFFSET, 243,	/* 251 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06170) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'm', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 06245) */
/* 06172 */ HB_P_LINEOFFSET, 244,	/* 252 */
	HB_P_PUSHSYMNEAR, 110,	/* SAC520 */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
/* 06182 */ HB_P_LINEOFFSET, 245,	/* 253 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 06211) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06211 */ HB_P_LINEOFFSET, 247,	/* 255 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MORDER */
	HB_P_DOSHORT, 1,
/* 06233 */ HB_P_LINEOFFSET, 248,	/* 256 */
	HB_P_PUSHSYMNEAR, 102,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 54, 244,	/* -3018 (abs: 03224) */
/* 06245 */ HB_P_LINEOFFSET, 250,	/* 258 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06281) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	's', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 06293) */
/* 06283 */ HB_P_LINEOFFSET, 251,	/* 259 */
	HB_P_PUSHSYMNEAR, 111,	/* SAC40_2 */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 6, 244,	/* -3066 (abs: 03224) */
/* 06293 */ HB_P_LINEOFFSET, 252,	/* 260 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06329) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'e', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 06346) */
/* 06331 */ HB_P_LINEOFFSET, 253,	/* 261 */
	HB_P_PUSHSYMNEAR, 112,	/* CONS_CHASS */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 209, 243,	/* -3119 (abs: 03224) */
/* 06346 */ HB_P_LINEOFFSET, 254,	/* 262 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'L', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06382) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'l', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 06397) */
/* 06384 */ HB_P_LINEOFFSET, 255,	/* 263 */
	HB_P_PUSHSYMNEAR, 113,	/* CONS_SERIAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 158, 243,	/* -3170 (abs: 03224) */
/* 06397 */ HB_P_LINE, 8, 1,	/* 264 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06434) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'p', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 06513) */
/* 06436 */ HB_P_LINE, 9, 1,	/* 265 */
	HB_P_PUSHSYMNEAR, 114,	/* SAC5PED3 */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_DOSHORT, 1,
/* 06447 */ HB_P_LINE, 10, 1,	/* 266 */
	HB_P_PUSHSYMNEAR, 7,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 06477) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 06477 */ HB_P_LINE, 12, 1,	/* 268 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* MORDER */
	HB_P_DOSHORT, 1,
/* 06500 */ HB_P_LINE, 13, 1,	/* 269 */
	HB_P_PUSHSYMNEAR, 102,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* POINT */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 42, 243,	/* -3286 (abs: 03224) */
/* 06513 */ HB_P_LINE, 15, 1,	/* 271 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06550) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'c', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 06563) */
/* 06552 */ HB_P_LINE, 16, 1,	/* 272 */
	HB_P_PUSHSYMNEAR, 115,	/* CONS_CUSTO */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 248, 242,	/* -3336 (abs: 03224) */
/* 06563 */ HB_P_LINE, 17, 1,	/* 273 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06600) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'v', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 06617) */
/* 06602 */ HB_P_LINE, 18, 1,	/* 274 */
	HB_P_PUSHSYMNEAR, 116,	/* SACBAL3 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 194, 242,	/* -3390 (abs: 03224) */
/* 06617 */ HB_P_LINE, 19, 1,	/* 275 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'G', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06654) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'g', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 06671) */
/* 06656 */ HB_P_LINE, 20, 1,	/* 276 */
	HB_P_PUSHSYMNEAR, 117,	/* SACBAL4 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 140, 242,	/* -3444 (abs: 03224) */
/* 06671 */ HB_P_LINE, 21, 1,	/* 277 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06708) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'f', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 21,	/* 21 (abs: 06729) */
/* 06710 */ HB_P_LINE, 22, 1,	/* 278 */
	HB_P_PUSHSYMNEAR, 117,	/* SACBAL4 */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'F', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 82, 242,	/* -3502 (abs: 03224) */
/* 06729 */ HB_P_LINE, 23, 1,	/* 279 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'A', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 18,	/* 18 (abs: 06766) */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSYMNEAR, 109,	/* ASC */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'a', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 06784) */
/* 06768 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_PUSHSYMNEAR, 118,	/* AUTORIZAR */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* MERC */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 27, 242,	/* -3557 (abs: 03224) */
/* 06784 */ HB_P_LINE, 25, 1,	/* 281 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 06812) */
/* 06797 */ HB_P_LINE, 26, 1,	/* 282 */
	HB_P_PUSHSYMNEAR, 119,	/* SAC526 */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 255, 241,	/* -3585 (abs: 03224) */
/* 06812 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 06837) */
/* 06825 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 230, 241,	/* -3610 (abs: 03224) */
/* 06837 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 216, 241,	/* -3624 (abs: 03224) */
/* 06851 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 241,	/* -3637 (abs: 03224) */
/* 06864 */ HB_P_LINE, 34, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 121,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06872 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 06878 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( SAC40_2 )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 18, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 42, 1,	/* 298 */
	HB_P_LOCALNEARSETSTR, 1, 8, 0,	/* MPRG 8*/
	'S', 'A', 'C', '4', '0', '_', '2', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 14,	/* M_POSICAO */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 15,	/* M_MOVIMENTO */
/* 00028 */ HB_P_LINEOFFSET, 2,	/* 300 */
	HB_P_PUSHSYMNEAR, 4,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 122,	/* MNOME_VEN */
	HB_P_DOSHORT, 1,
/* 00037 */ HB_P_LINEOFFSET, 4,	/* 302 */
	HB_P_PUSHSYMNEAR, 123,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 2,	/* TELA */
/* 00052 */ HB_P_LINEOFFSET, 6,	/* 304 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_POPVARIABLE, 124, 0,	/* LCI */
/* 00059 */ HB_P_LINEOFFSET, 7,	/* 305 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_POPVARIABLE, 125, 0,	/* CCI */
/* 00066 */ HB_P_LINEOFFSET, 8,	/* 306 */
	HB_P_LOCALNEARSETINT, 4, 16, 0,	/* LBA 16*/
/* 00072 */ HB_P_LINEOFFSET, 9,	/* 307 */
	HB_P_LOCALNEARSETINT, 5, 77, 0,	/* CBA 77*/
/* 00078 */ HB_P_LINEOFFSET, 11,	/* 309 */
	HB_P_LOCALNEARSETINT, 6, 10, 0,	/* LI 10*/
/* 00084 */ HB_P_LINEOFFSET, 12,	/* 310 */
	HB_P_LOCALNEARSETINT, 7, 12, 0,	/* CI 12*/
/* 00090 */ HB_P_LINEOFFSET, 13,	/* 311 */
	HB_P_LOCALNEARSETINT, 8, 22, 0,	/* LB 22*/
/* 00096 */ HB_P_LINEOFFSET, 14,	/* 312 */
	HB_P_LOCALNEARSETINT, 9, 60, 0,	/* CB 60*/
/* 00102 */ HB_P_LINEOFFSET, 16,	/* 314 */
	HB_P_PUSHSYMNEAR, 126,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 17,	/* MSELE */
/* 00111 */ HB_P_LINEOFFSET, 17,	/* 315 */
	HB_P_PUSHSYMNEAR, 40,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 18,	/* MORDE */
/* 00120 */ HB_P_LINEOFFSET, 20,	/* 318 */
	HB_P_PUSHSYMNEAR, 13,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00129 */ HB_P_LINEOFFSET, 22,	/* 320 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'p', 'e', 'd', '_', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00150 */ HB_P_LINEOFFSET, 23,	/* 321 */
	HB_P_PUSHSYMNEAR, 127,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00157 */ HB_P_LINEOFFSET, 25,	/* 323 */
	HB_P_PUSHSYMNEAR, 128,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00167 */ HB_P_LINEOFFSET, 26,	/* 324 */
	HB_P_PUSHSYMNEAR, 128,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_POSICAO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00177 */ HB_P_LINEOFFSET, 27,	/* 325 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'u', 'm', ' ', 'M', 'o', 'm', 'e', 'n', 't', 'o', ' ', 'O', 'K', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00212 */ HB_P_LINEOFFSET, 29,	/* 327 */
	HB_P_PUSHSYMNEAR, 129,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUE, 253, 0,	/* 253 (abs: 00472) */
/* 00222 */ HB_P_LINEOFFSET, 31,	/* 329 */
	HB_P_PUSHMEMVAR, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 42,	/* COD_MERC */
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00245) */
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 131,	/* RECEBI */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00257) */
/* 00247 */ HB_P_LINEOFFSET, 32,	/* 330 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 213,	/* -43 (abs: 00212) */
/* 00257 */ HB_P_LINEOFFSET, 35,	/* 333 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 0, 16,	/* 4096 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 60,	/* 60 (abs: 00330) */
/* 00272 */ HB_P_LINEOFFSET, 36,	/* 334 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 46,	/* 46 */
	'P', 'e', 'r', 'i', 'o', 'd', 'o', ' ', 'm', 'u', 'i', 't', 'o', ' ', 'G', 'r', 'a', 'n', 'd', 'e', ',', ' ', 'S', 'o', 'l', 'i', 'c', 'i', 't', 'e', ' ', 'p', 'e', 'l', 'o', ' ', 'R', 'e', 'l', 'a', 't', 'o', 'r', 'i', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 145, 0,	/* 145 (abs: 00472) */
/* 00330 */ HB_P_LINEOFFSET, 39,	/* 337 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 133,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 134,	/* DAT_PED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', ' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 135,	/* NUM_PED */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 137,	/* QUANTD */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	179, 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 138,	/* VLR_FAT */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00447 */ HB_P_LINEOFFSET, 40,	/* 338 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_POSICAO */
	HB_P_PUSHSYMNEAR, 39,	/* RECNO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_DOSHORT, 2,
/* 00461 */ HB_P_LINEOFFSET, 41,	/* 339 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 255, 254,	/* -257 (abs: 00212) */
/* 00472 */ HB_P_LINEOFFSET, 43,	/* 341 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHINT, 0, 16,	/* 4096 */
	HB_P_GREATEREQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00490) */
	HB_P_JUMP, 145, 254,	/* -367 (abs: 00120) */
/* 00490 */ HB_P_LINEOFFSET, 46,	/* 344 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 00582) */
/* 00503 */ HB_P_LINEOFFSET, 47,	/* 345 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00551 */ HB_P_LINEOFFSET, 48,	/* 346 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 18,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00575) */
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00576) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00577 */ HB_P_LINEOFFSET, 49,	/* 347 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00582 */ HB_P_LINEOFFSET, 51,	/* 349 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00591 */ HB_P_LINEOFFSET, 52,	/* 350 */
	HB_P_PUSHSYMNEAR, 103,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_PUSHLOCALNEAR, 8,	/* LB */
	HB_P_PUSHLOCALNEAR, 9,	/* CB */
	HB_P_DOSHORT, 4,
/* 00606 */ HB_P_LINEOFFSET, 53,	/* 351 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 9,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00634 */ HB_P_LINEOFFSET, 54,	/* 352 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_PUSHLOCALNEAR, 8,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 11, 0,	/* 11*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00662 */ HB_P_LINEOFFSET, 55,	/* 353 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_PUSHLOCALNEAR, 8,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00690 */ HB_P_LINEOFFSET, 56,	/* 354 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_PUSHLOCALNEAR, 8,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00718 */ HB_P_LINEOFFSET, 57,	/* 355 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00726 */ HB_P_LINEOFFSET, 58,	/* 356 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 4, 0,	/* 4*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'a', 't', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00755 */ HB_P_LINEOFFSET, 59,	/* 357 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 13, 0,	/* 13*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00789 */ HB_P_LINEOFFSET, 60,	/* 358 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 26, 0,	/* 26*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00821 */ HB_P_LINEOFFSET, 61,	/* 359 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 42, 0,	/* 42*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00851 */ HB_P_LINEOFFSET, 62,	/* 360 */
	HB_P_PUSHSYMNEAR, 123,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 3,	/* TELA1 */
/* 00866 */ HB_P_LINEOFFSET, 64,	/* 362 */
	HB_P_PUSHSYMNEAR, 139,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00873 */ HB_P_LINEOFFSET, 65,	/* 363 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 57,	/* 57 */
	'<', 25, ' ', 'o', 'u', ' ', 24, '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'S', 'C', '>', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'a', ' ', ' ', '-', ' ', ' ', '<', 'E', 'N', 'T', 'E', 'R', '>', ' ', 'p', '/', 'R', 'e', 's', 'u', 'm', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00939 */ HB_P_LINEOFFSET, 66,	/* 364 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 140,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 7,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 9,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 15,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 16,	/* POINT */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00983 */ HB_P_LINEOFFSET, 69,	/* 367 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 48,	/* 48 (abs: 01041) */
/* 00995 */ HB_P_LINEOFFSET, 70,	/* 368 */
	HB_P_PUSHSYMNEAR, 141,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 2,	/* TELA */
	HB_P_DOSHORT, 5,
/* 01010 */ HB_P_LINEOFFSET, 71,	/* 369 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 17,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 18,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 01034) */
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 01035) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 01036 */ HB_P_LINEOFFSET, 72,	/* 370 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01041 */ HB_P_LINEOFFSET, 73,	/* 371 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 71, 255,	/* -185 (abs: 00866) */
/* 01054 */ HB_P_LINEOFFSET, 74,	/* 372 */
	HB_P_PUSHSYMNEAR, 102,	/* DBGOTO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* M_POSICAO */
	HB_P_PUSHLOCALNEAR, 16,	/* POINT */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01066 */ HB_P_LINEOFFSET, 75,	/* 373 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01075 */ HB_P_LINEOFFSET, 76,	/* 374 */
	HB_P_PUSHSYMNEAR, 103,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 4,	/* LBA */
	HB_P_PUSHLOCALNEAR, 5,	/* CBA */
	HB_P_DOSHORT, 4,
/* 01090 */ HB_P_LINEOFFSET, 77,	/* 375 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01098 */ HB_P_LINEOFFSET, 78,	/* 376 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'N', 'o', '.', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01144 */ HB_P_LINEOFFSET, 79,	/* 377 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01153 */ HB_P_LINEOFFSET, 80,	/* 378 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 143,	/* PED_FORN */
	HB_P_DOSHORT, 1,
/* 01178 */ HB_P_LINEOFFSET, 81,	/* 379 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01186 */ HB_P_LINEOFFSET, 82,	/* 380 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01233 */ HB_P_LINEOFFSET, 83,	/* 381 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01242 */ HB_P_LINEOFFSET, 84,	/* 382 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 144,	/* COD_FORN */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 145,	/* FORNECE */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01280 */ HB_P_LINEOFFSET, 85,	/* 383 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01288 */ HB_P_LINEOFFSET, 86,	/* 384 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', 'o', 'm', 'p', 'r', 'a', 'd', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01335 */ HB_P_LINEOFFSET, 87,	/* 385 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01344 */ HB_P_LINEOFFSET, 88,	/* 386 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 146,	/* COMPRADOR */
	HB_P_DOSHORT, 1,
/* 01370 */ HB_P_LINEOFFSET, 89,	/* 387 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01378 */ HB_P_LINEOFFSET, 90,	/* 388 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'T', 'o', 't', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'e', 'd', 'i', 'd', 'o', ' ', 'R', '$', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01425 */ HB_P_LINEOFFSET, 91,	/* 389 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01434 */ HB_P_LINEOFFSET, 92,	/* 390 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 56,	/* DEVOUTPICT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 138,	/* VLR_FAT */
	HB_P_PUSHSYMNEAR, 130,	/* PED_E */
	HB_P_PUSHALIASEDFIELDNEAR, 137,	/* QUANTD */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_DOSHORT, 2,
/* 01480 */ HB_P_LINEOFFSET, 93,	/* 391 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01488 */ HB_P_LINEOFFSET, 94,	/* 392 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', '/', 'r', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01533 */ HB_P_LINEOFFSET, 95,	/* 393 */
	HB_P_PUSHSYMNEAR, 101,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 01541 */ HB_P_LINEOFFSET, 96,	/* 394 */
	HB_P_PUSHSYMNEAR, 141,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 3,	/* TELA1 */
	HB_P_DOSHORT, 5,
	HB_P_JUMP, 78, 253,	/* -690 (abs: 00866) */
	HB_P_ENDPROC
/* 01560 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PRODSERIE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 151, 1,	/* 407 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* M_MOVIMENTO */
/* 00011 */ HB_P_LINEOFFSET, 2,	/* 409 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 4,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 122,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 148,	/* MCLIENTE */
	HB_P_PUSHSYMNEAR, 149,	/* MCPF */
	HB_P_PUSHSYMNEAR, 150,	/* MCGC */
	HB_P_DOSHORT, 4,
	HB_P_POPVARIABLE, 122, 0,	/* MNOME_VEN */
/* 00036 */ HB_P_LINEOFFSET, 4,	/* 411 */
	HB_P_PUSHSYMNEAR, 123,	/* SAVESCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_POPLOCALNEAR, 1,	/* TELA */
/* 00051 */ HB_P_LINEOFFSET, 6,	/* 413 */
	HB_P_LOCALNEARSETINT, 2, 3, 0,	/* LI 3*/
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 414 */
	HB_P_LOCALNEARSETINT, 3, 1, 0,	/* CI 1*/
/* 00063 */ HB_P_LINEOFFSET, 8,	/* 415 */
	HB_P_LOCALNEARSETINT, 4, 21, 0,	/* LB 21*/
/* 00069 */ HB_P_LINEOFFSET, 9,	/* 416 */
	HB_P_LOCALNEARSETINT, 5, 79, 0,	/* CB 79*/
/* 00075 */ HB_P_LINEOFFSET, 11,	/* 418 */
	HB_P_PUSHSYMNEAR, 126,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 11,	/* MSELE */
/* 00084 */ HB_P_LINEOFFSET, 12,	/* 419 */
	HB_P_PUSHSYMNEAR, 40,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 12,	/* MORDE */
/* 00093 */ HB_P_LINEOFFSET, 14,	/* 421 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	's', 'e', 'r', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00114 */ HB_P_LINEOFFSET, 15,	/* 422 */
	HB_P_PUSHSYMNEAR, 127,	/* DBGOTOP */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00121 */ HB_P_LINEOFFSET, 19,	/* 426 */
	HB_P_LOCALNEARSETINT, 14, 0, 0,	/* MQUANTD 0*/
/* 00127 */ HB_P_LINEOFFSET, 20,	/* 427 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00136 */ HB_P_LINEOFFSET, 21,	/* 428 */
	HB_P_PUSHSYMNEAR, 103,	/* BOTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_PUSHLOCALNEAR, 5,	/* CB */
	HB_P_DOSHORT, 4,
/* 00151 */ HB_P_LINEOFFSET, 22,	/* 429 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00179 */ HB_P_LINEOFFSET, 23,	/* 430 */
	HB_P_PUSHSYMNEAR, 20,	/* DISPBOX */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 254, 255,	/* -2*/
	HB_P_PUSHLOCALNEAR, 5,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ONE,
	HB_P_DOSHORT, 5,
/* 00207 */ HB_P_LINEOFFSET, 24,	/* 431 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00215 */ HB_P_LINEOFFSET, 25,	/* 432 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'o', 'd', 'i', 'g', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00246 */ HB_P_LINEOFFSET, 26,	/* 433 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 9, 0,	/* 9*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'S', 'e', 'r', 'i', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00276 */ HB_P_LINEOFFSET, 29,	/* 436 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 65, 0,	/* 65*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00309 */ HB_P_LINEOFFSET, 30,	/* 437 */
	HB_P_PUSHSYMNEAR, 151,	/* MENSAGEM1 */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 54,	/* 54 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', '[', 'E', ']', 'n', 't', 'r', 'e', 'g', 'u', 'e', ' ', '[', 'N', ']', 'a', 'o', ' ', 'e', 'n', 't', 'r', 'e', 'g', 'u', 'e', ':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'E', ',', 'N', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 00384 */ HB_P_LINEOFFSET, 31,	/* 438 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 80,	/* 80 (abs: 00474) */
/* 00396 */ HB_P_LINEOFFSET, 32,	/* 439 */
	HB_P_PUSHSYMNEAR, 141,	/* RESTSCREEN */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHBYTE, 79,	/* 79 */
	HB_P_PUSHLOCALNEAR, 1,	/* TELA */
	HB_P_DOSHORT, 5,
/* 00411 */ HB_P_LINEOFFSET, 33,	/* 440 */
	HB_P_PUSHSYMNEAR, 14,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MSELE */
	HB_P_DOSHORT, 1,
	HB_P_PUSHLOCALNEAR, 12,	/* MORDE */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00435) */
	HB_P_PUSHSYMNEAR, 34,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MORDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 00436) */
	HB_P_PUSHNIL,
	HB_P_POP,
/* 00437 */ HB_P_LINEOFFSET, 34,	/* 441 */
	HB_P_PUSHSYMNEAR, 29,	/* __MVXRELEASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'm', 'c', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'p', 'f', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'c', 'g', 'c', 0, 
	HB_P_DOSHORT, 3,
/* 00469 */ HB_P_LINEOFFSET, 35,	/* 442 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00474 */ HB_P_LINEOFFSET, 37,	/* 444 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MFORNECE */
/* 00485 */ HB_P_LINEOFFSET, 38,	/* 445 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 36,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPTRUENEAR, 53,	/* 53 (abs: 00553) */
/* 00502 */ HB_P_LINEOFFSET, 39,	/* 446 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'e', 'n', 'h', 'u', 'm', 'a', ' ', 's', 'e', 'r', 'i', 'e', ' ', 'd', 'e', 's', 't', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 83, 254,	/* -429 (abs: 00121) */
/* 00553 */ HB_P_LINEOFFSET, 42,	/* 449 */
	HB_P_PUSHSYMNEAR, 128,	/* ASIZE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MOVIMENTO */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 00563 */ HB_P_LINEOFFSET, 43,	/* 450 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 1, 0,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 153,	/* CODIGO */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00583) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 129,	/* EOF */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_NOT,
	HB_P_JUMPFALSE, 140, 2,	/* 652 (abs: 01235) */
/* 00586 */ HB_P_LINEOFFSET, 44,	/* 451 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 74, 1,	/* 330 (abs: 00925) */
/* 00598 */ HB_P_LINEOFFSET, 45,	/* 452 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', ' ', 'E', 'n', 't', 0, 
	HB_P_DOSHORT, 1,
/* 00631 */ HB_P_LINEOFFSET, 46,	/* 453 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00666 */ HB_P_LINEOFFSET, 47,	/* 454 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'E', 'N', 'T', 'R', 'E', 'G', 'U', 'E', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00727 */ HB_P_LINEOFFSET, 48,	/* 455 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 154,	/* DATA_SAI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 13,	/* 13 (abs: 00751) */
/* 00740 */ HB_P_LINEOFFSET, 49,	/* 456 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 71, 255,	/* -185 (abs: 00563) */
/* 00751 */ HB_P_LINEOFFSET, 52,	/* 459 */
	HB_P_PUSHSYMNEAR, 155,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 144,	/* COD_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00779) */
/* 00769 */ HB_P_LINEOFFSET, 53,	/* 460 */
	HB_P_PUSHSYMNEAR, 156,	/* FORN */
	HB_P_PUSHALIASEDFIELDNEAR, 157,	/* RAZAO */
	HB_P_POPLOCALNEAR, 13,	/* MFORNECE */
	HB_P_JUMPNEAR, 13,	/* 13 (abs: 00790) */
/* 00779 */ HB_P_LINEOFFSET, 55,	/* 462 */
	HB_P_PUSHSYMNEAR, 15,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 13,	/* MFORNECE */
/* 00790 */ HB_P_LINEOFFSET, 57,	/* 464 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MOVIMENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 153,	/* CODIGO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 152,	/* SERIE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 133,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 158,	/* DATA_ENT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 144,	/* COD_FORN */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 13,	/* MFORNECE */
	HB_P_LEFT, 35, 0,	/* 35 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 159,	/* OPERA_ENT */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 00868 */ HB_P_LINEOFFSET, 58,	/* 465 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MQUANTD 1*/
/* 00874 */ HB_P_LINEOFFSET, 59,	/* 466 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 00883 */ HB_P_LINEOFFSET, 60,	/* 467 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 34, 0,	/* 34*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 00914 */ HB_P_LINEOFFSET, 61,	/* 468 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 254, 0,	/* 254 (abs: 01176) */
/* 00925 */ HB_P_LINEOFFSET, 63,	/* 470 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 19, 0,	/* 19*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'D', 'a', 't', 'a', ' ', 'S', 'a', 'i', 0, 
	HB_P_DOSHORT, 1,
/* 00958 */ HB_P_LINEOFFSET, 64,	/* 471 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 29, 0,	/* 29*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'C', 'l', 'i', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00990 */ HB_P_LINEOFFSET, 65,	/* 472 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', 's', ' ', 'N', 'A', 'O', ' ', 'E', 'N', 'T', 'R', 'E', 'G', 'U', 'E', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01051 */ HB_P_LINEOFFSET, 66,	/* 473 */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 154,	/* DATA_SAI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 01075) */
/* 01064 */ HB_P_LINEOFFSET, 67,	/* 474 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 3, 254,	/* -509 (abs: 00563) */
/* 01075 */ HB_P_LINEOFFSET, 70,	/* 477 */
	HB_P_PUSHSYMNEAR, 160,	/* VER_CLI */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 16,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 161,	/* COD_CLI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 01091 */ HB_P_LINEOFFSET, 71,	/* 478 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MOVIMENTO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 153,	/* CODIGO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 152,	/* SERIE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 133,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 154,	/* DATA_SAI */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 161,	/* COD_CLI */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 148, 0,	/* MCLIENTE */
	HB_P_LEFT, 35, 0,	/* 35 */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 152,	/* SERIE */
	HB_P_PUSHALIASEDFIELDNEAR, 162,	/* OPERA_SAI */
	HB_P_PLUS,
	HB_P_DOSHORT, 2,
/* 01170 */ HB_P_LINEOFFSET, 72,	/* 479 */
	HB_P_LOCALNEARADDINT, 14, 1, 0,	/* MQUANTD 1*/
/* 01176 */ HB_P_LINEOFFSET, 74,	/* 481 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01185 */ HB_P_LINEOFFSET, 75,	/* 482 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 38, 0,	/* 38*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MQUANTD */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01216 */ HB_P_LINEOFFSET, 76,	/* 483 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 01224 */ HB_P_LINEOFFSET, 77,	/* 484 */
	HB_P_PUSHSYMNEAR, 120,	/* DBSKIP */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 99, 253,	/* -669 (abs: 00563) */
/* 01235 */ HB_P_LINEOFFSET, 79,	/* 486 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 01299) */
/* 01248 */ HB_P_LINEOFFSET, 80,	/* 487 */
	HB_P_PUSHSYMNEAR, 38,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'N', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'p', 'e', 'r', 'i', 'o', 'd', 'o', ' ', '!', '!', '!', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 105, 251,	/* -1175 (abs: 00121) */
/* 01299 */ HB_P_LINEOFFSET, 83,	/* 490 */
	HB_P_PUSHSYMNEAR, 139,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01306 */ HB_P_LINEOFFSET, 84,	/* 491 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	'<', 25, ' ', 'o', 'u', ' ', 24, '>', ' ', 'C', 'o', 'n', 's', 'u', 'l', 't', 'a', ' ', ' ', '-', ' ', ' ', 'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'c', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 01377 */ HB_P_LINEOFFSET, 85,	/* 492 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 140,	/* ACHOICE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* LI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 3,	/* CI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* LB */
	HB_P_ADDINT, 253, 255,	/* -3*/
	HB_P_PUSHLOCALNEAR, 5,	/* CB */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_PUSHLOCALNEAR, 9,	/* M_MOVIMENTO */
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 10,	/* POINT */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 236, 250,	/* -1300 (abs: 00121) */
	HB_P_ENDPROC
/* 01425 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CONS_CUSTO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 245, 1,	/* 501 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* CONS_ */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* CON_MERC */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* IND 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_VLR */
	HB_P_LOCALNEARSETSTR, 5, 2, 0,	/* PARA 2*/
	' ', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 6,	/* MDATA */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MQTD_MES 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* MQTD */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* MVLR */
/* 00050 */ HB_P_LINEOFFSET, 2,	/* 503 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 2,	/* CON_MERC */
/* 00057 */ HB_P_LINEOFFSET, 3,	/* 504 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 2, 0,	/* CON_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00126 */ HB_P_LINEOFFSET, 4,	/* 505 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00150 */ HB_P_LINEOFFSET, 6,	/* 507 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* CONS_ */
/* 00157 */ HB_P_LINEOFFSET, 7,	/* 508 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 88,	/* 88 */
	' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'E', 39, ' ', 'A', 'N', 'D', ' ', '(', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'N', 'F', '%', 39, ' ', 'O', 'R', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'P', 'D', '%', 39, ')', ' ', 'O', 'R', 'D', 'E', 'R', ' ', 'B', 'Y', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 1, 0,	/* CONS_ */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00314 */ HB_P_LINEOFFSET, 8,	/* 509 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00338 */ HB_P_LINEOFFSET, 10,	/* 511 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 106, 14,	/* 3690 (abs: 04039) */
/* 00352 */ HB_P_LINEOFFSET, 11,	/* 512 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 3,	/* IND */
/* 00363 */ HB_P_LINEOFFSET, 12,	/* 513 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 66, 7,	/* 1858 (abs: 02232) */
/* 00377 */ HB_P_LINEOFFSET, 13,	/* 514 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_VLR */
/* 00384 */ HB_P_LINEOFFSET, 14,	/* 515 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'u', 'n', 'i', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_VLR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00479 */ HB_P_LINEOFFSET, 15,	/* 516 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00503 */ HB_P_LINEOFFSET, 16,	/* 517 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'P', 'E', 'N', 'U', 'L', 'T', 'I', 'M', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 00535 */ HB_P_LINEOFFSET, 17,	/* 518 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00543 */ HB_P_LINEOFFSET, 18,	/* 519 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00570 */ HB_P_LINEOFFSET, 19,	/* 520 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00593 */ HB_P_LINEOFFSET, 20,	/* 521 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'h', 'e', 'g', 'a', 'd', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00619 */ HB_P_LINEOFFSET, 21,	/* 522 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00646 */ HB_P_LINEOFFSET, 22,	/* 523 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'r', 'e', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00670 */ HB_P_LINEOFFSET, 23,	/* 524 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'E', 'n', 'c', 'a', 'r', 'g', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00698 */ HB_P_LINEOFFSET, 24,	/* 525 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'i', 's', 'p', '.', 'A', 'c', 'e', 's', 's', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00728 */ HB_P_LINEOFFSET, 25,	/* 526 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'n', 'd', '.', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00814 */ HB_P_LINEOFFSET, 26,	/* 527 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00843 */ HB_P_LINEOFFSET, 27,	/* 528 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'N', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00864 */ HB_P_LINEOFFSET, 28,	/* 529 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00888 */ HB_P_LINEOFFSET, 29,	/* 530 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00914 */ HB_P_LINEOFFSET, 30,	/* 531 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'L', 'u', 'c', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00938 */ HB_P_LINEOFFSET, 31,	/* 532 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00969 */ HB_P_LINEOFFSET, 32,	/* 533 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'U', 'n', 'i', 't', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00999 */ HB_P_LINEOFFSET, 33,	/* 534 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'P', 'I', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01029 */ HB_P_LINEOFFSET, 34,	/* 535 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'm', 'e', 'r', 'c', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01059 */ HB_P_LINEOFFSET, 35,	/* 536 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'm', 'e', 'r', 'c', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01089 */ HB_P_LINEOFFSET, 36,	/* 537 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'R', 'e', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01119 */ HB_P_LINEOFFSET, 37,	/* 538 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01149 */ HB_P_LINEOFFSET, 38,	/* 539 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01179 */ HB_P_LINEOFFSET, 39,	/* 540 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01209 */ HB_P_LINEOFFSET, 40,	/* 541 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'A', 'n', 't', 'e', 'r', 'i', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01243 */ HB_P_LINEOFFSET, 41,	/* 542 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'o', 's', 't', 'e', 'r', 'i', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 01277 */ HB_P_LINEOFFSET, 43,	/* 544 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 01286 */ HB_P_LINEOFFSET, 44,	/* 545 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01312 */ HB_P_LINEOFFSET, 45,	/* 546 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01338 */ HB_P_LINEOFFSET, 46,	/* 547 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01365 */ HB_P_LINEOFFSET, 47,	/* 548 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01392 */ HB_P_LINEOFFSET, 48,	/* 549 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01437 */ HB_P_LINEOFFSET, 49,	/* 550 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01482 */ HB_P_LINEOFFSET, 50,	/* 551 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01527 */ HB_P_LINEOFFSET, 51,	/* 552 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01571 */ HB_P_LINEOFFSET, 52,	/* 553 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 01594 */ HB_P_LINEOFFSET, 53,	/* 554 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01633 */ HB_P_LINEOFFSET, 54,	/* 555 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01677 */ HB_P_LINEOFFSET, 55,	/* 556 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01714 */ HB_P_LINEOFFSET, 56,	/* 557 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_VLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01754 */ HB_P_LINEOFFSET, 57,	/* 558 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01799 */ HB_P_LINEOFFSET, 58,	/* 559 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_VLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01850 */ HB_P_LINEOFFSET, 59,	/* 560 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_DOSHORT, 1,
/* 01876 */ HB_P_LINEOFFSET, 61,	/* 562 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01917 */ HB_P_LINEOFFSET, 62,	/* 563 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01958 */ HB_P_LINEOFFSET, 63,	/* 564 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 01999 */ HB_P_LINEOFFSET, 64,	/* 565 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02040 */ HB_P_LINEOFFSET, 65,	/* 566 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02089 */ HB_P_LINEOFFSET, 66,	/* 567 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02130 */ HB_P_LINEOFFSET, 67,	/* 568 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02175 */ HB_P_LINEOFFSET, 68,	/* 569 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ADDINT, 255, 255,	/* -1*/
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 02232 */ HB_P_LINEOFFSET, 71,	/* 572 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 4,	/* CONS_VLR */
/* 02239 */ HB_P_LINEOFFSET, 72,	/* 573 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 58,	/* 58 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', '*', 'p', 'r', '_', 'u', 'n', 'i', 't', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 4, 0,	/* CONS_VLR */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02331 */ HB_P_LINEOFFSET, 73,	/* 574 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02355 */ HB_P_LINEOFFSET, 74,	/* 575 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'U', 'L', 'T', 'I', 'M', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 02385 */ HB_P_LINEOFFSET, 75,	/* 576 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 02393 */ HB_P_LINEOFFSET, 76,	/* 577 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02420 */ HB_P_LINEOFFSET, 77,	/* 578 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02443 */ HB_P_LINEOFFSET, 78,	/* 579 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'h', 'e', 'g', 'a', 'd', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02469 */ HB_P_LINEOFFSET, 79,	/* 580 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02496 */ HB_P_LINEOFFSET, 80,	/* 581 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'r', 'e', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02520 */ HB_P_LINEOFFSET, 81,	/* 582 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'E', 'n', 'c', 'a', 'r', 'g', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02548 */ HB_P_LINEOFFSET, 82,	/* 583 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'i', 's', 'p', '.', 'A', 'c', 'e', 's', 's', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02578 */ HB_P_LINEOFFSET, 83,	/* 584 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'n', 'd', '.', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'd', 'd', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 02655 */ HB_P_LINEOFFSET, 84,	/* 585 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02684 */ HB_P_LINEOFFSET, 85,	/* 586 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'N', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02705 */ HB_P_LINEOFFSET, 86,	/* 587 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02729 */ HB_P_LINEOFFSET, 87,	/* 588 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02755 */ HB_P_LINEOFFSET, 88,	/* 589 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'L', 'u', 'c', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02779 */ HB_P_LINEOFFSET, 89,	/* 590 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02810 */ HB_P_LINEOFFSET, 90,	/* 591 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'U', 'n', 'i', 't', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02840 */ HB_P_LINEOFFSET, 91,	/* 592 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'P', 'I', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02870 */ HB_P_LINEOFFSET, 92,	/* 593 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'm', 'e', 'r', 'c', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02900 */ HB_P_LINEOFFSET, 93,	/* 594 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'm', 'e', 'r', 'c', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02930 */ HB_P_LINEOFFSET, 94,	/* 595 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'R', 'e', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02960 */ HB_P_LINEOFFSET, 95,	/* 596 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 02990 */ HB_P_LINEOFFSET, 96,	/* 597 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03020 */ HB_P_LINEOFFSET, 97,	/* 598 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03050 */ HB_P_LINEOFFSET, 98,	/* 599 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'A', 'n', 't', 'e', 'r', 'i', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03084 */ HB_P_LINEOFFSET, 99,	/* 600 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'o', 's', 't', 'e', 'r', 'i', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 03118 */ HB_P_LINEOFFSET, 101,	/* 602 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 03127 */ HB_P_LINEOFFSET, 102,	/* 603 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03150 */ HB_P_LINEOFFSET, 103,	/* 604 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 67,	/* 67 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03173 */ HB_P_LINEOFFSET, 104,	/* 605 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 54,	/* 54 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03197 */ HB_P_LINEOFFSET, 105,	/* 606 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 52,	/* 52 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03221 */ HB_P_LINEOFFSET, 106,	/* 607 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03263 */ HB_P_LINEOFFSET, 107,	/* 608 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03305 */ HB_P_LINEOFFSET, 108,	/* 609 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03347 */ HB_P_LINEOFFSET, 109,	/* 610 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'-', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03385 */ HB_P_LINEOFFSET, 110,	/* 611 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_DOSHORT, 1,
/* 03408 */ HB_P_LINEOFFSET, 111,	/* 612 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'9', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03447 */ HB_P_LINEOFFSET, 112,	/* 613 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'9', '9', '9', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03488 */ HB_P_LINEOFFSET, 113,	/* 614 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03525 */ HB_P_LINEOFFSET, 114,	/* 615 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_VLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03565 */ HB_P_LINEOFFSET, 115,	/* 616 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 25,	/* 25 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03607 */ HB_P_LINEOFFSET, 116,	/* 617 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 4,	/* CONS_VLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_DIVIDE,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03655 */ HB_P_LINEOFFSET, 117,	/* 618 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'%', 0, 
	HB_P_DOSHORT, 1,
/* 03681 */ HB_P_LINEOFFSET, 119,	/* 620 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03722 */ HB_P_LINEOFFSET, 120,	/* 621 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03763 */ HB_P_LINEOFFSET, 121,	/* 622 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03804 */ HB_P_LINEOFFSET, 122,	/* 623 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03845 */ HB_P_LINEOFFSET, 123,	/* 624 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_MINUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03894 */ HB_P_LINEOFFSET, 124,	/* 625 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 48,	/* 48 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03935 */ HB_P_LINEOFFSET, 125,	/* 626 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 03977 */ HB_P_LINEOFFSET, 126,	/* 627 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 1,	/* CONS_ */
	HB_P_PUSHLOCALNEAR, 3,	/* IND */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 04028 */ HB_P_LINEOFFSET, 127,	/* 628 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 131, 5,	/* 1411 (abs: 05447) */
/* 04039 */ HB_P_LINEOFFSET, 129,	/* 630 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'P', 'E', 'N', 'U', 'L', 'T', 'I', 'M', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 04071 */ HB_P_LINEOFFSET, 130,	/* 631 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04079 */ HB_P_LINEOFFSET, 131,	/* 632 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04106 */ HB_P_LINEOFFSET, 132,	/* 633 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04129 */ HB_P_LINEOFFSET, 133,	/* 634 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'h', 'e', 'g', 'a', 'd', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04155 */ HB_P_LINEOFFSET, 134,	/* 635 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04182 */ HB_P_LINEOFFSET, 135,	/* 636 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'r', 'e', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04206 */ HB_P_LINEOFFSET, 136,	/* 637 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'E', 'n', 'c', 'a', 'r', 'g', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04234 */ HB_P_LINEOFFSET, 137,	/* 638 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'i', 's', 'p', '.', 'A', 'c', 'e', 's', 's', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04264 */ HB_P_LINEOFFSET, 138,	/* 639 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04293 */ HB_P_LINEOFFSET, 139,	/* 640 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'N', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04314 */ HB_P_LINEOFFSET, 140,	/* 641 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04338 */ HB_P_LINEOFFSET, 141,	/* 642 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04364 */ HB_P_LINEOFFSET, 142,	/* 643 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'L', 'u', 'c', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04388 */ HB_P_LINEOFFSET, 143,	/* 644 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04419 */ HB_P_LINEOFFSET, 144,	/* 645 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'U', 'n', 'i', 't', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04449 */ HB_P_LINEOFFSET, 145,	/* 646 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'P', 'I', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04479 */ HB_P_LINEOFFSET, 146,	/* 647 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'm', 'e', 'r', 'c', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04509 */ HB_P_LINEOFFSET, 147,	/* 648 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'm', 'e', 'r', 'c', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04539 */ HB_P_LINEOFFSET, 148,	/* 649 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'R', 'e', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04569 */ HB_P_LINEOFFSET, 149,	/* 650 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04599 */ HB_P_LINEOFFSET, 150,	/* 651 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04629 */ HB_P_LINEOFFSET, 151,	/* 652 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04659 */ HB_P_LINEOFFSET, 152,	/* 653 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'A', 'n', 't', 'e', 'r', 'i', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04693 */ HB_P_LINEOFFSET, 153,	/* 654 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'o', 's', 't', 'e', 'r', 'i', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04727 */ HB_P_LINEOFFSET, 155,	/* 656 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', 'U', 'L', 'T', 'I', 'M', 'A', ' ', 'N', 'O', 'T', 'A', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 04757 */ HB_P_LINEOFFSET, 156,	/* 657 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 04765 */ HB_P_LINEOFFSET, 157,	/* 658 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'C', 'o', 'n', 'd', '.', 'P', 'a', 'g', 'a', 'm', 'e', 'n', 't', 'o', ':', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 04799 */ HB_P_LINEOFFSET, 158,	/* 659 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'D', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04826 */ HB_P_LINEOFFSET, 159,	/* 660 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'o', 'd', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04849 */ HB_P_LINEOFFSET, 160,	/* 661 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'C', 'h', 'e', 'g', 'a', 'd', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04875 */ HB_P_LINEOFFSET, 161,	/* 662 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'E', 'm', 'i', 's', 's', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04902 */ HB_P_LINEOFFSET, 162,	/* 663 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'F', 'r', 'e', 't', 'e', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04926 */ HB_P_LINEOFFSET, 163,	/* 664 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'E', 'n', 'c', 'a', 'r', 'g', 'o', 's', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04954 */ HB_P_LINEOFFSET, 164,	/* 665 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'D', 'i', 's', 'p', '.', 'A', 'c', 'e', 's', 's', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 04984 */ HB_P_LINEOFFSET, 165,	/* 666 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05013 */ HB_P_LINEOFFSET, 166,	/* 667 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'U', 'N', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05034 */ HB_P_LINEOFFSET, 167,	/* 668 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'P', 'e', 's', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05058 */ HB_P_LINEOFFSET, 168,	/* 669 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'Q', 'u', 'a', 'n', 't', 'd', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05084 */ HB_P_LINEOFFSET, 169,	/* 670 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'L', 'u', 'c', 'r', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05108 */ HB_P_LINEOFFSET, 170,	/* 671 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'd', 'a', ' ', 'N', 'o', 't', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05139 */ HB_P_LINEOFFSET, 171,	/* 672 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'U', 'n', 'i', 't', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05169 */ HB_P_LINEOFFSET, 172,	/* 673 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'I', 'P', 'I', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05199 */ HB_P_LINEOFFSET, 173,	/* 674 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'V', 'l', 'r', '.', 'm', 'e', 'r', 'c', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05229 */ HB_P_LINEOFFSET, 174,	/* 675 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'm', 'e', 'r', 'c', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05259 */ HB_P_LINEOFFSET, 175,	/* 676 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', '.', 'R', 'e', 'a', 'l', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05289 */ HB_P_LINEOFFSET, 176,	/* 677 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 15,	/* 15 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'P', 'r', 'c', '.', 'V', 'e', 'n', 'd', 'a', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05319 */ HB_P_LINEOFFSET, 177,	/* 678 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 16,	/* 16 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'L', 'u', 'c', 'r', 'o', ' ', 'R', '$', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05349 */ HB_P_LINEOFFSET, 178,	/* 679 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 17,	/* 17 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'C', 'u', 's', 't', 'o', ' ', 'M', 'e', 'd', 'i', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05379 */ HB_P_LINEOFFSET, 179,	/* 680 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'A', 'n', 't', 'e', 'r', 'i', 'o', 'r', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05413 */ HB_P_LINEOFFSET, 180,	/* 681 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 19,	/* 19 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'a', 'l', 'd', 'o', ' ', 'P', 'o', 's', 't', 'e', 'r', 'i', 'o', 'r', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05447 */ HB_P_LINEOFFSET, 182,	/* 683 */
	HB_P_PUSHSYMNEAR, 9,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'E', 'S', 'T', 'A', 'T', 'I', 'S', 'T', 'I', 'C', 'A', ' ', 'D', 'E', ' ', 'V', 'E', 'N', 'D', 'A', 'S', ' ', 'P', 'O', 'R', ' ', 'M', 'E', 'S', 'E', 'S', ' ', 0, 
	HB_P_DOSHORT, 5,
/* 05496 */ HB_P_LINEOFFSET, 184,	/* 685 */
	HB_P_PUSHSYMNEAR, 12,	/* LIMPA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 22,	/* 22 */
	HB_P_ZERO,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_PUSHBYTE, 95,	/* 95 */
	HB_P_DOSHORT, 4,
/* 05510 */ HB_P_LINEOFFSET, 185,	/* 686 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', 'o', 'u', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 05558 */ HB_P_LINEOFFSET, 186,	/* 687 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'E', 'S', '/', 'A', 'N', 'O', ' ', '1', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05601 */ HB_P_LINEOFFSET, 187,	/* 688 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'E', 'S', '/', 'A', 'N', 'O', ' ', '2', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05645 */ HB_P_LINEOFFSET, 188,	/* 689 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'E', 'S', '/', 'A', 'N', 'O', ' ', '3', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05689 */ HB_P_LINEOFFSET, 189,	/* 690 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'M', 'E', 'S', '/', 'A', 'N', 'O', ' ', '4', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05733 */ HB_P_LINEOFFSET, 190,	/* 691 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'i', 'a', 's', ' ', 'p', '/', 'S', 'u', 'g', 'e', 's', 't', 'a', 'o', ' ', 'd', 'e', ' ', 'C', 'o', 'm', 'p', 'r', 'a', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05777 */ HB_P_LINEOFFSET, 191,	/* 692 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_ONE,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'S', 'a', 'l', 'd', 'o', ' ', 'A', 't', 'u', 'a', 'l', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 05821 */ HB_P_LINEOFFSET, 192,	/* 693 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 05830 */ HB_P_LINEOFFSET, 193,	/* 694 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 05872 */ HB_P_LINEOFFSET, 194,	/* 695 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 05880 */ HB_P_LINEOFFSET, 196,	/* 697 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* MQTD_MES 0*/
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 163, 0,	/* MEXC_FORN */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 164, 0,	/* MEXC_CLI */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 165, 0,	/* MEXC_VEND */
	HB_P_POPLOCALNEAR, 7,	/* MDIAS */
/* 05902 */ HB_P_LINEOFFSET, 197,	/* 698 */
	HB_P_LOCALNEARSETINT, 8, 90, 0,	/* MD 90*/
/* 05908 */ HB_P_LINEOFFSET, 198,	/* 699 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 05986) */
/* 05922 */ HB_P_LINEOFFSET, 199,	/* 700 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 167, 0,	/* MDATA_SIS */
	HB_P_PUSHLOCALNEAR, 8,	/* MD */
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 2,
/* 05949 */ HB_P_LINEOFFSET, 200,	/* 701 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05959 */ HB_P_LINEOFFSET, 201,	/* 702 */
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 05969 */ HB_P_LINEOFFSET, 202,	/* 703 */
	HB_P_LOCALNEARADDINT, 8, 226, 255,	/* MD -30*/
/* 05975 */ HB_P_LINEOFFSET, 203,	/* 704 */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 05914) */
/* 05986 */ HB_P_LINEOFFSET, 204,	/* 705 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 168,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06056) */
	HB_P_FALSE,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 06057) */
	HB_P_TRUE,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06079 */ HB_P_LINEOFFSET, 205,	/* 706 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 168,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 20, 0,	/* 20 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06169 */ HB_P_LINEOFFSET, 206,	/* 707 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 168,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06260 */ HB_P_LINEOFFSET, 207,	/* 708 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 168,	/* __GETA */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 12, 0,	/* 12 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'a', 't', 'a', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'9', '9', '/', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 21, 0,	/* 21 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	6, 0,	/* MDATA */
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_FUNCTIONSHORT, 6,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06351 */ HB_P_LINEOFFSET, 208,	/* 709 */
	HB_P_PUSHSYMNEAR, 23,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 24,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 25,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	7, 0,	/* MDIAS */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 06390) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 06395) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'm', 'd', 'i', 'a', 's', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 26, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 06428 */ HB_P_LINEOFFSET, 209,	/* 710 */
	HB_P_PUSHSYMNEAR, 27,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 11, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 11, 0,	/* GETLIST */
/* 06450 */ HB_P_LINEOFFSET, 210,	/* 711 */
	HB_P_PUSHSYMNEAR, 28,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06465) */
	HB_P_JUMP, 187, 7,	/* 1979 (abs: 08441) */
/* 06465 */ HB_P_LINEOFFSET, 213,	/* 714 */
	HB_P_PUSHSYMNEAR, 169,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'P', 'r', 'e', 'e', 'n', 'c', 'h', 'i', 'd', 'o', 's', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 170, 0,	/* OPCAO */
/* 06512 */ HB_P_LINEOFFSET, 214,	/* 715 */
	HB_P_PUSHVARIABLE, 170, 0,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 06527) */
	HB_P_JUMP, 252, 251,	/* -1028 (abs: 05496) */
/* 06527 */ HB_P_LINEOFFSET, 217,	/* 718 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 166, 0,	/* I */
/* 06533 */ HB_P_LINEOFFSET, 218,	/* 719 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 06615) */
/* 06547 */ HB_P_LINEOFFSET, 219,	/* 720 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 30,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 35,	/* 35 (abs: 06596) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 133,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 167, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06604) */
/* 06598 */ HB_P_LINEOFFSET, 220,	/* 721 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* MQTD_MES 1*/
/* 06604 */ HB_P_LINEOFFSET, 222,	/* 723 */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_JUMPNEAR, 182,	/* -74 (abs: 06539) */
/* 06615 */ HB_P_LINEOFFSET, 223,	/* 724 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_PUSHBYTE, 62,	/* 62 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', ' ', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', 'V', 'a', 'l', 'o', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 06662 */ HB_P_LINEOFFSET, 224,	/* 725 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', '.', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06690 */ HB_P_LINEOFFSET, 225,	/* 726 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', '.', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06719 */ HB_P_LINEOFFSET, 226,	/* 727 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', '.', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06748 */ HB_P_LINEOFFSET, 227,	/* 728 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', '.', '.', ':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06777 */ HB_P_LINEOFFSET, 228,	/* 729 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'T', 'O', 'T', 'A', 'L', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06805 */ HB_P_LINEOFFSET, 229,	/* 730 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'M', 'E', 'D', 'I', 'A', '(', 0, 
	HB_P_PUSHSYMNEAR, 37,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	')', ':', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 06845 */ HB_P_LINEOFFSET, 230,	/* 731 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 50,	/* 50 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'S', 'u', 'g', 'e', 's', 't', 'a', 'o', ':', 0, 
	HB_P_DOSHORT, 1,
/* 06873 */ HB_P_LINEOFFSET, 231,	/* 732 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 166, 0,	/* I */
/* 06879 */ HB_P_LINEOFFSET, 232,	/* 733 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 216, 2,	/* 728 (abs: 07619) */
/* 06894 */ HB_P_LINEOFFSET, 233,	/* 734 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 171, 0,	/* Q_MOV */
/* 06902 */ HB_P_LINEOFFSET, 234,	/* 735 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 0, 
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 06929 */ HB_P_LINEOFFSET, 236,	/* 737 */
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	',', 'S', 'U', 'M', '(', 'v', 'l', '_', 'f', 'a', 't', 'u', 'r', 'a', ' ', '*', ' ', 'q', 'u', 'a', 'n', 't', 'd', ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 06965 */ HB_P_LINEOFFSET, 240,	/* 741 */
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'a', 'n', 'c', 'e', 'l', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'A', 'N', 'D', ' ', 't', 'i', 'p', 'o', ' ', '=', ' ', 39, '0', '2', 39, ' ', 'A', 'N', 'D', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', '=', ' ', 39, 'S', 39, ' ', 'A', 'N', 'D', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ' ', 'N', 'O', 'T', ' ', 'L', 'I', 'K', 'E', ' ', 39, 'B', 'L', '%', 39, 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 07073 */ HB_P_LINEOFFSET, 241,	/* 742 */
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '>', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '0', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'/', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 07156 */ HB_P_LINEOFFSET, 242,	/* 743 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 173, 0,	/* MDIA */
/* 07164 */ HB_P_LINEOFFSET, 243,	/* 744 */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '1', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07210) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '3', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07234) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '5', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07258) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '7', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07282) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '8', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07306) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '0', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 23,	/* 23 (abs: 07330) */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '2', 0, 
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07344) */
/* 07332 */ HB_P_LINEOFFSET, 244,	/* 745 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'3', '0', 0, 
	HB_P_POPVARIABLE, 173, 0,	/* MDIA */
	HB_P_JUMPNEAR, 48,	/* 48 (abs: 07390) */
/* 07344 */ HB_P_LINEOFFSET, 245,	/* 746 */
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '2', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 07380) */
/* 07368 */ HB_P_LINEOFFSET, 246,	/* 747 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '8', 0, 
	HB_P_POPVARIABLE, 173, 0,	/* MDIA */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 07390) */
/* 07380 */ HB_P_LINEOFFSET, 248,	/* 749 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'3', '0', 0, 
	HB_P_POPVARIABLE, 173, 0,	/* MDIA */
/* 07390 */ HB_P_LINEOFFSET, 250,	/* 751 */
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '<', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', '0', 0, 
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 47,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* MDATA */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 173, 0,	/* MDIA */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 07475 */ HB_P_LINEOFFSET, 251,	/* 752 */
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'A', 'N', 'D', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 80,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 1, 0,	/* MCOD_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 172, 0,	/* CCOMM */
/* 07510 */ HB_P_LINEOFFSET, 252,	/* 753 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 172, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 171, 0,	/* Q_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 07531 */ HB_P_LINEOFFSET, 253,	/* 754 */
	HB_P_MESSAGE, 78, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 79,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07555 */ HB_P_LINEOFFSET, 254,	/* 755 */
	HB_P_PUSHSYMNEAR, 132,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 171, 0,	/* Q_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 07571) */
	HB_P_JUMPNEAR, 40,	/* 40 (abs: 07609) */
/* 07571 */ HB_P_LINE, 246, 2,	/* 758 */
	HB_P_PUSHMEMVAR, 171, 0,	/* Q_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALREF, 10, 0,	/* MQTD */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPOP,
/* 07588 */ HB_P_LINE, 247, 2,	/* 759 */
	HB_P_PUSHMEMVAR, 171, 0,	/* Q_MOV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALREF, 11, 0,	/* MVLR */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_ARRAYPOP,
/* 07606 */ HB_P_LINE, 248, 2,	/* 760 */
	HB_P_PUSHVARIABLE, 166, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 166, 0,	/* I */
	HB_P_JUMP, 37, 253,	/* -731 (abs: 06885) */
/* 07619 */ HB_P_LINE, 249, 2,	/* 761 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_DOSHORT, 1,
/* 07629 */ HB_P_LINE, 250, 2,	/* 762 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07672 */ HB_P_LINE, 251, 2,	/* 763 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07720 */ HB_P_LINE, 252, 2,	/* 764 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07764 */ HB_P_LINE, 253, 2,	/* 765 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07813 */ HB_P_LINE, 254, 2,	/* 766 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07857 */ HB_P_LINE, 255, 2,	/* 767 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07906 */ HB_P_LINE, 0, 3,	/* 768 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07950 */ HB_P_LINE, 1, 3,	/* 769 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 07999 */ HB_P_LINE, 2, 3,	/* 770 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08060 */ HB_P_LINE, 3, 3,	/* 771 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 6,	/* 6 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08126 */ HB_P_LINE, 4, 3,	/* 772 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08190 */ HB_P_LINE, 5, 3,	/* 773 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_PUSHSYMNEAR, 142,	/* COL */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 11,	/* MVLR */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_DIVIDE,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08259 */ HB_P_LINE, 6, 3,	/* 774 */
	HB_P_PUSHSYMNEAR, 18,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 19,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 136,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 08349) */
	HB_P_PUSHLOCALNEAR, 2,	/* CON_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 10,	/* MQTD */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 9,	/* MQTD_MES */
	HB_P_DIVIDE,
	HB_P_MINUS,
	HB_P_JUMPNEAR, 3,	/* 3 (abs: 08350) */
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	'9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_DOSHORT, 1,
/* 08371 */ HB_P_LINE, 7, 3,	/* 775 */
	HB_P_PUSHSYMNEAR, 22,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08380 */ HB_P_LINE, 8, 3,	/* 776 */
	HB_P_PUSHSYMNEAR, 17,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 's', 's', 'i', 'o', 'n', 'e', ' ', 'q', 'u', 'a', 'l', 'q', 'u', 'e', 'r', ' ', 't', 'e', 'c', 'l', 'a', ' ', 'p', 'a', 'r', 'a', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'a', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 08429 */ HB_P_LINE, 9, 3,	/* 777 */
	HB_P_PUSHSYMNEAR, 101,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 130, 244,	/* -2942 (abs: 05496) */
/* 08441 */ HB_P_LINE, 15, 3,	/* 783 */
	HB_P_PUSHSYMNEAR, 121,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08449 */ HB_P_LINE, 16, 3,	/* 784 */
	HB_P_PUSHSYMNEAR, 121,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08457 */ HB_P_LINE, 17, 3,	/* 785 */
	HB_P_PUSHSYMNEAR, 121,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08465 */ HB_P_LINE, 18, 3,	/* 786 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 08471 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

