**********************
* MENU DO CAIXA
**********************
FUNCTION saccaixa
***************
LOCAL mprg:='SACCAIXA'
LOCAL opcao,lci,cci,lba,cba,mdata_sis,mitemmenu,drverr

lci := cci := 0
lba = 22
cba = 39

opcao := 0
setcor(1)
op_tela(03,10,23,40,' C A I X A ')

DO WHILE .T.
        exibi_prg(mprg)
        setcor(10)
        @ lci,cci PROMPT '  0 -> Recebimentos Pedidos    '
        @ lci+1,cci PROMPT '  1 -> Recebimento Diversos    '
        @ lci+2,cci PROMPT '  2 -> Vales p/CONTA A RECEBER '
        @ lci+3,cci PROMPT '  3 -> Vales Antigos           '
        @ lci+4,cci PROMPT '  4 -> Cancelar/Alterar Vales  '
        @ lci+5,cci PROMPT '  5 -> Despesas                '
        @ lci+6,cci PROMPT '  6 -> Cancelar/Alt. Despesas  '
        @ lci+7,cci PROMPT '  7 -> Fechamento e Consulta   '
        @ lci+8,cci PROMPT '  8 -> Cancela Pedidos Pedente '
        @ lci+9,cci PROMPT '  A -> Fundo Caixa             '
        @ lci+10,cci PROMPT '  B -> Retirada Deposito       '
        @ lci+11,cci PROMPT '  C -> Baixa Documento Receber '
        @ lci+12,cci PROMPT '  D -> Estorno Recebimento     '
        @ lci+13,cci PROMPT '  E -> Despesas Administrativa '
        @ lci+14,cci PROMPT '  F -> Faturamento periodo     '
        @ lci+15,cci PROMPT '  G -> Emissao/Cancelar N.F    '
        @ lci+16,cci PROMPT '  H -> Recibos                 '
        @ lci+17,cci PROMPT '  I -> Consulta de Cliente     '
        @ lci+18,cci PROMPT '  J -> Inclusao de Cliente     '
        @ lci+19,cci PROMPT "  K -> Consulta de CEP'S       "
        @ lci+20,cci PROMPT "  L -> Preenchimento Cheques   "
        @ lci+21,cci PROMPT "  M -> Emissao de Carnes       "
        SET INTEN ON
        MENU TO nitemmenu
        setcor(1)

        IF LASTKEY() = 27
                EXIT
        ENDIF

        DO CASE
                CASE nitemmenu = 1
                *        RECEBIMENTO
                         sac30()
                CASE nitemmenu = 2
                *        RECEBIMENTOS DIVERSOS
                         sac301()
                CASE nitemmenu = 3
                *        VALES
                        con241v('*')
                CASE nitemmenu = 4
                *        PAGAMENTO DE VALES
                         sac31()
*                        sac31_0()
                CASE nitemmenu = 5
                *        CANCELAMENTO VALES
                         sac31_4()
                CASE nitemmenu = 6
                *        DESPESAS
                         sac31_1()      // sac31.prg
                CASE nitemmenu = 7
                *        CANCELAMENTO DE DESPESAS
                         sac31_3()     // sac31.prg
                CASE nitemmenu = 8
                *        FECHAMENTO
                         sac33()
                CASE nitemmenu = 9
                *        CANCELAMENTO DE PEDIDOS
                         sac34()
                CASE nitemmenu = 10
                *        FUNDO DE CAIXA
                         sac36()
                CASE nitemmenu = 11
                *        RETIRADA DE DEPOSITO
                         sac37()
                CASE nitemmenu = 12
                *        BAIXA DE DUPLICATA
                         con25('*')
                CASE nitemmenu = 13
                *        ESTORNO DE RECEBIMENTOS
                        sac38()
                CASE nitemmenu = 14
                *        DESPESAS ADMINISTRATIVA
                         con211('*')
                CASE nitemmenu = 15
                *        RELATORIO DE FATURAMENTO NO PERIODO
                         sac39()
                CASE nitemmenu = 16
                *        SAIDA P/NOTA FISCAL
                         sac210()
                CASE nitemmenu = 17
                *        RECIBO
                        *********************************
                        //
                        *********************************
                         sacrec()
                CASE nitemmenu = 18
                *       CONSULTA DE CLIENTES
                         sac42()
                CASE opcao = 19
                *       INCLUSAO DE CLIENTES
                        *************
                        CLOSE ALL
                        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                        IF ! AbriArq('saccep','cep');RETURN NIL;ENDIF
                        //
                        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                        set_key('cliente')
                        SELE('cli');ORDSETFOCUS(2)
                        GO TOP
                        *************
                        f7_cli('*')
                CASE opcao = 20
                *       CONSULTA DE CEP'S
                         saccep()
                CASE opcao = 21
                *       PREENCHIMENTO DE CHEQUES
                         saccheq()
                CASE opcao = 22
                *       EMISSAO DE CARNES       //prg sac30
                         emi_carne()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************** F I M **********************************
