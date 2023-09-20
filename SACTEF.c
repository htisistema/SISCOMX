/*
 * xHarbour build 0.99.70 Intl. (SimpLex)
 * Generated C source code from <SACTEF.PRG>
 * Command: C:\xHarbour997\bin\harbour.exe C:\HTI\SISCOM\SACTEF.PRG /q /oC:\hti\SISCOM\SACTEF.c /M /N -DxHB -DXHB_0990 -DXHB_0991 -DXHB_0992 -DXHB_0993 -DXHB_0994 -DXHB_09941 -DXHB_09950 -DXHB_09951a -DXHB_09951 -DXHB_09951b -DXHB_0996 -DXHB_09960 -DXHB_09961 -DXHB_09961B -DXHB_0997 -DXHB_09970 
 * Created: 2023.09.20 11:14:57 (Borland C++ 5.5.1)
 */

#include "hbvmpub.h"
#include "hbpcode.h"
#include "hbinit.h"

#define __PRG_SOURCE__ "SACTEF.PRG"

HB_FUNC( PAC00TEF );
HB_FUNC( CRITICA_CRT );
HB_FUNC( CHECK_TO );
HB_FUNC_STATIC( CHECK_CRT );
HB_FUNC( MANDA_NCN );
HB_FUNC( MANDA_ATV );
HB_FUNC_STATIC( MANDA_CRT );
HB_FUNC_STATIC( MANDA_CHQ );
HB_FUNC( CRIA_TEFTXT );
HB_FUNC( PEGA_TEXTOTEF );
HB_FUNC( ATV_OK );
HB_FUNC( MANDA_CNF );
HB_FUNC( FECHA_TEFTXT );
HB_FUNC( GRAVA_CAMPO );
HB_FUNC( TRATA_TEF );
HB_FUNC( PADM );
HB_FUNC_STATIC( MANDA_ADM );
HB_FUNC_STATIC( CHECK_ADM );
HB_FUNC_STATIC( CRITICA_ADM );
HB_FUNC( MOSTRA_CANC );
HB_FUNC( BLOQ_TECLADO );
HB_FUNC( IMP_ADM );
HB_FUNC( APAGA_INTPOS );
HB_FUNC( PNCONF );
HB_FUNC( IMP_CARTAO );
HB_FUNC( VERI_TRANSACAO );
HB_FUNC_EXTERN( __MVPUBLIC );
HB_FUNC_EXTERN( ATENCAO );
HB_FUNC_EXTERN( STR );
HB_FUNC_EXTERN( ALLTRIM );
HB_FUNC_EXTERN( __KEYBOARD );
HB_FUNC_EXTERN( MYRUN );
HB_FUNC_EXTERN( MENSAGEM );
HB_FUNC_EXTERN( FILE );
HB_FUNC_EXTERN( MEMOLINE );
HB_FUNC_EXTERN( MEMOREAD );
HB_FUNC_EXTERN( MLCOUNT );
HB_FUNC_EXTERN( AADD );
HB_FUNC_EXTERN( FCLOSE );
HB_FUNC_EXTERN( LEN );
HB_FUNC_EXTERN( ASCAN );
HB_FUNC_EXTERN( SUBSTR );
HB_FUNC_EXTERN( UPPER );
HB_FUNC_EXTERN( VAL );
HB_FUNC_EXTERN( FERASE );
HB_FUNC_EXTERN( SETCURSOR );
HB_FUNC_EXTERN( FWRITE );
HB_FUNC_EXTERN( __MVPRIVATE );
HB_FUNC_EXTERN( FCREATE );
HB_FUNC_EXTERN( INKEY );
HB_FUNC_EXTERN( FERROR );
HB_FUNC_EXTERN( STRZERO );
HB_FUNC_EXTERN( SPACE );
HB_FUNC_EXTERN( CTOD );
HB_FUNC_EXTERN( OP_SIMNAO );
HB_FUNC_EXTERN( EMPTY );
HB_FUNC_EXTERN( TRANSFORM );
HB_FUNC_EXTERN( ALERT );
HB_FUNC_EXTERN( IBR_OK );
HB_FUNC_EXTERN( IBR_COMANDO );
HB_FUNC_EXTERN( IMP_ARQ );
HB_FUNC_EXTERN( IMPRT );
HB_FUNC_EXTERN( DEVPOS );
HB_FUNC_EXTERN( PROW );
HB_FUNC_EXTERN( DEVOUT );
HB_FUNC_EXTERN( STRTRAN );
HB_FUNC_EXTERN( RTRIM );
HB_FUNC_EXTERN( SETPRC );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( CONF_IMPRESSAO );
HB_FUNC_EXTERN( DIRECTORY );
HB_FUNC_EXTERN( OP_TELA );
HB_FUNC_EXTERN( SETPOS );
HB_FUNC_EXTERN( DISPOUT );
HB_FUNC_EXTERN( FECHA_TELA );

#undef HB_PRG_PCODE_VER
#define HB_PRG_PCODE_VER 7

HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_SACTEF )
{ "PAC00TEF", {HB_FS_PUBLIC | HB_FS_LOCAL | HB_FS_FIRST}, {HB_FUNCNAME( PAC00TEF )}, NULL },
{ "CRLF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPUBLIC", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPUBLIC )}, NULL },
{ "ATENCAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( ATENCAO )}, NULL },
{ "STR", {HB_FS_PUBLIC}, {HB_FUNCNAME( STR )}, NULL },
{ "DOC_CDREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ALLTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALLTRIM )}, NULL },
{ "M_INDIV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_ENV", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_RET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_CARTAO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_CARTAO )}, NULL },
{ "BLOQ_TECLADO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( BLOQ_TECLADO )}, NULL },
{ "__KEYBOARD", {HB_FS_PUBLIC}, {HB_FUNCNAME( __KEYBOARD )}, NULL },
{ "MYRUN", {HB_FS_PUBLIC}, {HB_FUNCNAME( MYRUN )}, NULL },
{ "CRITICA_CRT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRITICA_CRT )}, NULL },
{ "MENSAGEM", {HB_FS_PUBLIC}, {HB_FUNCNAME( MENSAGEM )}, NULL },
{ "FILE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FILE )}, NULL },
{ "MEMOLINE", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOLINE )}, NULL },
{ "MEMOREAD", {HB_FS_PUBLIC}, {HB_FUNCNAME( MEMOREAD )}, NULL },
{ "MLCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( MLCOUNT )}, NULL },
{ "AADD", {HB_FS_PUBLIC}, {HB_FUNCNAME( AADD )}, NULL },
{ "FCLOSE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCLOSE )}, NULL },
{ "LEN", {HB_FS_PUBLIC}, {HB_FUNCNAME( LEN )}, NULL },
{ "ASCAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( ASCAN )}, NULL },
{ "SUBSTR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SUBSTR )}, NULL },
{ "MVALOR_TRANS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_TEF_NOMREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "UPPER", {HB_FS_PUBLIC}, {HB_FUNCNAME( UPPER )}, NULL },
{ "MNOME_REDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NOMEREDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VAL", {HB_FS_PUBLIC}, {HB_FUNCNAME( VAL )}, NULL },
{ "M_TEF_NUMTRA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MNUM_TRANSACAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MQTD_PARC", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_TEF_FINALIZA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MFINAL_TRANSACAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "I", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_CNF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CNF )}, NULL },
{ "CHECK_TO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_TO )}, NULL },
{ "MANDA_NCN", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_NCN )}, NULL },
{ "APAGA_INTPOS", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( APAGA_INTPOS )}, NULL },
{ "PEGA_TEXTOTEF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PEGA_TEXTOTEF )}, NULL },
{ "M_ARQTEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CHECK_CRT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_CRT )}, NULL },
{ "FERASE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERASE )}, NULL },
{ "TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CRIA_TEFTXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRIA_TEFTXT )}, NULL },
{ "NHANDLE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "GRAVA_CAMPO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( GRAVA_CAMPO )}, NULL },
{ "M_TEF_NUM", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FECHA_TEFTXT", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( FECHA_TEFTXT )}, NULL },
{ "OK", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_ATV", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_ATV )}, NULL },
{ "SETCURSOR", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETCURSOR )}, NULL },
{ "SLINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FWRITE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FWRITE )}, NULL },
{ "MANDA_CRT", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CRT )}, NULL },
{ "GETLIST", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "__MVPRIVATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( __MVPRIVATE )}, NULL },
{ "M_NUMEROCAIXA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MANDA_CHQ", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_CHQ )}, NULL },
{ "ARQTEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "FCREATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( FCREATE )}, NULL },
{ "CONTA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEMPOXX", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "INKEY", {HB_FS_PUBLIC}, {HB_FUNCNAME( INKEY )}, NULL },
{ "ATV_OK", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( ATV_OK )}, NULL },
{ "FERROR", {HB_FS_PUBLIC}, {HB_FUNCNAME( FERROR )}, NULL },
{ "STRZERO", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRZERO )}, NULL },
{ "NVEZES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NRET", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "NBYTES", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TRATA_TEF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( TRATA_TEF )}, NULL },
{ "SPACE", {HB_FS_PUBLIC}, {HB_FUNCNAME( SPACE )}, NULL },
{ "STATUS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "PADM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PADM )}, NULL },
{ "MTP_CARTAO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_VIA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DIE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DIR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DSE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_DSR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEF_UTI", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "CTOD", {HB_FS_PUBLIC}, {HB_FUNCNAME( CTOD )}, NULL },
{ "DAT_TEF", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "VERI_TRANSACAO", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( VERI_TRANSACAO )}, NULL },
{ "MANDA_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( MANDA_ADM )}, NULL },
{ "CHECK_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CHECK_ADM )}, NULL },
{ "CRITICA_ADM", {HB_FS_STATIC | HB_FS_LOCAL}, {HB_FUNCNAME( CRITICA_ADM )}, NULL },
{ "IMP_ADM", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( IMP_ADM )}, NULL },
{ "OP_SIMNAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_SIMNAO )}, NULL },
{ "TXT_TRANSA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TXT_VALOR", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TXT_REDE", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "EMPTY", {HB_FS_PUBLIC}, {HB_FUNCNAME( EMPTY )}, NULL },
{ "TRANSFORM", {HB_FS_PUBLIC}, {HB_FUNCNAME( TRANSFORM )}, NULL },
{ "MOSTRA_CANC", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( MOSTRA_CANC )}, NULL },
{ "ALERT", {HB_FS_PUBLIC}, {HB_FUNCNAME( ALERT )}, NULL },
{ "M_QP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TEXTO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IBR_OK", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_OK )}, NULL },
{ "IBR_COMANDO", {HB_FS_PUBLIC}, {HB_FUNCNAME( IBR_COMANDO )}, NULL },
{ "MTIPO_IMP", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MIMP_TIPO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "MPOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "IMP_ARQ", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMP_ARQ )}, NULL },
{ "IMPRT", {HB_FS_PUBLIC}, {HB_FUNCNAME( IMPRT )}, NULL },
{ "DEVPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVPOS )}, NULL },
{ "PROW", {HB_FS_PUBLIC}, {HB_FUNCNAME( PROW )}, NULL },
{ "DEVOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DEVOUT )}, NULL },
{ "STRTRAN", {HB_FS_PUBLIC}, {HB_FUNCNAME( STRTRAN )}, NULL },
{ "RTRIM", {HB_FS_PUBLIC}, {HB_FUNCNAME( RTRIM )}, NULL },
{ "SETPRC", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPRC )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "CONF_IMPRESSAO", {HB_FS_PUBLIC}, {HB_FUNCNAME( CONF_IMPRESSAO )}, NULL },
{ "PNCONF", {HB_FS_PUBLIC | HB_FS_LOCAL}, {HB_FUNCNAME( PNCONF )}, NULL },
{ "LIN", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHA", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "LINHAS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "M_INTPOS", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "DIRECTORY", {HB_FS_PUBLIC}, {HB_FUNCNAME( DIRECTORY )}, NULL },
{ "OP_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( OP_TELA )}, NULL },
{ "CO", {HB_FS_PUBLIC | HB_FS_MEMVAR | HB_FS_MESSAGE}, {NULL}, NULL },
{ "SETPOS", {HB_FS_PUBLIC}, {HB_FUNCNAME( SETPOS )}, NULL },
{ "DISPOUT", {HB_FS_PUBLIC}, {HB_FUNCNAME( DISPOUT )}, NULL },
{ "FECHA_TELA", {HB_FS_PUBLIC}, {HB_FUNCNAME( FECHA_TELA )}, NULL }
HB_INIT_SYMBOLS_END( hb_vm_SymbolInit_SACTEF )

#if defined(HB_PRAGMA_STARTUP)
   #pragma startup hb_vm_SymbolInit_SACTEF
#elif defined(HB_MSC_STARTUP)
   #if _MSC_VER >= 1010
      #pragma data_seg( ".CRT$XIY" )
      #pragma comment( linker, "/Merge:.CRT=.data" )
   #else
      #pragma data_seg( "XIY" )
   #endif
   static HB_$INITSYM hb_vm_auto_SymbolInit_SACTEF = hb_vm_SymbolInit_SACTEF;
   #pragma data_seg()
#endif

HB_FUNC( PAC00TEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 8, 0,	/* 8 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 9 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CRLF */
	HB_P_PUSHSYMNEAR, 2,	/* TEF_VALOR */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 2, 0,	/* TEF_VALOR */
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00032 */ HB_P_LINEOFFSET, 2,	/* 10 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00046) */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00114) */
/* 00048 */ HB_P_LINEOFFSET, 3,	/* 11 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NVALORCARTAO 0*/
/* 00054 */ HB_P_LINEOFFSET, 4,	/* 12 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'a', '!', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00109 */ HB_P_LINEOFFSET, 5,	/* 13 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00114 */ HB_P_LINEOFFSET, 7,	/* 15 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00121 */ HB_P_LINEOFFSET, 8,	/* 16 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* DOC_CDREDE */
/* 00130 */ HB_P_LINEOFFSET, 33,	/* 41 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00148 */ HB_P_LINEOFFSET, 34,	/* 42 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00166 */ HB_P_LINEOFFSET, 36,	/* 44 */
	HB_P_PUSHSYMNEAR, 11,	/* IMP_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* CNUMEROCUPOM */
	HB_P_PUSHLOCALNEAR, 2,	/* CIND_TEF */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_DOSHORT, 3,
/* 00179 */ HB_P_LINEOFFSET, 37,	/* 45 */
	HB_P_PUSHSYMNEAR, 12,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_DOSHORT, 1,
/* 00190 */ HB_P_LINEOFFSET, 38,	/* 46 */
	HB_P_PUSHSYMNEAR, 13,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 00200 */ HB_P_LINEOFFSET, 39,	/* 47 */
	HB_P_PUSHSYMNEAR, 13,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00207 */ HB_P_LINEOFFSET, 40,	/* 48 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '*', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00245 */ HB_P_LINEOFFSET, 41,	/* 49 */
	HB_P_PUSHLOCALNEAR, 4,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00251 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CRITICA_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 110, 0,	/* 110 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MPOS 0*/
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 111 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 40,	/* 40 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00064 */ HB_P_LINEOFFSET, 2,	/* 112 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 91,	/* 91 (abs: 00184) */
/* 00095 */ HB_P_LINEOFFSET, 3,	/* 113 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 'c', ':', 92, 't', 'e', 'f', '_', 'd', 'i', 'a', 'l', 92, 'r', 'e', 's', 'p', 92, 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00179 */ HB_P_LINEOFFSET, 4,	/* 114 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00184 */ HB_P_LINEOFFSET, 6,	/* 116 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00225 */ HB_P_LINEOFFSET, 7,	/* 117 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00235 */ HB_P_LINEOFFSET, 8,	/* 118 */
	HB_P_PUSHSYMNEAR, 20,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00273 */ HB_P_LINEOFFSET, 9,	/* 119 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
/* 00280 */ HB_P_LINEOFFSET, 10,	/* 120 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 6,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00359) */
/* 00293 */ HB_P_LINEOFFSET, 11,	/* 121 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00335 */ HB_P_LINEOFFSET, 12,	/* 122 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00351 */ HB_P_LINEOFFSET, 13,	/* 123 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00286) */
/* 00359 */ HB_P_LINEOFFSET, 14,	/* 124 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00388 */ HB_P_LINEOFFSET, 15,	/* 125 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00475) */
/* 00401 */ HB_P_LINEOFFSET, 16,	/* 126 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00470 */ HB_P_LINEOFFSET, 17,	/* 127 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00475 */ HB_P_LINEOFFSET, 19,	/* 129 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00638) */
/* 00517 */ HB_P_LINEOFFSET, 20,	/* 130 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 107,	/* 107 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '1', ']', ' ', '-', ' ', 'I', 'd', 'e', 'n', 't', 'i', 'f', 'i', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'a', ' ', 's', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'e', 's', 't', 'a', 160, 's', 'e', 'n', 'd', 'o', ' ', 'f', 'e', 'i', 't', 'a', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00633 */ HB_P_LINEOFFSET, 21,	/* 131 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00638 */ HB_P_LINEOFFSET, 30,	/* 140 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00678 */ HB_P_LINEOFFSET, 31,	/* 141 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 66,	/* 66 (abs: 00750) */
/* 00686 */ HB_P_LINEOFFSET, 32,	/* 142 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '3', ']', ' ', '-', ' ', 'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00745 */ HB_P_LINEOFFSET, 33,	/* 143 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00750 */ HB_P_LINEOFFSET, 39,	/* 149 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 26, 0,	/* MVALOR_TRANS */
/* 00772 */ HB_P_LINEOFFSET, 41,	/* 151 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '9', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00812 */ HB_P_LINEOFFSET, 42,	/* 152 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 79,	/* 79 (abs: 00897) */
/* 00820 */ HB_P_LINEOFFSET, 43,	/* 153 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'e', 'g', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00892 */ HB_P_LINEOFFSET, 44,	/* 154 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00897 */ HB_P_LINEOFFSET, 46,	/* 156 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 154, 0,	/* 154 (abs: 01075) */
/* 00924 */ HB_P_LINEOFFSET, 47,	/* 157 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00964 */ HB_P_LINEOFFSET, 48,	/* 158 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00998) */
/* 00972 */ HB_P_LINEOFFSET, 49,	/* 159 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 74,	/* 74 (abs: 01070) */
/* 00998 */ HB_P_LINEOFFSET, 51,	/* 161 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 63,	/* 63 */
	'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'e', 'g', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01070 */ HB_P_LINEOFFSET, 53,	/* 163 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01075 */ HB_P_LINEOFFSET, 56,	/* 166 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01115 */ HB_P_LINEOFFSET, 57,	/* 167 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 118,	/* 118 (abs: 01239) */
/* 01123 */ HB_P_LINEOFFSET, 58,	/* 168 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 102,	/* 102 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '1', '0', ']', ' ', '-', ' ', 'N', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'R', 'e', 'd', 'e', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'o', 'm', 'e', ' ', 'd', 'a', ' ', 'r', 'e', 'd', 'e', ' ', 'q', 'u', 'e', ' ', 't', 'r', 'a', 't', 'o', 'u', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01234 */ HB_P_LINEOFFSET, 59,	/* 169 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01239 */ HB_P_LINEOFFSET, 61,	/* 171 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
/* 01261 */ HB_P_LINEOFFSET, 62,	/* 172 */
	HB_P_PUSHSYMNEAR, 28,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 29, 0,	/* MNOME_REDE */
/* 01288 */ HB_P_LINEOFFSET, 63,	/* 173 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'A', 'M', 'E', 'X', '_', 'R', 'E', 'D', 'E', 'C', 'A', 'R', 'D', '_', 'V', 'I', 'S', 'A', 'N', 'E', 'T', '_', 'T', 'E', 'C', 'B', 'A', 'N', '_', 'H', 'I', 'P', 'E', 'R', 'C', 'A', 'R', 'D', '_', 'E', 'L', 'O', '_', 'V', 'I', 'S', 'A', 'E', 'L', 'E', 'T', 'R', 'O', 'N', '_', 'C', 'I', 'E', 'L', 'O', 0, 
	HB_P_POPVARIABLE, 30, 0,	/* NOMEREDE */
/* 01356 */ HB_P_LINEOFFSET, 72,	/* 182 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01396 */ HB_P_LINEOFFSET, 73,	/* 183 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 125,	/* 125 (abs: 01527) */
/* 01404 */ HB_P_LINEOFFSET, 74,	/* 184 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 109,	/* 109 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '1', '2', ']', ' ', '-', ' ', 'N', 'o', '.', ' ', 'd', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'I', 'n', 'd', 'i', 'c', 'a', ' ', 'o', ' ', 'n', 'u', 'm', 'e', 'r', 'o', ' ', 'd', 'e', ' ', 's', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', ' ', '(', 'N', 'S', 'U', ' ', '-', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', 'l', ' ', 'U', 'n', 'i', 'c', 'o', ')', 0, 
	HB_P_DOSHORT, 1,
/* 01522 */ HB_P_LINEOFFSET, 75,	/* 185 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01527 */ HB_P_LINEOFFSET, 77,	/* 187 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 01624) */
/* 01550 */ HB_P_LINEOFFSET, 78,	/* 188 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'a', ' ', 'N', 'S', 'U', ' ', '-', ' ', 'N', 'u', 'm', 'e', 'r', 'o', ' ', 'S', 'e', 'q', 'u', 'e', 'n', 'c', 'i', 'a', 'l', ' ', 'U', 'n', 'i', 'c', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01619 */ HB_P_LINEOFFSET, 79,	/* 189 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01624 */ HB_P_LINEOFFSET, 81,	/* 191 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
/* 01646 */ HB_P_LINEOFFSET, 82,	/* 192 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 33, 0,	/* MNUM_TRANSACAO */
/* 01668 */ HB_P_LINEOFFSET, 84,	/* 194 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01708 */ HB_P_LINEOFFSET, 85,	/* 195 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 10,	/* 10 (abs: 01724) */
/* 01716 */ HB_P_LINEOFFSET, 86,	/* 196 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 34, 0,	/* MQTD_PARC */
	HB_P_JUMPNEAR, 113,	/* 113 (abs: 01835) */
/* 01724 */ HB_P_LINEOFFSET, 88,	/* 198 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 01808) */
/* 01745 */ HB_P_LINEOFFSET, 89,	/* 199 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01803 */ HB_P_LINEOFFSET, 90,	/* 200 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01808 */ HB_P_LINEOFFSET, 92,	/* 202 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 34, 0,	/* MQTD_PARC */
/* 01835 */ HB_P_LINEOFFSET, 94,	/* 204 */
	HB_P_PUSHVARIABLE, 34, 0,	/* MQTD_PARC */
	HB_P_ZERO,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 01850) */
/* 01844 */ HB_P_LINEOFFSET, 95,	/* 205 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 34, 0,	/* MQTD_PARC */
/* 01850 */ HB_P_LINEOFFSET, 97,	/* 207 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01890 */ HB_P_LINEOFFSET, 98,	/* 208 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 137, 0,	/* 137 (abs: 02033) */
/* 01899 */ HB_P_LINEOFFSET, 99,	/* 209 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 120,	/* 120 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '2', '7', ']', ' ', '-', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', 'E', 's', 't', 'e', ' ', 'c', 'a', 'm', 'p', 'o', ' ', 'c', 'o', 'n', 't', 'e', 'm', ' ', 'o', 's', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'r', 'e', 'c', 'e', 'b', 'i', 'd', 'o', 's', ' ', 'd', 'o', ' ', 'm', 'o', 'd', 'u', 'l', 'o', ' ', 'T', 'E', 'F', ' ', 'q', 'u', 'e', ' ', 'e', 'x', 'e', 'c', 'u', 't', 'o', 'u', ' ', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02028 */ HB_P_LINEOFFSET, 100,	/* 210 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02033 */ HB_P_LINEOFFSET, 102,	/* 212 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 65,	/* 65 (abs: 02117) */
/* 02054 */ HB_P_LINEOFFSET, 103,	/* 213 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'd', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'f', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02112 */ HB_P_LINEOFFSET, 104,	/* 214 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02117 */ HB_P_LINEOFFSET, 106,	/* 216 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
/* 02139 */ HB_P_LINEOFFSET, 107,	/* 217 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 36, 0,	/* MFINAL_TRANSACAO */
/* 02161 */ HB_P_LINEOFFSET, 109,	/* 219 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'S', 'P', 'A', 'G', 'U', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 241, 0,	/* 241 (abs: 02428) */
/* 02190 */ HB_P_LINEOFFSET, 110,	/* 220 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'7', '1', '4', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02230 */ HB_P_LINEOFFSET, 111,	/* 221 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 02317) */
/* 02238 */ HB_P_LINEOFFSET, 112,	/* 222 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '7', '1', '4', ']', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02312 */ HB_P_LINEOFFSET, 113,	/* 223 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02317 */ HB_P_LINEOFFSET, 115,	/* 225 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 71, 1,	/* 327 (abs: 02665) */
/* 02341 */ HB_P_LINEOFFSET, 116,	/* 226 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ' ', 130, ' ', 'z', 'e', 'r', 'o', '!', ' ', 'N', 'a', 'o', ' ', 'h', 'a', 'v', 'e', 'r', 160, 'c', 'u', 'p', 'o', 'm', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02423 */ HB_P_LINEOFFSET, 117,	/* 227 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02428 */ HB_P_LINEOFFSET, 121,	/* 231 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02468 */ HB_P_LINEOFFSET, 122,	/* 232 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 81,	/* 81 (abs: 02555) */
/* 02476 */ HB_P_LINEOFFSET, 123,	/* 233 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 65,	/* 65 */
	'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '2', '8', ']', ' ', '-', ' ', 'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ',', ' ', 'n', 'a', 'o', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 02550 */ HB_P_LINEOFFSET, 124,	/* 234 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02555 */ HB_P_LINEOFFSET, 126,	/* 236 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 89,	/* 89 (abs: 02665) */
/* 02578 */ HB_P_LINEOFFSET, 127,	/* 237 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 73,	/* 73 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'l', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', ' ', 130, ' ', 'z', 'e', 'r', 'o', '!', ' ', 'N', 'a', 'o', ' ', 'h', 'a', 'v', 'e', 'r', 160, 'c', 'u', 'p', 'o', 'm', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 02660 */ HB_P_LINEOFFSET, 128,	/* 238 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 02665 */ HB_P_LINEOFFSET, 132,	/* 242 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02705 */ HB_P_LINEOFFSET, 133,	/* 243 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_POP,
/* 02712 */ HB_P_LINEOFFSET, 138,	/* 248 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02814) */
/* 02744 */ HB_P_LINEOFFSET, 139,	/* 249 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 151, 3,	/* 919 (abs: 03730) */
/* 02814 */ HB_P_LINEOFFSET, 140,	/* 250 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 02916) */
/* 02846 */ HB_P_LINEOFFSET, 141,	/* 251 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 49, 3,	/* 817 (abs: 03730) */
/* 02916 */ HB_P_LINEOFFSET, 142,	/* 252 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03018) */
/* 02948 */ HB_P_LINEOFFSET, 143,	/* 253 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 2,	/* 715 (abs: 03730) */
/* 03018 */ HB_P_LINEOFFSET, 144,	/* 254 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '4', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03120) */
/* 03050 */ HB_P_LINEOFFSET, 145,	/* 255 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '4', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 101, 2,	/* 613 (abs: 03730) */
/* 03120 */ HB_P_LINEOFFSET, 146,	/* 256 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '5', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03222) */
/* 03152 */ HB_P_LINEOFFSET, 147,	/* 257 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '5', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 255, 1,	/* 511 (abs: 03730) */
/* 03222 */ HB_P_LINEOFFSET, 148,	/* 258 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '6', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03324) */
/* 03254 */ HB_P_LINEOFFSET, 149,	/* 259 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '6', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 153, 1,	/* 409 (abs: 03730) */
/* 03324 */ HB_P_LINEOFFSET, 150,	/* 260 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '7', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03426) */
/* 03356 */ HB_P_LINEOFFSET, 151,	/* 261 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '7', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 51, 1,	/* 307 (abs: 03730) */
/* 03426 */ HB_P_LINEOFFSET, 152,	/* 262 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '8', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 03528) */
/* 03458 */ HB_P_LINEOFFSET, 153,	/* 263 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '8', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 205, 0,	/* 205 (abs: 03730) */
/* 03528 */ HB_P_LINEOFFSET, 154,	/* 264 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '9', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 71,	/* 71 (abs: 03629) */
/* 03560 */ HB_P_LINEOFFSET, 155,	/* 265 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '9', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 103,	/* 103 (abs: 03730) */
/* 03629 */ HB_P_LINEOFFSET, 156,	/* 266 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '0', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 70,	/* 70 (abs: 03730) */
/* 03662 */ HB_P_LINEOFFSET, 157,	/* 267 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '0', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 03730 */ HB_P_LINEOFFSET, 159,	/* 269 */
	HB_P_PUSHSYMNEAR, 12,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_DOSHORT, 1,
/* 03741 */ HB_P_LINEOFFSET, 161,	/* 271 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 37, 0,	/* I */
	HB_P_PUSHVARIABLE, 37, 0,	/* I */
	HB_P_PUSHBYTE, 5,	/* 5 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 172, 0,	/* 172 (abs: 03925) */
/* 03756 */ HB_P_LINEOFFSET, 162,	/* 272 */
	HB_P_PUSHSYMNEAR, 38,	/* MANDA_CNF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03763 */ HB_P_LINEOFFSET, 163,	/* 273 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 116,	/* 116 (abs: 03892) */
/* 03778 */ HB_P_LINEOFFSET, 164,	/* 274 */
	HB_P_PUSHSYMNEAR, 40,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03785 */ HB_P_LINEOFFSET, 165,	/* 275 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 03881) */
/* 03800 */ HB_P_LINEOFFSET, 166,	/* 276 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 03881 */ HB_P_LINEOFFSET, 168,	/* 278 */
	HB_P_PUSHVARIABLE, 37, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 37, 0,	/* I */
	HB_P_JUMPNEAR, 25,	/* 25 (abs: 03915) */
/* 03892 */ HB_P_LINEOFFSET, 171,	/* 281 */
	HB_P_PUSHSYMNEAR, 12,	/* BLOQ_TECLADO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_DOSHORT, 1,
/* 03903 */ HB_P_LINEOFFSET, 172,	/* 282 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 03910 */ HB_P_LINEOFFSET, 173,	/* 283 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
	HB_P_PUSHVARIABLE, 37, 0,	/* I */
	HB_P_INC,
	HB_P_POPVARIABLE, 37, 0,	/* I */
	HB_P_JUMP, 81, 255,	/* -175 (abs: 03747) */
/* 03925 */ HB_P_LINEOFFSET, 175,	/* 285 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 03930 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CHECK_TO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 33, 1,	/* 289 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 290 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 291 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 292 */
	HB_P_PUSHSYMNEAR, 42,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00055 */ HB_P_LINEOFFSET, 4,	/* 293 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_JUMPFALSENEAR, 125,	/* 125 (abs: 00184) */
/* 00061 */ HB_P_LINEOFFSET, 5,	/* 294 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 99,	/* 99 (abs: 00184) */
/* 00087 */ HB_P_LINEOFFSET, 6,	/* 295 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 65,	/* 65 (abs: 00184) */
/* 00121 */ HB_P_LINEOFFSET, 7,	/* 296 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '-', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* TIPOP */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00179 */ HB_P_LINEOFFSET, 8,	/* 297 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00184 */ HB_P_LINEOFFSET, 12,	/* 301 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00190 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CHECK_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 49, 1,	/* 305 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 306 */
	HB_P_PUSHSYMNEAR, 42,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00024) */
