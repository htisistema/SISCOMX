*******************************
* CONFIGURAR O SISTEMA "SISCOM"
*******************************
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"

FUNCTION sac610(mmanut)
*****************
LOCAL MPRG:='SAC610',mtitulo:='CONFIGURACAO DO SISTEMA',opcao,;
      demo_set:={},point:=0,m_email:={}
PRIVATE cons_cli := {}

IF ! ver_nivel(mprg,mtitulo,'1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
CLEAR GETS
op_tela(00,00,50,120,mtitulo,,1)
m_set:={}
sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
sr_getconnection():exec('COMMIT',,.f.)
WHILE .T.
        exibi_prg(mprg)
        setcor(1)
        demo_set:={}
        AADD(demo_set,'    C O N F I G U R A C A O   G E R A L       ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'020 - I.C.M. do estado (%)............................: '+TRANSFORM(m_set[1,20],'99') +' ')
        AADD(demo_set,'079 - Tipo de Calculo do Lucro........................: '+m_set[1,79] +' ')
        //AADD(demo_set,'006 - (%) p/Faturamento...............................: '+TRANSFORM(m_set[1,6],'999.99') +' ')
        AADD(demo_set,'003 - Aliquota do Cofins (%)..........................: '+TRANSFORM(m_set[1,3],'999.99')  +' ')
        AADD(demo_set,'002 - Aliquota do PIS (%).............................: '+TRANSFORM(m_set[1,2],'999.99')  +' ')
        AADD(demo_set,'004 - Impostos Adicionais (%).........................: '+TRANSFORM(m_set[1,4],'999.99')  +' ')
        AADD(demo_set,'007 - Valor de juste entrada Mercadoria...............: '+TRANSFORM(m_set[1,7],'999.99')  +' ')
        AADD(demo_set,'012 - Lucro <F>ator <P>ercentual......................: '+m_set[1,12] +' ')
        AADD(demo_set,'102 - Dolar p/Reajuste [S/N]..........................: '+m_set[1,102]+' ')
        AADD(demo_set,'126 - Empresa faz parte do SIMPLES NACIONAL [S/N].....: '+m_set[1,126] +' ')
        //AADD(demo_set,'                                              ')
        AADD(demo_set,'097 - Mascara NUMEROS R$..............................: '+m_set[1,97] +' ')
        AADD(demo_set,'099 - Mascara Quantidade..............................: '+m_set[1,99] +' ')
        AADD(demo_set,'103 - IAT-[A]rredondar [T]runcar......................: '+m_set[1,103]+' ')
        AADD(demo_set,'112 - Alterar Codigo Produto na Inclusao [S/N/U]......: '+m_set[1,112]+' ')
        AADD(demo_set,'093 - Tipo Consulta do Produto [N/A]..................: '+m_set[1,93] +' ')
        AADD(demo_set,'085 - Quatidade Maxima CHEQUES p/Cliente..............: '+TRANSFORM(m_set[1,85],'999') +' ')
        AADD(demo_set,'061 - Bloquear Fechamento Caixa [S/N].................: '+m_set[1,61] +' ')
        AADD(demo_set,'048 - Recibo de comprovante PAGAMENTO DOCUMENTOS [S/N]: '+m_set[1,48] +' ')
        AADD(demo_set,'149 - AUTENTICAR OU RECIBO na Baixa  DUPLICATA [A/S/N]: '+m_set[1,149]+' ')
        AADD(demo_set,'063 - Emissao Despesa [S/N]...........................: '+m_set[1,63] +' ')
        AADD(demo_set,'065 - Emissao Vales [S/N].............................: '+m_set[1,65] +' ')
        AADD(demo_set,'067 - Retirada p/Deposito [S/N].......................: '+m_set[1,67] +' ')
        AADD(demo_set,'155 - Informa o Tipo de Recebimento [S/N].............: '+m_set[1,155]+' ')
        AADD(demo_set,'179 - Marca da BALANCA [FILIZOLA] ou [TOLEDO].........: '+m_set[1,179]+' ')
        AADD(demo_set,'159 - Informa o Tipo de BALANCA [P]eso [V]alor [N]ao..: '+m_set[1,159]+' ')
        AADD(demo_set,'181 - Informa Tamanho do Codigo na Balanca............: '+TRANSFORM(m_set[1,181],'9')+' ')
        AADD(demo_set,'165 - Host do Servidor de Email.......................: '+m_set[1,165]+' ')
        AADD(demo_set,'076 - Enviar EMAIL no Pedido [S/N]....................: '+m_set[1,76] +' ')
        AADD(demo_set,'077 - Enviar EMAIL no Caixa  [S/N]....................: '+m_set[1,77] +' ')
        AADD(demo_set,'069 - Utiliza TELEMARKETING [S/N].....................: '+m_set[1,69] +' ')
        AADD(demo_set,'173 - Tipo de Codigo para o SEF [C]odigo [B]Cod.Barra.: '+m_set[1,173]+' ')
        AADD(demo_set,'101 - Bloq.Operador nao registrado Relogio Ponto [S/N]: '+m_set[1,101]+' ')
        AADD(demo_set,'169 - Coloca a SENHA na tela Principal [1-Sim 2-Nao]..: '+TRANSFORM(m_set[1,169],'9')+' ')
        AADD(demo_set,'008 - Gerar CODIGO DE BARRA pelo Sistema [S/N]........: '+m_set[1,8]+' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'  C o n f i g u r a c a o   N o t a   F i s c a l')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'151 - Ratear o valor do FRETE na NFe..................: '+m_set[1,151]+' ')
        //AADD(demo_set,'117 - Bloquear o Numero da Nota Fiscal [S/N]..........: '+m_set[1,117]+' ')
        AADD(demo_set,'016 - Verificar Saldo NF/CUPOM FISCAL [S/N]...........: '+m_set[1,16] +' ')
        //AADD(demo_set,'095 - Emissao NFE [1]Normal [2]SCAN...................: '+m_set[1,95] +' ')
        //AADD(demo_set,'091 - NFE modo de [P]roducao [H]omologacao............: '+m_set[1,91] +' ')
        AADD(demo_set,'014 - Informa na NFE o Codigo de Barra [S/N]..........: '+m_set[1,14] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'  C o n f i g u r a c a o     P e d i d o')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'018 - Cabecalho [J]PG 620X190 pixel ou [N]ormal.......: '+m_set[1,18] +'      '+'Nome do arquivo: HTICABE.JPG no PAINT (1.230 x 207 formulario)')
        AADD(demo_set,'024 - Nomeclatura do NUMERO DO ORCAMENTO..............: '+m_set[1,24] +' ')
        AADD(demo_set,'023 - Nomeclatura do NUMERO DO PEDIDO.................: '+m_set[1,23] +' ')
        AADD(demo_set,'150 - Usa Liberacao Pedido/Orcamento [S/N]............: '+m_set[1,150]+' ')
        AADD(demo_set,'098 - Mascara numeros EX.: (9,999,999.99).............: '+m_set[1,98] +' ')
        AADD(demo_set,'044 - Tipo Mascara Quantidade [S]istema [U]nidade.....: '+m_set[1,44] +' ')
        AADD(demo_set,'005 - Vendas no Atacado/Varejo [S/N]..................: '+m_set[1,05] +' ')
        AADD(demo_set,'046 - Informar Condicao Pagamento Abertura Pedido[S/N]: '+m_set[1,46] +' ')
        AADD(demo_set,'092 - Previsao de Entrega no Pedido [S/N].............: '+m_set[1,92] +' ')
        AADD(demo_set,'080 - SENHA apos Pedido [S/N].........................: '+m_set[1,80] +' ')
        AADD(demo_set,'038 - Bloquear preco [V]enda [C]usto [N]enhum [P]ular.: '+m_set[1,38] +' ')
        AADD(demo_set,'104 - Duplicar produto Pedido [S/N]...................: '+m_set[1,104]+' ')
        AADD(demo_set,'125 - Desconto por Produtos a Produto [S/N]...........: '+m_set[1,125]+' ')
        AADD(demo_set,'107 - Bloq.Sld. a Menor [F]is [P]edido [2]Saldo [N]ao.: '+m_set[1,107]+' ')
        AADD(demo_set,'034 - Quantidade Maxima de Itens no Pedido............: '+TRANSFORM(m_set[1,34],'999') +' ')
        AADD(demo_set,'153 - Quantidade Maxima por PRODUTO no Pedido.........: '+TRANSFORM(m_set[1,153],'99,999')+' ')
        AADD(demo_set,'154 - Valor Maximo por PRODUTO no Pedido..............: '+TRANSFORM(m_set[1,154],'999,999.99')+' ')
        AADD(demo_set,'084 - Cliente Default para o PEDIDO...................: '+STR(m_set[1,84],5) +' ')
        AADD(demo_set,'010 - Vendedor ligado ao Cliente [S/N]................: '+m_set[1,10] +' ')
        AADD(demo_set,'009 - OBS. Pedido [P/S/N].............................: '+m_set[1,09] +' ')
        AADD(demo_set,'033 - Desconto Maximo no Pedido (%)...................: '+TRANSFORM(m_set[1,33],'999.99')+' ')
        AADD(demo_set,'035 - Desconto venda APRAZO [S/N].....................: '+m_set[1,35] +' ')
        AADD(demo_set,'049 - Prazo de pagamento DIAS.........................: '+TRANSFORM(m_set[1,49],'999') +' ')
        AADD(demo_set,'108 - Informar Vendedor no Fechamento do Pedido [S/N].: '+m_set[1,108]+' ')
        AADD(demo_set,'017 - Informar Cliente no Fechamento do Pedido [S/N]..: '+m_set[1,17] +' ')
        AADD(demo_set,'037 - Identificar Carro no Fechamento do Pedido [S/N].: '+m_set[1,37] +' ')
        AADD(demo_set,'152 - Informa REPRESENTENATE no Pedido [S/N]..........: '+m_set[1,152] +' ')
        AADD(demo_set,'086 - TICKET DO CAIXA [S/N/T].........................: '+m_set[1,86] +' ')
        AADD(demo_set,'087 - TICKET DO EMBALAGEM [S/N].......................: '+m_set[1,87] +' ')
        AADD(demo_set,'088 - Imprimir TICKET EMBALAGEM [P]edido [C]aixa......: '+m_set[1,88] +' ')
        AADD(demo_set,'120 - Bloq.Operador c/Pedido PEDENTE NAO Expedido[S/N]:'+TRANSFORM(m_set[1,120],'999') +' ')
        AADD(demo_set,'121 - Bloq.Operador c/Pedido PEDENTE EXEDIDO [S/N]....: '+TRANSFORM(m_set[1,121],'999') +' ')
        AADD(demo_set,'122 - Qtd dias Receber PEDIDOS apos Prazo Estipulado..: '+TRANSFORM(m_set[1,122],'999') +' ')
        AADD(demo_set,'109 - Desconto NO TOTAL DO PEDIDO [S/N]...............: '+m_set[1,109]+' ')
        AADD(demo_set,'105 - Desconto no Fechamento do PEDIDO [S/N]..........: '+m_set[1,105]+' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'  C o n f i g u r a c a o   I m p r e s s a o   d e   P e d i d o')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'011 - Pag.<I>nteira <M>eia............................: '+m_set[1,11] +' ')
        AADD(demo_set,'022 - Imprimir Cabecalho do Pedido [S/N]..............: '+m_set[1,22] +' ')
        AADD(demo_set,'039 - Imprimir Dados do cliente [S/N].................: '+m_set[1,39] +' ')
        AADD(demo_set,'040 - Imprimir Nome Fantasia da Empresa [S/N].........: '+m_set[1,40] +' ')
        AADD(demo_set,'081 - Imprimir Nome do Vendedor [S/N].................: '+m_set[1,81] +' ')
        AADD(demo_set,'110 - Imprimir Saldo Devedor do Cliente [S/N].........: '+m_set[1,110]+' ')
        AADD(demo_set,'147 - Imprimir [C]odigo Sistema ou Codigo [B]arra.....: '+m_set[1,147]+' ')
        AADD(demo_set,'036 - Imprimir Desconto [S/N].........................: '+m_set[1,36] +' ')
        AADD(demo_set,'025 - Rodape do Pedido................................: '+m_set[1,25] +' ')
        AADD(demo_set,'174 - Ordem de Impressao [A]Alf.[C]Codigo [D]Digitacao: '+m_set[1,174] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'  C o n f i g u r a c a o      R e c e b i m e n t o')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'083 - Recebimento apos Pedido ou [S/N]e[I]mprimir ....: '+m_set[1,83] +' ')
        AADD(demo_set,'078 - Recebimento PARCIAL do Pedido [S/N].............: '+m_set[1,78] +' ')
        AADD(demo_set,'119 - Informar Cliente no RECEBIMENTO [S/N]...........: '+m_set[1,119]+' ')
        AADD(demo_set,'094 - Desconto no Recebimento do Pedido [S/N].........: '+m_set[1,94] +' ')
        AADD(demo_set,'111 - Aut.Pedido[S]/Imp.[R]Resumo Recebimento [S/N/R].: '+m_set[1,111]+' ')
        AADD(demo_set,'062 - Imprimir Carnes no Caixa [S/N]..................: '+m_set[1,62] +' ')
        AADD(demo_set,'091 - Tipo de Fechamento do Caixa [A]ntigo [N]ovo.....: '+m_set[1,91] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,' C o n f i g u r a c a o   d e   B o l e t o   (DUPLICATAS)')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'172 - Tipo de BOLETO [A]CBR [S]istema.................: '+m_set[1,172]+' ')
        AADD(demo_set,'050 - Multa apos Venc. [%]............................: '+TRANSFORM(m_set[1,50],'999.99')+' ')
        AADD(demo_set,'051 - Juros ao dia [%]................................: '+TRANSFORM(m_set[1,51],'999.99')+' ')
        AADD(demo_set,'106 - Tolerancia de dias..............................: '+TRANSFORM(m_set[1,106],'999') +' ')
        AADD(demo_set,'118 - Desconto [%] p/Dias Antecipados.................: '+TRANSFORM(m_set[1,118],'999.99')+' ')
        AADD(demo_set,'052 - Rodape do Boleto Bancario.......................: '+m_set[1,52] +' ')
        AADD(demo_set,'056 - Configuracao do Boleto Bancario.................: '+m_set[1,56] +' ')
        AADD(demo_set,'029 - Descricao do Acordo de PAGAMENTO................: '+m_set[1,29] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'045 - Imprimir as DUPLICATA [S/N].....................: '+m_set[1,45] +' ')
        AADD(demo_set,'047 - Imp. DUPLICATA apos [V]enda [C]aixa.............: '+m_set[1,47] +' ')
        AADD(demo_set,'070 - Imprimir PROMISSORIA do Carne [S/N].............: '+m_set[1,70] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'  C o n f i g u r a c a o   O r d e m   d e   S e r v i c o')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'042 - Utiliza ORDEM DE SERVICO [S/N]..................: '+m_set[1,42] +' ')
        AADD(demo_set,'071 - OBSERVACAO DA O.S...............................: '+m_set[1,71] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,' C o n f i g u r a c a o   d a   C o m i s s a o')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'114 - Tolerancia de Desconto na Mercadoria............: '+TRANSFORM(m_set[1,114],'999.99')+' ')
        AADD(demo_set,'113 - [%] ou Fator de Desconto na Comissao............: '+TRANSFORM(m_set[1,113],'999.99')+' ')
        AADD(demo_set,'115 - Informa a Comissao no Pedido [S/N]..............: '+m_set[1,115]+' ')
        AADD(demo_set,'116 - Desconto Comissao p/o Telemarket................: '+TRANSFORM(m_set[1,116],'999.99')+' ')
        AADD(demo_set,'162 - Quantidade de PEDIDOS por Dia para EXPEDICAO....: '+TRANSFORM(m_set[1,162],'999') +' ')
        AADD(demo_set,'163 - Quantidade de ITENS por Dia para EXPEDICAO......: '+TRANSFORM(m_set[1,163],'999') +' ')
        AADD(demo_set,'164 - Quantidade de PESO por Dia para EXPEDICAO.......: '+TRANSFORM(m_set[1,164],'999,999')+' ')
        AADD(demo_set,'021 - Comissao [V]enda [R]ec.Doc......................: '+m_set[1,21] +' ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,' C o n f i g u r a c a o   d e   E M A I L')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'165 - HOST do Conta do Email..........................: '+m_set[1,165]+' ')
        AADD(demo_set,'166 - PORTA do Email..................................: '+m_set[1,166]+' ')
        AADD(demo_set,'167 - LOGIN do Email..................................: '+m_set[1,167]+' ')
        AADD(demo_set,'168 - SENHA do Email..................................: '+m_set[1,168]+' ')
        AADD(demo_set,'175 - FROM do Email...................................: '+m_set[1,175]+' ')
        AADD(demo_set,'991 - Outras Configuracoes do EMAIL...................:   CONFIGURACAO  ')
        AADD(demo_set,'                                              ')
        AADD(demo_set,' C o n f i g u r a c a o   d o   A P P')
        AADD(demo_set,'                                              ')
        AADD(demo_set,'100 - Tipo de APP [H]ti Sistemas [O]utros.............: '+m_set[1,100]+' ')
        AADD(demo_set,'089 - Caminho do PCOKET...............................: '+m_set[1,089]+' ')
        mensagem('<ESC> Retorna  -  <ENTER> p/Confirmar')
        setcor(10);point := ACHOICE(0,1,49,119,demo_set,,,point);setcor(1)
        DO CASE
                CASE LASTKEY() = 13
                        mop := SUBSTR(demo_set[point],1,3)
                        IF mop = '020'
                                op_tela(10,10,12,110,'I.C.M. DO ESTADO DA EMPRESA (%)',,'*')
                                DEVPOS(1,1);DEVOUT('I.C.M. do estado (%)............................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '079'
                                op_tela(10,10,12,110,'TIPO DE CALCULO DO LUCRO',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo de Calculo do Lucro........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,79] $ 'R,M,O' .AND. lim_get() WHEN men_get(5,34,'Custo [R]eal, Preco [M]edio ou [O]utro')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '003'
                                op_tela(10,10,12,110,'ALIQUOTA DO COFINS (%)',,'*')
                                DEVPOS(1,1);DEVOUT('Aliquota do Cofins (%)..........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '002'
                                op_tela(10,10,12,110,'ALIQUOTA DO PIS (%)',,'*')
                                DEVPOS(1,1);DEVOUT('Aliquota do PIS (%).............................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '004'
                                op_tela(10,10,12,110,'IMPOSTOS ADICIONAIS (%)',,'*')
                                DEVPOS(1,1);DEVOUT('Impostos Adicionais (%).........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '007'
                                op_tela(10,10,12,110,'VALOR AJUSTE ENTRADA DE MERCADORIA',,'*')
                                DEVPOS(1,1);DEVOUT('Vlr.ajuste entrada Mercad.......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '012'
                                op_tela(10,10,12,110,'FORMA DE CALCULAR O LUCRO',,'*')
                                DEVPOS(1,1);DEVOUT('Lucro <F>ator <P>ercentual......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'F,P'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '102'
                                op_tela(10,10,12,110,'DOLAR PARA REAJUSTE',,'*')
                                DEVPOS(1,1);DEVOUT('Dolar p/Reajuste [S/N]..........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                       ELSEIF mop = '126'
                                op_tela(10,10,12,110,'EMPRESA FAZ PARTE DO SIMPLES NACIONAL',,'*')
                                DEVPOS(1,1);DEVOUT('Empresa faz parte do SIMPLES NACIONAL [S/N].....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '097'
                                op_tela(10,10,12,110,'MASCARA DE NUMEROS(R$)',,'*')
                                DEVPOS(1,1);DEVOUT('Mascara NUMEROS  Ex.: 99,999,999.99.... R$:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID lim_get() WHEN men_get(15,34,'Digite a 9 p/representar os numeros (,) p/centenas e (.) casa decimal')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '099'
                                op_tela(10,10,12,110,'MASCARA DE QUANTIDADE',,'*')
                                DEVPOS(1,1);DEVOUT('Mascara Quantidade Ex.: 99,999,999.999..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID lim_get() WHEN men_get(16,34,'Digite a 9 p/representar os numeros e (.) casa decimal')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '101'
                                op_tela(10,10,12,110,'BLOQUEAR O OPERADOR NAO REGISTRADO RELOGIO PONTO',,'*')
                                DEVPOS(1,1);DEVOUT('BLOQUEAR O OPERADOR NAO REGISTRADO RELOGIO PONTO:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '103'
                                op_tela(10,10,12,110,'IAT (Indice de Arredondamento ou Trucar',,'*')
                                DEVPOS(1,1);DEVOUT('IAT-[A]rredondar [T]runcar......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'A,T'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '112'
                                op_tela(10,10,12,110,'ALTERAR CODIGO DO PRODUTO NA INCLUSAO',,'*')
                                DEVPOS(1,1);DEVOUT('Alterar Cod.Produto na Inclusao [S/N/U].........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N,U'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '093'
                                op_tela(10,10,12,110,'TIPO DE CONSULTA DO PRODUTO',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo Consulta do Produto [N/A]..................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'N,A' .AND. lim_get() WHEN  men_get(24,34,'Digite [N]ova Cliente Servidor ou [A]nterior')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '085'
                                op_tela(10,10,12,110,'QUANTIDADE MAXIMA DE CHEQUE PARA CLIENTE',,'*')
                                DEVPOS(1,1);DEVOUT('Qtd.Maxima CHEQ. p/Cliente......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '9999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '061'
                                op_tela(10,10,12,110,'BLOQUEAR FECHAMENTO DO CAIXA APOS EMITI-LO UMA VEZ',,'*')
                                DEVPOS(1,1);DEVOUT('Bloq.Fechamento Caixa [S/N] ....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '048'
                                op_tela(10,10,12,110,'RECIBO DE COMPROVANTE DE PAGAMENTO DE DOCUMENTOS',,'*')
                                DEVPOS(1,1);DEVOUT('Recibo de comprovante PAGAMENTO DOCUMENTOS [S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '149'
                                op_tela(10,10,12,110,'AUTENTICAR OU RECIBO NA BAIXA DA DUPLICATA',,'*')
                                DEVPOS(1,1);DEVOUT('AUTENTICAR OU RECIBO na Baixa da DUPLICATA [S/R/A/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,R,N,A'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '063'
                                op_tela(10,10,12,110,'EMISSAO DESPESA',,'*')
                                DEVPOS(1,1);DEVOUT('EMISSAO DA DESPESA.........................[S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '065'
                                op_tela(10,10,12,110,'EMISSAO VALES',,'*')
                                DEVPOS(1,1);DEVOUT('EMISSAO DA VALES...........................[S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '067'
                                op_tela(10,10,12,110,'EMISSAO RETIRADA PARA DEPOSITO',,'*')
                                DEVPOS(1,1);DEVOUT('EMISSAO RETIRADA PARA DEPOSITO.............[S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '155'
                                op_tela(10,10,12,110,'TIPO DE RECEBIMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Informa o Tipo de Recebimento [S/N].............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '179'
                                op_tela(10,10,12,110,'MARCA DA BALANCA',,'*')
                                DEVPOS(1,1);DEVOUT('Marca da BALANCA Ex: FILIZOLA ou TOLEDO..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '159'
                                op_tela(10,10,12,110,'TIPO DE BALANCA',,'*')
                                DEVPOS(1,1);DEVOUT('Informa o Tipo de BALANCA [P]eso [V]alor [N]ao..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'P,V,N' .AND. lim_get() WHEN  men_get(24,34,'Informa no [P]eso - em [V]alor ou [N]ao tem Balanca')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '076'
                                op_tela(10,10,12,110,'ENVIAR PEDIDO POR EMAIL NA VENDA',,'*')
                                DEVPOS(1,1);DEVOUT('Enviar EMAIL no Pedido [S/N]....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '077'
                                op_tela(10,10,12,110,'ENVIAR PEDIDO POR EMAIL NO CAIXA',,'*')
                                DEVPOS(1,1);DEVOUT('Enviar EMAIL no Caixa  [S/N]....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '069'
                                op_tela(10,10,12,110,'UTILIZA TELEMARKETING',,'*')
                                DEVPOS(1,1);DEVOUT('Utiliza TELEMARKETING [S/N].....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '008'
                                op_tela(10,10,12,110,'Gerar CODIGO DE BARRA pelo Sistema',,'*')
                                DEVPOS(1,1);DEVOUT('Gerar CODIGO DE BARRA pelo Sistema.:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '173'
                                op_tela(10,10,12,110,'TIPO DO CODIGO DO PRODUTO PARA O SEF',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo de Codigo para o SEF [C]odigo [B]Cod.Barra.:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'C,B'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '169'
                                op_tela(10,10,12,110,'Coloca a SENHA na tela Principal',,'*')
                                DEVPOS(1,1);DEVOUT('Coloca a SENHA na tela Principal [1-Sim 2-Nao]......:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '9'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '105'
                                op_tela(10,10,12,110,'UTILIZA IMPRESSORA FISCAL',,'*')
                                DEVPOS(1,1);DEVOUT('Utiliza IMPRESSORA FISCAL [S/N].................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '043'
                                op_tela(10,10,12,110,'DESCONTO NO FECHAMENTO DO CUPOM',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto no Fechamento do CUPOM [S/N]...........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '151'
                                op_tela(10,10,12,110,'Ratear o valor do FRETE na NFe',,'*')
                                DEVPOS(1,1);DEVOUT('Ratear o valor do FRETE na NFe.................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '018'
                                op_tela(10,10,12,110,'Cabecalho (JPG) ou [N]ormal',,'*')
                                DEVPOS(1,1);DEVOUT('Cabecalho (JPG) ou [N]ormal.....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'J,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '117'
                                op_tela(10,10,12,110,'BLOQUEAR NUMERO DA NOTA FISCAL',,'*')
                                DEVPOS(1,1);DEVOUT('Bloq.Numero da Nota Fiscal [S/N]................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '016'
                                op_tela(10,10,12,110,'VERIFICAR SALDO DA NOTA FISCAL',,'*')
                                DEVPOS(1,1);DEVOUT('Verificar Saldo NF...[S/N]......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '095'
                                op_tela(10,10,12,110,'MODO DE EMISSAO DE NOTA FISCAL ELETRONICA',,'*')
                                DEVPOS(1,1);DEVOUT('Emissao NFE [1]Normal [2]SCAN...................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ '1,2'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '014'
                                op_tela(10,10,12,110,'INFOMAR CODIGO BARRA NA NFE',,'*')
                                DEVPOS(1,1);DEVOUT('014 - Informa na NFE o Codigo de Barra [S/N]..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '024'
                                op_tela(10,10,12,110,'NOMECLATURA DO ORCAMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Nomeclatura do NUMERO DO ORCAMENTO..............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '023'
                                op_tela(10,10,12,110,'NOMECLATURA DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Nomeclatura do NUMERO DO PEDIDO..............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '150'
                                op_tela(10,10,12,110,'LIBERACAO DE PEDIDO/ORCAMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Usa Liberacao Pedido/Orcamento [S/N]............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '098'
                                op_tela(10,10,12,110,'MASCARA DE NUMEROS',,'*')
                                DEVPOS(1,1);DEVOUT('Mascara numeros EX.: (9,999,999.99).............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID lim_get() WHEN men_get(1,0,'Digite a 9 p/representar usar (,)p/centenas e (.) casa decimal')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '044'
                                op_tela(10,10,12,110,'TIPO DE MASCARA',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo Mascara Quantidade [S]istema [U]nidade.....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,U'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '021'
                                op_tela(10,10,12,110,'COMISSAO',,'*')
                                DEVPOS(1,1);DEVOUT('Comissao [V]enda [R]ec.Doc......................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'V,R'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '005'
                                op_tela(10,10,12,110,'VENDA NO ATACADO E VAREJO',,'*')
                                DEVPOS(1,1);DEVOUT('Vendas no Atacado/Varejo [S/N]..................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '046'
                                op_tela(10,10,12,110,'CONDICAO DE PAGAMENTO NA ABERTURA DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Informar Condicao Pagamento Abertura Pedido[S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '092'
                                op_tela(10,10,12,110,'PREVISAO DE ENTREGA NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Previsao de Entrega no Pedido [S/N].............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '109'
                                op_tela(10,10,12,110,'Desconto so no Resumo do Pedido',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto so no Resumo do Pedido [S/N].....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N' .AND. lim_get() WHEN men_get(4,47,'Digite a [S] para que no final do PEDIDO faca a pergunta se deseja imprimir pedido ou [N] p/nao perguntar')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '080'
                                op_tela(10,10,12,110,'SENHA APOS O PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('SENHA apos Pedido [S/N].........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '038'
                                op_tela(10,10,12,110,'BLOQUEAR PRECO',,'*')
                                DEVPOS(1,1);DEVOUT('Bloq.preco [V]enda [C]usto [N]enhum [P]ular.....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'V,C,N,P' .AND. lim_get() WHEN men_get(4,50,'Digite a [V]-Bloquea ate Preco de VENDA [C]-Bloquea ate o preco de CUSTO [N]ao bloquea nenhum preco [P]ula o preco de venda')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '104'
                                op_tela(10,10,12,110,'DUPLICAR PRODUTO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT( 'Duplicar produto Pedido [S/N]..................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '125'
                                op_tela(10,10,12,110,'DESCONTO POR PRODUTOS A PRODUTO',,'*')
                                DEVPOS(1,1);DEVOUT( 'Desconto por Produtos a Produto [S/N]..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '107'
                                op_tela(10,10,12,110,'BLOQUEAR SALDO A MENOR',,'*')
                                DEVPOS(1,1);DEVOUT( 'Bloq.Sld. a Menor [F]is [P]edido [2]Saldo [N]ao:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'F,P,2,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '034'
                                op_tela(10,10,12,110,'QUANTIDADE MAXIMA DE ITENS NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Quantidade Maxima de Itens no Pedido............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '153'
                                op_tela(10,10,12,110,'QUANTIDADE MAXIMA POR PRODUTO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Quantidade Maxima por PRODUTO no Pedido.........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999,999,999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '154'
                                op_tela(10,10,12,110,'VALOR MAXIMO POR PRODUTO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Valor Maximo por PRODUTO no Pedido..............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999,999,999.99'
                                READ
                                fecha_tela()
                                LOOP

                        ELSEIF mop = '100'
                                op_tela(10,10,12,110,'100 - Tipo de APP [H]ti Sistemas [O]utros',,'*')
                                DEVPOS(1,1);DEVOUT('100 - Tipo de APP [H]ti Sistemas [O]utros...................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'H,O' .AND. lim_get() WHEN men_get(13,50,'Tipo de APP para forca de venda...')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '084'
                                op_tela(10,10,12,110,'CLIENTE DEFAULT PARA O PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Cliente Default para o PEDIDO...................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '99999' VALID ver_cli(m_set[1,VAL(mop)],1,COL()+1)
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '010'
                                op_tela(10,10,12,110,'VENDEDOR LIGADO AO CLIENTE',,'*')
                                DEVPOS(1,1);DEVOUT('Vendedor ligado ao Cliente [S/N]................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '009'
                                op_tela(10,10,12,110,'OBSERVACAO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('OBS. Pedido [P/S/N].............................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S ,N ,P ,PS' .AND. lim_get() WHEN men_get(6,50,'Digite a [S]im - [N]ao - [P] So produto ou [PS] No Produto e no Pedido')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '033'
                                op_tela(10,10,12,110,'DESCONTO MAXIMO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto Maximo no Pedido (%)...................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '035'
                                op_tela(10,10,12,110,'DESCONTO NA VENDA APRAZO',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto venda APRAZO [S/N].....................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '049'
                                op_tela(10,10,12,110,'PRAZO',,'*')
                                DEVPOS(1,1);DEVOUT('Prazo de pagamento DIAS.........................:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '108'
                                op_tela(10,10,12,110,'INFORMAR VENDEDOR NO FECHAMENTO DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Informar Vendedor no Fechamento do Pedido [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N' .AND. lim_get() WHEN men_get(14,50,'Pedir para informa o vendedor no PEDIDO')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '017'
                                op_tela(10,10,12,110,'INFORMAR CLIENTE NO FECHAMENTO DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Informar Cliente no Fechamento do Pedido [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '037'
                                op_tela(10,10,12,110,'IDENTIFICAR CARRO NO FECHAMENTO DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Identificar Carro no Fechamento do Pedido [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N' .AND. lim_get() WHEN men_get(15,50,'Identificar a Placa do Veiculo no fechamento do PEDIDO')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '152'
                                op_tela(10,10,12,110,'INFORMA REPRESENTENATE NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('152 - Informa REPRESENTENATE no Pedido [S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N' .AND. lim_get() WHEN men_get(15,50,'Informa REPRESENTENATE no Pedido')
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '086'
                                op_tela(10,10,12,110,'IMPRIMIR TICKET DO CAIXA',,'*')
                                DEVPOS(1,1);DEVOUT('TICKET CAIXA [S/N/T]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N,T'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '087'
                                op_tela(10,10,12,110,'IMPRIMIR TICKET DA EMBALAGEM',,'*')
                                DEVPOS(1,1);DEVOUT('TICKET EMBALAGEM [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '088'
                                op_tela(10,10,12,110,'LOCAL P/IMPRIMIR TICKET DA EMBALAGEM',,'*')
                                DEVPOS(1,1);DEVOUT('Imprimir TICKET EMBALAGEM no [P]edido [C]aixa...:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'P,C'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '120'
                                op_tela(10,10,12,110,'BLOQUEAR OPERADOR COM PEDIDO PEDENTE NAO EXPEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Bloq.Operador c/Pedido PEDENTE NAO Expedido[S/N]:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '121'
                                op_tela(10,10,12,110,'BLOQUEAR OPERADOR COM PEDIDO PEDENTE EXPEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Bloq.Operador c/Pedido PEDENTE EXEDIDO [S/N]....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '122'
                                op_tela(10,10,12,110,'QUANTIDADE DE DIAS PARA RECEBER PEDIDOS APOS PRAZO ESTIPULADO',,'*')
                                DEVPOS(1,1);DEVOUT('Qtd dias Receber PEDIDOS apos Prazo Estipulado..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '9999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '083'
                                op_tela(10,10,12,110,'FAZER RECEBIMENTO APOS PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Fazer o Recebimento apos Pedido [S/N] e [I]mprimir......:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N,I'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '078'
                                op_tela(10,10,12,110,'RECEBIMENTO PARCIAL DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Recebimento PARCIAL do Pedido [S/N].............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '119'
                                op_tela(10,10,12,110,'NO RECEBIMENTO INFORMAR CLIENTE',,'*')
                                DEVPOS(1,1);DEVOUT('No Recebimento informar Cliente [S/N]...........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '094'
                                op_tela(10,10,12,110,'DESCONTO NO RECEBIMENTO DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto no Recebimento do Pedido [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '111'
                                op_tela(10,10,12,110,'AUTENTICAR PEDIDO NO RECEBIMENTO/IMPRIMIR RESUMO DO RECEBIMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Aut.Pedido[S]/Imprimir Resumo do Recebimento [S/N/R].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N,R'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '062'
                                op_tela(10,10,12,110,'IMPRIMIR CARNES NO CAIXA',,'*')
                                DEVPOS(1,1);DEVOUT('Imprimir Carnes no Caixa [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '091'
                                op_tela(10,10,12,110,'Tipo de Fechamento do Caixa',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo de Fechamento do Caixa [A]ntigo [N]ovo.....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'A,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '011'
                                op_tela(10,10,12,110,'IMPRIMIR PAGINA DO PEDIDO INTEIRA OU MEIA',,'*')
                                DEVPOS(1,1);DEVOUT('Pag.<I>nteira <M>eia..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'I,M'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '022'
                                op_tela(10,10,12,110,'IMPRIMIR CABECALHO DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. Cabecalho do Pedido [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '039'
                                op_tela(10,10,12,110,'IMPRIMIR DADOS DO CLIENTE NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. Dados do cliente [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '040'
                                op_tela(10,10,12,110,'IMPRIMIR NOME FANTASIA DA EMPRESA NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. Nome Fantasia da Empresa [S/N].:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '081'
                                op_tela(10,10,12,110,'IMPRIMIR NOME DO VENDEDOR NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. Nome do Vendedor [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '110'
                                op_tela(10,10,12,110,'IMPRIMIR SALDO DEVEDOR DO CLIENTE NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. Saldo Devedor do Cliente [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '147'
                                op_tela(10,10,12,110,'IMPRIMIR PRODUTO COM COD. DO SISTEMA OU COD. BARRA NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. [C]odigo Sistema ou Codigo [B]arra..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'C,B'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '036'
                                op_tela(10,10,12,110,'IMPRIMIR DESCONTO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imprimir Desconto [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '025'
                                op_tela(10,10,15,110,'RODAPE DO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Rodape do Pedido:')
                                @ 1,19 GET m_set[1,VAL(mop)]
                                @ 2,19 GET m_set[1,26]
                                @ 3,19 GET m_set[1,27]
                                @ 4,19 GET m_set[1,28]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '174'
                                op_tela(10,10,12,110,'ORDEM DE IMPRESSAO DO PEDIDO E ORCAMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Ordem de Impressoa [A]lfabetica [C]Codigo [D]Digitado:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'A,C,D'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '045'
                                op_tela(10,10,12,110,'IMPRIMIR AS DUPLICATAS APOS O PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Imprimir as DUPLICATA [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '047'
                                op_tela(10,10,12,110,'IMPRIMIR AS DUPLICATAS APOS VENDA OU CAIXA',,'*')
                                DEVPOS(1,1);DEVOUT('Imp. duplicata apos [V]enda [C]aixa..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'V,C'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '172'
                                op_tela(10,10,12,110,'TIPO PARA EMISSAO DO BOLETO',,'*')
                                DEVPOS(1,1);DEVOUT('Tipo de BOLETO [A]CBR [S]istema..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'A,S'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '050'
                                op_tela(10,10,12,110,'MULTA APOS VENCIMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Multa apos Venc. [%]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '051'
                                op_tela(10,10,12,110,'JUROS AO DIA',,'*')
                                DEVPOS(1,1);DEVOUT('Juros ao dia [%]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '106'
                                op_tela(10,10,12,110,'TOLERANCIA DE DIAS',,'*')
                                DEVPOS(1,1);DEVOUT('Tolerancia de dias..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '9999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '118'
                                op_tela(10,10,12,110,'DESCONTO PARA DIAS ANTECIPADOS',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto [%] p/Dias Antecipados..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '052'
                                op_tela(10,10,13,110,'RODAPE DO BOLETO BANCARIO',,'*')
                                DEVPOS(1,1);DEVOUT('Rodape do Boleto Bancario:')
                                @ 1,28 GET m_set[1,VAL(mop)]
                                @ 2,28 GET m_set[1,53]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '056'
                                op_tela(10,10,17,110,'CONFIGURACAO DO BOLETO BANCARIO',,'*')
                                DEVPOS(1,1);DEVOUT('Configuracao do Boleto Bancario:')
                                @ 1,34 GET m_set[1,55]
                                @ 2,34 GET m_set[1,56]
                                @ 3,34 GET m_set[1,57]
                                @ 4,34 GET m_set[1,58]
                                @ 5,34 GET m_set[1,59]
                                @ 6,34 GET m_set[1,60]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '029'
                                op_tela(10,10,15,110,'DESCRICAO DO ACORDO DE PAGAMENTO',,'*')
                                DEVPOS(1,1);DEVOUT('Descricao do Acordo de PAGAMENTO:')
                                @ 1,35 GET m_set[1,VAL(mop)]
                                @ 2,35 GET m_set[1,30]
                                @ 3,35 GET m_set[1,31]
                                @ 4,35 GET m_set[1,32]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '042'
                                op_tela(10,10,12,110,'UTILIZA ORDEM DE SERVICO',,'*')
                                DEVPOS(1,1);DEVOUT('Utiliza ORDEM DE SERVICO [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '071'
                                op_tela(10,0,16,120,'OBSERVACAO DA ORDEM DE SERVICO',,'*')
                                DEVPOS(1,1);DEVOUT('OBSERVACAO:')
                                @ 1,13 GET m_set[1,VAL(mop)]
                                @ 2,13 GET m_set[1,72]
                                @ 3,13 GET m_set[1,73]
                                @ 4,13 GET m_set[1,74]
                                @ 5,13 GET m_set[1,75]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '114'
                                op_tela(10,10,12,110,'TOLERANCIA DE DESCONTO NA MERCADORIA',,'*')
                                DEVPOS(1,1);DEVOUT('Tolerancia de Desconto na Mercadoria..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '113'
                                op_tela(10,10,12,110,'% OU FATOR DE DESCONTO NA COMISSAO',,'*')
                                DEVPOS(1,1);DEVOUT('[%] ou Fator de Desconto na Comissao..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '115'
                                op_tela(10,10,12,110,'INFORMAR A COMISSAO NO PEDIDO',,'*')
                                DEVPOS(1,1);DEVOUT('Informa a Comissao no Pedido [S/N]..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '116'
                                op_tela(10,10,12,110,'DESCONTO COMISSAO PARA O TELEMARKET',,'*')
                                DEVPOS(1,1);DEVOUT('Desconto Comissao p/o Telemarket..:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999.99'
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '162'
                                op_tela(10,10,12,110,'QUANTIDADE DE PEDIDOS POR DIA PARA EXPEDICAO',,'*')
                                DEVPOS(1,1);DEVOUT('Quantidade de PEDIDOS por Dia para EXPEDICAO....:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '163'
                                op_tela(10,10,12,110,'QUANTIDADE DE ITENS POR DIA PARA EXPEDICAO',,'*')
                                DEVPOS(1,1);DEVOUT('Quantidade de ITENS por Dia para EXPEDICAO......:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '164'
                                op_tela(10,10,12,110,'QUANTIDADE DE PESO POR DIA PARA EXPEDICAO',,'*')
                                DEVPOS(1,1);DEVOUT('Quantidade de PESO por Dia para EXPEDICAO.......:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '999,999'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '165'
                                op_tela(10,10,12,110,'HOST DA CONTA DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('HOST da Conta do Email.......:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '166'
                                op_tela(10,10,12,110,'PORTA DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('PORTA do Email...............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '167'
                                op_tela(10,10,12,110,'LOGIN DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('LOGIN do Email..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '168'
                                op_tela(10,10,12,110,'SENHA DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('SENHA do Email..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '175'
                                op_tela(10,10,12,110,'FROM DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('FROM do Email..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '089'
                                op_tela(10,10,12,110,'CAMINHO DO APP...',,'*')
                                DEVPOS(1,1);DEVOUT('Caminho do APP.............:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)]
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '070'
                                op_tela(10,10,12,110,'Imprimir PROMISSORIA do Carne',,'*')
                                DEVPOS(1,1);DEVOUT('Imprimir PROMISSORIA do Carne [S/N]..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '@!' VALID m_set[1,VAL(mop)] $ 'S,N'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '181'
                                op_tela(10,10,12,110,'Tamanho do Codigo do Produto na Balanca',,'*')
                                DEVPOS(1,1);DEVOUT('Tamanho do Codigo do Produto na Balanca..........:')
                                @ 1,COL()+1 GET m_set[1,VAL(mop)] PICT '9'
                                READ
                                fecha_tela()
                                LOOP
                        ELSEIF mop = '991'
                                m_email:={}
                                sr_getconnection():exec("SELECT * FROM sacemail",,.t.,@m_email)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_email) = 0
                                        AADD(m_email,{SPACE(60),' ',SPACE(40),SPACE(40),SPACE(40),SPACE(40),SPACE(40),SPACE(40),SPACE(40)})
                                ENDIF
                                op_tela(10,10,20,110,'CONFIGURACAO DO EMAIL',,'*')
                                DEVPOS(1,1);DEVOUT('Copia de EMAIL Oculta:')
                                DEVPOS(2,1);DEVOUT('Confirma Leitura[S/N]:')
                                DEVPOS(3,1);DEVOUT('Assinatura do EMAIL..:')
                                @ 1,25 GET m_email[1,1]
                                @ 2,25 GET m_email[1,2] PICT '@!' VALID m_email[1,2] $ 'S,N'
                                @ 3,25 GET m_email[1,3]
                                @ 4,25 GET m_email[1,4]
                                @ 5,25 GET m_email[1,5]
                                @ 6,25 GET m_email[1,6]
                                @ 7,25 GET m_email[1,7]
                                @ 8,25 GET m_email[1,8]
                                @ 9,25 GET m_email[1,9]
                                READ
                                IF LASTKEY() = 27
                                        fecha_tela()
                                        LOOP
                                ENDIF
                                IF op_simnao('S','Confirma as Configuracoes:') = 'S'
                                        sr_getconnection():exec("UPDATE sacemail SET "+;
                                        " copia_email = "+sr_cdbvalue(m_email[1,1])+;
                                        ",conf_leitu  = "+sr_cdbvalue(m_email[1,2])+;
                                        ",assina1     = "+sr_cdbvalue(m_email[1,3])+;
                                        ",assina2     = "+sr_cdbvalue(m_email[1,4])+;
                                        ",assina3     = "+sr_cdbvalue(m_email[1,5])+;
                                        ",assina4     = "+sr_cdbvalue(m_email[1,6])+;
                                        ",assina5     = "+sr_cdbvalue(m_email[1,7])+;
                                        ",assina6     = "+sr_cdbvalue(m_email[1,8])+;
                                        ",assina7     = "+sr_cdbvalue(m_email[1,9]),,.f.)
                                        sr_getconnection():exec('COMMIT',,.f.)
                                ENDIF
                                fecha_tela()
                                LOOP
                        ELSE
                                LOOP
                        ENDIF
                        fecha_tela()
                        RETURN NIL
                CASE LASTKEY() = 27
                        IF op_simnao('S','Confirma as Configuracoes:') = 'S'
                                sr_getconnection():exec("UPDATE sacsetup SET "+;
                                " pis          = "+sr_cdbvalue(m_set[1,2])+;
                                ",confis       = "+sr_cdbvalue(m_set[1,3])+;
                                ",imposto      = "+sr_cdbvalue(m_set[1,4])+;
                                ",varejo       = "+sr_cdbvalue(m_set[1,5])+;
                                ",vlr_ent      = "+sr_cdbvalue(m_set[1,7])+;
                                ",sef          = "+sr_cdbvalue(m_set[1,8])+;
                                ",ped_obs      = "+sr_cdbvalue(m_set[1,9])+;
                                ",ven_cli      = "+sr_cdbvalue(m_set[1,10])+;
                                ",pagina       = "+sr_cdbvalue(m_set[1,11])+;
                                ",percent      = "+sr_cdbvalue(m_set[1,12])+;
                                ",nfe_ean      = "+sr_cdbvalue(m_set[1,14])+;
                                ",saldonf      = "+sr_cdbvalue(m_set[1,16])+;
                                ",cli_fecha    = "+sr_cdbvalue(m_set[1,17])+;
                                ",tp_cabe      = "+sr_cdbvalue(m_set[1,18])+;
                                ",uf           = "+sr_cdbvalue(m_set[1,19])+;
                                ",icm          = "+sr_cdbvalue(m_set[1,20])+;
                                ",tp_comi      = "+sr_cdbvalue(m_set[1,21])+;
                                ",cabecalho    = "+sr_cdbvalue(m_set[1,22])+;
                                ",cab_ped      = "+sr_cdbvalue(m_set[1,23])+;
                                ",cab_orc      = "+sr_cdbvalue(m_set[1,24])+;
                                ",rodap1       = "+sr_cdbvalue(m_set[1,25])+;
                                ",rodap2       = "+sr_cdbvalue(m_set[1,26])+;
                                ",rodap3       = "+sr_cdbvalue(m_set[1,27])+;
                                ",rodap4       = "+sr_cdbvalue(m_set[1,28])+;
                                ",acord1       = "+sr_cdbvalue(m_set[1,29])+;
                                ",acord2       = "+sr_cdbvalue(m_set[1,30])+;
                                ",acord3       = "+sr_cdbvalue(m_set[1,31])+;
                                ",acord4       = "+sr_cdbvalue(m_set[1,32])+;
                                ",desc_max     = "+sr_cdbvalue(m_set[1,33])+;
                                ",item_max     = "+sr_cdbvalue(m_set[1,34])+;
                                ",desc_apr     = "+sr_cdbvalue(m_set[1,35])+;
                                ",desc_ped     = "+sr_cdbvalue(m_set[1,36])+;
                                ",usa_carro    = "+sr_cdbvalue(m_set[1,37])+;
                                ",blo_vend     = "+sr_cdbvalue(m_set[1,38])+;
                                ",dado_cli     = "+sr_cdbvalue(m_set[1,39])+;
                                ",nome_fan     = "+sr_cdbvalue(m_set[1,40])+;
                                ",uti_os       = "+sr_cdbvalue(m_set[1,42])+;
                                ",desc_pdv     = "+sr_cdbvalue(m_set[1,43])+;
                                ",tp_mascara   = "+sr_cdbvalue(m_set[1,44])+;
                                ",duplicata    = "+sr_cdbvalue(m_set[1,45])+;
                                ",przantped    = "+sr_cdbvalue(m_set[1,46])+;
                                ",dup_imp      = "+sr_cdbvalue(m_set[1,47])+;
                                ",recbxdup     = "+sr_cdbvalue(m_set[1,48])+;
                                ",intervalo    = "+sr_cdbvalue(m_set[1,49])+;
                                ",multa_dup    = "+sr_cdbvalue(m_set[1,50])+;
                                ",juros_dup    = "+sr_cdbvalue(m_set[1,51])+;
                                ",roda_dup1    = "+sr_cdbvalue(m_set[1,52])+;
                                ",roda_dup2    = "+sr_cdbvalue(m_set[1,53])+;
                                ",local_bol    = "+sr_cdbvalue(m_set[1,55])+;
                                ",mens_bol1    = "+sr_cdbvalue(m_set[1,56])+;
                                ",mens_bol2    = "+sr_cdbvalue(m_set[1,57])+;
                                ",mens_bol3    = "+sr_cdbvalue(m_set[1,58])+;
                                ",mens_bol4    = "+sr_cdbvalue(m_set[1,59])+;
                                ",mens_bol5    = "+sr_cdbvalue(m_set[1,60])+;
                                ",fecha_cx     = "+sr_cdbvalue(m_set[1,61])+;
                                ",carnes       = "+sr_cdbvalue(m_set[1,62])+;
                                ",uti_tele     = "+sr_cdbvalue(m_set[1,69])+;
                                ",promissoria  = "+sr_cdbvalue(m_set[1,70])+;
                                ",obs_os1      = "+sr_cdbvalue(m_set[1,71])+;
                                ",obs_os2      = "+sr_cdbvalue(m_set[1,72])+;
                                ",obs_os3      = "+sr_cdbvalue(m_set[1,73])+;
                                ",obs_os4      = "+sr_cdbvalue(m_set[1,74])+;
                                ",obs_os5      = "+sr_cdbvalue(m_set[1,75])+;
                                ",ped_email    = "+sr_cdbvalue(m_set[1,76])+;
                                ",cx_email     = "+sr_cdbvalue(m_set[1,77])+;
                                ",rec_parc     = "+sr_cdbvalue(m_set[1,78])+;
                                ",tp_lucro     = "+sr_cdbvalue(m_set[1,79])+;
                                ",senha_pd     = "+sr_cdbvalue(m_set[1,80])+;
                                ",nome_ven     = "+sr_cdbvalue(m_set[1,81])+;
                                ",receber      = "+sr_cdbvalue(m_set[1,83])+;
                                ",cli_def      = "+sr_cdbvalue(m_set[1,84])+;
                                ",qtdchcli     = "+sr_cdbvalue(m_set[1,85])+;
                                ",caixa        = "+sr_cdbvalue(m_set[1,86])+;
                                ",embalag      = "+sr_cdbvalue(m_set[1,87])+;
                                ",loc_emb      = "+sr_cdbvalue(m_set[1,88])+;
                                ",nfe_p_h      = "+sr_cdbvalue(m_set[1,91])+;
                                ",seculo       = "+sr_cdbvalue(m_set[1,92])+;
                                ",situacao     = "+sr_cdbvalue(m_set[1,93])+;
                                ",desc_cax     = "+sr_cdbvalue(m_set[1,94])+;
                                ",nfe_modo     = "+sr_cdbvalue(m_set[1,95])+;
                                ",masc_num     = "+sr_cdbvalue(m_set[1,97])+;
                                ",masc_numt    = "+sr_cdbvalue(m_set[1,98])+;
                                ",masc_qtd     = "+sr_cdbvalue(m_set[1,99])+;
                                ",cli_ped      = "+sr_cdbvalue(m_set[1,100])+;
                                ",rotina       = "+sr_cdbvalue(m_set[1,101])+;
                                ",usa_dolar    = "+sr_cdbvalue(m_set[1,102])+;
                                ",aredonda     = "+sr_cdbvalue(m_set[1,103])+;
                                ",DUPL_PROD    = "+sr_cdbvalue(m_set[1,104])+;
                                ",ecf          = "+sr_cdbvalue(m_set[1,105])+;
                                ",dia_venc     = "+sr_cdbvalue(m_set[1,106])+;
                                ",SALDO_MENO   = "+sr_cdbvalue(m_set[1,107])+;
                                ",inf_ven      = "+sr_cdbvalue(m_set[1,108])+;
                                ",pergimpped   = "+sr_cdbvalue(m_set[1,109])+;
                                ",impslddev    = "+sr_cdbvalue(m_set[1,110])+;
                                ",aut_ped      = "+sr_cdbvalue(m_set[1,111])+;
                                ",altcodpr     = "+sr_cdbvalue(m_set[1,112])+;
                                ",desc_com     = "+sr_cdbvalue(m_set[1,113])+;
                                ",tole_com     = "+sr_cdbvalue(m_set[1,114])+;
                                ",info_com     = "+sr_cdbvalue(m_set[1,115])+;
                                ",d_comtele    = "+sr_cdbvalue(m_set[1,116])+;
                                ",bloqnnf      = "+sr_cdbvalue(m_set[1,117])+;
                                ",desc_dupr    = "+sr_cdbvalue(m_set[1,118])+;
                                ",cli_cx       = "+sr_cdbvalue(m_set[1,119])+;
                                ",nao_exp      = "+sr_cdbvalue(m_set[1,120])+;
                                ",sim_exp      = "+sr_cdbvalue(m_set[1,121])+;
                                ",prz_rec      = "+sr_cdbvalue(m_set[1,122])+;
                                ",DESC_PROD    = "+sr_cdbvalue(m_set[1,125])+;
                                ",simp_nac     = "+sr_cdbvalue(m_set[1,126])+;
                                ",imp_cod      = "+sr_cdbvalue(m_set[1,147])+;
                                ",aut_dup      = "+sr_cdbvalue(m_set[1,149])+;
                                ",lib_pd_or    = "+sr_cdbvalue(m_set[1,150])+;
                                ",tip_ecf      = "+sr_cdbvalue(m_set[1,151])+;
                                ",INF_REPR     = "+sr_cdbvalue(m_set[1,152])+;
                                ",qtdmaxpr     = "+sr_cdbvalue(m_set[1,153])+;
                                ",vlrmaxpr     = "+sr_cdbvalue(m_set[1,154])+;
                                ",com_sem      = "+sr_cdbvalue(m_set[1,155])+;
                                ",balanca      = "+sr_cdbvalue(m_set[1,159])+;
                                ",qtd_ped_exp  = "+sr_cdbvalue(m_set[1,162])+;
                                ",qtd_item_exp = "+sr_cdbvalue(m_set[1,163])+;
                                ",qtd_peso_exp = "+sr_cdbvalue(m_set[1,164])+;
                                ",HOST_EMAIL   = "+sr_cdbvalue(m_set[1,165])+;
                                ",PORTA_EMAIL  = "+sr_cdbvalue(m_set[1,166])+;
                                ",LOGIN_EMAIL  = "+sr_cdbvalue(m_set[1,167])+;
                                ",SENHA_EMAIL  = "+sr_cdbvalue(m_set[1,168])+;
                                ",minretpalm   = "+sr_cdbvalue(m_set[1,169])+;
                                ",tip_bole     = "+sr_cdbvalue(m_set[1,172])+;
                                ",tp_cod_sef   = "+sr_cdbvalue(m_set[1,173])+;
                                ",ord_ped      = "+sr_cdbvalue(m_set[1,174])+;
                                ",FROM_EMAIL   = "+sr_cdbvalue(m_set[1,175])+;
                                ",TIPO_BALANCA = "+sr_cdbvalue(m_set[1,179])+;
                                ",qtd_balanca  = "+sr_cdbvalue(m_set[1,181]),,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        m_set:={}
                        sr_getconnection():exec("SELECT * FROM sacsetup",,.t.,@m_set)
                        sr_getconnection():exec('COMMIT',,.f.)
                        fecha_tela()
                        exit
        ENDCASE
ENDDO
RETURN NIL
****************************** F I M ******************************