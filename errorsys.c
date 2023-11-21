/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <errorsys.prg>
 * Command: C:\xHarbour997\bin\harbour.exe C:\hti\SISCOM\errorsys.prg /q /oC:\hti\SISCOM\errorsys.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.29 11:53:31 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "errorsys.prg"

HB_FUNC( ERRORSYS );
HB_FUNC_STATIC( DEFERROR );
HB_FUNC( ERRORMESSAGE );
HB_FUNC_STATIC( ERRORPREVIEW );
HB_FUNC_EXTERN( ERRORBLOCK );
HB_FUNC_EXTERN( DTOS );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( TIME );
HB_FUNC_EXTERN( NETERR );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( LTRIM );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( PROCNAME );
HB_FUNC_EXTERN( PROCFILE );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( PROCLINE );
HB_FUNC_EXTERN( REPLICATE );
HB_FUNC_EXTERN( DTOC );
HB_FUNC_EXTERN( HB_CMDARGARGV );
HB_FUNC_EXTERN( NETNAME );
HB_FUNC_EXTERN( MEMORY );
HB_FUNC_EXTERN( DISKSPACE );
HB_FUNC_EXTERN( CURDIR );
HB_FUNC_EXTERN( OS );
HB_FUNC_EXTERN( HB_ISNULL );
HB_FUNC_EXTERN( MEMOWRIT );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( FECHA_CONEXAODB );
HB_FUNC_EXTERN( __QUIT );
HB_FUNC_EXTERN( HB_ISSTRING );
HB_FUNC_EXTERN( HB_ISNUMERIC );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( CONF_IMPRESSAO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_ERRORSYS )
{ "ERRORSYS", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( ERRORSYS )}, NULL },
{ "ERRORBLOCK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORBLOCK )}, NULL },
{ "DEFERROR", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( DEFERROR )}, NULL },
{ "DTOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOS )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "TIME", {HB_FS_PUBLIC}, {HB_FUNCNAME( TIME )}, NULL },
{ "GENCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OSCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CANDEFAULT", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NETERR", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETERR )}, NULL },
{ "ERRORMESSAGE", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ERRORMESSAGE )}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "LTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( LTRIM )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "PROCNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCNAME )}, NULL },
{ "PROCFILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCFILE )}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "PROCLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROCLINE )}, NULL },
{ "REPLICATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( REPLICATE )}, NULL },
{ "DTOC", {HB_FS_PUBLIC}, {HB_FUNCNAME( DTOC )}, NULL },
{ "MEMP_RESA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SISTEMA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MVERSAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "COD_OPERADO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_CMDARGARGV", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_CMDARGARGV )}, NULL },
{ "NETNAME", {HB_FS_PUBLIC}, {HB_FUNCNAME( NETNAME )}, NULL },
{ "MEMORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMORY )}, NULL },
{ "DISKSPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISKSPACE )}, NULL },
{ "CURDIR", {HB_FS_PUBLIC}, {HB_FUNCNAME( CURDIR )}, NULL },
{ "OS", {HB_FS_PUBLIC}, {HB_FUNCNAME( OS )}, NULL },
{ "HB_ISNULL", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNULL )}, NULL },
{ "M_CFG", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOWRIT )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MDEFCAM_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "ERRORPREVIEW", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( ERRORPREVIEW )}, NULL },
{ "FECHA_CONEXAODB", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_CONEXAODB )}, NULL },
{ "__QUIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( __QUIT )}, NULL },
{ "SEVERITY", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISSTRING", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISSTRING )}, NULL },
{ "SUBSYSTEM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_ISNUMERIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_ISNUMERIC )}, NULL },
{ "SUBCODE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DESCRIPTION", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FILENAME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "OPERATION", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MARQ", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_ERRORSYS )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_ERRORSYS
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_ERRORSYS = hb_vm_SymbolInit_ERRORSYS;
   #pragma data_seg()
#endif

HB_FUNC( ERRORSYS )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 18, 0,	/* 18 */
	HB_P_PUSHSYMNEAR, 1,	/* ERRORBLOCK */
	HB_P_PUSHNIL,
	HB_P_PUSHBLOCK, 15, 0,	/* 15 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSYMNEAR, 2,	/* DEFERROR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 1,
/* 00023 */ HB_P_LINEOFFSET, 1,	/* 19 */
	HB_P_ENDPROC
/* 00026 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( DEFERROR )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 4, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 23, 0,	/* 23 */
	HB_P_PUSHSYMNEAR, 3,	/* DTOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 5,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 6,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	':', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'_', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'l', 'o', 'g', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 4,	/* CLOGFILE */
/* 00045 */ HB_P_LINEOFFSET, 18,	/* 41 */
	HB_P_MESSAGE, 7, 0,	/* GENCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00064) */
/* 00059 */ HB_P_LINEOFFSET, 19,	/* 42 */
	HB_P_ZERO,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00064 */ HB_P_LINEOFFSET, 23,	/* 46 */
	HB_P_FALSE,
	HB_P_FALSE,
	HB_P_MESSAGE, 7, 0,	/* GENCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 21,	/* 21 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 13,	/* 13 (abs: 00091) */
	HB_P_POP,
	HB_P_MESSAGE, 8, 0,	/* OSCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00101) */
	HB_P_POP,
	HB_P_MESSAGE, 9, 0,	/* CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00116) */
/* 00103 */ HB_P_LINEOFFSET, 24,	/* 47 */
	HB_P_PUSHSYMNEAR, 10,	/* NETERR */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
/* 00111 */ HB_P_LINEOFFSET, 25,	/* 48 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00116 */ HB_P_LINEOFFSET, 28,	/* 51 */
	HB_P_FALSE,
	HB_P_MESSAGE, 7, 0,	/* GENCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 00139) */
	HB_P_POP,
	HB_P_MESSAGE, 9, 0,	/* CANDEFAULT */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_JUMPFALSENEAR, 15,	/* 15 (abs: 00154) */
/* 00141 */ HB_P_LINEOFFSET, 29,	/* 52 */
	HB_P_PUSHSYMNEAR, 10,	/* NETERR */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_DOSHORT, 1,
/* 00149 */ HB_P_LINEOFFSET, 30,	/* 53 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00154 */ HB_P_LINEOFFSET, 32,	/* 55 */
	HB_P_PUSHSYMNEAR, 11,	/* ERRORMESSAGE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00165 */ HB_P_LINEOFFSET, 33,	/* 56 */
	HB_P_PUSHSYMNEAR, 12,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 8, 0,	/* OSCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 43,	/* 43 (abs: 00222) */
/* 00181 */ HB_P_LINEOFFSET, 34,	/* 57 */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'(', 'D', 'O', 'S', ' ', 'E', 'r', 'r', 'o', 'r', ' ', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 8, 0,	/* OSCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 3,	/* CDOSERROR */
/* 00222 */ HB_P_LINEOFFSET, 36,	/* 59 */
	HB_P_PUSHSYMNEAR, 12,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 8, 0,	/* OSCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 16,	/* 16 (abs: 00252) */
/* 00238 */ HB_P_LINEOFFSET, 37,	/* 60 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHLOCALNEAR, 3,	/* CDOSERROR */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00252 */ HB_P_LINEOFFSET, 40,	/* 63 */
	HB_P_LOCALNEARSETINT, 5, 2, 0,	/* N 2*/
/* 00258 */ HB_P_LINEOFFSET, 41,	/* 64 */
	HB_P_PUSHSYMNEAR, 12,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 15,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 79,	/* 79 (abs: 00351) */
/* 00274 */ HB_P_LINEOFFSET, 42,	/* 65 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	13, 10, 'F', 'u', 'n', 'c', 'o', 'e', 's', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 16,	/* PROCFILE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'-', '>', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 15,	/* PROCNAME */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'(', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 18,	/* PROCLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 5,	/* N */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* N 1*/
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	')', 0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_JUMPNEAR, 165,	/* -91 (abs: 00258) */
/* 00351 */ HB_P_LINEOFFSET, 45,	/* 68 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_PUSHSYMNEAR, 19,	/* REPLICATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00375 */ HB_P_LINEOFFSET, 46,	/* 69 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'D', 'a', 't', 'a', ' ', 'e', ' ', 'H', 'o', 'r', 'a', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 20,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 6,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00432 */ HB_P_LINEOFFSET, 47,	/* 70 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'E', 'm', 'p', 'r', 'e', 's', 'a', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 21, 0,	/* MEMP_RESA */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00469 */ HB_P_LINEOFFSET, 48,	/* 71 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'S', 'i', 's', 't', 'e', 'm', 'a', '/', 'A', 't', 'u', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 22, 0,	/* SISTEMA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 23, 0,	/* MVERSAO */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00517 */ HB_P_LINEOFFSET, 49,	/* 72 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'U', 's', 'u', 'a', 'r', 'i', 'o', ' ', 'd', 'o', ' ', 'S', 'i', 's', 't', 'e', 'm', 'a', '.', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 24, 0,	/* COD_OPERADO */
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00554 */ HB_P_LINEOFFSET, 50,	/* 73 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'E', 'x', 'e', 'c', 'u', 't', 'a', 'v', 'e', 'l', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* HB_CMDARGARGV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00593 */ HB_P_LINEOFFSET, 51,	/* 74 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'N', 'o', 'm', 'e', ' ', 'd', 'o', ' ', 'M', 'i', 'c', 'r', 'o', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 26,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'T', 'e', 'r', 'm', 'i', 'n', 'a', 'l', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 26,	/* NETNAME */
	HB_P_PUSHNIL,
	HB_P_TRUE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00661 */ HB_P_LINEOFFSET, 52,	/* 75 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'M', 'e', 'm', 'o', 'r', 'i', 'a', ' ', 'D', 'i', 's', 'p', 'o', 'n', 'i', 'v', 'e', 'l', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 27,	/* MEMORY */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 25,	/* 25 */
	' ', '-', ' ', 'E', 's', 'p', 'a', 231, 'o', ' ', 'e', 'm', ' ', 'D', 'i', 's', 'c', 'o', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 28,	/* DISKSPACE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00755 */ HB_P_LINEOFFSET, 53,	/* 76 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'P', 'a', 's', 't', 'a', ' ', 'd', 'e', ' ', 'D', 'i', 'r', 'e', 't', 'o', 'r', 'i', 'o', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 29,	/* CURDIR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00794 */ HB_P_LINEOFFSET, 54,	/* 77 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'S', 'i', 's', 't', 'e', 'm', 'a', ' ', 'O', 'p', 'e', 'r', 'a', 'c', 'i', 'o', 'n', 'a', 'l', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 30,	/* OS */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00833 */ HB_P_LINEOFFSET, 55,	/* 78 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	13, 10, 'C', 'a', 'm', 'i', 'n', 'h', 'o', ' ', 'd', 'o', ' ', 'B', 'a', 'n', 'c', 'o', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* M_CFG */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 10,	/* 10 (abs: 00881) */
	HB_P_PUSHMEMVAR, 32, 0,	/* M_CFG */
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00884) */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00888 */ HB_P_LINEOFFSET, 59,	/* 82 */
	HB_P_PUSHSYMNEAR, 33,	/* MEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00916) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 00939) */
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00936) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00939) */
	HB_P_PUSHVARIABLE, 35, 0,	/* MDEFCAM_IMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 4,	/* CLOGFILE */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_DOSHORT, 2,
/* 00948 */ HB_P_LINEOFFSET, 60,	/* 83 */
	HB_P_PUSHSYMNEAR, 36,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_DOSHORT, 1,
/* 00957 */ HB_P_LINEOFFSET, 61,	/* 84 */
	HB_P_PUSHSYMNEAR, 37,	/* ERRORPREVIEW */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHLOCALNEAR, 4,	/* CLOGFILE */
	HB_P_DOSHORT, 2,
/* 00968 */ HB_P_LINEOFFSET, 62,	/* 85 */
	HB_P_PUSHSYMNEAR, 38,	/* FECHA_CONEXAODB */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00975 */ HB_P_LINEOFFSET, 63,	/* 86 */
	HB_P_PUSHSYMNEAR, 39,	/* __QUIT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00982 */ HB_P_LINEOFFSET, 64,	/* 87 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00987 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ERRORMESSAGE )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 91, 0,	/* 91 */
	HB_P_MESSAGE, 40, 0,	/* SEVERITY */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_ONE,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 12,	/* 12 (abs: 00027) */
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'E', 'r', 'r', 'o', 'r', 0, 
	HB_P_JUMPNEAR, 12,	/* 12 (abs: 00037) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'W', 'a', 'r', 'n', 'i', 'n', 'g', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00044 */ HB_P_LINEOFFSET, 1,	/* 92 */
	HB_P_PUSHSYMNEAR, 41,	/* HB_ISSTRING */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 42, 0,	/* SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00076) */
/* 00060 */ HB_P_LINEOFFSET, 2,	/* 93 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_MESSAGE, 42, 0,	/* SUBSYSTEM */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_JUMPNEAR, 15,	/* 15 (abs: 00089) */
/* 00076 */ HB_P_LINEOFFSET, 4,	/* 95 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'?', '?', '?', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00089 */ HB_P_LINEOFFSET, 6,	/* 97 */
	HB_P_PUSHSYMNEAR, 43,	/* HB_ISNUMERIC */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 44, 0,	/* SUBCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00136) */
/* 00105 */ HB_P_LINEOFFSET, 7,	/* 98 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'/', 0, 
	HB_P_PUSHSYMNEAR, 13,	/* LTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 14,	/* STR */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 44, 0,	/* SUBCODE */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_JUMPNEAR, 16,	/* 16 (abs: 00150) */
/* 00136 */ HB_P_LINEOFFSET, 9,	/* 100 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'/', '?', '?', '?', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00150 */ HB_P_LINEOFFSET, 11,	/* 102 */
	HB_P_PUSHSYMNEAR, 41,	/* HB_ISSTRING */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 45, 0,	/* DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 22,	/* 22 (abs: 00186) */
/* 00166 */ HB_P_LINEOFFSET, 12,	/* 103 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	' ', ' ', 0, 
	HB_P_MESSAGE, 45, 0,	/* DESCRIPTION */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00186 */ HB_P_LINEOFFSET, 15,	/* 106 */
	HB_P_PUSHSYMNEAR, 12,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 46, 0,	/* FILENAME */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 24,	/* 24 (abs: 00224) */
/* 00202 */ HB_P_LINEOFFSET, 16,	/* 107 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_MESSAGE, 46, 0,	/* FILENAME */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 00260) */
/* 00224 */ HB_P_LINEOFFSET, 17,	/* 108 */
	HB_P_PUSHSYMNEAR, 12,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_MESSAGE, 47, 0,	/* OPERATION */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 00260) */
