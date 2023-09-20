***********************************
* MENU DE ETIQUETAS
***********************************
MEMVAR nivel_acess

FUNCTION sac5etq
****************
LOCAL MPRG:='SAC5ETQ',;
      m_opcao:=0,lci,cci,lba,cba
IF ! ver_nivel(mprg,'EMISSAO DE ETIQUETAS EM GERAL','123456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 0
lba := 05
cba := 22
op_tela(10,10,17,32,'EMISSAO DE ETIQUETAS EM GERAL')

WHILE .T.
        mensagem('Escolha a Opcao ou <ESC>p/Retornar')
        m_opcao := 0
        setcor(10)
        @ lci,cci PROMPT '  0-> Produtos         '   
        @ lci+1,cci PROMPT '  1-> Clientes         ' 
        @ lci+2,cci PROMPT '  2-> Clientes/PEDIDO  '
        @ lci+3,cci PROMPT '  3-> Fornecedores     '
        @ lci+4,cci PROMPT '  4-> Personalizada    '
        @ lci+5,cci PROMPT '  5-> p/Transporadora  '
        @ lci+6,cci PROMPT '  6-> Envelope Cliente '
        MENU TO m_opcao
        setcor(1)
        DO CASE
                CASE LASTKEY() = 27
                        EXIT
                CASE m_opcao = 1
*                       &ml1()
                        sac5etq1()
                CASE m_opcao = 2
                        sacetq_c()
*                       sac5etq2()
                CASE m_opcao = 3
                        sacetqcp()
                CASE m_opcao = 4
*                       &ml2()
                        sac5etq3()
                CASE m_opcao = 5
                        sac5etq4()
                CASE m_opcao = 6
                        sac5etq5()
                CASE m_opcao = 7
                        sac5env1()
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL
*********************************** F I M ************************************

