***
*** CON25.PRG: MENU Baixa de Duplicatas (Receber)
***
*********************************************

FUNCTION con25(tp)
***************
LOCAL MPRG:='CON25'

LOCAL lci,cci,lba,cba,tela,tela1,opcao

lci = 00
cci = 00
lba = 05
cba = 29

*------------------------------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('saccheq','cheq');RETURN NIL;ENDIF
IF ! AbriArq('sacdupr','dupr');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*------------------------------------------------------------------------------------
IF tp <> NIL
        op_tela(lci,cci,lba,cba,' Baixa DOC. A RECEBER *** CAIXA ***')
ELSE
        op_tela(lci,cci,lba,cba,' Baixa DOC. A RECEBER *** MOVIMENTO ***')
ENDIF

WHILE .T.
        exibi_prg(mprg)
        opcao := 0
        setcor(10)
        @ lci,cci PROMPT ' 0-> Individual Documento    '
        @ lci+1,cci PROMPT ' 1-> Geral Documento         '
        @ lci+2,cci PROMPT ' 2-> Estorno Documento       '
        @ lci+3,cci PROMPT ' 3-> Transferencia Documento '
        @ lci+4,cci PROMPT ' 4-> Baixa Parcial Documento '
        @ lci+5,cci PROMPT ' 5-> Demonstrativo Debito    '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                        con251(tp)
                CASE opcao = 2
                        con252(tp)
                CASE opcao = 3
                        con251(,'S')
                CASE opcao = 4
                        con253(tp)
                CASE opcao = 5 .AND. tp = NIL
                        con2511()
                CASE opcao = 6
                        con252(,'*')
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