/* 00240 */ HB_P_LINEOFFSET, 18,	/* 109 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	':', ' ', 0, 
	HB_P_MESSAGE, 47, 0,	/* OPERATION */
	HB_P_PUSHLOCALNEAR, 1,	/* OERROR */
	HB_P_SENDSHORT, 0,
	HB_P_PLUS,
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 2,	/* CMESSAGE */
/* 00260 */ HB_P_LINEOFFSET, 20,	/* 111 */
	HB_P_PUSHLOCALNEAR, 2,	/* CMESSAGE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00266 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( ERRORPREVIEW )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 7, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 116, 0,	/* 116 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* POINT 0*/
	HB_P_LOCALNEARSETSTR, 7, 2, 0,	/* OPCAO 2*/
	' ', 0, 
	HB_P_LOCALNEARSETSTR, 8, 1, 0,	/* MSUBJECT 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 9, 1, 0,	/* MLINHA1 1*/
	0, 
/* 00026 */ HB_P_LINEOFFSET, 1,	/* 117 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 51,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 52,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 48,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 49,	/* MIMP_TIPO */
	HB_P_PUSHSYMNEAR, 50,	/* MARQ */
	HB_P_DOSHORT, 3,
	HB_P_POPVARIABLE, 50, 0,	/* MARQ */
	HB_P_POPVARIABLE, 49, 0,	/* MIMP_TIPO */
