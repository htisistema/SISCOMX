****************************
* EMITE PLANILHA DE CADASTRAMENTO DE CLIENTE
****************************
MEMVAR getlist

FUNCTION sac5pla1

LOCAL lci,cci,lba,cba,opcao,tela1,mquantd,traco,i
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := 07
cci := 08
lba := 19
cba := 74
opcao := SPACE(1)
traco := REPLI('-',80)
tela1 := SAVESCREEN(00,00,24,79)
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mquantd := 1
        mquantd := mensagem2('Quantidade de Copias:',mquantd,'99',,'N')
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ENDIF
        IF ! imp_arq('PLANILHA.REL','R')
                RESTSCREEN(00,00,24,79,tela1)
                RETURN NIL
        ENDIF
        //SET DEVI TO PRINT
        //SET PRINT TO (m_indiv[1,17])
        FOR i = 1 TO  mquantd
                imprt(mtipo_imp,'E')
                DEVPOS(PROW(),00);DEVOUT(RTRIM(m_set[1,129]))
                imprt(mtipo_imp,'N')
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('End.: '+RTRIM(m_set[1,132])+' - '+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+m_set[1,19])
                DEVPOS(PROW()+1,00);DEVOUT('Fone: '+m_set[1,136]+'              Inscr.: '+m_set[1,128]+' / C.G.C.: ')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' C A D A S T R O   D E   C L I E N T E ',80))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+2,00);DEVOUT('Razao Social: ........................................   Data Nasc.:.../.../...')
                DEVPOS(PROW()+2,00);DEVOUT('Nome Fantas.: ........................................   Tipo Cliente: ......  ')
                DEVPOS(PROW()+2,00);DEVOUT('CNPJ        :..........................   Insc.:.......................        ')
                DEVPOS(PROW()+2,00);DEVOUT('CPF:.................... RG.:...............  Orgao:....... Emissao:.../.../...')
                DEVPOS(PROW()+2,00);DEVOUT('Endereco :.....................................................................')
                DEVPOS(PROW()+2,00);DEVOUT('Bairro   :...........................  Cidade:.......................... UF:...')
                DEVPOS(PROW()+2,00);DEVOUT('CEP      :.................... e-mail:.........................................')
                DEVPOS(PROW()+2,00);DEVOUT('Fone     :.................... Fone:...................... Fax:................')
                DEVPOS(PROW()+2,00);DEVOUT('Comprador:..................... Contato:..................... Area:............')
                DEVPOS(PROW()+2,00);DEVOUT('Limite  : R$:........................        Cod.Vendedor Responsavel:.........')
                DEVPOS(PROW()+2,00);DEVOUT('Endereco p/Cobranca:...........................................................')
                DEVPOS(PROW()+2,00);DEVOUT('Bairro   :...........................  Cidade:.......................... UF:...')
                DEVPOS(PROW()+2,00);DEVOUT('Fone     :.............................                                        ')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,00);DEVOUT(PADC(' D A D O S   C O M E R C I A I S ',80))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+2,00);DEVOUT('Empresa onde Trabalha:.........................................................')
                DEVPOS(PROW()+2,00);DEVOUT('Cargo:.....................................  Salario R$:.......................')
                DEVPOS(PROW()+2,00);DEVOUT('Endereco :.....................................................................')
                DEVPOS(PROW()+2,00);DEVOUT('Bairro   :...........................  Cidade:.......................... UF:...')
                DEVPOS(PROW()+2,00);DEVOUT('CEP      :.................... Fone:.................... Fax:..................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Pessoal:.................................. Fone:....................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Pessoal:.................................. Fone:....................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Loja   :.................................. Desde:...................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Loja   :.................................. Desde:...................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Banco  :......................... Ag.:......... C/C:................')
                DEVPOS(PROW()+2,00);DEVOUT('Referencia Cartao :.................... No.:................. Venc.:.../.../...')
                DEVPOS(PROW()+4,00);DEVOUT(PADC(' Data:...../...../.....  Ass. do Cliente:.................................',80))
                EJECT
                SETPRC(00,00)
        NEXT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('PLANILHA.REL')
        RETURN NIL

ENDDO
RETURN NIL
******************************* F I M ******************************8