/* 00019 */ HB_P_LINEOFFSET, 2,	/* 307 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00024 */ HB_P_LINEOFFSET, 4,	/* 309 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00103) */
/* 00030 */ HB_P_LINEOFFSET, 5,	/* 310 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00103) */
/* 00050 */ HB_P_LINEOFFSET, 6,	/* 311 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00098 */ HB_P_LINEOFFSET, 7,	/* 312 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00103 */ HB_P_LINEOFFSET, 10,	/* 315 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00125) */
/* 00109 */ HB_P_LINEOFFSET, 11,	/* 316 */
	HB_P_PUSHSYMNEAR, 42,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00125) */
/* 00120 */ HB_P_LINEOFFSET, 12,	/* 317 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00125 */ HB_P_LINEOFFSET, 15,	/* 320 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00131 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_NCN )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 69, 1,	/* 325 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'G', 'e', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'e', ' ', 'N', 'A', 'O', ' ', 'C', 'O', 'N', 'F', 'I', 'R', 'M', 'A', 'C', 'A', 'O', 0, 
	HB_P_DOSHORT, 1,
/* 00047 */ HB_P_LINEOFFSET, 1,	/* 326 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00065 */ HB_P_LINEOFFSET, 2,	/* 327 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00083 */ HB_P_LINEOFFSET, 3,	/* 328 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_POPMEMVAR, 46, 0,	/* TIPO */
/* 00094 */ HB_P_LINEOFFSET, 4,	/* 329 */
	HB_P_PUSHSYMNEAR, 47,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00104 */ HB_P_LINEOFFSET, 5,	/* 330 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 113,	/* 113 (abs: 00225) */
/* 00114 */ HB_P_LINEOFFSET, 6,	/* 331 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 97,	/* 97 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'n', 'a', 'o', ' ', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'N', 'C', 'N', 0, 
	HB_P_DOSHORT, 1,
/* 00220 */ HB_P_LINEOFFSET, 7,	/* 332 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00225 */ HB_P_LINEOFFSET, 9,	/* 334 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00261) */
/* 00256 */ HB_P_LINEOFFSET, 10,	/* 335 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00261 */ HB_P_LINEOFFSET, 12,	/* 337 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 50, 0,	/* M_TEF_NUM */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00294) */
/* 00289 */ HB_P_LINEOFFSET, 13,	/* 338 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00294 */ HB_P_LINEOFFSET, 15,	/* 340 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00327) */
/* 00322 */ HB_P_LINEOFFSET, 16,	/* 341 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00327 */ HB_P_LINEOFFSET, 18,	/* 343 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00360) */
/* 00355 */ HB_P_LINEOFFSET, 19,	/* 344 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00360 */ HB_P_LINEOFFSET, 21,	/* 346 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00393) */
/* 00388 */ HB_P_LINEOFFSET, 22,	/* 347 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00393 */ HB_P_LINEOFFSET, 24,	/* 349 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00427) */
/* 00422 */ HB_P_LINEOFFSET, 25,	/* 350 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00427 */ HB_P_LINEOFFSET, 27,	/* 352 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 52, 0,	/* OK */
/* 00440 */ HB_P_LINEOFFSET, 28,	/* 353 */
	HB_P_PUSHVARIABLE, 52, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00447 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_ATV )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 104, 1,	/* 360 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 361 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00037 */ HB_P_LINEOFFSET, 3,	/* 363 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_POPMEMVAR, 46, 0,	/* TIPO */
/* 00048 */ HB_P_LINEOFFSET, 4,	/* 364 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00072 */ HB_P_LINEOFFSET, 5,	/* 365 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00096 */ HB_P_LINEOFFSET, 7,	/* 367 */
	HB_P_PUSHSYMNEAR, 54,	/* SETCURSOR */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_DOSHORT, 1,
/* 00104 */ HB_P_LINEOFFSET, 8,	/* 368 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', ' ', 'G', ' ', 'U', ' ', 'A', ' ', 'R', ' ', 'D', ' ', 'E', ' ', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00129 */ HB_P_LINEOFFSET, 9,	/* 369 */
	HB_P_PUSHSYMNEAR, 47,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00139 */ HB_P_LINEOFFSET, 10,	/* 370 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00285) */
/* 00150 */ HB_P_LINEOFFSET, 11,	/* 371 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00280 */ HB_P_LINEOFFSET, 12,	/* 372 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00285 */ HB_P_LINEOFFSET, 26,	/* 386 */
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'0', '0', '0', '-', '0', '0', '0', ' ', '=', ' ', 'A', 'T', 'V', 13, 10, '0', '0', '1', '-', '0', '0', '0', ' ', '=', ' ', '0', '0', '0', '0', '0', '0', '0', '0', '0', '1', 13, 10, '9', '9', '9', '-', '9', '9', '9', ' ', '=', ' ', '0', 0, 
	HB_P_POPVARIABLE, 55, 0,	/* SLINHAS */
/* 00341 */ HB_P_LINEOFFSET, 27,	/* 387 */
	HB_P_PUSHSYMNEAR, 56,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHMEMVARREF, 55, 0,	/* SLINHAS */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 55, 0,	/* SLINHAS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 3,
/* 00362 */ HB_P_LINEOFFSET, 28,	/* 388 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 52, 0,	/* OK */
/* 00375 */ HB_P_LINEOFFSET, 29,	/* 389 */
	HB_P_PUSHVARIABLE, 52, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00382 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_CRT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 139, 1,	/* 395 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 396 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 59,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* GETLIST */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 58, 0,	/* GETLIST */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 397 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'T', 0, 
	HB_P_POPMEMVAR, 46, 0,	/* TIPO */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 398 */
	HB_P_PUSHSYMNEAR, 47,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 399 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00191) */
/* 00056 */ HB_P_LINEOFFSET, 5,	/* 400 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 401 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 8,	/* 403 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'R', 'T', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00227) */
/* 00222 */ HB_P_LINEOFFSET, 9,	/* 404 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 406 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 60, 0,	/* M_NUMEROCAIXA */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00260) */
/* 00255 */ HB_P_LINEOFFSET, 12,	/* 407 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00260 */ HB_P_LINEOFFSET, 14,	/* 409 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_MULT,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00308) */
/* 00303 */ HB_P_LINEOFFSET, 15,	/* 410 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00308 */ HB_P_LINEOFFSET, 17,	/* 412 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00342) */
/* 00337 */ HB_P_LINEOFFSET, 18,	/* 413 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00342 */ HB_P_LINEOFFSET, 20,	/* 415 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00354 */ HB_P_LINEOFFSET, 21,	/* 416 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00360 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_CHQ )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 166, 1,	/* 422 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 423 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_PUSHSYMNEAR, 59,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 58,	/* GETLIST */
	HB_P_DOSHORT, 1,
	HB_P_POPVARIABLE, 58, 0,	/* GETLIST */
/* 00024 */ HB_P_LINEOFFSET, 2,	/* 424 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'H', 'Q', 0, 
	HB_P_POPMEMVAR, 46, 0,	/* TIPO */
/* 00035 */ HB_P_LINEOFFSET, 3,	/* 425 */
	HB_P_PUSHSYMNEAR, 47,	/* CRIA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00045 */ HB_P_LINEOFFSET, 4,	/* 426 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSE, 138, 0,	/* 138 (abs: 00191) */
/* 00056 */ HB_P_LINEOFFSET, 5,	/* 427 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 121,	/* 121 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'f', 'a', 'z', ' ', 'o', ' ', 'p', 'e', 'd', 'i', 'd', 'o', ' ', 'd', 'e', ' ', 'a', 'u', 't', 'o', 'r', 'i', 'z', 'a', 'c', 'a', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'o', 'e', 's', ' ', 'p', 'o', 'r', ' ', 'm', 'e', 'i', 'o', ' ', 'd', 'e', ' ', 'c', 'a', 'r', 't', 'a', 'o', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'R', 'T', 0, 
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 6,	/* 428 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 8,	/* 430 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'H', 'Q', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00227) */
/* 00222 */ HB_P_LINEOFFSET, 9,	/* 431 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00227 */ HB_P_LINEOFFSET, 11,	/* 433 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 60, 0,	/* M_NUMEROCAIXA */
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00260) */
/* 00255 */ HB_P_LINEOFFSET, 12,	/* 434 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00260 */ HB_P_LINEOFFSET, 14,	/* 436 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHMEMVAR, 46, 0,	/* TIPO */
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00294) */
/* 00289 */ HB_P_LINEOFFSET, 15,	/* 437 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00294 */ HB_P_LINEOFFSET, 17,	/* 439 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00306 */ HB_P_LINEOFFSET, 18,	/* 440 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00312 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( CRIA_TEFTXT )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 188, 1,	/* 444 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00019 */ HB_P_LINEOFFSET, 1,	/* 445 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00037 */ HB_P_LINEOFFSET, 2,	/* 446 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'C', 'r', 'i', 'a', 'n', 'd', 'o', ' ', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00084 */ HB_P_LINEOFFSET, 3,	/* 447 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 00152) */
/* 00115 */ HB_P_LINEOFFSET, 4,	/* 448 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00152 */ HB_P_LINEOFFSET, 6,	/* 450 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* ARQTEF */
/* 00179 */ HB_P_LINEOFFSET, 7,	/* 451 */
	HB_P_PUSHSYMNEAR, 63,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* ARQTEF */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00193 */ HB_P_LINEOFFSET, 8,	/* 452 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 47,	/* 47 (abs: 00248) */
/* 00203 */ HB_P_LINEOFFSET, 9,	/* 453 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'T', 'E', 'F', ' ', '-', ' ', 'A', 'T', 'V', 0, 
	HB_P_DOSHORT, 1,
/* 00241 */ HB_P_LINEOFFSET, 10,	/* 454 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00248 */ HB_P_LINEOFFSET, 12,	/* 456 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00255 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PEGA_TEXTOTEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 204, 1,	/* 460 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 461 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00027 */ HB_P_LINEOFFSET, 2,	/* 462 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00045 */ HB_P_LINEOFFSET, 3,	/* 463 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00059) */
/* 00053 */ HB_P_LINEOFFSET, 4,	/* 464 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* TIPO 1*/
/* 00059 */ HB_P_LINEOFFSET, 6,	/* 466 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_ONE,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 31,	/* 31 (abs: 00096) */
/* 00067 */ HB_P_LINEOFFSET, 7,	/* 467 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 's', 't', 's', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_JUMPNEAR, 29,	/* 29 (abs: 00123) */
/* 00096 */ HB_P_LINEOFFSET, 9,	/* 469 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* M_ARQTEF */
/* 00123 */ HB_P_LINEOFFSET, 11,	/* 471 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 64, 0,	/* CONTA */
/* 00129 */ HB_P_LINEOFFSET, 12,	/* 472 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_POPVARIABLE, 65, 0,	/* TEMPOXX */
/* 00136 */ HB_P_LINEOFFSET, 14,	/* 474 */
	HB_P_PUSHLOCALNEAR, 1,	/* TIPO */
	HB_P_ONE,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00180) */
/* 00144 */ HB_P_LINEOFFSET, 15,	/* 475 */
	HB_P_PUSHSYMNEAR, 66,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00154 */ HB_P_LINEOFFSET, 16,	/* 476 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00173) */
/* 00166 */ HB_P_LINEOFFSET, 17,	/* 477 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 107,	/* 107 (abs: 00278) */
/* 00173 */ HB_P_LINEOFFSET, 19,	/* 479 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 100,	/* 100 (abs: 00278) */
/* 00180 */ HB_P_LINEOFFSET, 23,	/* 483 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 9,	/* 9 (abs: 00199) */
/* 00192 */ HB_P_LINEOFFSET, 24,	/* 484 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 81,	/* 81 (abs: 00278) */
/* 00199 */ HB_P_LINEOFFSET, 27,	/* 487 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 47,	/* 47 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', ' ', 'E', 's', 'p', 'e', 'r', 'a', 'n', 'd', 'o', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00255 */ HB_P_LINEOFFSET, 29,	/* 489 */
	HB_P_PUSHSYMNEAR, 66,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00266 */ HB_P_LINEOFFSET, 30,	/* 490 */
	HB_P_PUSHVARIABLE, 64, 0,	/* CONTA */
	HB_P_INC,
	HB_P_POPVARIABLE, 64, 0,	/* CONTA */
	HB_P_JUMP, 117, 255,	/* -139 (abs: 00136) */
/* 00278 */ HB_P_LINEOFFSET, 32,	/* 492 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00284 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( ATV_OK )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 240, 1,	/* 496 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 497 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 43,	/* 43 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', 'n', 'd', 'o', ' ', 's', 'e', ' ', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'e', 's', 't', 'a', 'r', ' ', 'A', 'T', 'I', 'V', 'O', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00061 */ HB_P_LINEOFFSET, 3,	/* 499 */
	HB_P_PUSHSYMNEAR, 53,	/* MANDA_ATV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 9,	/* 9 (abs: 00077) */
/* 00070 */ HB_P_LINEOFFSET, 4,	/* 500 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
	HB_P_JUMPNEAR, 119,	/* 119 (abs: 00194) */
/* 00077 */ HB_P_LINEOFFSET, 7,	/* 503 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 104,	/* 104 (abs: 00194) */
/* 00092 */ HB_P_LINEOFFSET, 8,	/* 504 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 81,	/* 81 */
	'E', 'r', 'r', 'o', ' ', 'a', 'o', ' ', 't', 'e', 'n', 't', 'a', 'r', ' ', 'c', 'o', 'm', 'u', 'n', 'i', 'c', 'a', 'c', 'a', 'o', ' ', 'c', 'o', 'm', ' ', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '!', ' ', ' ', 'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'T', 'E', 'F', ' ', 'n', 'a', 'o', ' ', 'e', 's', 't', 'a', ' ', 'a', 't', 'i', 'v', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 9,	/* 505 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00189 */ HB_P_LINEOFFSET, 10,	/* 506 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00194 */ HB_P_LINEOFFSET, 14,	/* 510 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00200 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MANDA_CNF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 5, 2,	/* 517 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'G', 'e', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'p', 'a', 'r', 'a', ' ', 'C', 'o', 'n', 'f', 'i', 'r', 'm', 'a', 'c', 'a', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00045 */ HB_P_LINEOFFSET, 1,	/* 518 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPLOCALNEAR, 1,	/* ARQTEF */
/* 00071 */ HB_P_LINEOFFSET, 2,	/* 519 */
	HB_P_PUSHSYMNEAR, 63,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* NHANDLE */
