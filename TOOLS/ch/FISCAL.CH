//#include "Fileio.ch"

#define FileTop(nHandle) (FSEEK(nHandle, 0, 1))
#define FileSize(nHandle, tam) ( tam := FSEEK(nHandle, 0, FS_END) ) //Escreve em tam o tamanho do arquivo
#define FilePos (nHandle, pos) ( pos := FSEEK(nHandle, 0, 1)      ) //Escreve em pos a posicao atual
#define FileaPos(nHandle, pos) ( FSEEK(nHandle, pos, FS_SET)      ) //Vai para a pos

#define ST1_BIT_0 "n£mero de parÉmetros de CMD inv†lido"
#define ST1_BIT_1 "cupom aberto"
#define ST1_BIT_2 "comando inexistente"
#define ST1_BIT_3 "primeiro dado de CMD n∆o foi ESC (1Bh)"
#define ST1_BIT_4 "impressora em erro"
#define ST1_BIT_5 "erro no rel¢gio"
#define ST1_BIT_6 "pouco papel"
#define ST1_BIT_7 "fim de papel"

#define ST2_BIT_0 "comando n∆o executado"
#define ST2_BIT_1 "CGC/IE do propriet†rio n∆o programados"
#define ST2_BIT_2 "cancelamento n∆o permitido"
#define ST2_BIT_3 "capacidade de al°quotas program†veis lotada"
#define ST2_BIT_4 "al°quota n∆o programada"
#define ST2_BIT_5 "erro na Mem¢ria RAM CMOS n∆o vol†til"
#define ST2_BIT_6 "Mem¢ria fiscal lotada"
#define ST2_BIT_7 "tipo de parÉmetro de CMD inv†lido"
