***********************
* CONSULTA DE CEP
***********************
MEMVAR getlist

FUNCTION saccep
*****************

LOCAL opcao,tela,mtela,lci,cci,lba,cba,li,ci,la,ca,mcidade,mbairro,mnome,mcep

li = 00
ci = 00
la = 05
ca = 79
opcao = 0
*----------------------------------------------------------------------------
IF ! AbriArq('SACCEP','CEP');RETURN NIL;ENDIF
IF ! AbriArq('SACCEPLO','CEPLO');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(00,00,01,17," Consulta Cep's ")

WHILE .T.
        setcor(10)
        @ 00,00 PROMPT ' Pernambuco       '
        @ 01,00 PROMPT ' Interior do Pais '
        SET INTEN ON
        MENU TO opcao
        setcor(1)
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        DO CASE
                CASE opcao = 1
                        f8_cep()
                CASE opcao = 2
                *        CONSULTA CEP INTERIOR DO PAIS
                        op_tela(li,ci,la,ca,' Consulta CEP de todos os Interior ')
                        WHILE .T.
                                mcidade := SPACE(40)
                                mcep    := SPACE(8)
                                @ li+1,ci+12 SAY mcidade PICT '@!'
                                @ li+2,ci+12 SAY SPACE(2) PICT '@!'
                                @ li+3,ci+12 SAY mcep PICT '@@R 99999-999'
                                DEVPOS(li+1,ci+1);DEVOUT('Cidade...:')
                                DEVPOS(li+2,ci+1);DEVOUT('Estado...:')
                                DEVPOS(li+3,ci+1);DEVOUT('CEP......:')
                                @ li+1,ci+12 GET mcidade PICT '@!'
*                               @ li+3,ci+12 GET mcep PICT '@@R 99999-999' WHEN EMPTY(mcidade)
                                READ
                                IF LASTKEY() = 27
                                        wvw_lclosewindow()
                                        EXIT
                                ENDIF
                                ****************************
                                SELE('ceplo');ORDSETFOCUS(1)
                                GO TOP
                                ****************************
                                IF ! ceplo->(DBSEEK(RTRIM(mcidade)))
                                        atencao('Nao foi possivel encontrar este CEP')
                                        LOOP
                                ENDIF
                                WHILE .T.
                                        DEVPOS(li+1,ci+12);DEVOUT(ceplo->nome)
                                        DEVPOS(li+2,ci+12);DEVOUT(ceplo->uf)
                                        DEVPOS(li+3,ci+12);DEVOUTPICT(ceplo->cep8,'@@R 99999-999')
                                        INKEY(0)
                                        IF LASTKEY() = 27
                                                EXIT
                                        ENDIF
                                        IF LASTKEY() = 5
                                                SKIP
                                                IF EOF()
                                                        atencao('Fim de Arquivo !!!')
                                                ENDIF
                                                LOOP
                                        ENDIF
                                        IF LASTKEY() = 24
                                                SKIP -1
                                                IF BOF()
                                                        atencao('Inicio de Arquivo !!!')
                                                ENDIF
                                                LOOP
                                        ENDIF
                                ENDDO
                        ENDDO
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

