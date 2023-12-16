/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacbal_pin.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacbal_pin.prg /q /oC:\hti\SISCOM\sacbal_pin.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:35 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacbal_pin.prg"

HB_FUNC( SACBAL_PIN );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( READKILL );
HB_FUNC_EXTERN( SET_KEY );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( SETCOR );
HB_FUNC_EXTERN( PINPAD );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( FECHA_TELA );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( UPDATED );
HB_FUNC_EXTERN( DBUNLOCK );
HB_FUNC_EXTERN( SELECT );
HB_FUNC_EXTERN( INDEXORD );
HB_FUNC_EXTERN( SR_BEGINTRANSACTION );
HB_FUNC_EXTERN( IAT );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( CRIPTOGRAFIA );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( SR_COMMITTRANSACTION );
HB_FUNC_EXTERN( SR_ENDTRANSACTION );
HB_FUNC_EXTERN( VER_SERIE );
HB_FUNC_EXTERN( SR_SETACTIVECONNECTION );
HB_FUNC_EXTERN( DBSELECTAREA );
HB_FUNC_EXTERN( ORDSETFOCUS );
HB_FUNC_EXTERN( DBSEEK );
HB_FUNC_EXTERN( BLOQREG );
HB_FUNC_EXTERN( ADIREG );
HB_FUNC_EXTERN( DBCOMMIT );
HB_FUNC_EXTERN( SR_SQLPARSE );
HB_FUNC_EXTERN( SR_SQLCODEGEN );
HB_FUNC_EXTERN( TRACELOG );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACBAL_PIN )
{ "SACBAL_PIN", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACBAL_PIN )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "MCOD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNOME_VEN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_OP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFABRICA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCOD_BC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CONS_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFISICO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "READKILL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READKILL )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SET_KEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET_KEY )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "MCHASSIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCRI5", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCRI4", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCRI3", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCRI2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDESCRI1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "SETCOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCOR )}, NULL },
{ "PINPAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( PINPAD )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "CONS_SLDPED", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPDATED", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPDATED )}, NULL },
{ "DBUNLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBUNLOCK )}, NULL },
{ "SELECT", {HB_FS_PUBLIC}, {HB_FUNCNAME( SELECT )}, NULL },
{ "INDEXORD", {HB_FS_PUBLIC}, {HB_FUNCNAME( INDEXORD )}, NULL },
{ "ARET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_PARAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NUM_PARAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_BEGINTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_BEGINTRANSACTION )}, NULL },
{ "IAT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IAT )}, NULL },
{ "MLINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDATA_SIS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIPTOGRAFIA", {HB_FS_PUBLIC}, {HB_FUNCNAME( CRIPTOGRAFIA )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "SR_COMMITTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_COMMITTRANSACTION )}, NULL },
{ "SR_ENDTRANSACTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_ENDTRANSACTION )}, NULL },
{ "VER_SERIE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SERIE )}, NULL },
{ "MCONS_CAM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_SETACTIVECONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SETACTIVECONNECTION )}, NULL },
{ "NCNN1", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN2", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NCNN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBSELECTAREA", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSELECTAREA )}, NULL },
{ "ORDSETFOCUS", {HB_FS_PUBLIC}, {HB_FUNCNAME( ORDSETFOCUS )}, NULL },
{ "BALAN", {HB_FS_PUBLIC | HB_FS_MEMVAR}, {NULL}, NULL },
{ "DBSEEK", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBSEEK )}, NULL },
{ "BLOQREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( BLOQREG )}, NULL },
{ "DATA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DOC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SALDO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERADOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OBS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ADIREG", {HB_FS_PUBLIC}, {HB_FUNCNAME( ADIREG )}, NULL },
{ "COD_MERC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRICAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DBCOMMIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DBCOMMIT )}, NULL },
{ "MCAMPO_ARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_SQLPARSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SQLPARSE )}, NULL },
{ "APCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_SQLCODEGEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_SQLCODEGEN )}, NULL },
{ "MCODEMPRESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NSYSTEMID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRACELOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRACELOG )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACBAL_PIN )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACBAL_PIN
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACBAL_PIN = hb_vm_SymbolInit_SACBAL_PIN;
   #pragma data_seg()
#endif

HB_FUNC( SACBAL_PIN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 39, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 16, 0,	/* 16 */
	HB_P_LOCALNEARSETSTR, 2, 11, 0,	/* MPRG 11*/
	'S', 'A', 'C', 'B', 'A', 'L', '_', 'P', 'I', 'N', 0, 
	HB_P_LOCALNEARSETSTR, 3, 37, 0,	/* MTITULO 37*/
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '(', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'D', 'E', ' ', 'S', 'A', 'L', 'D', 'O', ' ', 'E', ' ', 'P', 'R', 'E', 'C', 'O', 'S', ')', 0, 
	HB_P_LOCALNEARSETINT, 24, 0, 0,	/* MSLD_PED 0*/
	HB_P_LOCALNEARSETINT, 25, 0, 0,	/* MSALDO_MERC 0*/
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* MBALANCO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MATU_BALAN 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MALTERA 2*/
	' ', 0, 
	HB_P_LOCALNEARSETINT, 29, 0, 0,	/* MVLR_MERC 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 31,	/* CONS_MOV */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MNUM_DOC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* M_DEMO */
/* 00111 */ HB_P_LINEOFFSET, 2,	/* 18 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 10,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 2,	/* MCOD_MERC */
	HB_P_PUSHSYMNEAR, 3,	/* MNOME_VEN */
	HB_P_PUSHSYMNEAR, 4,	/* MCOD_OP */
	HB_P_PUSHSYMNEAR, 5,	/* MCOD_FORN */
	HB_P_PUSHSYMNEAR, 6,	/* MFABRICA */
	HB_P_PUSHSYMNEAR, 7,	/* MCOD_BC */
	HB_P_PUSHSYMNEAR, 8,	/* CONS_MERC */
	HB_P_PUSHSYMNEAR, 9,	/* MFISICO */
	HB_P_DOSHORT, 8,
	HB_P_POPVARIABLE, 9, 0,	/* MFISICO */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_MERC */
	HB_P_POPVARIABLE, 6, 0,	/* MFABRICA */
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_FORN */
/* 00158 */ HB_P_LINEOFFSET, 4,	/* 20 */
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 3,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00193) */
/* 00188 */ HB_P_LINEOFFSET, 5,	/* 21 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00193 */ HB_P_LINEOFFSET, 7,	/* 23 */
	HB_P_PUSHSYMNEAR, 13,	/* READKILL */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPMEMVAR, 14, 0,	/* GETLIST */
/* 00207 */ HB_P_LINEOFFSET, 8,	/* 24 */
	HB_P_LOCALNEARSETINT, 8, 16, 0,	/* LBA 16*/
/* 00213 */ HB_P_LINEOFFSET, 9,	/* 25 */
	HB_P_LOCALNEARSETINT, 9, 78, 0,	/* CBA 78*/
/* 00219 */ HB_P_LINEOFFSET, 10,	/* 26 */
	HB_P_PUSHSYMNEAR, 15,	/* SET_KEY */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 00240 */ HB_P_LINEOFFSET, 11,	/* 27 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'b', 'a', 'l', 'a', 'n', 0, 
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'b', 'a', 'l', 'a', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00271) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 12,	/* 28 */
	HB_P_PUSHSYMNEAR, 16,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'm', 'e', 'r', 'c', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'm', 'e', 'r', 'c', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00300) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00300 */ HB_P_LINEOFFSET, 14,	/* 30 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCODPRODUTO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00317) */
/* 00308 */ HB_P_LINEOFFSET, 15,	/* 31 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCODPRODUTO */
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_BC */
	HB_P_JUMPNEAR, 14,	/* 14 (abs: 00329) */
/* 00317 */ HB_P_LINEOFFSET, 17,	/* 33 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_BC */
/* 00329 */ HB_P_LINEOFFSET, 19,	/* 35 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 17, 0,	/* MCHASSIS */
/* 00341 */ HB_P_LINEOFFSET, 20,	/* 36 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 60,	/* 60 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 18, 0,	/* MDESCRI5 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 19, 0,	/* MDESCRI4 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 20, 0,	/* MDESCRI3 */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 21, 0,	/* MDESCRI2 */
	HB_P_POPVARIABLE, 22, 0,	/* MDESCRI1 */
/* 00369 */ HB_P_LINEOFFSET, 21,	/* 37 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 23,	/* MOBS1 */
/* 00380 */ HB_P_LINEOFFSET, 22,	/* 38 */
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MALTERA 2*/
	' ', 0, 
/* 00388 */ HB_P_LINEOFFSET, 23,	/* 39 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 5, 0,	/* MCOD_FORN */
/* 00394 */ HB_P_LINEOFFSET, 24,	/* 40 */
	HB_P_PUSHSYMNEAR, 23,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 39,	/* 39 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', ' ', 'p', '/', 'R', 'e', 't', 'o', 'r', 'n', 'a', 'r', ' ', 0, 
	HB_P_DOSHORT, 1,
/* 00442 */ HB_P_LINEOFFSET, 25,	/* 41 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 4, 0,	/* MCOD_OP */
/* 00454 */ HB_P_LINEOFFSET, 26,	/* 42 */
	HB_P_LOCALNEARSETSTR, 6, 2, 0,	/* OPCAO 2*/
	'S', 0, 
/* 00462 */ HB_P_LINEOFFSET, 27,	/* 43 */
	HB_P_LOCALNEARSETSTR, 27, 2, 0,	/* MATU_BALAN 2*/
	'N', 0, 
/* 00470 */ HB_P_LINEOFFSET, 28,	/* 44 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 32,	/* MNUM_DOC */
/* 00481 */ HB_P_LINEOFFSET, 29,	/* 45 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_MERC */
/* 00487 */ HB_P_LINEOFFSET, 30,	/* 46 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MMERC */
/* 00498 */ HB_P_LINEOFFSET, 31,	/* 47 */
	HB_P_PUSHSYMNEAR, 1,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 16,	/* MGRUPO */
/* 00509 */ HB_P_LINEOFFSET, 34,	/* 50 */
	HB_P_LOCALNEARSETINT, 37, 0, 0,	/* MLIB_MERC 0*/
	HB_P_PUSHLOCALNEAR, 37,	/* MLIB_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 36,	/* MLIB_REAL */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 35,	/* MPR_VENDA4 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 34,	/* MPR_VENDA3 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 33,	/* MPR_VENDA2 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 24,	/* MSLD_PED */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 19,	/* MQUANTD_AV */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 14,	/* MPR_VENDA1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 20,	/* MESTOQUE */
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 9, 0,	/* MFISICO */
	HB_P_POPLOCALNEAR, 12,	/* MFISCAL */
/* 00559 */ HB_P_LINEOFFSET, 35,	/* 51 */
	HB_P_PUSHSYMNEAR, 24,	/* SETCOR */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 00567 */ HB_P_LINEOFFSET, 36,	/* 52 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 38,	/* M_DEMO */
/* 00574 */ HB_P_LINEOFFSET, 37,	/* 53 */
	HB_P_PUSHSYMNEAR, 25,	/* PINPAD */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'o', ' ', 'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPVARIABLE, 7, 0,	/* MCOD_BC */
/* 00662 */ HB_P_LINEOFFSET, 39,	/* 55 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00686) */
/* 00674 */ HB_P_LINEOFFSET, 40,	/* 56 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00681 */ HB_P_LINEOFFSET, 41,	/* 57 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00686 */ HB_P_LINEOFFSET, 43,	/* 59 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 178, 1,	/* 434 (abs: 01130) */
/* 00699 */ HB_P_LINEOFFSET, 44,	/* 60 */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 30,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_GREATER,
	HB_P_JUMPFALSE, 211, 0,	/* 211 (abs: 00928) */
/* 00720 */ HB_P_LINEOFFSET, 45,	/* 61 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_MERC */
/* 00728 */ HB_P_LINEOFFSET, 46,	/* 62 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'b', 'a', 'r', 'r', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 00797 */ HB_P_LINEOFFSET, 47,	/* 63 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00821 */ HB_P_LINEOFFSET, 48,	/* 64 */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 00907) */
/* 00835 */ HB_P_LINEOFFSET, 49,	/* 65 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 53,	/* 53 */
	'C', 'O', 'D', 'I', 'G', 'O', ' ', 'd', 'e', ' ', 'B', 'A', 'R', 'R', 'A', ' ', 'e', ' ', 'R', 'E', 'F', 'E', 'R', 'E', 'N', 'C', 'I', 'A', ' ', 'A', 'U', 'X', 'I', 'L', 'I', 'A', 'R', ' ', 'n', 'a', 'o', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00897 */ HB_P_LINEOFFSET, 50,	/* 66 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 164, 253,	/* -604 (abs: 00300) */
/* 00907 */ HB_P_LINEOFFSET, 53,	/* 69 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_JUMP, 215, 0,	/* 215 (abs: 01140) */
/* 00928 */ HB_P_LINEOFFSET, 55,	/* 71 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 8, 0,	/* CONS_MERC */
/* 00936 */ HB_P_LINEOFFSET, 56,	/* 72 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 7, 0,	/* MCOD_BC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 8, 0,	/* CONS_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01017 */ HB_P_LINEOFFSET, 57,	/* 73 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01041 */ HB_P_LINEOFFSET, 58,	/* 74 */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 8, 0,	/* CONS_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 01110) */
/* 01055 */ HB_P_LINEOFFSET, 59,	/* 75 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'C', 'o', 'd', 'i', 'g', 'o', ' ', 'd', 'a', ' ', 'm', 'e', 'r', 'c', 'a', 'd', 'o', 'r', 'i', 'a', ' ', 'n', 'a', 'o', ' ', 'c', 'a', 'd', 'a', 's', 't', 'r', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 01100 */ HB_P_LINEOFFSET, 60,	/* 76 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 217, 252,	/* -807 (abs: 00300) */
/* 01110 */ HB_P_LINEOFFSET, 63,	/* 79 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 01140) */
/* 01130 */ HB_P_LINEOFFSET, 66,	/* 82 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 187, 252,	/* -837 (abs: 00300) */
/* 01140 */ HB_P_LINEOFFSET, 69,	/* 85 */
	HB_P_PUSHSYMNEAR, 37,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'j', 'p', 'g', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 135, 0,	/* 135 (abs: 01317) */
/* 01185 */ HB_P_LINEOFFSET, 70,	/* 86 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '0', '5', ',', '6', '0', ',', '1', '6', ',', '8', '0', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01216 */ HB_P_LINEOFFSET, 71,	/* 87 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '0', '5', ',', '6', '0', ',', '1', '6', ',', '8', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '2', '9', ']', ')', '+', 34, 'P', 34, '+', 'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', '[', '1', ',', '8', ']', '+', 34, '.', 'j', 'p', 'g', 34, ',', '.', 'T', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 177, 0,	/* 177 (abs: 01491) */
/* 01317 */ HB_P_LINEOFFSET, 72,	/* 88 */
	HB_P_PUSHSYMNEAR, 37,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 38,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 39, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'P', 0, 
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'b', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 132, 0,	/* 132 (abs: 01491) */
/* 01362 */ HB_P_LINEOFFSET, 73,	/* 89 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '0', '5', ',', '5', '5', ',', '1', '6', ',', '7', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01393 */ HB_P_LINEOFFSET, 74,	/* 90 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'*', 'W', 'V', 'W', '_', 'D', 'r', 'a', 'w', 'I', 'm', 'a', 'g', 'e', '(', ' ', ',', '0', '5', ',', '6', '5', ',', '1', '6', ',', '8', '0', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'm', '_', 'i', 'n', 'd', 'i', 'v', '[', '1', ',', '2', '9', ']', ')', '+', 34, 'P', 34, '+', 'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', '[', '1', ',', '8', ']', '+', 34, '.', 'b', 'm', 'p', 34, ',', '.', 'T', '.', ',', '.', 'F', '.', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01491 */ HB_P_LINEOFFSET, 76,	/* 92 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '1', '3', ',', '4', '5', ',', '1', '6', ',', '5', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01522 */ HB_P_LINEOFFSET, 77,	/* 93 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '1', '3', ',', '4', '7', ',', 34, 'C', 'o', 'd', 'i', 'g', 'o', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01593 */ HB_P_LINEOFFSET, 78,	/* 94 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '1', '5', ',', '4', '7', ',', 'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', '[', '1', ',', '8', ']', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01659 */ HB_P_LINEOFFSET, 79,	/* 95 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '1', '8', ',', '4', '5', ',', '2', '1', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01690 */ HB_P_LINEOFFSET, 80,	/* 96 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '1', '8', ',', '4', '7', ',', 34, 'D', 'e', 's', 'c', 'r', 'i', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'r', 'o', 'd', 'u', 't', 'o', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01775 */ HB_P_LINEOFFSET, 81,	/* 97 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '0', ',', '4', '7', ',', 'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', '[', '1', ',', '9', ']', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 01841 */ HB_P_LINEOFFSET, 83,	/* 99 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 41, 0,	/* CONS_SLDPED */
/* 01849 */ HB_P_LINEOFFSET, 84,	/* 100 */
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'S', 'U', 'M', '(', 'p', 'q', 'u', 'a', 'n', 't', 'd', ')', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	' ', 'A', 'N', 'D', ' ', '(', 'p', 'p', 'a', 'g', ' ', 'I', 'S', ' ', 'N', 'U', 'L', 'L', ' ', 'O', 'R', ' ', 'p', 'p', 'a', 'g', ' ', '=', ' ', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 01983 */ HB_P_LINEOFFSET, 85,	/* 101 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 41, 0,	/* CONS_SLDPED */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 02004 */ HB_P_LINEOFFSET, 86,	/* 102 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 02028 */ HB_P_LINEOFFSET, 87,	/* 103 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '2', '3', ',', '4', '5', ',', '2', '6', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02059 */ HB_P_LINEOFFSET, 88,	/* 104 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 87,	/* 87 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '3', ',', '4', '7', ',', 34, 'S', 'a', 'l', 'd', 'o', ' ', 'P', 'e', 'n', 'd', 'e', 'n', 't', 'e', ' ', 'n', 'o', 's', ' ', 'P', 'e', 'd', 'i', 'd', 'o', 's', ' ', 'A', 'B', 'E', 'R', 'T', 'O', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02157 */ HB_P_LINEOFFSET, 89,	/* 105 */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 41, 0,	/* CONS_SLDPED */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 111,	/* 111 (abs: 02280) */
/* 02171 */ HB_P_LINEOFFSET, 90,	/* 106 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 96,	/* 96 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '5', ',', '4', '7', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'T', 'R', 'A', 'N', 'S', 'F', 'O', 'R', 'M', '(', 'c', 'o', 'n', 's', '_', 's', 'l', 'd', 'p', 'e', 'd', '[', '1', ',', '1', ']', ',', 34, '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 34, ')', ')', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 94,	/* 94 (abs: 02372) */
/* 02280 */ HB_P_LINEOFFSET, 92,	/* 108 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '5', ',', '4', '7', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'T', 'R', 'A', 'N', 'S', 'F', 'O', 'R', 'M', '(', '0', ',', 34, '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 34, ')', ')', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02372 */ HB_P_LINEOFFSET, 108,	/* 124 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 13,	/* MPR_VENDA */
/* 02384 */ HB_P_LINEOFFSET, 109,	/* 125 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 47,	/* 47 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 14,	/* MPR_VENDA1 */
/* 02396 */ HB_P_LINEOFFSET, 110,	/* 126 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MPR_FAT */
/* 02408 */ HB_P_LINEOFFSET, 111,	/* 127 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 49,	/* 49 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 21,	/* MPR_FAT */
/* 02420 */ HB_P_LINEOFFSET, 112,	/* 128 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 10,	/* MMERC */
/* 02432 */ HB_P_LINEOFFSET, 113,	/* 129 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 16,	/* MGRUPO */
/* 02444 */ HB_P_LINEOFFSET, 114,	/* 130 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 29,	/* MVLR_MERC */
/* 02456 */ HB_P_LINEOFFSET, 115,	/* 131 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '2', '8', ',', '4', '5', ',', '3', '1', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02487 */ HB_P_LINEOFFSET, 116,	/* 132 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '2', '8', ',', '4', '7', ',', 34, 'S', 'a', 'l', 'd', 'o', ' ', 'n', 'o', ' ', 'E', 's', 't', 'o', 'q', 'u', 'e', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02568 */ HB_P_LINEOFFSET, 117,	/* 133 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 98,	/* 98 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '3', '0', ',', '4', '7', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'T', 'R', 'A', 'N', 'S', 'F', 'O', 'R', 'M', '(', 'c', 'o', 'n', 's', '_', 'm', 'e', 'r', 'c', '[', '1', ',', '5', '6', ']', ',', 34, '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 34, ')', ')', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02677 */ HB_P_LINEOFFSET, 118,	/* 134 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_LESS,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 02710) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 28,	/* 28 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 120,	/* 120 (abs: 02830) */
/* 02712 */ HB_P_LINEOFFSET, 119,	/* 135 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '3', '3', ',', '4', '5', ',', '3', '5', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02743 */ HB_P_LINEOFFSET, 120,	/* 136 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '3', '3', ',', '4', '7', ',', 34, 'S', 'a', 'l', 'd', 'o', ' ', 'A', 'b', 'a', 'i', 'x', 'o', ' ', 'M', 'I', 'N', 'I', 'M', 'O', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 152, 0,	/* 152 (abs: 02979) */
/* 02830 */ HB_P_LINEOFFSET, 121,	/* 137 */
	HB_P_FALSE,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 02863) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 29,	/* 29 */
	HB_P_ARRAYPUSH,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 116,	/* 116 (abs: 02979) */
/* 02865 */ HB_P_LINEOFFSET, 122,	/* 138 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '3', '3', ',', '4', '5', ',', '3', '5', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02896 */ HB_P_LINEOFFSET, 123,	/* 139 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '3', '3', ',', '4', '7', ',', 34, 'S', 'a', 'l', 'd', 'o', ' ', 'A', 'c', 'i', 'm', 'a', ' ', 'M', 'I', 'X', 'I', 'M', 'O', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '1', '0', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 02979 */ HB_P_LINEOFFSET, 136,	/* 152 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 02986 */ HB_P_LINEOFFSET, 137,	/* 153 */
	HB_P_PUSHSYMNEAR, 35,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* PINPAD */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'F', 'i', 's', 'i', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'D', 'i', 'g', 'i', 't', 'e', ' ', 'a', ' ', 'q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'E', 's', 't', 'o', 'q', 'u', 'e', ' ', 'F', 'i', 's', 'i', 'c', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 9, 0,	/* MFISICO */
/* 03087 */ HB_P_LINEOFFSET, 138,	/* 154 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'*', 'b', 'o', 't', 'a', 'o', '(', '3', '7', ',', '4', '5', ',', '4', '0', ',', '8', '5', ')', 0, 
	HB_P_DOSHORT, 2,
/* 03118 */ HB_P_LINEOFFSET, 139,	/* 155 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '3', '7', ',', '4', '7', ',', 34, 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'D', 'i', 'g', 'i', 't', 'a', 'd', 'a', 34, ',', 'm', '_', 'c', 'o', 'l', 'o', 'r', '[', '3', ']', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 03201 */ HB_P_LINEOFFSET, 140,	/* 156 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_PUSHSTRSHORT, 90,	/* 90 */
	'*', 'D', 'r', 'a', 'w', 'L', 'a', 'b', 'e', 'l', '(', '3', '9', ',', '4', '7', ',', 'A', 'L', 'L', 'T', 'R', 'I', 'M', '(', 'T', 'R', 'A', 'N', 'S', 'F', 'O', 'R', 'M', '(', 'm', 'f', 'i', 's', 'i', 'c', 'o', ',', 34, '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', ',', '9', '9', '9', '.', '9', '9', '9', '9', 34, ')', ')', ',', ',', ',', ' ', 34, 'A', 'r', 'i', 'a', 'l', ' ', 'B', 'l', 'a', 'c', 'k', 34, ',', '2', '0', ',', '8', ')', 0, 
	HB_P_DOSHORT, 2,
/* 03302 */ HB_P_LINEOFFSET, 155,	/* 171 */
	HB_P_PUSHSYMNEAR, 43,	/* UPDATED */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03317) */
	HB_P_LOCALNEARSETSTR, 28, 2, 0,	/* MALTERA 2*/
	'*', 0, 
/* 03317 */ HB_P_LINEOFFSET, 156,	/* 172 */
	HB_P_PUSHSYMNEAR, 26,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 19,	/* 19 (abs: 03346) */
/* 03329 */ HB_P_LINEOFFSET, 157,	/* 173 */
	HB_P_PUSHSYMNEAR, 44,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03336 */ HB_P_LINEOFFSET, 158,	/* 174 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 29, 244,	/* -3043 (abs: 00300) */
/* 03346 */ HB_P_LINEOFFSET, 166,	/* 182 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03353 */ HB_P_LINEOFFSET, 167,	/* 183 */
	HB_P_PUSHSYMNEAR, 45,	/* SELECT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 4,	/* MSELE */
	HB_P_PUSHSYMNEAR, 46,	/* INDEXORD */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPLOCALNEAR, 5,	/* MORDE */
/* 03369 */ HB_P_LINEOFFSET, 168,	/* 184 */
	HB_P_PUSHSYMNEAR, 25,	/* PINPAD */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', '[', '1', ']', 'S', 'I', 'M', ' ', '[', '2', ']', ' ', 'N', 'a', 'o', 0, 
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'o', ' ', 'm', 'o', 'v', 'i', 'm', 'e', 'n', 't', 'o', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 38,	/* M_DEMO */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'M', 'O', 'V', 'I', 'M', 'E', 'N', 'T', 'O', ' ', 'D', 'O', ' ', 'B', 'A', 'L', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 8,
	HB_P_POPLOCALNEAR, 6,	/* OPCAO */
/* 03456 */ HB_P_LINEOFFSET, 169,	/* 185 */
	HB_P_PUSHLOCALNEAR, 6,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 163, 243,	/* -3165 (abs: 00300) */
/* 03468 */ HB_P_LINEOFFSET, 174,	/* 190 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 28,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 03492) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 03499) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03513) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03527) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03541) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03555) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 03569) */
	HB_P_POP,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 03663) */
/* 03571 */ HB_P_LINEOFFSET, 175,	/* 191 */
	HB_P_PUSHSYMNEAR, 34,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'a', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ',', ' ', 'p', 'o', 'i', 's', ' ', 'n', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'f', 'e', 'i', 't', 'a', ' ', 'N', 'E', 'N', 'H', 'U', 'M', 'A', ' ', 'A', 'L', 'T', 'E', 'R', 'A', 'C', 'A', 'O', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 03653 */ HB_P_LINEOFFSET, 176,	/* 192 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 224, 242,	/* -3360 (abs: 00300) */
/* 03663 */ HB_P_LINEOFFSET, 179,	/* 195 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 47, 0,	/* ARET */
/* 03671 */ HB_P_LINEOFFSET, 180,	/* 196 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 48, 0,	/* M_PARAM */
/* 03679 */ HB_P_LINEOFFSET, 182,	/* 198 */
	HB_P_PUSHSYMNEAR, 40,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* M_PARAM */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_ARRAYGEN, 19, 0,	/* 19 */
	HB_P_DOSHORT, 2,
/* 03768 */ HB_P_LINEOFFSET, 183,	/* 199 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 49, 0,	/* NUM_PARAM */
/* 03774 */ HB_P_LINEOFFSET, 184,	/* 200 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 50, 0,	/* M_MERC */
/* 03782 */ HB_P_LINEOFFSET, 185,	/* 201 */
	HB_P_PUSHSYMNEAR, 51,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03789 */ HB_P_LINEOFFSET, 186,	/* 202 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 50, 0,	/* M_MERC */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 03865 */ HB_P_LINEOFFSET, 187,	/* 203 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 03889 */ HB_P_LINEOFFSET, 188,	/* 204 */
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 9,	/* 9 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_PLUS,
	HB_P_PUSHINT, 232, 3,	/* 1000 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 52,	/* IAT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 14,	/* 14 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 68,	/* 68 */
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 53, 0,	/* MLINHA */
/* 03980 */ HB_P_LINEOFFSET, 189,	/* 205 */
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 's', 'a', 'l', 'd', 'o', '_', 'f', 'i', 's', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04036 */ HB_P_LINEOFFSET, 190,	/* 206 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'a', 'l', 'd', 'o', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04079 */ HB_P_LINEOFFSET, 191,	/* 207 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 's', 'a', 'l', 'd', 'o', '_', 'a', 'v', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 57,	/* 57 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 19,	/* MQUANTD_AV */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04120 */ HB_P_LINEOFFSET, 192,	/* 208 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 's', 'a', 'l', 'd', 'o', '_', 'e', 's', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 59,	/* 59 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 20,	/* MESTOQUE */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04162 */ HB_P_LINEOFFSET, 193,	/* 209 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04195 */ HB_P_LINEOFFSET, 194,	/* 210 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPR_VENDA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04228 */ HB_P_LINEOFFSET, 195,	/* 211 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MPR_VENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04261 */ HB_P_LINEOFFSET, 196,	/* 212 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MPR_VENDA3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04294 */ HB_P_LINEOFFSET, 197,	/* 213 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MPR_VENDA4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04327 */ HB_P_LINEOFFSET, 198,	/* 214 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'r', '_', 'f', 'a', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPR_FAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04357 */ HB_P_LINEOFFSET, 199,	/* 215 */
	HB_P_PUSHLOCALNEAR, 28,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 35,	/* 35 (abs: 04401) */
/* 04368 */ HB_P_LINEOFFSET, 200,	/* 216 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04401 */ HB_P_LINEOFFSET, 202,	/* 218 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 04416) */
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 04454) */
/* 04418 */ HB_P_LINEOFFSET, 203,	/* 219 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 36,	/* 36 (abs: 04488) */
/* 04454 */ HB_P_LINEOFFSET, 205,	/* 221 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04488 */ HB_P_LINEOFFSET, 207,	/* 223 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 04572) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'R', 'E', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 107,	/* 107 (abs: 04679) */
/* 04574 */ HB_P_LINEOFFSET, 208,	/* 224 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04614 */ HB_P_LINEOFFSET, 209,	/* 225 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04647 */ HB_P_LINEOFFSET, 210,	/* 226 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'p', 'r', '_', 'm', 'e', 'd', 'i', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04679 */ HB_P_LINEOFFSET, 212,	/* 228 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 04728) */
/* 04694 */ HB_P_LINEOFFSET, 213,	/* 229 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04728 */ HB_P_LINEOFFSET, 215,	/* 231 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 04756) */
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 04822) */
/* 04758 */ HB_P_LINEOFFSET, 216,	/* 232 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04789 */ HB_P_LINEOFFSET, 217,	/* 233 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04822 */ HB_P_LINEOFFSET, 219,	/* 235 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 04912) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 04987) */
/* 04914 */ HB_P_LINEOFFSET, 220,	/* 236 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04954 */ HB_P_LINEOFFSET, 221,	/* 237 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 04987 */ HB_P_LINEOFFSET, 223,	/* 239 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 05078) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'L', 'R', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 74,	/* 74 (abs: 05152) */
/* 05080 */ HB_P_LINEOFFSET, 224,	/* 240 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 05120 */ HB_P_LINEOFFSET, 225,	/* 241 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 05152 */ HB_P_LINEOFFSET, 227,	/* 243 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'h', 'v', '_', 'c', 'r', 'i', 'p', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* CRIPTOGRAFIA */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 53, 0,	/* MLINHA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 05195 */ HB_P_LINEOFFSET, 228,	/* 244 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 05241 */ HB_P_LINEOFFSET, 229,	/* 245 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 05259 */ HB_P_LINEOFFSET, 247,	/* 263 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 141,	/* 141 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 'l', 'o', 'g', 'p', 'r', 'o', 'd', 'u', 't', 'o', ' ', '(', 'd', 'a', 't', 'a', '_', 's', 'i', 's', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'q', 'u', 'a', 'n', 't', 'd', ',', 's', 'a', 'l', 'd', 'o', '_', 'a', 'n', 't', ',', 's', 'a', 'l', 'd', 'o', '_', 'p', 'o', 's', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'r', 'o', 'g', ',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ',', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', ',', 'e', 'n', 't', '_', 's', 'a', 'i', ',', 'S', 'R', '_', 'D', 'E', 'L', 'E', 'T', 'E', 'D', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 05494) */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 05500) */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'S', 'A', 'C', 'B', 'A', 'L', '1', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LEFT, 15, 0,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 05641) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 05645) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
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
/* 05673 */ HB_P_LINEOFFSET, 248,	/* 264 */
	HB_P_PUSHSYMNEAR, 28,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 135, 1,	/* 391 (abs: 06073) */
