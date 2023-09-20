FUNCTION hdserial(p_hddrive)
// Funcao...: Executar a leitura do numero de serie do HD -------------------. 
STATIC vhdserial 
vhdserial := HdGetSerial(p_hddrive) 
vhdserial := IIF(VALTYPE(vhdserial) == 'N',ALLTRIM(STR(vhdserial)),vhdserial)  //hb_NumToHex(vhdserial) 
vhdserial := SUBSTR(vhdserial,1,4) + SUBSTR(vhdserial,5,4) 
RETURN(vhdserial) 
// Fim da funcao de leitura de serie de HD ----------------------------------. 
// --------------------------------------------------------------------------. 
// Funcao...: Fun‡Æo em "C" para ler o numero serial do HD ------------------. 
#pragma BEGINDUMP 
#define HB_OS_WIN_32_USED 
#include <windows.h> 
#include "winbase.h" 
#include "winuser.h" 
#include "item.api" 
#include "hbapi.h" 
HB_FUNC (HDGETSERIAL) 
{ 
unsigned long SerialNumber; 
GetVolumeInformation(hb_parc(1),NULL,0,&SerialNumber,NULL,NULL,NULL,0); 
hb_retnl(SerialNumber); 
} 
#pragma enddump 
// Fim da funcao em "C" para ler numero serial de HD  