/* 00053 */ HB_P_LINEOFFSET, 3,	/* 119 */
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00075) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 6,	/* 6 (abs: 00079) */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 48, 0,	/* MTIPO_IMP */
/* 00082 */ HB_P_LINEOFFSET, 6,	/* 122 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00123 */ HB_P_LINEOFFSET, 24,	/* 140 */
	HB_P_PUSHSYMNEAR, 54,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'R', 'R', 'O', 'S', 'Y', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'R', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPFALSE, 44, 1,	/* 300 (abs: 00448) */
/* 00151 */ HB_P_LINEOFFSET, 25,	/* 141 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00165 */ HB_P_LINEOFFSET, 26,	/* 142 */
	HB_P_PUSHSYMNEAR, 56,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00196) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00199) */
	HB_P_PUSHVARIABLE, 35, 0,	/* MDEFCAM_IMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* CARQ */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00215 */ HB_P_LINEOFFSET, 27,	/* 143 */
	HB_P_LOCALNEARSETINT, 6, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 6,	/* LINHA */
	HB_P_POPLOCALNEAR, 5,	/* LINHAS */
/* 00225 */ HB_P_LINEOFFSET, 28,	/* 144 */
	HB_P_PUSHSYMNEAR, 58,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00256) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00259) */
	HB_P_PUSHVARIABLE, 35, 0,	/* MDEFCAM_IMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* CARQ */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 5,	/* LINHAS */