/* 00082 */ HB_P_LINEOFFSET, 3,	/* 520 */
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 109,	/* 109 (abs: 00198) */
/* 00091 */ HB_P_LINEOFFSET, 4,	/* 521 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 93,	/* 93 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'c', 'r', 'i', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'q', 'u', 'e', ' ', 'c', 'o', 'n', 'f', 'i', 'r', 'm', 'a', ' ', 'a', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 't', 'i', 'p', 'o', ' ', 'C', 'N', 'F', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00193 */ HB_P_LINEOFFSET, 5,	/* 522 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00198 */ HB_P_LINEOFFSET, 7,	/* 524 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00236) */
/* 00231 */ HB_P_LINEOFFSET, 8,	/* 525 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00236 */ HB_P_LINEOFFSET, 10,	/* 527 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 50, 0,	/* M_TEF_NUM */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00271) */
/* 00266 */ HB_P_LINEOFFSET, 11,	/* 528 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00271 */ HB_P_LINEOFFSET, 13,	/* 530 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00306) */
/* 00301 */ HB_P_LINEOFFSET, 14,	/* 531 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00306 */ HB_P_LINEOFFSET, 16,	/* 533 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00341) */
/* 00336 */ HB_P_LINEOFFSET, 17,	/* 534 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00341 */ HB_P_LINEOFFSET, 19,	/* 536 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00376) */
/* 00371 */ HB_P_LINEOFFSET, 20,	/* 537 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00376 */ HB_P_LINEOFFSET, 22,	/* 539 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 4,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00412) */
/* 00407 */ HB_P_LINEOFFSET, 23,	/* 540 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00412 */ HB_P_LINEOFFSET, 25,	/* 542 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 2,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 52, 0,	/* OK */
/* 00424 */ HB_P_LINEOFFSET, 26,	/* 543 */
	HB_P_PUSHVARIABLE, 52, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00431 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( FECHA_TEFTXT )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 36, 2,	/* 548 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* LFECHA_OK */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 549 */
	HB_P_PUSHSYMNEAR, 66,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 154, 153, 153, 153, 153, 153, 233, 63, 10, 1,	/* 0.8, 10, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00035 */ HB_P_LINEOFFSET, 2,	/* 550 */
	HB_P_PUSHLOCALNEAR, 2,	/* LFECHA_OK */
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 00108) */
/* 00041 */ HB_P_LINEOFFSET, 3,	/* 551 */
	HB_P_PUSHSYMNEAR, 68,	/* FERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ZERO,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 58,	/* 58 (abs: 00108) */
/* 00052 */ HB_P_LINEOFFSET, 4,	/* 552 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'A', 'r', 'q', 'u', 'i', 'v', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 69,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 68,	/* FERROR */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00103 */ HB_P_LINEOFFSET, 5,	/* 553 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00108 */ HB_P_LINEOFFSET, 8,	/* 556 */
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_POPVARIABLE, 70, 0,	/* NVEZES */
/* 00115 */ HB_P_LINEOFFSET, 10,	/* 558 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 39,	/* 39 (abs: 00183) */
/* 00146 */ HB_P_LINEOFFSET, 11,	/* 559 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00183 */ HB_P_LINEOFFSET, 13,	/* 561 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 71, 0,	/* NRET */
/* 00248 */ HB_P_LINEOFFSET, 14,	/* 562 */
	HB_P_PUSHSYMNEAR, 66,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHDOUBLE, 102, 102, 102, 102, 102, 102, 230, 63, 10, 1,	/* 0.7, 10, 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
/* 00268 */ HB_P_LINEOFFSET, 15,	/* 563 */
	HB_P_PUSHVARIABLE, 71, 0,	/* NRET */
	HB_P_JUMPTRUE, 158, 0,	/* 158 (abs: 00431) */
/* 00276 */ HB_P_LINEOFFSET, 16,	/* 564 */
	HB_P_PUSHVARIABLE, 70, 0,	/* NVEZES */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 136, 0,	/* 136 (abs: 00419) */
/* 00286 */ HB_P_LINEOFFSET, 17,	/* 565 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 82,	/* 82 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'r', 'e', 'n', 'o', 'm', 'e', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', ' ', 'p', 'a', 'r', 'a', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'o', 'r', 'i', 'g', 'i', 'n', 'a', 'l', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00377 */ HB_P_LINEOFFSET, 18,	/* 566 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00414 */ HB_P_LINEOFFSET, 19,	/* 567 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00419 */ HB_P_LINEOFFSET, 21,	/* 569 */
	HB_P_PUSHVARIABLE, 70, 0,	/* NVEZES */
	HB_P_DEC,
	HB_P_POPVARIABLE, 70, 0,	/* NVEZES */
	HB_P_JUMP, 199, 254,	/* -313 (abs: 00115) */
/* 00431 */ HB_P_LINEOFFSET, 25,	/* 573 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00460 */ HB_P_LINEOFFSET, 26,	/* 574 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 41,	/* 41 (abs: 00530) */
/* 00491 */ HB_P_LINEOFFSET, 27,	/* 575 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 't', 'm', 'p', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 188,	/* -68 (abs: 00460) */
/* 00530 */ HB_P_LINEOFFSET, 31,	/* 579 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00535 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( GRAVA_CAMPO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 70, 2,	/* 582 */
	HB_P_LOCALNEARSETSTR, 5, 3, 0,	/* CRLFG 3*/
	13, 10, 0, 
/* 00013 */ HB_P_LINEOFFSET, 1,	/* 583 */
	HB_P_PUSHSYMNEAR, 56,	/* FWRITE */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* NFILEHANDLE */
	HB_P_PUSHLOCALNEAR, 2,	/* CCAMPO */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	' ', '=', ' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CCONTEUDO */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 5,	/* CRLFG */
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 72, 0,	/* NBYTES */
/* 00040 */ HB_P_LINEOFFSET, 2,	/* 584 */
	HB_P_PUSHVARIABLE, 72, 0,	/* NBYTES */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 73,	/* 73 (abs: 00120) */
/* 00049 */ HB_P_LINEOFFSET, 3,	/* 585 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 49,	/* 49 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'g', 'r', 'a', 'v', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'd', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'd', 'o', ' ', 'T', 'i', 'p', 'o', ' ', 0, 
	HB_P_PUSHLOCALNEAR, 4,	/* TIPO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'!', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00115 */ HB_P_LINEOFFSET, 4,	/* 586 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00120 */ HB_P_LINEOFFSET, 6,	/* 588 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00125 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( TRATA_TEF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 3,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 86, 2,	/* 598 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 599 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 1,	/* CRLF */
	HB_P_PUSHSYMNEAR, 2,	/* TEF_VALOR */
	HB_P_PUSHSYMNEAR, 50,	/* M_TEF_NUM */
	HB_P_PUSHSYMNEAR, 43,	/* M_ARQTEF */
	HB_P_PUSHSYMNEAR, 27,	/* M_TEF_NOMREDE */
	HB_P_PUSHSYMNEAR, 32,	/* M_TEF_NUMTRA */
	HB_P_PUSHSYMNEAR, 35,	/* M_TEF_FINALIZA */
	HB_P_DOSHORT, 7,
	HB_P_POPVARIABLE, 2, 0,	/* TEF_VALOR */
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00042 */ HB_P_LINEOFFSET, 3,	/* 601 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '0', '1', 0, 
	HB_P_POPVARIABLE, 60, 0,	/* M_NUMEROCAIXA */
/* 00053 */ HB_P_LINEOFFSET, 4,	/* 602 */
	HB_P_PUSHVARIABLE, 60, 0,	/* M_NUMEROCAIXA */
	HB_P_POPVARIABLE, 50, 0,	/* M_TEF_NUM */
/* 00061 */ HB_P_LINEOFFSET, 5,	/* 603 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 43, 0,	/* M_ARQTEF */
/* 00073 */ HB_P_LINEOFFSET, 6,	/* 604 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 8,	/* 8 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
/* 00085 */ HB_P_LINEOFFSET, 7,	/* 605 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
/* 00097 */ HB_P_LINEOFFSET, 8,	/* 606 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 30,	/* 30 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
/* 00109 */ HB_P_LINEOFFSET, 9,	/* 607 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00123) */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00191) */
/* 00125 */ HB_P_LINEOFFSET, 10,	/* 608 */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* NVALORCARTAO 0*/
/* 00131 */ HB_P_LINEOFFSET, 11,	/* 609 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 31,	/* 31 */
	'V', 'a', 'l', 'o', 'r', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'I', 'n', 'v', 'a', 'l', 'i', 'd', 'a', '!', ' ', '[', 0, 
	HB_P_PUSHSYMNEAR, 5,	/* STR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_PUSHBYTE, 13,	/* 13 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	']', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00186 */ HB_P_LINEOFFSET, 12,	/* 610 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00191 */ HB_P_LINEOFFSET, 14,	/* 612 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALORCARTAO */
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00198 */ HB_P_LINEOFFSET, 15,	/* 613 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'V', 0, 
	HB_P_POPMEMVAR, 6, 0,	/* DOC_CDREDE */
/* 00207 */ HB_P_LINEOFFSET, 43,	/* 641 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00225 */ HB_P_LINEOFFSET, 44,	/* 642 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00243 */ HB_P_LINEOFFSET, 46,	/* 644 */
	HB_P_PUSHSYMNEAR, 67,	/* ATV_OK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00257) */
/* 00252 */ HB_P_LINEOFFSET, 47,	/* 645 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00257 */ HB_P_LINEOFFSET, 50,	/* 648 */
	HB_P_PUSHSYMNEAR, 57,	/* MANDA_CRT */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00264 */ HB_P_LINEOFFSET, 51,	/* 649 */
	HB_P_PUSHSYMNEAR, 44,	/* CHECK_CRT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 86,	/* 86 (abs: 00357) */
/* 00273 */ HB_P_LINEOFFSET, 52,	/* 650 */
	HB_P_PUSHSYMNEAR, 15,	/* CRITICA_CRT */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSENEAR, 7,	/* 7 (abs: 00287) */
/* 00282 */ HB_P_LINEOFFSET, 53,	/* 651 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00287 */ HB_P_LINEOFFSET, 56,	/* 654 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 50,	/* 50 (abs: 00350) */
/* 00302 */ HB_P_LINEOFFSET, 57,	/* 655 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00350 */ HB_P_LINEOFFSET, 59,	/* 657 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 4,	/* OK */
	HB_P_JUMPNEAR, 18,	/* 18 (abs: 00373) */
/* 00357 */ HB_P_LINEOFFSET, 62,	/* 660 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'N', 'a', 'o', ' ', 'O', 'K', 0, 
	HB_P_DOSHORT, 1,
/* 00373 */ HB_P_LINEOFFSET, 64,	/* 662 */
	HB_P_PUSHSYMNEAR, 13,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 1,
/* 00383 */ HB_P_LINEOFFSET, 65,	/* 663 */
	HB_P_PUSHSYMNEAR, 13,	/* __KEYBOARD */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00390 */ HB_P_LINEOFFSET, 66,	/* 664 */
	HB_P_PUSHLOCALNEAR, 4,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00396 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 2, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 159, 2,	/* 671 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 672 */
	HB_P_PUSHSYMNEAR, 3,	/* __MVPUBLIC */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 77,	/* MTP_CARTAO */
	HB_P_DOSHORT, 1,
/* 00018 */ HB_P_LINEOFFSET, 2,	/* 673 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_POPVARIABLE, 77, 0,	/* MTP_CARTAO */
/* 00025 */ HB_P_LINEOFFSET, 3,	/* 674 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00035 */ HB_P_LINEOFFSET, 4,	/* 675 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 50, 0,	/* M_TEF_NUM */
/* 00043 */ HB_P_LINEOFFSET, 5,	/* 676 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 78, 0,	/* TEF_VIA */
/* 00049 */ HB_P_LINEOFFSET, 6,	/* 677 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 79, 0,	/* TEF_DIE */
/* 00057 */ HB_P_LINEOFFSET, 7,	/* 678 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 80, 0,	/* TEF_DIR */
/* 00065 */ HB_P_LINEOFFSET, 8,	/* 679 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 81, 0,	/* TEF_DSE */
/* 00073 */ HB_P_LINEOFFSET, 9,	/* 680 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 82, 0,	/* TEF_DSR */
/* 00081 */ HB_P_LINEOFFSET, 10,	/* 681 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPMEMVAR, 83, 0,	/* TEF_UTI */
/* 00089 */ HB_P_LINEOFFSET, 11,	/* 682 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 43, 0,	/* M_ARQTEF */
/* 00097 */ HB_P_LINEOFFSET, 12,	/* 683 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
/* 00105 */ HB_P_LINEOFFSET, 13,	/* 684 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
/* 00113 */ HB_P_LINEOFFSET, 14,	/* 685 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
/* 00121 */ HB_P_LINEOFFSET, 15,	/* 686 */
	HB_P_PUSHSYMNEAR, 84,	/* CTOD */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 85, 0,	/* DAT_TEF */
/* 00134 */ HB_P_LINEOFFSET, 16,	/* 687 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00140 */ HB_P_LINEOFFSET, 17,	/* 688 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00158 */ HB_P_LINEOFFSET, 18,	/* 689 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00176 */ HB_P_LINEOFFSET, 49,	/* 720 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00194 */ HB_P_LINEOFFSET, 50,	/* 721 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00212 */ HB_P_LINEOFFSET, 52,	/* 723 */
	HB_P_PUSHSYMNEAR, 86,	/* VERI_TRANSACAO */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_DOSHORT, 2,
/* 00221 */ HB_P_LINEOFFSET, 89,	/* 760 */
	HB_P_PUSHSYMNEAR, 67,	/* ATV_OK */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00233) */
/* 00230 */ HB_P_LINEOFFSET, 90,	/* 761 */
	HB_P_ENDPROC,
/* 00233 */ HB_P_LINEOFFSET, 106,	/* 777 */
	HB_P_PUSHSYMNEAR, 87,	/* MANDA_ADM */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00240 */ HB_P_LINEOFFSET, 107,	/* 778 */
	HB_P_PUSHSYMNEAR, 88,	/* CHECK_ADM */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 181, 3,	/* 949 (abs: 01196) */
/* 00250 */ HB_P_LINEOFFSET, 108,	/* 779 */
	HB_P_PUSHSYMNEAR, 89,	/* CRITICA_ADM */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPFALSE, 55, 3,	/* 823 (abs: 01080) */
/* 00260 */ HB_P_LINEOFFSET, 111,	/* 782 */
	HB_P_PUSHSYMNEAR, 90,	/* IMP_ADM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 3,	/* LIMITE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 00271 */ HB_P_LINEOFFSET, 113,	/* 784 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_JUMPFALSE, 253, 0,	/* 253 (abs: 00528) */
/* 00278 */ HB_P_LINEOFFSET, 114,	/* 785 */
	HB_P_PUSHSYMNEAR, 38,	/* MANDA_CNF */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00285 */ HB_P_LINEOFFSET, 115,	/* 786 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'C', 'N', 'F', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 113,	/* 113 (abs: 00411) */
/* 00300 */ HB_P_LINEOFFSET, 116,	/* 787 */
	HB_P_PUSHSYMNEAR, 40,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00307 */ HB_P_LINEOFFSET, 117,	/* 788 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 00403) */
/* 00322 */ HB_P_LINEOFFSET, 118,	/* 789 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00403 */ HB_P_LINEOFFSET, 120,	/* 791 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMP, 18, 3,	/* 786 (abs: 01194) */
/* 00411 */ HB_P_LINEOFFSET, 123,	/* 794 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 00520) */
/* 00437 */ HB_P_LINEOFFSET, 124,	/* 795 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 00520) */
/* 00466 */ HB_P_LINEOFFSET, 125,	/* 796 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 00520 */ HB_P_LINEOFFSET, 129,	/* 800 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMP, 157, 2,	/* 669 (abs: 01194) */
/* 00528 */ HB_P_LINEOFFSET, 132,	/* 803 */
	HB_P_PUSHSYMNEAR, 91,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 50,	/* 50 */
	'I', 'm', 'p', 'r', 'e', 's', 's', 'o', 'r', 'a', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 's', 'p', 'o', 'n', 'd', 'e', '!', ' ', 'D', 'e', 's', 'e', 'j', 'a', ' ', 't', 'e', 'n', 't', 'a', 'r', ' ', 'n', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', '?', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 1,	/* OPC */
/* 00593 */ HB_P_LINEOFFSET, 133,	/* 804 */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_EQUAL,
	HB_P_DUPLICATE,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00608) */
	HB_P_PUSHLOCALNEAR, 1,	/* OPC */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_OR,
	HB_P_JUMPFALSE, 202, 1,	/* 458 (abs: 01066) */
