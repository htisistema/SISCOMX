/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACFTP1.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACFTP1.PRG /q /oC:\hti\SISCOM\SACFTP1.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.12.16 08:35:31 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACFTP1.PRG"

HB_FUNC( NFE_ENVIARFTP );
HB_FUNC( RUNCSCRIPT );
HB_FUNC_EXTERN( RMEMOWRIT );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( TOLEAUTO );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACFTP1 )
{ "NFE_ENVIARFTP", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( NFE_ENVIARFTP )}, NULL },
{ "CPATHNFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CCHAVENFE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CXMLFILE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFTPSERVERNAME", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFTPLOGINID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CFTPPASSWORD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSERVERFOLDER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CLOCALFOLDER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSHFTPSERVER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRLF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSTRFILE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSHSERVERFOLDER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSHFTPLOGINID", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSHFTPPASSWORD", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CSHLOCALFOLDER", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "RMEMOWRIT", {HB_FS_PUBLIC}, {HB_FUNCNAME( RMEMOWRIT )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "RUNCSCRIPT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( RUNCSCRIPT )}, NULL },
{ "CPATHDADOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TOLEAUTO", {HB_FS_PUBLIC}, {HB_FUNCNAME( TOLEAUTO )}, NULL },
{ "RUN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "END", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACFTP1 )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACFTP1
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACFTP1 = hb_vm_SymbolInit_SACFTP1;
   #pragma data_seg()
#endif

HB_FUNC( NFE_ENVIARFTP )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 3, 0,	/* 3 */
	HB_P_LOCALNEARSETINT, 1, 2, 0,	/* INTWINDOWSTYLE 2*/
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* BWAITONRUN */
/* 00013 */ HB_P_LINEOFFSET, 2,	/* 5 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'c', ':', 92, 'h', 'e', 'l', 'i', 'o', 92, 's', 'i', 'a', 'c', 'h', 'b', 0, 
	HB_P_POPVARIABLE, 1, 0,	/* CPATHNFE */
/* 00036 */ HB_P_LINEOFFSET, 7,	/* 10 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	's', 'a', 'c', 'c', 'f', 'g', '.', 'i', 'n', 'i', 0, 
	HB_P_POPVARIABLE, 2, 0,	/* CCHAVENFE */
/* 00054 */ HB_P_LINEOFFSET, 8,	/* 11 */
	HB_P_PUSHVARIABLE, 2, 0,	/* CCHAVENFE */
	HB_P_POPVARIABLE, 3, 0,	/* CXMLFILE */
/* 00062 */ HB_P_LINEOFFSET, 9,	/* 12 */
	HB_P_PUSHVARIABLE, 1, 0,	/* CPATHNFE */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	92, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 3, 0,	/* CXMLFILE */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 3, 0,	/* CXMLFILE */
/* 00079 */ HB_P_LINEOFFSET, 11,	/* 14 */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'f', 't', 'p', '.', 'H', 'T', 'I', 's', 'i', 's', 't', 'e', 'm', 'a', 's', '.', 'c', 'o', 'm', '.', 'b', 'r', 0, 
	HB_P_POPVARIABLE, 4, 0,	/* CFTPSERVERNAME */
/* 00109 */ HB_P_LINEOFFSET, 12,	/* 15 */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'H', 'T', 'I', 's', 'i', 's', 't', 'e', 'm', 'a', 0, 
	HB_P_POPVARIABLE, 5, 0,	/* CFTPLOGINID */
/* 00127 */ HB_P_LINEOFFSET, 13,	/* 16 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'H', 'T', 'I', '5', '9', '2', '3', 0, 
	HB_P_POPVARIABLE, 6, 0,	/* CFTPPASSWORD */
/* 00142 */ HB_P_LINEOFFSET, 14,	/* 17 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'/', 'w', 'e', 'b', '/', 'd', 'o', 'w', 'n', 'l', 'o', 'a', 'd', 's', '/', 0, 
	HB_P_POPVARIABLE, 7, 0,	/* CSERVERFOLDER */
/* 00165 */ HB_P_LINEOFFSET, 15,	/* 18 */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'c', ':', 92, 't', 'e', 'm', 'p', 0, 
	HB_P_POPVARIABLE, 8, 0,	/* CLOCALFOLDER */
/* 00180 */ HB_P_LINEOFFSET, 16,	/* 19 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 9, 0,	/* CSHFTPSERVER */
/* 00188 */ HB_P_LINEOFFSET, 17,	/* 20 */
	HB_P_PUSHVARIABLE, 10, 0,	/* M_QP */
	HB_P_POPVARIABLE, 11, 0,	/* CRLF */
/* 00196 */ HB_P_LINEOFFSET, 19,	/* 22 */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	's', 't', 'r', 'F', 'T', 'P', 'S', 'e', 'r', 'v', 'e', 'r', 'N', 'a', 'm', 'e', ' ', '=', ' ', 34, 0, 
	HB_P_PUSHVARIABLE, 9, 0,	/* CSHFTPSERVER */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00237 */ HB_P_LINEOFFSET, 20,	/* 23 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	's', 't', 'r', 'F', 'T', 'P', 'S', 'e', 'r', 'v', 'e', 'r', 'F', 'o', 'l', 'd', 'e', 'r', ' ', '=', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 13, 0,	/* CSHSERVERFOLDER */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00284 */ HB_P_LINEOFFSET, 21,	/* 24 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	's', 't', 'r', 'L', 'o', 'g', 'i', 'n', 'I', 'D', ' ', ' ', ' ', ' ', '=', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 14, 0,	/* CSHFTPLOGINID */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00326 */ HB_P_LINEOFFSET, 22,	/* 25 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 19,	/* 19 */
	's', 't', 'r', 'P', 'a', 's', 's', 'w', 'o', 'r', 'd', ' ', ' ', ' ', ' ', '=', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 15, 0,	/* CSHFTPPASSWORD */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00369 */ HB_P_LINEOFFSET, 23,	/* 26 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	's', 't', 'r', 'F', 'i', 'l', 'e', '2', 'P', 'u', 't', 'G', 'e', 't', ' ', ' ', '=', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 3, 0,	/* CXMLFILE */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00413 */ HB_P_LINEOFFSET, 24,	/* 27 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	's', 't', 'r', 'L', 'o', 'c', 'a', 'l', 'F', 'o', 'l', 'd', 'e', 'r', 'N', 'a', 'm', 'e', ' ', '=', ' ', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 16, 0,	/* CSHLOCALFOLDER */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00460 */ HB_P_LINEOFFSET, 25,	/* 28 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 62,	/* 62 */
	's', 't', 'r', 'F', 'T', 'P', 'S', 'c', 'r', 'i', 'p', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', ' ', '=', ' ', 's', 't', 'r', 'L', 'o', 'c', 'a', 'l', 'F', 'o', 'l', 'd', 'e', 'r', 'N', 'a', 'm', 'e', ' ', '&', ' ', 34, 92, 'n', 'f', 'e', 'f', 't', 'p', 'f', 'i', 'l', 'e', '.', 't', 'x', 't', 34, 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00537 */ HB_P_LINEOFFSET, 26,	/* 29 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 56,	/* 56 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'F', 'S', 'O', ' ', '=', ' ', 'C', 'r', 'e', 'a', 't', 'e', 'O', 'b', 'j', 'e', 'c', 't', '(', 34, 'S', 'c', 'r', 'i', 'p', 't', 'i', 'n', 'g', '.', 'F', 'i', 'l', 'e', 'S', 'y', 's', 't', 'e', 'm', 'O', 'b', 'j', 'e', 'c', 't', 34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00608 */ HB_P_LINEOFFSET, 27,	/* 30 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'f', ' ', '(', 'o', 'b', 'j', 'F', 'S', 'O', '.', 'F', 'i', 'l', 'e', 'E', 'x', 'i', 's', 't', 's', '(', 's', 't', 'r', 'F', 'T', 'P', 'S', 'c', 'r', 'i', 'p', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', ')', ')', ' ', 'T', 'h', 'e', 'n', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00673 */ HB_P_LINEOFFSET, 28,	/* 31 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 42,	/* 42 */
	' ', 'o', 'b', 'j', 'F', 'S', 'O', '.', 'D', 'e', 'l', 'e', 't', 'e', 'F', 'i', 'l', 'e', ' ', '(', 's', 't', 'r', 'F', 'T', 'P', 'S', 'c', 'r', 'i', 'p', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00730 */ HB_P_LINEOFFSET, 29,	/* 32 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'E', 'n', 'd', ' ', 'I', 'f', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00752 */ HB_P_LINEOFFSET, 30,	/* 33 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 66,	/* 66 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', ' ', '=', ' ', 'o', 'b', 'j', 'F', 'S', 'O', '.', 'C', 'r', 'e', 'a', 't', 'e', 'T', 'e', 'x', 't', 'F', 'i', 'l', 'e', '(', 's', 't', 'r', 'F', 'T', 'P', 'S', 'c', 'r', 'i', 'p', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', ',', ' ', 'T', 'r', 'u', 'e', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00833 */ HB_P_LINEOFFSET, 31,	/* 34 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'o', 'p', 'e', 'n', ' ', 34, ' ', '&', ' ', 's', 't', 'r', 'F', 'T', 'P', 'S', 'e', 'r', 'v', 'e', 'r', 'N', 'a', 'm', 'e', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00899 */ HB_P_LINEOFFSET, 32,	/* 35 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 's', 't', 'r', 'L', 'o', 'g', 'i', 'n', 'I', 'D', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 00949 */ HB_P_LINEOFFSET, 33,	/* 36 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 36,	/* 36 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 's', 't', 'r', 'P', 'a', 's', 's', 'w', 'o', 'r', 'd', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01000 */ HB_P_LINEOFFSET, 34,	/* 37 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 51,	/* 51 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'c', 'd', ' ', 34, ' ', '&', ' ', 's', 't', 'r', 'F', 'T', 'P', 'S', 'e', 'r', 'v', 'e', 'r', 'F', 'o', 'l', 'd', 'e', 'r', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01066 */ HB_P_LINEOFFSET, 35,	/* 38 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'h', 'a', 's', 'h', 34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01112 */ HB_P_LINEOFFSET, 36,	/* 39 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'l', 'c', 'd', ' ', 34, ' ', '&', ' ', 's', 't', 'r', 'L', 'o', 'c', 'a', 'l', 'F', 'o', 'l', 'd', 'e', 'r', 'N', 'a', 'm', 'e', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01179 */ HB_P_LINEOFFSET, 37,	/* 40 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'p', 'u', 't', ' ', 34, ' ', '&', ' ', 's', 't', 'r', 'F', 'i', 'l', 'e', '2', 'P', 'u', 't', 'G', 'e', 't', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01242 */ HB_P_LINEOFFSET, 38,	/* 41 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'b', 'y', 'e', 34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01287 */ HB_P_LINEOFFSET, 39,	/* 42 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'W', 'r', 'i', 't', 'e', 'L', 'i', 'n', 'e', ' ', '(', 34, 'q', 'u', 'i', 't', 34, ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01333 */ HB_P_LINEOFFSET, 40,	/* 43 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 18,	/* 18 */
	' ', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', '.', 'C', 'l', 'o', 's', 'e', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01366 */ HB_P_LINEOFFSET, 41,	/* 44 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 21,	/* 21 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'F', 'S', 'O', ' ', '=', ' ', 'N', 'o', 't', 'h', 'i', 'n', 'g', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01402 */ HB_P_LINEOFFSET, 42,	/* 45 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 24,	/* 24 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'M', 'y', 'F', 'i', 'l', 'e', ' ', '=', ' ', 'N', 'o', 't', 'h', 'i', 'n', 'g', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01441 */ HB_P_LINEOFFSET, 43,	/* 46 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 55,	/* 55 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'S', 'h', 'e', 'l', 'l', ' ', '=', ' ', 'W', 'S', 'c', 'r', 'i', 'p', 't', '.', 'C', 'r', 'e', 'a', 't', 'e', 'O', 'b', 'j', 'e', 'c', 't', '(', ' ', 34, 'W', 'S', 'c', 'r', 'i', 'p', 't', '.', 'S', 'h', 'e', 'l', 'l', 34, ' ', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01511 */ HB_P_LINEOFFSET, 44,	/* 47 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 68,	/* 68 */
	'o', 'b', 'j', 'S', 'h', 'e', 'l', 'l', '.', 'R', 'u', 'n', ' ', '(', 34, 'f', 't', 'p', ' ', '-', 's', ':', 34, ' ', '&', ' ', 'c', 'h', 'r', '(', '3', '4', ')', ' ', '&', ' ', 's', 't', 'r', 'F', 'T', 'P', 'S', 'c', 'r', 'i', 'p', 't', 'F', 'i', 'l', 'e', 'N', 'a', 'm', 'e', ' ', '&', ' ', 'c', 'h', 'r', '(', '3', '4', ')', ')', 0, 
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 11, 0,	/* CRLF */
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01594 */ HB_P_LINEOFFSET, 45,	/* 48 */
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'S', 'e', 't', ' ', 'o', 'b', 'j', 'S', 'h', 'e', 'l', 'l', ' ', '=', ' ', 'N', 'o', 't', 'h', 'i', 'n', 'g', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 12, 0,	/* CSTRFILE */
/* 01628 */ HB_P_LINEOFFSET, 46,	/* 49 */
	HB_P_PUSHSYMNEAR, 17,	/* RMEMOWRIT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'n', 'f', 'e', 'd', 'i', 's', 't', '.', 'v', 'b', 's', 0, 
	HB_P_PUSHVARIABLE, 12, 0,	/* CSTRFILE */
	HB_P_DOSHORT, 2,
/* 01652 */ HB_P_LINEOFFSET, 49,	/* 52 */
	HB_P_PUSHSYMNEAR, 18,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'D', 'i', 's', 't', 'r', 'i', 'b', 'u', 'i', 'n', 'd', 'o', '.', '.', '.', 0, 
	HB_P_PUSHSTRSHORT, 23,	/* 23 */
	'N', 'o', 't', 'a', ' ', 'F', 'i', 's', 'c', 'a', 'l', ' ', 'E', 'l', 'e', 't', 'r', 'o', 'n', 'i', 'c', 'a', 0, 
	HB_P_PUSHBLOCKSHORT, 28,	/* 28 */
	HB_P_PUSHSYMNEAR, 19,	/* RUNCSCRIPT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 20, 0,	/* CPATHDADOS */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'n', 'f', 'e', 'd', 'i', 's', 't', '.', 'v', 'b', 's', 0, 
	HB_P_PLUS,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ENDBLOCK,
	HB_P_DOSHORT, 3,
/* 01730 */ HB_P_LINEOFFSET, 50,	/* 53 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01735 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( RUNCSCRIPT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 71, 0,	/* 71 */
	HB_P_MESSAGE, 21, 0,	/* NEW */
	HB_P_PUSHSYMNEAR, 22,	/* TOLEAUTO */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHSTRSHORT, 14,	/* 14 */
	'w', 's', 'c', 'r', 'i', 'p', 't', '.', 's', 'h', 'e', 'l', 'l', 0, 
	HB_P_SENDSHORT, 1,
	HB_P_POPLOCALNEAR, 4,	/* WSHSHELL */
/* 00034 */ HB_P_LINEOFFSET, 1,	/* 72 */
	HB_P_MESSAGE, 23, 0,	/* RUN */
	HB_P_PUSHLOCALNEAR, 4,	/* WSHSHELL */
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'c', 's', 'c', 'r', 'i', 'p', 't', ' ', '/', 'S', ' ', '/', 'N', 'O', 'L', 'O', 'G', 'O', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CSCRIPT */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* INTWINDOWSTYLE */
	HB_P_PUSHLOCALNEAR, 3,	/* BWAITONRUN */
	HB_P_SENDSHORT, 3,
	HB_P_POP,
/* 00073 */ HB_P_LINEOFFSET, 2,	/* 73 */
	HB_P_MESSAGE, 24, 0,	/* END */
	HB_P_PUSHLOCALNEAR, 4,	/* WSHSHELL */
	HB_P_SENDSHORT, 0,
	HB_P_POP,
/* 00083 */ HB_P_LINEOFFSET, 3,	/* 74 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00088 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