/* 05685 */ HB_P_LINE, 24, 1,	/* 280 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 131,	/* 131 */
	'I', 'N', 'S', 'E', 'R', 'T', ' ', 'I', 'N', 'T', 'O', ' ', 'l', 'o', 'g', 'p', 'r', 'o', 'd', '_', 'f', 'i', 's', ' ', '(', 'd', 'a', 't', 'a', '_', 's', 'i', 's', ',', 'd', 'a', 't', 'a', ',', 'h', 'o', 'r', 'a', ',', 'c', 'o', 'd', '_', 'p', 'r', 'o', 'd', ',', 'q', 'u', 'a', 'n', 't', 'd', ',', 's', 'a', 'l', 'd', 'o', '_', 'a', 'n', 't', ',', 's', 'a', 'l', 'd', 'o', '_', 'p', 'o', 's', ',', 'c', 'o', 'd', '_', 'o', 'p', 'e', 'r', ',', 'p', 'r', 'o', 'g', ',', 't', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ',', 'p', 'r', 'o', 'c', 'e', 's', 's', 'o', ',', 'e', 'n', 't', '_', 's', 'a', 'i', ' ', ')', ' ', 'V', 'A', 'L', 'U', 'E', 'S', ' ', '(', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 05909) */
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 05914) */
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_MULT,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 55,	/* 55 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_MINUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'S', 'A', 'C', 'B', 'A', 'L', '_', 'P', 'I', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 59,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_LEFT, 15, 0,	/* 15 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	',', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 06056) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 06060) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06073 */ HB_P_LINE, 27, 1,	/* 283 */
	HB_P_PUSHSYMNEAR, 60,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06081 */ HB_P_LINE, 28, 1,	/* 284 */
	HB_P_PUSHSYMNEAR, 61,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06089 */ HB_P_LINE, 29, 1,	/* 285 */
	HB_P_PUSHSYMNEAR, 62,	/* VER_SERIE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'1', '4', '1', '4', '9', '0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 111, 9,	/* 2415 (abs: 08522) */