/* 00611 */ HB_P_LINEOFFSET, 134,	/* 805 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_TRANSA */
/* 00622 */ HB_P_LINEOFFSET, 135,	/* 806 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_VALOR */
/* 00633 */ HB_P_LINEOFFSET, 136,	/* 807 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 94, 0,	/* TXT_REDE */
/* 00644 */ HB_P_LINEOFFSET, 137,	/* 808 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 28,	/* 28 (abs: 00682) */
/* 00656 */ HB_P_LINEOFFSET, 138,	/* 809 */
	HB_P_PUSHSTRSHORT, 15,	/* 15 */
	' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'N', 167, ' ', 0, 
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_TRANSA */
/* 00682 */ HB_P_LINEOFFSET, 140,	/* 811 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 22,	/* 22 (abs: 00714) */
/* 00694 */ HB_P_LINEOFFSET, 141,	/* 812 */
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	' ', 'R', 'e', 'd', 'e', ' ', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 94, 0,	/* TXT_REDE */
/* 00714 */ HB_P_LINEOFFSET, 143,	/* 814 */
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 43,	/* 43 (abs: 00764) */
/* 00723 */ HB_P_LINEOFFSET, 144,	/* 815 */
	HB_P_PUSHSTRSHORT, 10,	/* 10 */
	' ', 'V', 'a', 'l', 'o', 'r', ' ', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_VALOR */
/* 00764 */ HB_P_LINEOFFSET, 146,	/* 817 */
	HB_P_PUSHSYMNEAR, 97,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 94, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 00794 */ HB_P_LINEOFFSET, 147,	/* 818 */
	HB_P_PUSHSYMNEAR, 40,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 00801 */ HB_P_LINEOFFSET, 148,	/* 819 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 83,	/* 83 (abs: 00897) */
/* 00816 */ HB_P_LINEOFFSET, 149,	/* 820 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 72,	/* 72 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00897 */ HB_P_LINEOFFSET, 151,	/* 822 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01006) */
/* 00923 */ HB_P_LINEOFFSET, 152,	/* 823 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01006) */
/* 00952 */ HB_P_LINEOFFSET, 153,	/* 824 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01006 */ HB_P_LINEOFFSET, 156,	/* 827 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01013 */ HB_P_LINEOFFSET, 157,	/* 828 */
	HB_P_PUSHSYMNEAR, 97,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 94, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'e', 'c', 'l', 'e', ' ', '[', 'E', 'n', 't', 'e', 'r', ']', ' ', 'p', '/', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01061 */ HB_P_LINEOFFSET, 158,	/* 829 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01066 */ HB_P_LINEOFFSET, 160,	/* 831 */
	HB_P_PUSHSYMNEAR, 66,	/* INKEY */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 4,	/* 4 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_DOSHORT, 2,
	HB_P_JUMP, 207, 252,	/* -817 (abs: 00260) */
/* 01080 */ HB_P_LINEOFFSET, 165,	/* 836 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01189) */
/* 01106 */ HB_P_LINEOFFSET, 166,	/* 837 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01189) */
/* 01135 */ HB_P_LINEOFFSET, 167,	/* 838 */
	HB_P_PUSHSYMNEAR, 98,	/* ALERT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01189 */ HB_P_LINEOFFSET, 170,	/* 841 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
	HB_P_JUMPNEAR, 7,	/* 7 (abs: 01201) */
/* 01196 */ HB_P_LINEOFFSET, 173,	/* 844 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 2,	/* OK */
/* 01201 */ HB_P_LINEOFFSET, 175,	/* 846 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01208 */ HB_P_LINEOFFSET, 176,	/* 847 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 27,	/* 27 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 'a', ' ', 'o', 'p', 'c', 'a', 'o', ' ', 'q', 'u', 'e', ' ', 'd', 'e', 's', 'e', 'j', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 01244 */ HB_P_LINEOFFSET, 177,	/* 848 */
	HB_P_PUSHLOCALNEAR, 2,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01250 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( MANDA_ADM )
{
   static const BYTE pcode[] =
   {
/* 00000 */ HB_P_BASELINE, 84, 3,	/* 852 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'M', 'a', 'n', 'd', 'a', 'n', 'd', 'o', ' ', 's', 'o', 'l', 'i', 'c', 'i', 't', 'a', 'c', 'a', 'o', ' ', 'A', 'D', 'M', ' ', 'p', 'a', 'r', 'a', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00055 */ HB_P_LINEOFFSET, 1,	/* 853 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00073 */ HB_P_LINEOFFSET, 2,	/* 854 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00091 */ HB_P_LINEOFFSET, 3,	/* 855 */
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', 'T', 'M', 'P', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 62, 0,	/* ARQTEF */
/* 00113 */ HB_P_LINEOFFSET, 4,	/* 856 */
	HB_P_PUSHSYMNEAR, 63,	/* FCREATE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 62, 0,	/* ARQTEF */
	HB_P_ZERO,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 48, 0,	/* NHANDLE */
/* 00127 */ HB_P_LINEOFFSET, 5,	/* 857 */
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 53,	/* 53 (abs: 00188) */
/* 00137 */ HB_P_LINEOFFSET, 6,	/* 858 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 29,	/* 29 */
	'E', 'r', 'r', 'o', ' ', 'n', 'a', ' ', 'C', 'r', 'i', 'a', 'c', 'a', 'o', ' ', 'd', 'o', ' ', 'T', 'E', 'F', ' ', '-', ' ', 'A', 'D', 'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'O', 'k', 0, 
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_DOSHORT, 2,
/* 00183 */ HB_P_LINEOFFSET, 7,	/* 859 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00188 */ HB_P_LINEOFFSET, 9,	/* 861 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'D', 'M', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00219) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00219 */ HB_P_LINEOFFSET, 10,	/* 862 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00248) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00248 */ HB_P_LINEOFFSET, 11,	/* 863 */
	HB_P_PUSHSYMNEAR, 49,	/* GRAVA_CAMPO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'9', '9', '9', '-', '9', '9', '9', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00277) */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00277 */ HB_P_LINEOFFSET, 13,	/* 865 */
	HB_P_PUSHSYMNEAR, 51,	/* FECHA_TEFTXT */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 48, 0,	/* NHANDLE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 52, 0,	/* OK */
/* 00290 */ HB_P_LINEOFFSET, 15,	/* 867 */
	HB_P_PUSHVARIABLE, 52, 0,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00297 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CHECK_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 103, 3,	/* 871 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 872 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 38,	/* 38 */
	'C', 'h', 'e', 'c', 'a', 'n', 'd', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', ' ', 'd', 'o', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', '[', 'A', 'D', 'M', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00056 */ HB_P_LINEOFFSET, 2,	/* 873 */
	HB_P_PUSHSYMNEAR, 42,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00071) */
/* 00066 */ HB_P_LINEOFFSET, 3,	/* 874 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00071 */ HB_P_LINEOFFSET, 5,	/* 876 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 70,	/* 70 (abs: 00145) */
/* 00077 */ HB_P_LINEOFFSET, 6,	/* 877 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 55,	/* 55 (abs: 00145) */
/* 00092 */ HB_P_LINEOFFSET, 7,	/* 878 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 0, 
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_EQUAL,
	HB_P_DOSHORT, 1,
/* 00140 */ HB_P_LINEOFFSET, 8,	/* 879 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00145 */ HB_P_LINEOFFSET, 11,	/* 882 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_JUMPFALSENEAR, 18,	/* 18 (abs: 00167) */
/* 00151 */ HB_P_LINEOFFSET, 12,	/* 883 */
	HB_P_PUSHSYMNEAR, 42,	/* PEGA_TEXTOTEF */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00167) */
/* 00162 */ HB_P_LINEOFFSET, 13,	/* 884 */
	HB_P_FALSE,
	HB_P_POPLOCALNEAR, 1,	/* OK */
/* 00167 */ HB_P_LINEOFFSET, 16,	/* 887 */
	HB_P_PUSHLOCALNEAR, 1,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00173 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC_STATIC( CRITICA_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 6, 0,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 123, 3,	/* 891 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_LOCALNEARSETINT, 3, 0, 0,	/* MPOS 0*/
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 892 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00033 */ HB_P_LINEOFFSET, 2,	/* 893 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00051 */ HB_P_LINEOFFSET, 4,	/* 895 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUE, 129, 1,	/* 385 (abs: 00465) */
/* 00083 */ HB_P_LINEOFFSET, 5,	/* 896 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00163 */ HB_P_LINEOFFSET, 6,	/* 897 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 72,	/* 72 (abs: 00265) */
/* 00195 */ HB_P_LINEOFFSET, 7,	/* 898 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '1', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMP, 203, 0,	/* 203 (abs: 00465) */
/* 00265 */ HB_P_LINEOFFSET, 8,	/* 899 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 71,	/* 71 (abs: 00366) */
/* 00297 */ HB_P_LINEOFFSET, 9,	/* 900 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '2', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 101,	/* 101 (abs: 00465) */
/* 00366 */ HB_P_LINEOFFSET, 10,	/* 901 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 69,	/* 69 (abs: 00465) */
/* 00398 */ HB_P_LINEOFFSET, 11,	/* 902 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 6,	/* 6 */
	'C', 'O', 'P', 'Y', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '3', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00465 */ HB_P_LINEOFFSET, 14,	/* 905 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00506 */ HB_P_LINEOFFSET, 15,	/* 906 */
	HB_P_LOCALNEARSETINT, 5, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00516 */ HB_P_LINEOFFSET, 16,	/* 907 */
	HB_P_PUSHSYMNEAR, 20,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 6,	/* LINHAS */
/* 00554 */ HB_P_LINEOFFSET, 17,	/* 908 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 1,	/* M_INTPOS */
/* 00561 */ HB_P_LINEOFFSET, 18,	/* 909 */
	HB_P_LOCALNEARSETINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 6,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00640) */
/* 00574 */ HB_P_LINEOFFSET, 19,	/* 910 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHLOCALNEAR, 5,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 4,	/* LIN */
/* 00616 */ HB_P_LINEOFFSET, 20,	/* 911 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 4,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00632 */ HB_P_LINEOFFSET, 21,	/* 912 */
	HB_P_LOCALNEARADDINT, 5, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00567) */
/* 00640 */ HB_P_LINEOFFSET, 22,	/* 913 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00669 */ HB_P_LINEOFFSET, 23,	/* 914 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00756) */
/* 00682 */ HB_P_LINEOFFSET, 24,	/* 915 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 132, 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00751 */ HB_P_LINEOFFSET, 25,	/* 916 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00756 */ HB_P_LINEOFFSET, 27,	/* 918 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00796 */ HB_P_LINEOFFSET, 28,	/* 919 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 00846) */
/* 00804 */ HB_P_LINEOFFSET, 29,	/* 920 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '0', '1', ']', 0, 
	HB_P_DOSHORT, 1,
/* 00841 */ HB_P_LINEOFFSET, 30,	/* 921 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00846 */ HB_P_LINEOFFSET, 32,	/* 923 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'1', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00945) */
/* 00872 */ HB_P_LINEOFFSET, 33,	/* 924 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 59,	/* 59 */
	'O', ' ', 'C', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'd', 'o', ' ', 'C', 'a', 'm', 'p', 'o', ' ', '[', '0', '0', '1', ']', ' ', 130, ' ', 'D', 'i', 'f', 'e', 'r', 'e', 'n', 't', 'e', ' ', 'd', 'o', ' ', 'C', 'o', 'n', 't', 'e', 'u', 'd', 'o', ' ', 'E', 'n', 'v', 'i', 'a', 'd', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00940 */ HB_P_LINEOFFSET, 34,	/* 925 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00945 */ HB_P_LINEOFFSET, 37,	/* 928 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '9', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 00985 */ HB_P_LINEOFFSET, 38,	/* 929 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01035) */
/* 00993 */ HB_P_LINEOFFSET, 39,	/* 930 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '0', '9', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01030 */ HB_P_LINEOFFSET, 40,	/* 931 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01035 */ HB_P_LINEOFFSET, 42,	/* 933 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'0', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSE, 166, 0,	/* 166 (abs: 01225) */
/* 01062 */ HB_P_LINEOFFSET, 43,	/* 934 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01102 */ HB_P_LINEOFFSET, 44,	/* 935 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01136) */
/* 01110 */ HB_P_LINEOFFSET, 45,	/* 936 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 91,	/* 91 (abs: 01225) */
/* 01136 */ HB_P_LINEOFFSET, 47,	/* 938 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 75,	/* 75 */
	'A', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'n', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'a', 'c', 'e', 'i', 't', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'o', 'u', ' ', 'f', 'o', 'i', ' ', 'c', 'a', 'n', 'c', 'e', 'l', 'a', 'd', 'a', ' ', 'p', 'e', 'l', 'o', ' ', 'u', 's', 'u', 'a', 'r', 'i', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01220 */ HB_P_LINEOFFSET, 48,	/* 939 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01225 */ HB_P_LINEOFFSET, 52,	/* 943 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01265 */ HB_P_LINEOFFSET, 53,	/* 944 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01315) */
/* 01273 */ HB_P_LINEOFFSET, 54,	/* 945 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '1', '0', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01310 */ HB_P_LINEOFFSET, 55,	/* 946 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01315 */ HB_P_LINEOFFSET, 57,	/* 948 */
	HB_P_PUSHSTRSHORT, 61,	/* 61 */
	'A', 'M', 'E', 'X', '_', 'R', 'E', 'D', 'E', 'C', 'A', 'R', 'D', '_', 'V', 'I', 'S', 'A', 'N', 'E', 'T', '_', 'T', 'E', 'C', 'B', 'A', 'N', '_', 'H', 'I', 'P', 'E', 'R', 'C', 'A', 'R', 'D', '_', 'E', 'L', 'O', '_', 'V', 'I', 'S', 'A', 'E', 'L', 'E', 'T', 'R', 'O', 'N', '_', 'C', 'I', 'E', 'L', 'O', 0, 
	HB_P_POPVARIABLE, 30, 0,	/* NOMEREDE */
/* 01383 */ HB_P_LINEOFFSET, 58,	/* 949 */
	HB_P_PUSHSYMNEAR, 28,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
/* 01410 */ HB_P_LINEOFFSET, 60,	/* 951 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'S', 'P', 'A', 'G', 'U', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01480) */
/* 01438 */ HB_P_LINEOFFSET, 61,	/* 952 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '5', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
	HB_P_JUMPNEAR, 42,	/* 42 (abs: 01520) */
/* 01480 */ HB_P_LINEOFFSET, 63,	/* 954 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01520 */ HB_P_LINEOFFSET, 65,	/* 956 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 26,	/* 26 (abs: 01552) */
/* 01528 */ HB_P_LINEOFFSET, 66,	/* 957 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 01560) */
/* 01552 */ HB_P_LINEOFFSET, 68,	/* 959 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
/* 01560 */ HB_P_LINEOFFSET, 70,	/* 961 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01600 */ HB_P_LINEOFFSET, 71,	/* 962 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 01700) */
/* 01608 */ HB_P_LINEOFFSET, 72,	/* 963 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 51,	/* 51 (abs: 01678) */
/* 01629 */ HB_P_LINEOFFSET, 73,	/* 964 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 35,	/* 35 */
	'N', 'a', 'o', ' ', 'R', 'e', 't', 'o', 'r', 'n', 'o', 'u', ' ', 'D', 'a', 'd', 'o', 's', ' ', 'd', 'a', ' ', 'F', 'i', 'n', 'a', 'l', 'i', 'z', 'a', 'c', 'a', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01673 */ HB_P_LINEOFFSET, 74,	/* 965 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01678 */ HB_P_LINEOFFSET, 76,	/* 967 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
/* 01700 */ HB_P_LINEOFFSET, 78,	/* 969 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '8', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01740 */ HB_P_LINEOFFSET, 79,	/* 970 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 44,	/* 44 (abs: 01790) */
/* 01748 */ HB_P_LINEOFFSET, 80,	/* 971 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 28,	/* 28 */
	'C', 'a', 'm', 'p', 'o', ' ', 'N', 'a', 'o', ' ', 'E', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', '!', ' ', '[', '0', '2', '8', ']', 0, 
	HB_P_DOSHORT, 1,