/* 00272 */ HB_P_LINEOFFSET, 29,	/* 145 */
	HB_P_LOCALNEARSETINT, 6, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 6,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 5,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 00372) */
/* 00285 */ HB_P_LINEOFFSET, 30,	/* 146 */
	HB_P_PUSHSYMNEAR, 56,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 57,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 31,	/* HB_ISNULL */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 34, 0,	/* M_INDIV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 12,	/* 12 (abs: 00316) */
	HB_P_PUSHMEMVAR, 34, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_ARRAYPUSH,
	HB_P_JUMPNEAR, 5,	/* 5 (abs: 00319) */
	HB_P_PUSHVARIABLE, 35, 0,	/* MDEFCAM_IMP */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 2,	/* CARQ */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 120,	/* 120 */
	HB_P_PUSHLOCALNEAR, 6,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00336 */ HB_P_LINEOFFSET, 31,	/* 147 */
	HB_P_PUSHSYMNEAR, 59,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 60,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 61,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 17,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00364 */ HB_P_LINEOFFSET, 32,	/* 148 */
	HB_P_LOCALNEARADDINT, 6, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 164,	/* -92 (abs: 00278) */
/* 00372 */ HB_P_LINEOFFSET, 33,	/* 149 */
	HB_P_PUSHSYMNEAR, 55,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* MTIPO_IMP */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'N', 0, 
	HB_P_DOSHORT, 2,
