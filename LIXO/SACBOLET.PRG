MEMVAR nivel_acess
***********************
* MENU DE BOLETOS
***********************
FUNCTION sacbolet(c,d,v)
************************
LOCAL mprg := 'SACBOLET',mtitulo:='EMISSAO DE BOLETOS BANCARIOS E PROMISSORIAS ',;
      opcao

IF ! ver_nivel(mprg,mtitulo,'1245',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
opcao = 0
op_tela(0,0,13,28,mtitulo)
WHILE .T.
        @ 0,0 PROMPT    '  0-> Boleto ITAU            '
        @ 1,0 PROMPT  '  1-> Boleto UNIBANCO        '
        @ 2,0 PROMPT  '  2-> Boleto BANCO REAL      '
        @ 3,0 PROMPT  '  3-> Boleto BANCO REAL 2    '
        @ 4,0 PROMPT  '  4-> Boleto HSBC Bamerindus '
        @ 5,0 PROMPT  '  5-> Boleto BANDEPE         '
        @ 6,0 PROMPT  '  6-> Boleto BILBAO VIZCAYA  '
        @ 7,0 PROMPT  '  7-> Boleto BRADESCO        '
        @ 8,0 PROMPT  '  8-> Boleto BANCO BRASIL    '
        @ 9,0 PROMPT  '  9-> PROMISSORIAS           '
        @ 10,0 PROMPT '  A-> Dup.Pre-Impressa 1     '
        @ 11,0 PROMPT '  B-> Dup.Pre-Impressa 2     '
        @ 12,0 PROMPT '  C-> Boleto BANCO RURAL     '
        @ 13,0 PROMPT '  C-> PROMISSORIA do Sistema '
        SET INTEN ON
        MENU TO opcao
        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *       BOLETO DO ITAU
                         sacbole1(c,d,v,'ITAU')
                CASE opcao = 2
                *        BOLETO UNIBANCO
                         sacbole1(c,d,v,'UNIBANCO')
                CASE opcao = 3
                *        BOLETO BANCO REAL
                         sacbole1(c,d,v,'REAL')
                CASE opcao = 4
                *        BOLETO BANCO REAL 2
                         sacbole1(c,d,v,'REAL','2')
                CASE opcao = 5
                *        BOLETO HSBC Bamerindus
                         sacbole1(c,d,v,'HSBC')
                CASE opcao = 6
                *        BOLETO BANDEPE
                         sacbole1(c,d,v,'BANDEPE')
                CASE opcao = 7
                *        BOLETO BILBAO
                         sacbole1(c,d,v,'BILBAO')
                CASE opcao = 8
                *        BOLETO BRADESCO
                         sacbole1(c,d,v,'BRADESCO')        //MESMO PRG SACBOLE5.PRG
                CASE opcao = 9
                *        BOLETO B.B.
                         sacbole1(c,d,v,'BB')        //MESMO PRG SACBOLE5.PRG
                CASE opcao = 10
                *        PROMISSORIA
                         sacpromi()
                CASE opcao = 11
                *        DUPLICATA PRE IMPRESSA
                         sacbole1(c,d,v,'DUPLICATA')        //MESMO PRG SACBOLE1.PRG
                CASE opcao = 12
                *        DUPLICATA PRE IMPRESSA
                         sacbole1(c,d,v,'DUPLICATA JW')        //MESMO PRG SACBOLE1.PRG
                CASE opcao = 13
                *        BOLETO BANCO RURAL
                         sacbole1(c,d,v,'RURAL')     //MESMO PRG SACBOLE5.PRG
                CASE opcao = 14
                *        PROMISSORIA DO SISTEMA
                         con428(,,,,'P')
        ENDCASE
ENDDO
RETURN NIL
******************************** F I M ***********************************
