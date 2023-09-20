/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <GERA_XML.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\helio\siachb\GERA_XML.PRG /q /oC:\helio\siachb\GERA_XML.c /M /N /B 
 * Created: 2018.04.09 19:29:32 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "GERA_XML.PRG"

HB_FUNC( GERAXML );
HB_FUNC_INITSTATICS();
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( INI_XML );
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_GERA_XML )
{ "GERAXML", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( GERAXML )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INI_XML", {HB_FS_PUBLIC}, {HB_FUNCNAME( INI_XML )}, NULL },
{ "INFNEW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIAR_XML", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MCHV_PUBLIC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "WRITE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITSTATICS00010)", {HB_FS_INITEXIT}, {hb_INITSTATICS}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_GERA_XML )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_GERA_XML
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_GERA_XML = hb_vm_SymbolInit_GERA_XML;
   #pragma data_seg()
#endif

HB_FUNC( GERAXML )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 3, 1,	/* locals, params */
	HB_P_MODULENAME,	/* GERA_XML.PRG:GERAXML */
 'G', 'E', 'R', 'A', '_', 'X', 'M', 'L', '.', 'P', 'R', 'G', ':', 'G', 'E', 'R', 'A', 'X', 'M', 'L', 0,
	HB_P_LOCALNAME, 1, 0,	/* CIDNOTA */
 'C', 'I', 'D', 'N', 'O', 'T', 'A', 0,
	HB_P_MODULENAME,	/* C:\helio\siachb\GERA_XML.PRG: */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'G', 'E', 'R', 'A', '_', 'X', 'M', 'L', '.', 'P', 'R', 'G', ':', 0,
/* 00067 */ HB_P_BASELINE, 41, 0,	/* 41 */
	HB_P_LOCALNAME, 2, 0,	/* I */
 'I', 0,
	HB_P_LOCALNAME, 3, 0,	/* OXML */
 'O', 'X', 'M', 'L', 0,
	HB_P_LOCALNAME, 4, 0,	/* CID */
 'C', 'I', 'D', 0,
/* 00090 */ HB_P_LINEOFFSET, 2,	/* 43 */
	HB_P_MESSAGE, 1, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 2,	/* INI_XML */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_SENDSHORT, 0,
	HB_P_POPLOCALNEAR, 3,	/* OXML */
/* 00104 */ HB_P_LINEOFFSET, 3,	/* 44 */
	HB_P_MESSAGE, 3, 0,	/* INFNEW */
	HB_P_PUSHLOCALNEAR, 3,	/* OXML */
	HB_P_PUSHLOCALNEAR, 4,	/* CID */
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00116 */ HB_P_LINEOFFSET, 6,	/* 47 */
	HB_P_MESSAGE, 4, 0,	/* CRIAR_XML */
	HB_P_PUSHLOCALNEAR, 3,	/* OXML */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'm', 'o', 'd', 'u', 'l', 'o', 0, 
	HB_P_PUSHVARIABLE, 5, 0,	/* MCHV_PUBLIC */
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00138 */ HB_P_LINEOFFSET, 7,	/* 48 */
	HB_P_MESSAGE, 4, 0,	/* CRIAR_XML */
	HB_P_PUSHLOCALNEAR, 3,	/* OXML */
	HB_P_PUSHSTRSHORT, 17,	/* 17 */
	'e', 'x', 'p', 'o', 'e', 'n', 't', 'e', '_', 'p', 'u', 'b', 'l', 'i', 'c', 'o', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'0', '3', 0, 
	HB_P_SENDSHORT, 2,
	HB_P_POP,
/* 00172 */ HB_P_LINEOFFSET, 9,	/* 50 */
	HB_P_MESSAGE, 6, 0,	/* WRITE */
	HB_P_PUSHLOCALNEAR, 3,	/* OXML */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'H', 'T', 'I', 'S', 'I', 'S', 'T', 'E', 'M', 'A', 'S', '.', 'x', 'm', 'l', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POP,
/* 00200 */ HB_P_LINEOFFSET, 13,	/* 54 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00205 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITSTATICS()
{
   static const BYTE pcode[] =
   {
	HB_P_STATICS, 8, 0, 10, 0,	/* symbol (_INITSTATICS), 10 statics */
	HB_P_SFRAME, 8, 0,	/* symbol (_INITSTATICS) */
	HB_P_MODULENAME,	/* C:\helio\siachb\GERA_XML.PRG */
 'C', ':', '\\', 'h', 'e', 'l', 'i', 'o', '\\', 's', 'i', 'a', 'c', 'h', 'b', '\\', 'G', 'E', 'R', 'A', '_', 'X', 'M', 'L', '.', 'P', 'R', 'G', 0,
	HB_P_STATICNAME, 1, 1, 0,	/* PASTAXMLENVIO */
 'P', 'A', 'S', 'T', 'A', 'X', 'M', 'L', 'E', 'N', 'V', 'I', 'O', 0,
	HB_P_STATICNAME, 1, 2, 0,	/* PASTAXMLRETORNO */
 'P', 'A', 'S', 'T', 'A', 'X', 'M', 'L', 'R', 'E', 'T', 'O', 'R', 'N', 'O', 0,
	HB_P_STATICNAME, 1, 3, 0,	/* PASTAXMLENVIADO */
 'P', 'A', 'S', 'T', 'A', 'X', 'M', 'L', 'E', 'N', 'V', 'I', 'A', 'D', 'O', 0,
	HB_P_STATICNAME, 1, 4, 0,	/* PASTAXMLERRO */
 'P', 'A', 'S', 'T', 'A', 'X', 'M', 'L', 'E', 'R', 'R', 'O', 0,
	HB_P_STATICNAME, 1, 5, 0,	/* PASTAXMLBACKUP */
 'P', 'A', 'S', 'T', 'A', 'X', 'M', 'L', 'B', 'A', 'C', 'K', 'U', 'P', 0,
	HB_P_ENDPROC
/* 00133 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* GERA_XML */
 'G', 'E', 'R', 'A', '_', 'X', 'M', 'L', 0,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'C', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 92, 'G', 'E', 'R', 'A', '_', 'X', 'M', 'L', '.', 'P', 'R', 'G', 0, 
	HB_P_PUSHBYTE, 32,	/* 32 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'>', 154, 'E', 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00057 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