/* 01785 */ HB_P_LINEOFFSET, 81,	/* 972 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01790 */ HB_P_LINEOFFSET, 83,	/* 974 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 168, 0,	/* 168 (abs: 01979) */
/* 01814 */ HB_P_LINEOFFSET, 84,	/* 975 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 01854 */ HB_P_LINEOFFSET, 85,	/* 976 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 01888) */
/* 01862 */ HB_P_LINEOFFSET, 86,	/* 977 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 93,	/* 93 (abs: 01979) */
/* 01888 */ HB_P_LINEOFFSET, 88,	/* 979 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 77,	/* 77 */
	'Q', 'u', 'a', 'n', 't', 'i', 'd', 'a', 'd', 'e', ' ', 'd', 'e', ' ', 'L', 'i', 'n', 'h', 'a', 's', ' ', 'd', 'o', ' ', 'C', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ' ', 130, ' ', 'Z', 'e', 'r', 'o', '!', ' ', 'N', 'a', 'o', ' ', 'H', 'a', 'v', 'e', 'r', 'a', ' ', 'C', 'u', 'p', 'o', 'm', ' ', 'a', ' ', 's', 'e', 'r', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'o', '.', 0, 
	HB_P_DOSHORT, 1,
/* 01974 */ HB_P_LINEOFFSET, 89,	/* 980 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01979 */ HB_P_LINEOFFSET, 93,	/* 984 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '3', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 3,	/* MPOS */
/* 02019 */ HB_P_LINEOFFSET, 94,	/* 985 */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 02053) */
/* 02027 */ HB_P_LINEOFFSET, 95,	/* 986 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 3,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 43,	/* 43 (abs: 02094) */
/* 02053 */ HB_P_LINEOFFSET, 97,	/* 988 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 32,	/* 32 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', ' ', 'o', ' ', 'f', 'i', 'n', 'a', 'l', ' ', 'd', 'a', ' ', 'I', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 02094 */ HB_P_LINEOFFSET, 99,	/* 990 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 02099 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( MOSTRA_CANC )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 227, 3,	/* 995 */
	HB_P_PUSHSTRSHORT, 26,	/* 26 */
	'C', 'a', 'n', 'c', 'e', 'l', 'a', 'm', 'e', 'n', 't', 'o', ' ', 'd', 'a', ' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', 0, 
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 3,	/* CREDE */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 1,	/* CTRANSACAO */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 2,	/* CVALOR */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHLOCALNEAR, 4,	/* CRODAPE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 100, 0,	/* TEXTO */
/* 00085 */ HB_P_LINEOFFSET, 1,	/* 996 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 100, 0,	/* TEXTO */
	HB_P_DOSHORT, 1,
/* 00095 */ HB_P_LINEOFFSET, 2,	/* 997 */
	HB_P_ENDPROC
/* 00098 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( BLOQ_TECLADO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 233, 3,	/* 1001 */
	HB_P_PUSHLOCALNEAR, 1,	/* MBLOQ */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 40,	/* 40 (abs: 00053) */
/* 00015 */ HB_P_LINEOFFSET, 1,	/* 1002 */
	HB_P_PUSHSYMNEAR, 101,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 102,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'C', 'B', 'r', '.', 'B', 'l', 'o', 'c', 'k', 'I', 'n', 'p', 'u', 't', 0, 
	HB_P_TRUE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
	HB_P_JUMPNEAR, 38,	/* 38 (abs: 00089) */
/* 00053 */ HB_P_LINEOFFSET, 3,	/* 1004 */
	HB_P_PUSHSYMNEAR, 101,	/* IBR_OK */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 102,	/* IBR_COMANDO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	'A', 'C', 'B', 'r', '.', 'B', 'l', 'o', 'c', 'k', 'I', 'n', 'p', 'u', 't', 0, 
	HB_P_FALSE,
	HB_P_ARRAYGEN, 1, 0,	/* 1 */
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00089 */ HB_P_LINEOFFSET, 5,	/* 1006 */
	HB_P_ENDPROC
/* 00092 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_ADM )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 12, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 245, 3,	/* 1013 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* IMPRIME_OK */
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 14, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* MVIA 1*/
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CO 0*/
/* 00027 */ HB_P_LINEOFFSET, 1,	/* 1014 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 59,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 103,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 104,	/* MIMP_TIPO */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 104, 0,	/* MIMP_TIPO */
/* 00042 */ HB_P_LINEOFFSET, 4,	/* 1017 */
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 18,	/* 18 */
	HB_P_ARRAYPUSH,
	HB_P_POPVARIABLE, 103, 0,	/* MTIPO_IMP */
/* 00055 */ HB_P_LINEOFFSET, 7,	/* 1020 */
	HB_P_LOCALNEARSETINT, 6, 50, 0,	/* NCARAC 50*/
/* 00061 */ HB_P_LINEOFFSET, 11,	/* 1024 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 87,	/* 87 (abs: 00182) */
/* 00097 */ HB_P_LINEOFFSET, 12,	/* 1025 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 48,	/* 48 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'e', 'n', 'c', 'o', 'n', 't', 'r', 'a', 'd', 'o', ' ', 'e', 's', 't', 'e', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'n', 'e', 's', 't', 'e', ' ', 'c', 'a', 'm', 'i', 'n', 'h', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 14,	/* 1027 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00223 */ HB_P_LINEOFFSET, 15,	/* 1028 */
	HB_P_LOCALNEARSETINT, 8, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00233 */ HB_P_LINEOFFSET, 16,	/* 1029 */
	HB_P_PUSHSYMNEAR, 20,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 9,	/* LINHAS */
/* 00271 */ HB_P_LINEOFFSET, 17,	/* 1030 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 11,	/* M_INTPOS */
/* 00278 */ HB_P_LINEOFFSET, 18,	/* 1031 */
	HB_P_LOCALNEARSETINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 9,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 68,	/* 68 (abs: 00357) */
/* 00291 */ HB_P_LINEOFFSET, 19,	/* 1032 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 6,	/* NCARAC */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 7,	/* LIN */
/* 00333 */ HB_P_LINEOFFSET, 20,	/* 1033 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 7,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00349 */ HB_P_LINEOFFSET, 21,	/* 1034 */
	HB_P_LOCALNEARADDINT, 8, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 185,	/* -71 (abs: 00284) */
/* 00357 */ HB_P_LINEOFFSET, 22,	/* 1035 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00386 */ HB_P_LINEOFFSET, 23,	/* 1036 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00473) */
/* 00399 */ HB_P_LINEOFFSET, 24,	/* 1037 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00468 */ HB_P_LINEOFFSET, 25,	/* 1038 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00473 */ HB_P_LINEOFFSET, 27,	/* 1040 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00519 */ HB_P_LINEOFFSET, 28,	/* 1041 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 37,	/* 37 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'c', 'o', 'm', 'p', 'r', 'o', 'v', 'a', 'n', 't', 'e', ',', ' ', 'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00565 */ HB_P_LINEOFFSET, 30,	/* 1043 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'S', 'P', 'A', 'G', 'U', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 37, 1,	/* 293 (abs: 00884) */
/* 00594 */ HB_P_LINEOFFSET, 31,	/* 1044 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'7', '1', '5', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00635 */ HB_P_LINEOFFSET, 32,	/* 1045 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 17, 2,	/* 529 (abs: 01171) */
/* 00645 */ HB_P_LINEOFFSET, 33,	/* 1046 */
	HB_P_PUSHSYMNEAR, 106,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'A', 'D', 'M', '.', 'R', 'E', 'L', 0, 
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
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00686) */
/* 00681 */ HB_P_LINEOFFSET, 34,	/* 1047 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00686 */ HB_P_LINEOFFSET, 36,	/* 1049 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 00726) */
/* 00708 */ HB_P_LINEOFFSET, 37,	/* 1050 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00741) */
/* 00726 */ HB_P_LINEOFFSET, 39,	/* 1052 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00741 */ HB_P_LINEOFFSET, 41,	/* 1054 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CO 0*/
/* 00747 */ HB_P_LINEOFFSET, 42,	/* 1055 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* CO 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* CO */
	HB_P_PUSHLOCALNEAR, 15,	/* MVIA */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 00881) */
/* 00760 */ HB_P_LINEOFFSET, 43,	/* 1056 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* C 0*/
/* 00766 */ HB_P_LINEOFFSET, 44,	/* 1057 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 00873) */
/* 00784 */ HB_P_LINEOFFSET, 45,	/* 1058 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'7', '1', '5', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00810) */
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 00867) */
/* 00810 */ HB_P_LINEOFFSET, 48,	/* 1061 */
	HB_P_PUSHSYMNEAR, 108,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 110,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00865 */ HB_P_LINEOFFSET, 49,	/* 1062 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 157,	/* -99 (abs: 00772) */
/* 00873 */ HB_P_LINEOFFSET, 50,	/* 1063 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* CO 1*/
	HB_P_JUMPNEAR, 130,	/* -126 (abs: 00753) */
	HB_P_JUMP, 34, 1,	/* 290 (abs: 01171) */
/* 00884 */ HB_P_LINEOFFSET, 53,	/* 1066 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00925 */ HB_P_LINEOFFSET, 54,	/* 1067 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 239, 0,	/* 239 (abs: 01171) */
/* 00935 */ HB_P_LINEOFFSET, 55,	/* 1068 */
	HB_P_PUSHSYMNEAR, 106,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'A', 'D', 'M', '.', 'R', 'E', 'L', 0, 
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
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 00976) */
/* 00971 */ HB_P_LINEOFFSET, 56,	/* 1069 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00976 */ HB_P_LINEOFFSET, 58,	/* 1071 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 01016) */
/* 00998 */ HB_P_LINEOFFSET, 59,	/* 1072 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 01031) */
/* 01016 */ HB_P_LINEOFFSET, 61,	/* 1074 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 01031 */ HB_P_LINEOFFSET, 63,	/* 1076 */
	HB_P_LOCALNEARSETINT, 16, 0, 0,	/* CO 0*/
/* 01037 */ HB_P_LINEOFFSET, 64,	/* 1077 */
	HB_P_LOCALNEARSETINT, 16, 1, 0,	/* CO 1*/
	HB_P_PUSHLOCALNEAR, 16,	/* CO */
	HB_P_PUSHLOCALNEAR, 15,	/* MVIA */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 123,	/* 123 (abs: 01171) */
/* 01050 */ HB_P_LINEOFFSET, 65,	/* 1078 */
	HB_P_LOCALNEARSETINT, 10, 0, 0,	/* C 0*/
/* 01056 */ HB_P_LINEOFFSET, 66,	/* 1079 */
	HB_P_LOCALNEARSETINT, 10, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 91,	/* 91 (abs: 01163) */
/* 01074 */ HB_P_LINEOFFSET, 67,	/* 1080 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01100) */
	HB_P_JUMPNEAR, 59,	/* 59 (abs: 01157) */
/* 01100 */ HB_P_LINEOFFSET, 70,	/* 1083 */
	HB_P_PUSHSYMNEAR, 108,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 110,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 11,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 10,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHVARIABLE, 99, 0,	/* M_QP */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01155 */ HB_P_LINEOFFSET, 71,	/* 1084 */
	HB_P_LOCALNEARADDINT, 10, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 157,	/* -99 (abs: 01062) */
/* 01163 */ HB_P_LINEOFFSET, 72,	/* 1085 */
	HB_P_LOCALNEARADDINT, 16, 1, 0,	/* CO 1*/
	HB_P_JUMPNEAR, 130,	/* -126 (abs: 01043) */
/* 01171 */ HB_P_LINEOFFSET, 75,	/* 1088 */
	HB_P_PUSHSYMNEAR, 113,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01180 */ HB_P_LINEOFFSET, 76,	/* 1089 */
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01221 */ HB_P_LINEOFFSET, 77,	/* 1090 */
	HB_P_PUSHSYMNEAR, 115,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'C', 'O', 'M', 'P', 'A', 'D', 'M', '.', 'R', 'E', 'L', 0, 
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 01249 */ HB_P_LINEOFFSET, 79,	/* 1092 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01256 */ HB_P_LINEOFFSET, 80,	/* 1093 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01261 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( APAGA_INTPOS )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 74, 4,	/* 1098 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 134, 0,	/* 134 (abs: 00167) */
/* 00036 */ HB_P_LINEOFFSET, 1,	/* 1099 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00167) */
/* 00075 */ HB_P_LINEOFFSET, 2,	/* 1100 */
	HB_P_PUSHSYMNEAR, 91,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'T', 'e', 'n', 't', 'a', 'r', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00167) */
	HB_P_JUMP, 95, 255,	/* -161 (abs: 00003) */
/* 00167 */ HB_P_LINEOFFSET, 7,	/* 1105 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSE, 134, 0,	/* 134 (abs: 00330) */
/* 00199 */ HB_P_LINEOFFSET, 8,	/* 1106 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'i', 'n', 't', 'p', 'o', 's', '.', 'S', 'T', 'S', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 94,	/* 94 (abs: 00330) */
/* 00238 */ HB_P_LINEOFFSET, 9,	/* 1107 */
	HB_P_PUSHSYMNEAR, 91,	/* OP_SIMNAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_PUSHSTRSHORT, 69,	/* 69 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', 'S', 'T', 'S', ' ', 'd', 'e', 's', 'e', 'j', 'a', ' ', 'T', 'e', 'n', 't', 'a', 'r', ' ', 'N', 'o', 'v', 'a', 'm', 'e', 'n', 't', 'e', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'S', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 5,	/* 5 (abs: 00330) */
	HB_P_JUMP, 188, 254,	/* -324 (abs: 00003) */
/* 00330 */ HB_P_LINEOFFSET, 17,	/* 1115 */
	HB_P_ENDPROC
/* 00333 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( PNCONF )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 0, 1,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 97, 4,	/* 1121 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 68,	/* 68 (abs: 00101) */
/* 00035 */ HB_P_LINEOFFSET, 1,	/* 1122 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 52,	/* 52 */
	'A', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', ' ', 'n', 'a', 'o', ' ', 'e', 'x', 'i', 's', 't', 'e', ' ', 'n', 'o', ' ', 'd', 'i', 'r', 'e', 't', 'o', 'r', 'i', 'o', ' ', 'i', 'n', 'd', 'i', 'c', 'a', 'd', 'o', 0, 
	HB_P_DOSHORT, 1,
/* 00096 */ HB_P_LINEOFFSET, 2,	/* 1123 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00101 */ HB_P_LINEOFFSET, 4,	/* 1125 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 117, 0,	/* LIN */
/* 00143 */ HB_P_LINEOFFSET, 5,	/* 1126 */
	HB_P_ZERO,
	HB_P_DUPLICATE,
	HB_P_POPVARIABLE, 118, 0,	/* LINHA */
	HB_P_POPVARIABLE, 119, 0,	/* LINHAS */
/* 00153 */ HB_P_LINEOFFSET, 6,	/* 1127 */
	HB_P_PUSHSYMNEAR, 20,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 119, 0,	/* LINHAS */
/* 00192 */ HB_P_LINEOFFSET, 7,	/* 1128 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPVARIABLE, 120, 0,	/* M_INTPOS */
/* 00200 */ HB_P_LINEOFFSET, 8,	/* 1129 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 118, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 118, 0,	/* LINHA */
	HB_P_PUSHVARIABLE, 119, 0,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 75,	/* 75 (abs: 00288) */
