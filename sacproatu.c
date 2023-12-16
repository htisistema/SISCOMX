/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <sacproatu.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\sacproatu.prg /q /oC:\hti\SISCOM\sacproatu.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:24 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "sacproatu.prg"

HB_FUNC( SACPROATU );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( VER_NIVEL );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( ABRIARQ );
HB_FUNC_EXTERN( EXIBI_PRG );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( __GET );
HB_FUNC_EXTERN( V_GRU_COD );
HB_FUNC_EXTERN( VER_SGRU );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( V_FORNECE );
HB_FUNC_EXTERN( READMODAL );
HB_FUNC_EXTERN( LASTKEY );
HB_FUNC_EXTERN( WVW_LCLOSEWINDOW );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( SR_CDBVALUE );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SR_GETCONNECTION );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( INKEY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACPROATU )
{ "SACPROATU", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( SACPROATU )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "VER_NIVEL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_NIVEL )}, NULL },
{ "NIVEL_ACESS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "ABRIARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( ABRIARQ )}, NULL },
{ "EXIBI_PRG", {HB_FS_PUBLIC}, {HB_FUNCNAME( EXIBI_PRG )}, NULL },
{ "MCOD_FORN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__GET", {HB_FS_PUBLIC}, {HB_FUNCNAME( __GET )}, NULL },
{ "V_GRU_COD", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_GRU_COD )}, NULL },
{ "DISPLAY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VER_SGRU", {HB_FS_PUBLIC}, {HB_FUNCNAME( VER_SGRU )}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "V_FORNECE", {HB_FS_PUBLIC}, {HB_FUNCNAME( V_FORNECE )}, NULL },
{ "READMODAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( READMODAL )}, NULL },
{ "LASTKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( LASTKEY )}, NULL },
{ "WVW_LCLOSEWINDOW", {HB_FS_PUBLIC}, {HB_FUNCNAME( WVW_LCLOSEWINDOW )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "SR_CDBVALUE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_CDBVALUE )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "CCOMM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EXEC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SR_GETCONNECTION", {HB_FS_PUBLIC}, {HB_FUNCNAME( SR_GETCONNECTION )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACPROATU )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACPROATU
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACPROATU = hb_vm_SymbolInit_SACPROATU;
   #pragma data_seg()
#endif

HB_FUNC( SACPROATU )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 11, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 7, 0,	/* 7 */
	HB_P_LOCALNEARSETSTR, 1, 10, 0,	/* MPRG 10*/
	'S', 'A', 'C', 'P', 'R', 'O', 'A', 'T', 'U', 0, 
	HB_P_LOCALNEARSETSTR, 2, 50, 0,	/* MTITULO 50*/
	'A', 'T', 'U', 'A', 'L', 'I', 'Z', 'A', 'C', 'A', 'O', ' ', 'D', 'O', 'S', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', 'S', ' ', 'S', 'U', 'B', '-', 'G', 'R', 'U', 'P', 'O', ' ', 'P', 'O', 'R', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 0, 
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 8,	/* CONS_MERC */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* MCONS_FORN */
/* 00084 */ HB_P_LINEOFFSET, 2,	/* 9 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 2,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 3,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 3, 0,	/* MARQ */
	HB_P_POPVARIABLE, 2, 0,	/* MIMP_TIPO */
/* 00111 */ HB_P_LINEOFFSET, 4,	/* 11 */
	HB_P_PUSHSYMNEAR, 6,	/* VER_NIVEL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'1', '5', 0, 
	HB_P_PUSHVARIABLE, 7, 0,	/* NIVEL_ACESS */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'A', 'M', 'B', 'I', 'E', 0, 
	HB_P_FUNCTIONSHORT, 6,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00146) */
/* 00141 */ HB_P_LINEOFFSET, 5,	/* 12 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00146 */ HB_P_LINEOFFSET, 8,	/* 15 */
	HB_P_LOCALNEARSETINT, 4, 0, 0,	/* CCI 0*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_POPLOCALNEAR, 3,	/* LCI */
/* 00156 */ HB_P_LINEOFFSET, 9,	/* 16 */
	HB_P_LOCALNEARSETINT, 5, 21, 0,	/* LBA 21*/
/* 00162 */ HB_P_LINEOFFSET, 10,	/* 17 */
	HB_P_LOCALNEARSETINT, 6, 90, 0,	/* CBA 90*/
/* 00168 */ HB_P_LINEOFFSET, 12,	/* 19 */
	HB_P_PUSHSYMNEAR, 8,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_PUSHLOCALNEAR, 2,	/* MTITULO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_DOSHORT, 7,
/* 00190 */ HB_P_LINEOFFSET, 13,	/* 20 */
	HB_P_PUSHSYMNEAR, 9,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	's', 'a', 'c', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'g', 'r', 'u', 'p', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00220) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00220 */ HB_P_LINEOFFSET, 14,	/* 21 */
	HB_P_PUSHSYMNEAR, 9,	/* ABRIARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	's', 'a', 'c', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'f', 'o', 'r', 'n', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00249) */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00249 */ HB_P_LINEOFFSET, 16,	/* 23 */
	HB_P_PUSHSYMNEAR, 10,	/* EXIBI_PRG */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* MPRG */
	HB_P_DOSHORT, 1,
/* 00258 */ HB_P_LINEOFFSET, 17,	/* 24 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 11,	/* MSUB_GRUPO */
/* 00269 */ HB_P_LINEOFFSET, 18,	/* 25 */
	HB_P_PUSHSYMNEAR, 4,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 10,	/* MGRUPO */
/* 00280 */ HB_P_LINEOFFSET, 19,	/* 26 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 11, 0,	/* MCOD_FORN */
/* 00286 */ HB_P_LINEOFFSET, 21,	/* 28 */
	HB_P_PUSHMEMVAR, 12, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 1, 0,	/* MTIPO_IMP */
/* 00299 */ HB_P_LINEOFFSET, 23,	/* 30 */
	HB_P_PUSHSYMNEAR, 13,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 33,	/* 33 */
	'P', 'r', 'e', 'e', 'n', 'c', 'h', 'a', ' ', 'o', 's', ' ', 'C', 'a', 'm', 'p', 'o', 's', ' ', '-', ' ', '<', 'E', 'S', 'C', '>', 'p', '/', 'S', 'a', 'i', 'r', 0, 
	HB_P_DOSHORT, 1,
/* 00341 */ HB_P_LINEOFFSET, 24,	/* 31 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00382 */ HB_P_LINEOFFSET, 25,	/* 32 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'S', 'u', 'b', ' ', 'G', 'r', 'u', 'p', 'o', '.', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00423 */ HB_P_LINEOFFSET, 26,	/* 33 */
	HB_P_PUSHSYMNEAR, 14,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 15,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'F', 'o', 'r', 'n', 'e', 'c', 'e', 'd', 'o', 'r', '.', '.', '.', '.', '.', ':', 0, 
	HB_P_DOSHORT, 1,
/* 00464 */ HB_P_LINEOFFSET, 27,	/* 34 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MGRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00509) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00514) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 33, 0,	/* 33 */
	0, 0,	/* number of local parameters (0) */
	3, 0,	/* number of local variables (3) */
	10, 0,	/* MGRUPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 20,	/* V_GRU_COD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00580 */ HB_P_LINEOFFSET, 28,	/* 35 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 25, 0,	/* 25 */
	1, 0,	/* number of local parameters (1) */
	1, 0,	/* number of local variables (1) */
	11, 0,	/* MSUB_GRUPO */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 6,	/* 6 (abs: 00625) */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 00630) */
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_DUPLICATE,
	HB_P_POPLOCALNEAR, 255,	/* localvar1 */
	HB_P_ENDBLOCK,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'm', 's', 'u', 'b', '_', 'g', 'r', 'u', 'p', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'9', '9', 0, 
	HB_P_PUSHBLOCK, 45, 0,	/* 45 */
	0, 0,	/* number of local parameters (0) */
	4, 0,	/* number of local variables (4) */
	10, 0,	/* MGRUPO */
	11, 0,	/* MSUB_GRUPO */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 22,	/* VER_SGRU */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 23,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 23,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 253,	/* localvar3 */
	HB_P_ADDINT, 2, 0,	/* 2*/
	HB_P_PUSHLOCALNEAR, 252,	/* localvar4 */
	HB_P_ADDINT, 22, 0,	/* 22*/
	HB_P_FUNCTIONSHORT, 4,
	HB_P_ENDBLOCK,
	HB_P_PUSHBLOCK, 18, 0,	/* 18 */
	0, 0,	/* number of local parameters (0) */
	1, 0,	/* number of local variables (1) */
	10, 0,	/* MGRUPO */
	HB_P_PUSHSYMNEAR, 24,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_NOT,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00728 */ HB_P_LINEOFFSET, 29,	/* 36 */
	HB_P_PUSHSYMNEAR, 16,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LCI */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 4,	/* CCI */
	HB_P_ADDINT, 18, 0,	/* 18*/
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 17,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHSYMNEAR, 19,	/* __GET */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	'm', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', 0, 
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'9', '9', '9', '9', 0, 
	HB_P_PUSHBLOCK, 30, 0,	/* 30 */
	0, 0,	/* number of local parameters (0) */
	2, 0,	/* number of local variables (2) */
	3, 0,	/* LCI */
	4, 0,	/* CCI */
	HB_P_PUSHSYMNEAR, 25,	/* V_FORNECE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCOD_FORN */
	HB_P_PUSHLOCALNEAR, 255,	/* localvar1 */
	HB_P_ADDINT, 3, 0,	/* 3*/
	HB_P_PUSHLOCALNEAR, 254,	/* localvar2 */
	HB_P_ADDINT, 23, 0,	/* 23*/
	HB_P_FUNCTIONSHORT, 3,
	HB_P_ENDBLOCK,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_DOSHORT, 2,
	HB_P_MESSAGE, 21, 0,	/* DISPLAY */
	HB_P_PUSHMEMVAR, 18, 0,	/* GETLIST */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_ARRAYPUSH,
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00821 */ HB_P_LINEOFFSET, 30,	/* 37 */
	HB_P_PUSHSYMNEAR, 26,	/* READMODAL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 18, 0,	/* GETLIST */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 7,
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 18, 0,	/* GETLIST */
/* 00843 */ HB_P_LINEOFFSET, 31,	/* 38 */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 14,	/* 14 (abs: 00867) */
/* 00855 */ HB_P_LINEOFFSET, 32,	/* 39 */
	HB_P_PUSHSYMNEAR, 28,	/* WVW_LCLOSEWINDOW */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00862 */ HB_P_LINEOFFSET, 33,	/* 40 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00867 */ HB_P_LINEOFFSET, 35,	/* 42 */
	HB_P_PUSHSYMNEAR, 29,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'P', 'R', 'O', 'D', 'U', 'T', 'O', ':', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 7,	/* OPCAO */
/* 00917 */ HB_P_LINEOFFSET, 36,	/* 43 */
	HB_P_PUSHLOCALNEAR, 7,	/* OPCAO */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 11,	/* 11 (abs: 00938) */
	HB_P_PUSHSYMNEAR, 27,	/* LASTKEY */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 27,	/* 27 */
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00943) */
	HB_P_JUMP, 77, 253,	/* -691 (abs: 00249) */