/* 06110 */ HB_P_LINE, 30, 1,	/* 286 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 63, 0,	/* MCONS_CAM */
/* 06119 */ HB_P_LINE, 31, 1,	/* 287 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'a', 't', 'u', '_', 'p', 'r', 'o', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 'c', 'a', 'm', '_', 'd', 'b', 'a', 0, 
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 63, 0,	/* MCONS_CAM */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 06169 */ HB_P_LINE, 32, 1,	/* 288 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 06194 */ HB_P_LINE, 33, 1,	/* 289 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 64,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 65, 0,	/* NCNN1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 06223) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 63, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 111, 4,	/* 1135 (abs: 07358) */
/* 06226 */ HB_P_LINE, 35, 1,	/* 291 */
	HB_P_PUSHSYMNEAR, 51,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 06234 */ HB_P_LINE, 36, 1,	/* 292 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 0, 
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06262 */ HB_P_LINE, 37, 1,	/* 293 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06294 */ HB_P_LINE, 38, 1,	/* 294 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPR_VENDA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06328 */ HB_P_LINE, 39, 1,	/* 295 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MPR_VENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06362 */ HB_P_LINE, 40, 1,	/* 296 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MPR_VENDA3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06396 */ HB_P_LINE, 41, 1,	/* 297 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MPR_VENDA4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06430 */ HB_P_LINE, 42, 1,	/* 298 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'r', '_', 'f', 'a', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPR_FAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06461 */ HB_P_LINE, 43, 1,	/* 299 */
	HB_P_PUSHLOCALNEAR, 28,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 06507) */