/* 00215 */ HB_P_LINEOFFSET, 9,	/* 1130 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 70,	/* 70 */
	HB_P_PUSHVARIABLE, 118, 0,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPVARIABLE, 117, 0,	/* LIN */
/* 00259 */ HB_P_LINEOFFSET, 10,	/* 1131 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 117, 0,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00277 */ HB_P_LINEOFFSET, 11,	/* 1132 */
	HB_P_PUSHVARIABLE, 118, 0,	/* LINHA */
	HB_P_INC,
	HB_P_POPVARIABLE, 118, 0,	/* LINHA */
	HB_P_JUMPNEAR, 176,	/* -80 (abs: 00206) */
/* 00288 */ HB_P_LINEOFFSET, 12,	/* 1133 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00317 */ HB_P_LINEOFFSET, 13,	/* 1134 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00405) */
/* 00331 */ HB_P_LINEOFFSET, 14,	/* 1135 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 132, 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00400 */ HB_P_LINEOFFSET, 15,	/* 1136 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00405 */ HB_P_LINEOFFSET, 17,	/* 1138 */
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	13, 10, 0, 
	HB_P_POPVARIABLE, 1, 0,	/* CRLF */
/* 00415 */ HB_P_LINEOFFSET, 18,	/* 1139 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '1', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00457 */ HB_P_LINEOFFSET, 19,	/* 1140 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00492) */
/* 00466 */ HB_P_LINEOFFSET, 20,	/* 1141 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 120, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 50, 0,	/* M_TEF_NUM */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00500) */
/* 00492 */ HB_P_LINEOFFSET, 22,	/* 1143 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 50, 0,	/* M_TEF_NUM */
/* 00500 */ HB_P_LINEOFFSET, 24,	/* 1145 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00542 */ HB_P_LINEOFFSET, 25,	/* 1146 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 36,	/* 36 (abs: 00585) */
/* 00551 */ HB_P_LINEOFFSET, 26,	/* 1147 */
	HB_P_PUSHSYMNEAR, 31,	/* VAL */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 120, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 100,	/* 100 */
	HB_P_DIVIDE,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_JUMPNEAR, 8,	/* 8 (abs: 00591) */
/* 00585 */ HB_P_LINEOFFSET, 28,	/* 1149 */
	HB_P_ZERO,
	HB_P_POPMEMVAR, 2, 0,	/* TEF_VALOR */
/* 00591 */ HB_P_LINEOFFSET, 30,	/* 1151 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '0', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00633 */ HB_P_LINEOFFSET, 31,	/* 1152 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 33,	/* 33 (abs: 00673) */
/* 00642 */ HB_P_LINEOFFSET, 32,	/* 1153 */
	HB_P_PUSHSYMNEAR, 28,	/* UPPER */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 120, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00681) */
/* 00673 */ HB_P_LINEOFFSET, 34,	/* 1155 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
/* 00681 */ HB_P_LINEOFFSET, 36,	/* 1157 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '1', '2', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00723 */ HB_P_LINEOFFSET, 37,	/* 1158 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00758) */
/* 00732 */ HB_P_LINEOFFSET, 38,	/* 1159 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 120, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00766) */
/* 00758 */ HB_P_LINEOFFSET, 40,	/* 1161 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
/* 00766 */ HB_P_LINEOFFSET, 42,	/* 1163 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 120, 0,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '7', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00808 */ HB_P_LINEOFFSET, 43,	/* 1164 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 28,	/* 28 (abs: 00843) */
/* 00817 */ HB_P_LINEOFFSET, 44,	/* 1165 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 120, 0,	/* M_INTPOS */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 11,	/* 11 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
	HB_P_JUMPNEAR, 10,	/* 10 (abs: 00851) */
/* 00843 */ HB_P_LINEOFFSET, 46,	/* 1167 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_POPVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
/* 00851 */ HB_P_LINEOFFSET, 54,	/* 1175 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_TRANSA */
/* 00862 */ HB_P_LINEOFFSET, 55,	/* 1176 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_VALOR */
/* 00873 */ HB_P_LINEOFFSET, 56,	/* 1177 */
	HB_P_PUSHSYMNEAR, 74,	/* SPACE */
	HB_P_PUSHNIL,
	HB_P_ONE,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 94, 0,	/* TXT_REDE */
/* 00884 */ HB_P_LINEOFFSET, 58,	/* 1179 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 00923) */
/* 00896 */ HB_P_LINEOFFSET, 59,	/* 1180 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'T', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'N', 'o', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 92, 0,	/* TXT_TRANSA */
/* 00923 */ HB_P_LINEOFFSET, 61,	/* 1182 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 29,	/* 29 (abs: 00962) */
/* 00935 */ HB_P_LINEOFFSET, 62,	/* 1183 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'R', 'e', 'd', 'e', '.', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_PLUS,
	HB_P_POPMEMVAR, 94, 0,	/* TXT_REDE */
/* 00962 */ HB_P_LINEOFFSET, 64,	/* 1185 */
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSENEAR, 49,	/* 49 (abs: 01018) */
/* 00971 */ HB_P_LINEOFFSET, 65,	/* 1186 */
	HB_P_PUSHSTRSHORT, 16,	/* 16 */
	' ', 'V', 'a', 'l', 'o', 'r', '.', '.', '.', '.', '.', '.', '.', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 96,	/* TRANSFORM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 2, 0,	/* TEF_VALOR */
	HB_P_PUSHSTRSHORT, 13,	/* 13 */
	'@', 'E', ' ', '9', '9', ',', '9', '9', '9', '.', '9', '9', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_POPMEMVAR, 93, 0,	/* TXT_VALOR */
/* 01018 */ HB_P_LINEOFFSET, 67,	/* 1188 */
	HB_P_PUSHSYMNEAR, 97,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 94, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'A', 'g', 'u', 'a', 'r', 'd', 'e', '.', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01048 */ HB_P_LINEOFFSET, 68,	/* 1189 */
	HB_P_PUSHSYMNEAR, 53,	/* MANDA_ATV */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_JUMPTRUENEAR, 7,	/* 7 (abs: 01062) */
/* 01057 */ HB_P_LINEOFFSET, 69,	/* 1190 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 01062 */ HB_P_LINEOFFSET, 71,	/* 1192 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'A', 'T', 'V', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 114,	/* 114 (abs: 01189) */
/* 01077 */ HB_P_LINEOFFSET, 72,	/* 1193 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 85,	/* 85 (abs: 01186) */
/* 01103 */ HB_P_LINEOFFSET, 73,	/* 1194 */
	HB_P_PUSHSYMNEAR, 45,	/* FERASE */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 9, 0,	/* TEF_ENV */
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'N', 'T', 'P', 'O', 'S', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 255,	/* -1 */
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 56,	/* 56 (abs: 01186) */
/* 01132 */ HB_P_LINEOFFSET, 74,	/* 1195 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 45,	/* 45 */
	'N', 'a', 'o', ' ', 'f', 'o', 'i', ' ', 'p', 'o', 's', 's', 'i', 'v', 'e', 'l', ' ', 'a', 'p', 'a', 'g', 'a', 'r', ' ', 'o', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'I', 'n', 't', 'P', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_DOSHORT, 1,
/* 01186 */ HB_P_LINEOFFSET, 77,	/* 1198 */
	HB_P_ENDPROC,
/* 01189 */ HB_P_LINEOFFSET, 79,	/* 1200 */
	HB_P_PUSHSYMNEAR, 40,	/* MANDA_NCN */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 50, 0,	/* M_TEF_NUM */
	HB_P_PUSHVARIABLE, 27, 0,	/* M_TEF_NOMREDE */
	HB_P_PUSHVARIABLE, 32, 0,	/* M_TEF_NUMTRA */
	HB_P_PUSHVARIABLE, 35, 0,	/* M_TEF_FINALIZA */
	HB_P_DOSHORT, 4,
/* 01208 */ HB_P_LINEOFFSET, 80,	/* 1201 */
	HB_P_PUSHSYMNEAR, 39,	/* CHECK_TO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'N', 'C', 'N', 0, 
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 85,	/* 85 (abs: 01306) */
/* 01223 */ HB_P_LINEOFFSET, 81,	/* 1202 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 74,	/* 74 */
	'O', ' ', 'G', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'r', 'e', 't', 'o', 'r', 'n', 'o', 'r', 'u', ' ', 'r', 'e', 's', 'p', 'o', 's', 't', 'a', ' ', 's', 'o', 'b', 'r', 'e', ' ', 'a', ' ', 'n', 'a', 'o', ' ', ' ', 'i', 'm', 'p', 'r', 'e', 's', 's', 'a', 'o', ' ', 'd', 'o', ' ', 'c', 'u', 'p', 'o', 'm', ' ', 'T', 'E', 'F', '!', 0, 
	HB_P_DOSHORT, 1,
/* 01306 */ HB_P_LINEOFFSET, 83,	/* 1204 */
	HB_P_PUSHSYMNEAR, 97,	/* MOSTRA_CANC */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 92, 0,	/* TXT_TRANSA */
	HB_P_PUSHMEMVAR, 93, 0,	/* TXT_VALOR */
	HB_P_PUSHMEMVAR, 94, 0,	/* TXT_REDE */
	HB_P_PUSHSTRSHORT, 30,	/* 30 */
	'T', 'e', 'c', 'l', 'e', ' ', '[', 'E', 'n', 't', 'e', 'r', ']', ' ', 'p', '/', ' ', 'C', 'o', 'n', 't', 'i', 'n', 'u', 'a', 'r', '.', '.', '.', 0, 
	HB_P_DOSHORT, 4,
/* 01354 */ HB_P_LINEOFFSET, 84,	/* 1205 */
	HB_P_ENDPROC
/* 01357 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( IMP_CARTAO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 14, 4,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 188, 4,	/* 1212 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 5,	/* IMPRIME_OK */
	HB_P_LOCALNEARSETSTR, 12, 1, 0,	/* TEXTO_TEF 1*/
	0, 
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_LOCALNEARSETINT, 14, 50, 0,	/* NCARAC 50*/
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* I 0*/
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_LOCALNEARSETINT, 17, 0, 0,	/* MVLR_CUPOM 0*/
	HB_P_LOCALNEARSETINT, 18, 0, 0,	/* MVLR_CARTAO 0*/
/* 00040 */ HB_P_LINEOFFSET, 1,	/* 1213 */
	HB_P_ZERO,
	HB_P_PUSHSYMNEAR, 59,	/* __MVPRIVATE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 103,	/* MTIPO_IMP */
	HB_P_PUSHSYMNEAR, 104,	/* MIMP_TIPO */
	HB_P_DOSHORT, 2,
	HB_P_POPVARIABLE, 104, 0,	/* MIMP_TIPO */
/* 00055 */ HB_P_LINEOFFSET, 4,	/* 1216 */
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_POPVARIABLE, 103, 0,	/* MTIPO_IMP */
/* 00064 */ HB_P_LINEOFFSET, 6,	/* 1218 */
	HB_P_PUSHLOCALNEAR, 3,	/* NVALOR */
	HB_P_POPLOCALNEAR, 17,	/* MVLR_CUPOM */
/* 00070 */ HB_P_LINEOFFSET, 7,	/* 1219 */
	HB_P_PUSHSYMNEAR, 121,	/* DIRECTORY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'c', 'a', 'r', 't', 'a', 'o', '*', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'D', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 16,	/* M_AUX1 */
/* 00106 */ HB_P_LINEOFFSET, 13,	/* 1225 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_INTPOS */
/* 00113 */ HB_P_LINEOFFSET, 14,	/* 1226 */
	HB_P_LOCALNEARSETINT, 15, 0, 0,	/* I 0*/
/* 00119 */ HB_P_LINEOFFSET, 15,	/* 1227 */
	HB_P_LOCALNEARSETINT, 15, 1, 0,	/* I 1*/
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 105, 4,	/* 1129 (abs: 01264) */
/* 00138 */ HB_P_LINEOFFSET, 16,	/* 1228 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 22,	/* 22 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 'o', ' ', 'C', 'a', 'r', 't', 'a', 'o', ':', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00182 */ HB_P_LINEOFFSET, 17,	/* 1229 */
	HB_P_LOCALNEARSETSTR, 13, 1, 0,	/* TEXTO_TEF1 1*/
	0, 
	HB_P_PUSHLOCALNEAR, 13,	/* TEXTO_TEF1 */
	HB_P_POPLOCALNEAR, 12,	/* TEXTO_TEF */
/* 00193 */ HB_P_LINEOFFSET, 18,	/* 1230 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 14,	/* NCARAC */
	HB_P_ONE,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 00233 */ HB_P_LINEOFFSET, 19,	/* 1231 */
	HB_P_LOCALNEARSETINT, 7, 0, 0,	/* LINHA 0*/
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_POPLOCALNEAR, 8,	/* LINHAS */
/* 00243 */ HB_P_LINEOFFSET, 20,	/* 1232 */
	HB_P_PUSHSYMNEAR, 20,	/* MLCOUNT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 14,	/* NCARAC */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPLOCALNEAR, 8,	/* LINHAS */
/* 00280 */ HB_P_LINEOFFSET, 21,	/* 1233 */
	HB_P_ARRAYGEN, 0, 0,	/* 0 */
	HB_P_POPLOCALNEAR, 10,	/* M_INTPOS */
/* 00287 */ HB_P_LINEOFFSET, 22,	/* 1234 */
	HB_P_LOCALNEARSETINT, 7, 1, 0,	/* LINHA 1*/
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_PUSHLOCALNEAR, 8,	/* LINHAS */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 67,	/* 67 (abs: 00365) */
/* 00300 */ HB_P_LINEOFFSET, 23,	/* 1235 */
	HB_P_PUSHSYMNEAR, 18,	/* MEMOLINE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 19,	/* MEMOREAD */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PLUS,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHLOCALNEAR, 14,	/* NCARAC */
	HB_P_PUSHLOCALNEAR, 7,	/* LINHA */
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 5,
	HB_P_POPLOCALNEAR, 6,	/* LIN */
/* 00341 */ HB_P_LINEOFFSET, 24,	/* 1236 */
	HB_P_PUSHSYMNEAR, 21,	/* AADD */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 6,	/* LIN */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 2,
/* 00357 */ HB_P_LINEOFFSET, 25,	/* 1237 */
	HB_P_LOCALNEARADDINT, 7, 1, 0,	/* LINHA 1*/
	HB_P_JUMPNEAR, 186,	/* -70 (abs: 00293) */
/* 00365 */ HB_P_LINEOFFSET, 26,	/* 1238 */
	HB_P_PUSHSYMNEAR, 22,	/* FCLOSE */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_DOSHORT, 1,
/* 00384 */ HB_P_LINEOFFSET, 27,	/* 1239 */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_ZERO,
	HB_P_EQUAL,
	HB_P_JUMPFALSENEAR, 76,	/* 76 (abs: 00471) */
/* 00397 */ HB_P_LINEOFFSET, 28,	/* 1240 */
	HB_P_PUSHSYMNEAR, 4,	/* ATENCAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 60,	/* 60 */
	'O', ' ', 'a', 'r', 'q', 'u', 'i', 'v', 'o', ' ', 'e', 'n', 'v', 'i', 'a', 'd', 'o', ' ', 'p', 'e', 'l', 'o', ' ', 'g', 'e', 'r', 'e', 'n', 'c', 'i', 'a', 'd', 'o', 'r', ' ', 'n', 'a', 'o', ' ', 'p', 'o', 's', 's', 'u', 'i', ' ', 'n', 'e', 'n', 'h', 'u', 'm', ' ', 'c', 'a', 'm', 'p', 'o', '!', 0, 
	HB_P_DOSHORT, 1,