/* 00386 */ HB_P_LINEOFFSET, 34,	/* 150 */
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 53,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 00427 */ HB_P_LINEOFFSET, 35,	/* 151 */
	HB_P_PUSHSYMNEAR, 62,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'E', 'R', 'R', 'O', 'S', 'Y', 'S', '.', 'R', 'E', 'L', 0, 
	HB_P_DOSHORT, 1,
/* 00448 */ HB_P_LINEOFFSET, 37,	/* 153 */
	HB_P_PUSHSYMNEAR, 5,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	'E', 'r', 'r', 'o', 'r', ' ', 'd', 'a', ' ', 'E', 'm', 'p', 'r', 'e', 's', 'a', ':', 0, 
	HB_P_PUSHVARIABLE, 21, 0,	/* MEMP_RESA */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	' ', '-', ' ', 'O', 'p', 'e', 'r', 'a', 'd', 'o', 'r', ':', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 24, 0,	/* COD_OPERADO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', '-', ' ', 'D', 'a', 't', 'a', ':', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 20,	/* DTOC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 4,	/* DATE */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	' ', 'a', 's', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 6,	/* TIME */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'%', '2', '0', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_POPLOCALNEAR, 8,	/* MSUBJECT */
/* 00549 */ HB_P_LINEOFFSET, 41,	/* 157 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00554 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