/* 06473 */ HB_P_LINE, 44, 1,	/* 300 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06507 */ HB_P_LINE, 46, 1,	/* 302 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 06523) */
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 06562) */
/* 06525 */ HB_P_LINE, 47, 1,	/* 303 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 06597) */
/* 06562 */ HB_P_LINE, 49, 1,	/* 305 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06597 */ HB_P_LINE, 51, 1,	/* 307 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 06682) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'R', 'E', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 06792) */
/* 06684 */ HB_P_LINE, 52, 1,	/* 308 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06725 */ HB_P_LINE, 53, 1,	/* 309 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06759 */ HB_P_LINE, 54, 1,	/* 310 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'p', 'r', '_', 'm', 'e', 'd', 'i', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06792 */ HB_P_LINE, 56, 1,	/* 312 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 06843) */
/* 06808 */ HB_P_LINE, 57, 1,	/* 313 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06843 */ HB_P_LINE, 59, 1,	/* 315 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 06872) */
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 06940) */
/* 06874 */ HB_P_LINE, 60, 1,	/* 316 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06906 */ HB_P_LINE, 61, 1,	/* 317 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 06940 */ HB_P_LINE, 63, 1,	/* 319 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 07031) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 07108) */
/* 07033 */ HB_P_LINE, 64, 1,	/* 320 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07074 */ HB_P_LINE, 65, 1,	/* 321 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07108 */ HB_P_LINE, 67, 1,	/* 323 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 07200) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'L', 'R', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 07276) */
/* 07202 */ HB_P_LINE, 68, 1,	/* 324 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07243 */ HB_P_LINE, 69, 1,	/* 325 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07276 */ HB_P_LINE, 71, 1,	/* 327 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07323 */ HB_P_LINE, 72, 1,	/* 328 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 07342 */ HB_P_LINE, 73, 1,	/* 329 */
	HB_P_PUSHSYMNEAR, 60,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07350 */ HB_P_LINE, 74, 1,	/* 330 */
	HB_P_PUSHSYMNEAR, 61,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07358 */ HB_P_LINE, 78, 1,	/* 334 */
	HB_P_FALSE,
	HB_P_PUSHSYMNEAR, 64,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 66, 0,	/* NCNN2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 07387) */
	HB_P_POP,
	HB_P_PUSHMEMVAR, 63, 0,	/* MCONS_CAM */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 111, 4,	/* 1135 (abs: 08522) */