/* 00466 */ HB_P_LINEOFFSET, 29,	/* 1241 */
	HB_P_FALSE,
	HB_P_RETVALUE,
	HB_P_ENDPROC,
/* 00471 */ HB_P_LINEOFFSET, 31,	/* 1243 */
	HB_P_PUSHSYMNEAR, 122,	/* OP_TELA */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 10,	/* 10 */
	HB_P_PUSHBYTE, 40,	/* 40 */
	HB_P_PUSHBYTE, 90,	/* 90 */
	HB_P_DOSHORT, 4,
/* 00486 */ HB_P_LINEOFFSET, 32,	/* 1244 */
	HB_P_PUSHSYMNEAR, 106,	/* IMP_ARQ */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'B', 0, 
	HB_P_FUNCTIONSHORT, 2,
	HB_P_JUMPTRUENEAR, 5,	/* 5 (abs: 00518) */
	HB_P_JUMP, 230, 2,	/* 742 (abs: 01257) */
/* 00518 */ HB_P_LINEOFFSET, 35,	/* 1247 */
	HB_P_PUSHSYMNEAR, 95,	/* EMPTY */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPTRUENEAR, 20,	/* 20 (abs: 00558) */
/* 00540 */ HB_P_LINEOFFSET, 36,	/* 1248 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'N', '+', 0, 
	HB_P_DOSHORT, 2,
	HB_P_JUMPNEAR, 17,	/* 17 (abs: 00573) */
/* 00558 */ HB_P_LINEOFFSET, 38,	/* 1250 */
	HB_P_PUSHSYMNEAR, 107,	/* IMPRT */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'M', 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'C', 0, 
	HB_P_DOSHORT, 2,
/* 00573 */ HB_P_LINEOFFSET, 40,	/* 1252 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 41,	/* 41 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'V', 'S', 'P', 'A', 'G', 'U', 'E', 0, 
	HB_P_EQUAL,
	HB_P_JUMPFALSE, 40, 1,	/* 296 (abs: 00895) */
/* 00602 */ HB_P_LINEOFFSET, 41,	/* 1253 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '0', '3', '-', '0', '0', '0', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00643 */ HB_P_LINEOFFSET, 44,	/* 1256 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 226, 1,	/* 482 (abs: 01132) */
/* 00653 */ HB_P_LINEOFFSET, 45,	/* 1257 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
/* 00659 */ HB_P_LINEOFFSET, 46,	/* 1258 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 221, 0,	/* 221 (abs: 00892) */
/* 00674 */ HB_P_LINEOFFSET, 47,	/* 1259 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 69,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', '.', 'v', 'i', 'a', '.', '.', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 00718 */ HB_P_LINEOFFSET, 48,	/* 1260 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* C 0*/
/* 00724 */ HB_P_LINEOFFSET, 49,	/* 1261 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 140, 0,	/* 140 (abs: 00880) */
/* 00743 */ HB_P_LINEOFFSET, 50,	/* 1262 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'7', '1', '5', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 00769) */
	HB_P_JUMPNEAR, 106,	/* 106 (abs: 00873) */
/* 00769 */ HB_P_LINEOFFSET, 54,	/* 1266 */
	HB_P_PUSHSYMNEAR, 108,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 110,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00820 */ HB_P_LINEOFFSET, 55,	/* 1267 */
	HB_P_PUSHSYMNEAR, 124,	/* SETPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 125,	/* DISPOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 00871 */ HB_P_LINEOFFSET, 56,	/* 1268 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* C 1*/
	HB_P_JUMP, 109, 255,	/* -147 (abs: 00730) */
/* 00880 */ HB_P_LINEOFFSET, 57,	/* 1269 */
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_INC,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
	HB_P_JUMP, 32, 255,	/* -224 (abs: 00665) */
	HB_P_JUMP, 240, 0,	/* 240 (abs: 01132) */
/* 00895 */ HB_P_LINEOFFSET, 60,	/* 1272 */
	HB_P_PUSHSYMNEAR, 24,	/* ASCAN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHBLOCK, 29, 0,	/* 29 */
	1, 0,	/* number of local parameters (1) */
	0, 0,	/* number of local variables (0) */
	HB_P_PUSHSTRSHORT, 8,	/* 8 */
	'0', '2', '9', '-', '0', '0', '1', 0, 
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* codeblockvar1 */
	HB_P_ONE,
	HB_P_PUSHBYTE, 7,	/* 7 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_EXACTLYEQUAL,
	HB_P_ENDBLOCK,
	HB_P_FUNCTIONSHORT, 2,
	HB_P_POPVARIABLE, 105, 0,	/* MPOS */
/* 00936 */ HB_P_LINEOFFSET, 63,	/* 1275 */
	HB_P_PUSHVARIABLE, 105, 0,	/* MPOS */
	HB_P_ZERO,
	HB_P_GREATER,
	HB_P_JUMPFALSE, 189, 0,	/* 189 (abs: 01132) */
/* 00946 */ HB_P_LINEOFFSET, 68,	/* 1280 */
	HB_P_ZERO,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
/* 00952 */ HB_P_LINEOFFSET, 69,	/* 1281 */
	HB_P_ONE,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSE, 168, 0,	/* 168 (abs: 01132) */
/* 00967 */ HB_P_LINEOFFSET, 70,	/* 1282 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 12,	/* 12 */
	'I', 'm', 'p', 'r', 'i', 'm', 'i', 'n', 'd', 'o', ' ', 0, 
	HB_P_PUSHSYMNEAR, 69,	/* STRZERO */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_PUSHBYTE, 2,	/* 2 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 9,	/* 9 */
	'a', '.', 'v', 'i', 'a', '.', '.', '.', 0, 
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01011 */ HB_P_LINEOFFSET, 71,	/* 1283 */
	HB_P_LOCALNEARSETINT, 9, 0, 0,	/* C 0*/
/* 01017 */ HB_P_LINEOFFSET, 72,	/* 1284 */
	HB_P_LOCALNEARSETINT, 9, 1, 0,	/* C 1*/
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_PUSHSYMNEAR, 23,	/* LEN */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_LESSEQUAL,
	HB_P_JUMPFALSENEAR, 87,	/* 87 (abs: 01120) */
/* 01035 */ HB_P_LINEOFFSET, 73,	/* 1285 */
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_PUSHBYTE, 3,	/* 3 */
	HB_P_FUNCTIONSHORT, 3,
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'0', '2', '9', 0, 
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 4,	/* 4 (abs: 01061) */
	HB_P_JUMPNEAR, 55,	/* 55 (abs: 01114) */
/* 01061 */ HB_P_LINEOFFSET, 77,	/* 1289 */
	HB_P_PUSHSYMNEAR, 108,	/* DEVPOS */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 109,	/* PROW */
	HB_P_PUSHNIL,
	HB_P_FUNCTIONSHORT, 0,
	HB_P_ADDINT, 1, 0,	/* 1*/
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 110,	/* DEVOUT */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 111,	/* STRTRAN */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 25,	/* SUBSTR */
	HB_P_PUSHNIL,
	HB_P_PUSHSYMNEAR, 112,	/* RTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 10,	/* M_INTPOS */
	HB_P_PUSHLOCALNEAR, 9,	/* C */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHBYTE, 12,	/* 12 */
	HB_P_FUNCTIONSHORT, 2,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	34, 0, 
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	' ', 0, 
	HB_P_FUNCTIONSHORT, 3,
	HB_P_DOSHORT, 1,
/* 01112 */ HB_P_LINEOFFSET, 78,	/* 1290 */
	HB_P_LOCALNEARADDINT, 9, 1, 0,	/* C 1*/
	HB_P_JUMPNEAR, 161,	/* -95 (abs: 01023) */
/* 01120 */ HB_P_LINEOFFSET, 79,	/* 1291 */
	HB_P_PUSHVARIABLE, 123, 0,	/* CO */
	HB_P_INC,
	HB_P_POPVARIABLE, 123, 0,	/* CO */
	HB_P_JUMP, 85, 255,	/* -171 (abs: 00958) */
/* 01132 */ HB_P_LINEOFFSET, 82,	/* 1294 */
	HB_P_PUSHSYMNEAR, 113,	/* SETPRC */
	HB_P_PUSHNIL,
	HB_P_ZERO,
	HB_P_ZERO,
	HB_P_DOSHORT, 2,
/* 01141 */ HB_P_LINEOFFSET, 83,	/* 1295 */
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 20,	/* 20 */
	HB_P_PUSHSTRSHORT, 7,	/* 7 */
	'S', 'C', 'R', 'E', 'E', 'N', 0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 24,	/* 24 */
	HB_P_PUSHSTRSHORT, 1,	/* 1 */
	0, 
	HB_P_DOSHORT, 2,
	HB_P_PUSHSYMNEAR, 114,	/* SET */
	HB_P_PUSHNIL,
	HB_P_PUSHBYTE, 23,	/* 23 */
	HB_P_PUSHSTRSHORT, 4,	/* 4 */
	'O', 'F', 'F', 0, 
	HB_P_DOSHORT, 2,
/* 01182 */ HB_P_LINEOFFSET, 84,	/* 1296 */
	HB_P_PUSHSYMNEAR, 115,	/* CONF_IMPRESSAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'C', 'P', 0, 
	HB_P_PUSHLOCALNEAR, 1,	/* CCOO */
	HB_P_PLUS,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'.', 'R', 'E', 'L', 0, 
	HB_P_PLUS,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 2,	/* 2 */
	'*', 0, 
	HB_P_DOSHORT, 5,
/* 01212 */ HB_P_LINEOFFSET, 85,	/* 1297 */
	HB_P_PUSHSYMNEAR, 126,	/* FECHA_TELA */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01219 */ HB_P_LINEOFFSET, 86,	/* 1298 */
	HB_P_PUSHSYMNEAR, 14,	/* MYRUN */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 5,	/* 5 */
	'D', 'E', 'L', ' ', 0, 
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 16,	/* M_AUX1 */
	HB_P_PUSHLOCALNEAR, 15,	/* I */
	HB_P_ARRAYPUSH,
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PLUS,
	HB_P_DOSHORT, 1,
/* 01255 */ HB_P_LINEOFFSET, 87,	/* 1299 */
	HB_P_LOCALNEARADDINT, 15, 1, 0,	/* I 1*/
	HB_P_JUMP, 144, 251,	/* -1136 (abs: 00125) */
/* 01264 */ HB_P_LINEOFFSET, 88,	/* 1300 */
	HB_P_PUSHSYMNEAR, 41,	/* APAGA_INTPOS */
	HB_P_PUSHNIL,
	HB_P_DOSHORT, 0,
/* 01271 */ HB_P_LINEOFFSET, 89,	/* 1301 */
	HB_P_TRUE,
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 01276 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

HB_FUNC( VERI_TRANSACAO )
{
   static const BYTE pcode[] =
   {
	HB_P_FRAME, 1, 2,	/* locals, params */
/* 00003 */ HB_P_BASELINE, 26, 5,	/* 1306 */
	HB_P_TRUE,
	HB_P_POPLOCALNEAR, 3,	/* OK */
/* 00009 */ HB_P_LINEOFFSET, 1,	/* 1307 */
	HB_P_PUSHLOCALNEAR, 1,	/* TEMPO */
	HB_P_PUSHNIL,
	HB_P_EXACTLYEQUAL,
	HB_P_JUMPFALSENEAR, 8,	/* 8 (abs: 00023) */
/* 00017 */ HB_P_LINEOFFSET, 2,	/* 1308 */
	HB_P_LOCALNEARSETINT, 1, 1, 0,	/* TEMPO 1*/
/* 00023 */ HB_P_LINEOFFSET, 4,	/* 1310 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 34,	/* 34 */
	'V', 'e', 'r', 'i', 'f', 'i', 'c', 'a', ' ', 's', 'e', ' ', 'h', 'a', ' ', 't', 'r', 'a', 'n', 's', 'a', 'c', 'a', 'o', ' ', 'p', 'e', 'n', 'd', 'e', 'n', 't', 'e', 0, 
	HB_P_DOSHORT, 1,
/* 00066 */ HB_P_LINEOFFSET, 5,	/* 1311 */
	HB_P_PUSHLOCALNEAR, 3,	/* OK */
	HB_P_JUMPFALSE, 131, 0,	/* 131 (abs: 00201) */
/* 00073 */ HB_P_LINEOFFSET, 14,	/* 1320 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00091 */ HB_P_LINEOFFSET, 15,	/* 1321 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00109 */ HB_P_LINEOFFSET, 16,	/* 1322 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 10, 0,	/* TEF_RET */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_PUSHSTRSHORT, 11,	/* 11 */
	'I', 'n', 't', 'p', 'o', 's', '.', '0', '0', '1', 0, 
	HB_P_PLUS,
	HB_P_POPVARIABLE, 43, 0,	/* M_ARQTEF */
/* 00136 */ HB_P_LINEOFFSET, 17,	/* 1323 */
	HB_P_PUSHSYMNEAR, 17,	/* FILE */
	HB_P_PUSHNIL,
	HB_P_PUSHVARIABLE, 43, 0,	/* M_ARQTEF */
	HB_P_FUNCTIONSHORT, 1,
	HB_P_JUMPFALSENEAR, 11,	/* 11 (abs: 00157) */
/* 00148 */ HB_P_LINEOFFSET, 18,	/* 1324 */
	HB_P_PUSHSYMNEAR, 116,	/* PNCONF */
	HB_P_PUSHNIL,
	HB_P_PUSHLOCALNEAR, 1,	/* TEMPO */
	HB_P_DOSHORT, 1,
/* 00157 */ HB_P_LINEOFFSET, 20,	/* 1326 */
	HB_P_PUSHLOCALNEAR, 2,	/* MCAM */
	HB_P_PUSHNIL,
	HB_P_NOTEQUAL,
	HB_P_JUMPFALSENEAR, 38,	/* 38 (abs: 00201) */
/* 00165 */ HB_P_LINEOFFSET, 21,	/* 1327 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 35,	/* 35 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 9, 0,	/* TEF_ENV */
/* 00183 */ HB_P_LINEOFFSET, 22,	/* 1328 */
	HB_P_PUSHSYMNEAR, 7,	/* ALLTRIM */
	HB_P_PUSHNIL,
	HB_P_PUSHMEMVAR, 8, 0,	/* M_INDIV */
	HB_P_ONE,
	HB_P_ARRAYPUSH,
	HB_P_PUSHBYTE, 36,	/* 36 */
	HB_P_ARRAYPUSH,
	HB_P_FUNCTIONSHORT, 1,
	HB_P_POPMEMVAR, 10, 0,	/* TEF_RET */
/* 00201 */ HB_P_LINEOFFSET, 54,	/* 1360 */
	HB_P_PUSHSYMNEAR, 11,	/* IMP_CARTAO */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 3,	/* 3 */
	'2', 'a', 0, 
	HB_P_DOSHORT, 1,
/* 00213 */ HB_P_LINEOFFSET, 55,	/* 1361 */
	HB_P_PUSHSYMNEAR, 16,	/* MENSAGEM */
	HB_P_PUSHNIL,
	HB_P_PUSHSTRSHORT, 20,	/* 20 */
	'E', 's', 'c', 'o', 'l', 'h', 'a', ' ', 's', 'u', 'a', ' ', 'O', 'p', 'c', 'a', 'o', '.', '.', 0, 
	HB_P_DOSHORT, 1,
/* 00242 */ HB_P_LINEOFFSET, 56,	/* 1362 */
	HB_P_PUSHLOCALNEAR, 3,	/* OK */
	HB_P_RETVALUE,
	HB_P_ENDPROC
/* 00248 */
   };

   hb_vmExecute( pcode, symbols, NULL );
}

