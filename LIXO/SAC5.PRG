********************
* MENU DE RELATORIOS
********************

FUNCTION sac5
***************
LOCAL MPRG:='SAC5'

LOCAL mopcao,opcao,mopcao1,lci,cci,lba,cba,tela,tela1,mtraco

lci = 03
cci = 05
lba = 14
cba = 38
tela = SAVESCREEN(01,00,24,79)
opcao = 0
mtraco := REPLI('=',80)
WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        botao(lci,cci,lba,cba,,' Continuacao Relatorio ')
        setcor(9)
        @ lci+1,cci+1 PROMPT ' 0 -> Listagem p/Balanco        ' MESSAGE '** Listagem para Balanco de mercadoria - <ESC> Retornar **'
        @ lci+2,cci+1 PROMPT ' 1 -> Listagem Est. A.V.        ' MESSAGE '** Listagem de Produto com Estoque A.V. - <ESC> Retornar **'
        @ lci+3,cci+1 PROMPT ' 2 -> Relat. Pedidos/Orcamento  ' MESSAGE '** Relatorio de Pedidos/Orcamento - <ESC> Retornar **'
        @ lci+4,cci+1 PROMPT ' 3 -> Notas Fiscais             ' MESSAGE '** Notas Fiscais Emitidas - <ESC> Retornar **'
        @ lci+5,cci+1 PROMPT ' 4 -> Etiquetas                 ' MESSAGE '** Emissao de Etiquetas - <ESC> Retornar **'
        @ lci+6,cci+1 PROMPT ' 5 -> Plan.Cad. Cliente         ' MESSAGE '** Planilha para Cadastro de CLIENTE - <ESC> Retornar **'
        @ lci+7,cci+1 PROMPT ' 6 -> Emissao de Cadastro       ' MESSAGE '** Emissao de CADASTRO (CLIENTE E FORNECEDOR) - <ESC> Retornar **'
        @ lci+8,cci+1 PROMPT ' 7 -> Relatorio Solicitacoes    ' MESSAGE '** Relatorio de Solicitacoes p/ HTI - <ESC> Retornar **'
        @ lci+9,cci+1  PROMPT ' 8 -> T E X T O                 ' MESSAGE '** Emissao de Texto Simples - <ESC> Retornar **'
        @ lci+10,cci+1 PROMPT ' 9 -> Entrada Mat.Prima (EXCEL) 'MESSAGE '** Gerar arquivo de Entrdas de Mat.Prima p/EXCEL - <ESC> Retornar **'

        SET INTEN ON
        MENU TO opcao

        RESTSCREEN(01,00,24,79,tela)

        IF LASTKEY() = 27
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          LISTAGEM PARA BALANCO
                        sac58()
                CASE opcao = 2
                *        LISTAGEM DE ESTOQUE HAVER
                        sac580()
                CASE opcao = 3
                *          RELATORIO DE PEDIDOS
                        sac5ped()
                CASE opcao = 4
                *          RELATORIO DE NOTAS FISCAIS EMITIDAS
                        sac5nota()
                CASE opcao = 5
                *          EMISSAO DE ETIQUETAS
                        sac5etq()
                CASE opcao = 6
                *       PLANILHA DE CADASTRO
                        sac5pla1()
                CASE opcao = 7
                *          EMISSAO DE CADASTROS
                        sac5cad()
                CASE opcao = 8
                *          RELATORIO DE SOLICITACOES
                        sac64()
                CASE opcao = 9
                *          EMISSAO DE TEXTO
                        texto()
                CASE opcao = 10
                *          ENTRADA DE MATERIA PRIMA P/EXCEL
                        sacperf()
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************