/* 07390 */ HB_P_LINE, 79, 1,	/* 335 */
	HB_P_PUSHSYMNEAR, 51,	/* SR_BEGINTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 07398 */ HB_P_LINE, 80, 1,	/* 336 */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', 'S', 'E', 'T', ' ', 0, 
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07426 */ HB_P_LINE, 81, 1,	/* 337 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07458 */ HB_P_LINE, 82, 1,	/* 338 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '1', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 14,	/* MPR_VENDA1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07492 */ HB_P_LINE, 83, 1,	/* 339 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '2', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 33,	/* MPR_VENDA2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07526 */ HB_P_LINE, 84, 1,	/* 340 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '3', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 34,	/* MPR_VENDA3 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07560 */ HB_P_LINE, 85, 1,	/* 341 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'p', 'r', '_', 'v', 'e', 'n', 'd', 'a', '4', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 35,	/* MPR_VENDA4 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07594 */ HB_P_LINE, 86, 1,	/* 342 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	',', 'p', 'r', '_', 'f', 'a', 't', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 21,	/* MPR_FAT */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07625 */ HB_P_LINE, 87, 1,	/* 343 */
	HB_P_PUSHLOCALNEAR, 28,	/* MALTERA */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 07671) */
/* 07637 */ HB_P_LINE, 88, 1,	/* 344 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'd', 'a', 't', 'a', '_', 'a', 't', 'u', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07671 */ HB_P_LINE, 90, 1,	/* 346 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 07687) */
	HB_P_PUSHLOCALNEAR, 12,	/* MFISCAL */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 07726) */
