use produtos 
set index to produtos 
set orde to 1 // NOME do produto, caracter, tamanho 60 
go top 
priv lista:={} 
?time() //-> in�cio: 16:45:39 
do while ordwildseek("*PESSEGO*",.t.) 
  * procura produtos que contenham "PESSEGO" no nome, em qq posi��o, 
  * do come�o pro fim do arquivo = o argumento .T. 
  * e adiciona esses nomes � matriz LISTA 
  aadd(lista,field->nnome) 
endd 
?time() //-> final: 16:45:39 PO, NUM DEU TEMPO DE MUDAR O REL�GIO!... 
wait len(lista) // -> 138 
achoice(05,11,22,70,lista,.t.,,) 
quit