***********************************
* MENU DE ETIQUETAS PERSONALIZADAS
***********************************

FUNCTION sac5etq4()
****************
LOCAL MPRG:='SAC5ETQ4'

LOCAL opcao,lci,cci,lba,cba

lci := cci := 0
lba := 01
cba := 19
op_tela(lci,cci,lba,cba,'Opcoes de Etiquetas')
WHILE .T.
        setcor(10)
        @ lci,cci PROMPT ' Etiqueta Normal  '   
        @ lci+1,cci PROMPT ' Etiqueta Pequena ' 
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                EXIT
        ENDIF
        DO CASE
                CASE opcao = 1
                        sac5et41()
                CASE opcao = 2
                        sac5et42()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************