/* 07689 */ HB_P_LINE, 91, 1,	/* 347 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
	HB_P_JUMPNEAR, 37,	/* 37 (abs: 07761) */
/* 07726 */ HB_P_LINE, 93, 1,	/* 349 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'd', 'a', 't', '_', 'u', 'l', 't', '_', 's', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07761 */ HB_P_LINE, 95, 1,	/* 351 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 07846) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'R', 'E', 'A', 'L', 0, 
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'R', 'E', 'A', 'L', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 110,	/* 110 (abs: 07956) */
/* 07848 */ HB_P_LINE, 96, 1,	/* 352 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 38,	/* 38 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07889 */ HB_P_LINE, 97, 1,	/* 353 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'r', 'e', 'a', 'l', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07923 */ HB_P_LINE, 98, 1,	/* 354 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'p', 'r', '_', 'm', 'e', 'd', 'i', 'o', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 07956 */ HB_P_LINE, 100, 1,	/* 356 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 37,	/* 37 (abs: 08007) */
/* 07972 */ HB_P_LINE, 101, 1,	/* 357 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'u', 'l', '_', 'a', 'l', 't', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08007 */ HB_P_LINE, 103, 1,	/* 359 */
	HB_P_PUSHLOCALNEAR, 13,	/* MPR_VENDA */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 46,	/* 46 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 14,	/* 14 (abs: 08036) */
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 45,	/* 45 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 08104) */
/* 08038 */ HB_P_LINE, 104, 1,	/* 360 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	',', 'h', 'o', 'r', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 55,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08070 */ HB_P_LINE, 105, 1,	/* 361 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'o', 'p', 'e', 'r', 'a', '_', 'p', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08104 */ HB_P_LINE, 107, 1,	/* 363 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 44,	/* 44 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 08195) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'C', 'U', 'S', 'T', 'O', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'C', 'U', 'S', 'T', 'O', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 08272) */
/* 08197 */ HB_P_LINE, 108, 1,	/* 364 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 37,	/* 37 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08238 */ HB_P_LINE, 109, 1,	/* 365 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	',', 'c', 'u', 's', 't', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 18,	/* MCUST_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08272 */ HB_P_LINE, 111, 1,	/* 367 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 43,	/* 43 */
	HB_P_ARRAYPUSH,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 77,	/* 77 (abs: 08364) */
	HB_P_POP,
	HB_P_PUSHSYMNEAR, 11,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'L', 'R', 'M', 'E', 'R', 'C', 0, 
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'B', 'A', 'L', 'A', 'N', 'C', 'O', ' ', '*', '*', '*', ' ', 'C', 'O', 'R', 'R', 'E', 'C', 'A', 'O', ' ', 'V', 'A', 'L', 'O', 'R', ' ', 'D', 'A', ' ', 'M', 'E', 'R', 'C', 'A', 'D', 'O', 'R', 'I', 'A', ' ', '*', '*', '*', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHMEMVAR, 12, 0,	/* NIVEL_ACESS */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_FUNCTIONSHORT, 5,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 08440) */
/* 08366 */ HB_P_LINE, 112, 1,	/* 368 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	',', 'a', '_', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 50, 0,	/* M_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08407 */ HB_P_LINE, 113, 1,	/* 369 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	',', 'v', 'l', 'r', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 29,	/* MVLR_MERC */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08440 */ HB_P_LINE, 115, 1,	/* 371 */
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08487 */ HB_P_LINE, 116, 1,	/* 372 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08506 */ HB_P_LINE, 117, 1,	/* 373 */
	HB_P_PUSHSYMNEAR, 60,	/* SR_COMMITTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08514 */ HB_P_LINE, 118, 1,	/* 374 */
	HB_P_PUSHSYMNEAR, 61,	/* SR_ENDTRANSACTION */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 08522 */ HB_P_LINE, 121, 1,	/* 377 */
	HB_P_PUSHSYMNEAR, 64,	/* SR_SETACTIVECONNECTION */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 67, 0,	/* NCNN */
	HB_P_DOSHORT, 1,
