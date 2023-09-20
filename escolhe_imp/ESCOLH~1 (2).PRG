FUNC GetImp 
LOCAL aINCCLI := savescreen( 08,09,26,63 ) 
Public nPrn:= 1 
Public aPrn:= GetPrinters()
If Empty(aPrn) 
   alert("Nao encontrei nenhuma impressora instalada !!!") 
   Return .f.
else 
   @ 08,09,25,61 box B_DOUBLE + space(1) colo "n/n*" 
   @ 09,26 say "Selecione a impressora" colo "w+/n*"
   @ 24,30 say "ESC - VOLTA" colo "w+/n*"
   SETCOLOR( "n/w*,gr+/b,,,b/w*" ) 
    nPrn:= ACHOICE(11,11,15,59, aPrn,.T.,,nPrn)
endIf 
if lastkey() = K_ESC
   Restscreen(08,09,26,63,aINCCLI) 
   RETURN .f.
endif   
Restscreen(08,09,26,63,aINCCLI) 
RETURN .t.




PrintFileRaw(aPrn[nPrn],"arquivodeimpressão.extensão", "Texto que vai aparecer no spool do Windows" ) 
