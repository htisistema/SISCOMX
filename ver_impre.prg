#define PRINTER_STATUS_OK                       0
#define PRINTER_STATUS_PAUSED                   1
#define PRINTER_STATUS_ERROR                    2
#define PRINTER_STATUS_PENDING_DELETION         4
#define PRINTER_STATUS_PAPER_JAM                8
#define PRINTER_STATUS_PAPER_OUT               16
#define PRINTER_STATUS_MANUAL_FEED             32
#define PRINTER_STATUS_PAPER_PROBLEM           64
#define PRINTER_STATUS_OFFLINE                128
#define PRINTER_STATUS_IO_ACTIVE              256
#define PRINTER_STATUS_BUSY                   512
#define PRINTER_STATUS_PRINTING              1024
#define PRINTER_STATUS_OUTPUT_BIN_FULL       2048
#define PRINTER_STATUS_NOT_AVAILABLE         4096
#define PRINTER_STATUS_WAITING               8192
#define PRINTER_STATUS_PROCESSING           16384
#define PRINTER_STATUS_INITIALIZING         32768
#define PRINTER_STATUS_WARMING_UP           65536
#define PRINTER_STATUS_TONER_LOW           131072
#define PRINTER_STATUS_NO_TONER            262144
#define PRINTER_STATUS_PAGE_PUNT           524288
#define PRINTER_STATUS_USER_INTERVENTION  1048576
#define PRINTER_STATUS_OUT_OF_MEMORY      2097152
#define PRINTER_STATUS_DOOR_OPEN          4194304
#define PRINTER_STATUS_SERVER_UNKNOWN     8388608
#define PRINTER_STATUS_POWER_SAVE        16777216





function IsPrint( QuePrinter )
   LOCAL nStatus
   DEFAULT QuePrinter := "LPT1:"
   nStatus := PrnStatus( QuePrinter )
   if     nStatus <        1 ; return "Impressora OK"
   elseif nStatus =        1 ; return "Impressora Pausada"
   elseif nStatus =        2 ; return "Impressora com Erro"
   elseif nStatus =        4 ; return "Impressora Deletando"
   elseif nStatus =        8 ; return "Impressora em Modo Bandeja"
   elseif nStatus =       16 ; return "Impressora Sem Papel"
   elseif nStatus =       32 ; return "Impressora em Modo Manual"
   elseif nStatus =       64 ; return "Impressora com Problema no Papel"
   elseif nStatus =      128 ; return "Impressora OffLine"
   elseif nStatus =      256 ; return "Impressora com IO Ativo"
   elseif nStatus =      512 ; return "Impressora Ocupada"
   elseif nStatus =     1024 ; return "Impressora Imprimindo"
   elseif nStatus =     2048 ; return "Impressora Memoria Lotada"
   elseif nStatus =     4096 ; return "Impressora Nao Instalada"
   elseif nStatus =     8192 ; return "Impressora Aguardando"
   elseif nStatus =    16384 ; return "Impressora Processando"
   elseif nStatus =    32768 ; return "Impressora Inicializando"
   elseif nStatus =    65536 ; return "Impressora em Atencao"
   elseif nStatus =   131072 ; return "Impressora Toner Baixo"
   elseif nStatus =   262144 ; return "Impressora Sem Toner"
   elseif nStatus =   524288 ; return "Impressora PAGE_PUNT"
   elseif nStatus =  1048576 ; return "Impressora Intervencao do Usuario"
   elseif nStatus =  2097152 ; return "Impressora Sem Memoria"
   elseif nStatus =  4194304 ; return "Impressora Tampa Aberta"
   elseif nStatus =  8388608 ; return "Impressora Servidor Desconhecido"
   elseif nStatus = 16777217 ; return "Impressora POWER_SAVE"
   endif






// The example queries the printer ports LPT1: to LPT5: and
// lists the names of connected printers

FUNCTION impressora()
      LOCAL aPrinters := {}
      LOCAL i, cPrinter, cPort

      FOR i:=1 TO 5
         cPort    := "LPT" + LTrim( Str(i) ) + ":"
         cPrinter := PrinterPortToName( cPort )
        atencao(cprinter)
         IF ! Empty( cPrinter )
            AAdd( aPrinters, { cPort, cPrinter } )
         ENDIF
      NEXT

      IF Empty( aPrinters )
         ? "No printer found"
      ELSE
         AEval( aPrinters, {|a| Qout( a[1], a[2] ) } )
      ENDIF

   RETURN