/* 08533 */ HB_P_LINE, 122, 1,	/* 378 */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 56,	/* 56 */
	HB_P_ARRAYPUSH,
	HB_P_POPLOCALNEAR, 25,	/* MSALDO_MERC */
/* 08546 */ HB_P_LINE, 123, 1,	/* 379 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 47, 0,	/* ARET */
/* 08555 */ HB_P_LINE, 124, 1,	/* 380 */
	HB_P_PUSHSTRSHORT, 70,	/* 70 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', 'p', 'n', 'u', 'm', '_', 'p', 'e', 'd', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'p', 'e', 'd', '_', 's', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ' ', '=', ' ', 39, ' ', 39, ' ', 'A', 'N', 'D', ' ', 'p', 'c', 'o', 'd', '_', 'm', 'e', 'r', 'c', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'p', 'd', 'a', 't', '_', 'p', 'e', 'd', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08678 */ HB_P_LINE, 125, 1,	/* 381 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHMEMVARREF, 47, 0,	/* ARET */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08700 */ HB_P_LINE, 126, 1,	/* 382 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08725 */ HB_P_LINE, 127, 1,	/* 383 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 31,	/* CONS_MOV */
/* 08733 */ HB_P_LINE, 128, 1,	/* 384 */
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	' ', 'A', 'N', 'D', ' ', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 33,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 08823 */ HB_P_LINE, 129, 1,	/* 385 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 31, 0,	/* CONS_MOV */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 08845 */ HB_P_LINE, 130, 1,	/* 386 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 08870 */ HB_P_LINE, 131, 1,	/* 387 */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 47, 0,	/* ARET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 08896) */
	HB_P_PUSHSYMNEAR, 29,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 31,	/* CONS_MOV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 08907) */
/* 08898 */ HB_P_LINE, 132, 1,	/* 388 */
	HB_P_LOCALNEARSETSTR, 26, 2, 0,	/* MBALANCO 2*/
	'N', 0, 
/* 08907 */ HB_P_LINE, 134, 1,	/* 390 */
	HB_P_FALSE,
	HB_P_PUSHLOCALNEAR, 26,	/* MBALANCO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 17,	/* 17 (abs: 08935) */
	HB_P_POP,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 8,	/* 8 (abs: 08935) */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_LESS,
	HB_P_OR,
	HB_P_JUMPFALSE, 237, 0,	/* 237 (abs: 09172) */
/* 08938 */ HB_P_LINE, 138, 1,	/* 394 */
	HB_P_PUSHSYMNEAR, 68,	/* DBSELECTAREA */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'b', 'a', 'l', 'a', 'n', 0, 
	HB_P_DOSHORT, 1,
	HB_P_PUSHSYMNEAR, 69,	/* ORDSETFOCUS */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 1,
/* 08960 */ HB_P_LINE, 140, 1,	/* 396 */
	HB_P_PUSHALIAS,
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIAS,
	HB_P_PUSHSYMNEAR, 71,	/* DBSEEK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_SWAPALIAS,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 09059) */
/* 08985 */ HB_P_LINE, 141, 1,	/* 397 */
	HB_P_PUSHSYMNEAR, 72,	/* BLOQREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 163, 0,	/* 163 (abs: 09156) */
/* 08996 */ HB_P_LINE, 142, 1,	/* 398 */
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 73,	/* DATA */
/* 09006 */ HB_P_LINE, 143, 1,	/* 399 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'B', 'L', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* DOC */
/* 09029 */ HB_P_LINE, 144, 1,	/* 400 */
	HB_P_PUSHLOCALNEAR, 25,	/* MSALDO_MERC */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* SALDO */
/* 09038 */ HB_P_LINE, 145, 1,	/* 401 */
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* OPERADOR */
/* 09048 */ HB_P_LINE, 146, 1,	/* 402 */
	HB_P_PUSHLOCALNEAR, 23,	/* MOBS1 */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* OBS */
	HB_P_JUMPNEAR, 99,	/* 99 (abs: 09156) */