/* 00943 */ HB_P_LINEOFFSET, 39,	/* 46 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 9,	/* MCONS_FORN */
/* 00950 */ HB_P_LINEOFFSET, 40,	/* 47 */
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'S', 'E', 'L', 'E', 'C', 'T', ' ', '*', ' ', 'F', 'R', 'O', 'M', ' ', 's', 'a', 'c', 'f', 'o', 'r', 'n', ' ', 'W', 'H', 'E', 'R', 'E', ' ', 'c', 'o', 'd', '_', 'f', 'o', 'r', 'n', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_POPVARIABLE, 32, 0,	/* CCOMM */
/* 01013 */ HB_P_LINEOFFSET, 41,	/* 48 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHVARIABLE, 32, 0,	/* CCOMM */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_PUSHLOCALREF, 9, 0,	/* MCONS_FORN */
	HB_P_SENDSHORT, 4,
	HB_P_POP,
/* 01034 */ HB_P_LINEOFFSET, 42,	/* 49 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01058 */ HB_P_LINEOFFSET, 43,	/* 50 */
	HB_P_PUSHSYMNEAR, 35,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCONS_FORN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 57,	/* 57 (abs: 01126) */
/* 01071 */ HB_P_LINEOFFSET, 44,	/* 51 */
	HB_P_PUSHSYMNEAR, 36,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'r', ' ', 'e', 's', 't', 'e', ' ', 'F', 'O', 'R', 'N', 'E', 'C', 'E', 'D', 'O', 'R', 0, 
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 150, 252,	/* -874 (abs: 00249) */
/* 01126 */ HB_P_LINEOFFSET, 47,	/* 54 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'e', 'r', 'c', ' ', ' ', 'S', 'E', 'T', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCONS_FORN */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 11,	/* MSUB_GRUPO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01255 */ HB_P_LINEOFFSET, 48,	/* 55 */
	HB_P_PUSHSYMNEAR, 13,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'M', 'O', 'V', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01296 */ HB_P_LINEOFFSET, 49,	/* 56 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', ' ', ' ', ' ', 'S', 'E', 'T', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCONS_FORN */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 11,	/* MSUB_GRUPO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01425 */ HB_P_LINEOFFSET, 50,	/* 57 */
	HB_P_PUSHSYMNEAR, 13,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'S', 'A', 'C', 'M', 'O', 'V', 'N', 'T', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01468 */ HB_P_LINEOFFSET, 51,	/* 58 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'U', 'P', 'D', 'A', 'T', 'E', ' ', 's', 'a', 'c', 'm', 'o', 'v', 'n', 't', ' ', 'S', 'E', 'T', ' ', 'c', 'o', 'd', '_', 'f', 'a', 'b', ' ', '=', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 11, 0,	/* MCOD_FORN */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	',', 'f', 'a', 'b', 'r', 'i', 'c', 'a', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 9,	/* MCONS_FORN */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', 'W', 'H', 'E', 'R', 'E', ' ', 'g', 'r', 'u', '_', 's', 'u', 'b', ' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 30,	/* SR_CDBVALUE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 37,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* MGRUPO */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 11,	/* MSUB_GRUPO */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01597 */ HB_P_LINEOFFSET, 52,	/* 59 */
	HB_P_MESSAGE, 33, 0,	/* EXEC */
	HB_P_PUSHSYMNEAR, 34,	/* SR_GETCONNECTION */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'C', 'O', 'M', 'M', 'I', 'T', 0, 
	HB_P_PUSHNIL,
	HB_P_FALSE,
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 01621 */ HB_P_LINEOFFSET, 53,	/* 60 */
	HB_P_PUSHSYMNEAR, 38,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 156, 250,	/* -1380 (abs: 00249) */
	HB_P_ENDPROC
/* 01633 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

