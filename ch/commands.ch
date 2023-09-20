#IFDEF __PLATFORM__Linux
 #DEFINE PATH_DEL '/'
 #DEFINE DIR_DEL ''
 #DEFINE K_GO_TOP    409
 #DEFINE K_GO_BOTTOM 417
#ELSE
 #DEFINE PATH_DEL '\'
 #DEFINE DIR_DEL ':'
 #DEFINE K_GO_TOP    chr(31)
 #DEFINE K_GO_BOTTOM chr(30)
#ENDIF


* DEFAULT -> Caso a variavel seja nula substitui pelo valor passado.
#command DEFAULT <p> TO <val> [,<pn> TO <valn>]                     ;
         =>                                                         ;
         <p> = iif(<p> = NIL,<val>,<p>)                             ;
         [;<pn> = iif(<pn> = NIL,<valn>,<pn>)]


* ADEL_VET -> Apaga um elemento do vetor e reajusta o seu tamanho
#DEFINE  ADEL_VET(VET,NUM) adel(VET,NUM) ; asize(VET,len(VET) - 1)

* AINS_VET -> Insere in elemento em um vetor
#define AINS_VET(vetor,n_elem,conteudo)                             ;
 iif(n_elem > len(vetor),aadd(vetor,conteudo),vetor[n_elem] := conteudo)

* COMPILE -> Transforma uma varivel em um bloco de codigo
#define COMPILE(c_expr) &("{||"+c_expr+"}")