/* 09059 */ HB_P_LINE, 149, 1,	/* 405 */
	HB_P_PUSHSYMNEAR, 78,	/* ADIREG */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 09156) */
/* 09069 */ HB_P_LINE, 150, 1,	/* 406 */
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 73,	/* DATA */
/* 09079 */ HB_P_LINE, 151, 1,	/* 407 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'B', 'L', 0, 
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 74,	/* DOC */
/* 09102 */ HB_P_LINE, 152, 1,	/* 408 */
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 79,	/* COD_MERC */
/* 09119 */ HB_P_LINE, 153, 1,	/* 409 */
	HB_P_PUSHLOCALNEAR, 10,	/* MMERC */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 80,	/* DESCRICAO */
/* 09128 */ HB_P_LINE, 154, 1,	/* 410 */
	HB_P_PUSHLOCALNEAR, 25,	/* MSALDO_MERC */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 75,	/* SALDO */
/* 09137 */ HB_P_LINE, 155, 1,	/* 411 */
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 76,	/* OPERADOR */
/* 09147 */ HB_P_LINE, 156, 1,	/* 412 */
	HB_P_PUSHLOCALNEAR, 23,	/* MOBS1 */
	HB_P_PUSHSYMNEAR, 70,	/* BALAN */
	HB_P_POPALIASEDFIELDNEAR, 77,	/* OBS */
/* 09156 */ HB_P_LINE, 159, 1,	/* 415 */
	HB_P_PUSHSYMNEAR, 81,	/* DBCOMMIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09164 */ HB_P_LINE, 160, 1,	/* 416 */
	HB_P_PUSHSYMNEAR, 44,	/* DBUNLOCK */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09172 */ HB_P_LINE, 163, 1,	/* 419 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 09193) */
/* 09182 */ HB_P_LINE, 164, 1,	/* 420 */
	HB_P_PUSHSYMNEAR, 27,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
	HB_P_JUMP, 70, 221,	/* -8890 (abs: 00300) */
/* 09193 */ HB_P_LINE, 182, 1,	/* 438 */
	HB_P_PUSHSTRSHORT, 128,	/* 128 */
	'e', 'm', 'p', 'r', 'e', 's', 'a', ',', 'd', 'a', 't', 'a', '_', 's', '_', 'e', ',', 'g', 'r', 'u', '_', 's', 'u', 'b', ',', ' ', 'c', 'o', 'd', 'i', 'g', 'o', ',', ' ', ' ', 'p', 'r', 'o', 'd', 'u', 't', 'o', ',', ' ', 'd', 'o', 'c', 'u', 'm', 'e', 'n', 't', 'o', ',', 'c', 'o', 'd', '_', 'v', 'e', 'n', 'd', ',', 'o', 'b', 's', '1', ',', ' ', ' ', ' ', ' ', 'e', 'n', 't', '_', 's', 'a', 'i', ',', 'q', 'u', 'a', 'n', 't', 'd', ',', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ',', 'f', 'o', 'r', 'n', 'e', 'c', 'e', ',', 'c', 'o', 'd', '_', 'f', 'a', 'b', ',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ',', 'p', 'r', '_', 'u', 'n', 'i', 't', 0, 
	HB_P_POPVARIABLE, 82, 0,	/* MCAMPO_ARQ */
/* 09329 */ HB_P_LINE, 183, 1,	/* 439 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'i', 'n', 's', 'e', 'r', 't', ' ', 'i', 'n', 't', 'o', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', '(', 0, 
	HB_P_PUSHVARIABLE, 82, 0,	/* MCAMPO_ARQ */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	',', 's', 'r', '_', 'd', 'e', 'l', 'e', 't', 'e', 'd', ')', ' ', 'v', 'a', 'l', 'u', 'e', 's', ' ', '(', '?', ',', '?', ',', '?', ',', '?', ',', '?', ',', '?', ',', '?', ',', '?', ',', '?', ',', '?', ' ', ',', '?', ' ', ',', '?', ' ', ',', '?', ' ', ',', '?', ' ', ',', '?', ' ', ',', 39, ' ', 39, ')', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09427 */ HB_P_LINE, 184, 1,	/* 440 */
	HB_P_PUSHSYMNEAR, 83,	/* SR_SQLPARSE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHLOCALREF, 39, 0,	/* NERR */
	HB_P_PUSHLOCALREF, 40, 0,	/* NPOS */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 84, 0,	/* APCODE */
/* 09447 */ HB_P_LINE, 201, 1,	/* 457 */
	HB_P_PUSHSYMNEAR, 85,	/* SR_SQLCODEGEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 84, 0,	/* APCODE */
	HB_P_PUSHVARIABLE, 86, 0,	/* MCODEMPRESA */
	HB_P_PUSHMEMVAR, 54, 0,	/* MDATA_SIS */
	HB_P_PUSHLOCALNEAR, 16,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 2, 0,	/* MCOD_MERC */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHLOCALNEAR, 10,	/* MMERC */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'B', 'L', 0, 
	HB_P_PUSHLOCALNEAR, 32,	/* MNUM_DOC */
	HB_P_PLUS,
	HB_P_PUSHMEMVAR, 56, 0,	/* COD_OPERADO */
	HB_P_PUSHLOCALNEAR, 23,	/* MOBS1 */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 09502) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'E', 0, 
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 09506) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 09518) */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 09524) */
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_MULT,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 09543) */
	HB_P_PUSHSYMNEAR, 36,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 5, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 09547) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 09559) */
	HB_P_PUSHVARIABLE, 6, 0,	/* MFABRICA */
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 09563) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 09576) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 09584) */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 09597) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 09605) */
	HB_P_PUSHMEMVAR, 8, 0,	/* CONS_MERC */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 31,	/* 31 */
	HB_P_ARRAYPUSH,
	HB_P_PUSHVARIABLE, 9, 0,	/* MFISICO */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 09616) */
	HB_P_PUSHLOCALNEAR, 15,	/* MPR_CUSTO */
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 09620) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_ARRAYGEN, 15, 0,	/* 15 */
	HB_P_MESSAGE, 87, 0,	/* NSYSTEMID */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPVARIABLE, 42, 0,	/* CCOMM */
/* 09638 */ HB_P_LINE, 202, 1,	/* 458 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09657 */ HB_P_LINE, 203, 1,	/* 459 */
	HB_P_PUSHSYMNEAR, 88,	/* TRACELOG */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 42, 0,	/* CCOMM */
	HB_P_DOSHORT, 1,
/* 09668 */ HB_P_LINE, 204, 1,	/* 460 */
	HB_P_MESSAGE, 31, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 32,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 09693 */ HB_P_LINE, 205, 1,	/* 461 */
	HB_P_PUSHLOCALNEAR, 1,	/* MCODPRODUTO */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 09704) */
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 09707) */
	HB_P_JUMP, 68, 219,	/* -9404 (abs: 00300) */
/* 09707 */ HB_P_LINE, 210, 1,	/* 466 */
	HB_P_PUSHSYMNEAR, 89,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 09715 */ HB_P_LINE, 211, 1,	/* 467 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 09721 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

