/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACTPP.PRG>
 * Command: C:\xharbour997\bin\harbour.exe C:\HELIO\SISPDV\SACTPP.PRG /q /oC:\helio\siachb\SACTPP.c /M /N /B 
 * Created: 2018.04.09 19:30:46 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACTPP.PRG"

HB_FUNC( PROCOMP );
HB_FUNC_INITLINES();
HB_FUNC_EXTERN( __DBGENTRY );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTPP )
{ "PROCOMP", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( PROCOMP )}, NULL },
{ "__DBGENTRY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __DBGENTRY )}, NULL },
{ "(_INITLINES)", {HB_FS_INITEXIT}, {hb_INITLINES}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTPP )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTPP
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTPP = hb_vm_SymbolInit_SACTPP;
   #pragma data_seg()
#endif

HB_FUNC( PROCOMP )
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SACTPP.PRG:PROCOMP */
 'S', 'A', 'C', 'T', 'P', 'P', '.', 'P', 'R', 'G', ':', 'P', 'R', 'O', 'C', 'O', 'M', 'P', 0,
	HB_P_MODULENAME,	/* C:\HELIO\SISPDV\SACTPP.PRG: */
 'C', ':', '\\', 'H', 'E', 'L', 'I', 'O', '\\', 'S', 'I', 'S', 'P', 'D', 'V', '\\', 'S', 'A', 'C', 'T', 'P', 'P', '.', 'P', 'R', 'G', ':', 0,
/* 00049 */ HB_P_BASELINE, 10, 0,	/* 10 */
	HB_P_PUSHNIL,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00055 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_INITLINES()
{
   static const BYTE pcode[] =
   {
	HB_P_MODULENAME,	/* SACTPP */
 'S', 'A', 'C', 'T', 'P', 'P', 0,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'C', ':', 92, 'H', 'E', 'L', 'I', 'O', 92, 'S', 'I', 'S', 'P', 'D', 'V', 92, 'S', 'A', 'C', 'T', 'P', 'P', '.', 'P', 'R', 'G', 0, 
	HB_P_ZERO,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	4, 4, 0, 
	HB_P_ARRAYGEN, 3, 0,	/* 3 */
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00051 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

