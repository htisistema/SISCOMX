**********************
* MENU DE ASSISTENCIAS e SOLICITACAO DE PEDIDOS
**********************
FUNCTION sacass1(mtp)
****************
LOCAL mprg:='SACASS1',;
      lci,cci,lba,cba,opcao

lci := 00
cci := 00
lba := 05
cba := 25
op_tela(lci,cci,lba,cba,' MENU DE '+IF(mtp=NIL,'ASSISTENCIA','SOLICITACAO')+' ')
WHILE .T.
        exibi_prg(mprg)
        @ 23,00 CLEAR TO 23,79
        setcor(1)
        @ lci,cci PROMPT   ' Inclusao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+'  ' MESSAGE '** Inclusao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+1,cci PROMPT ' Alteracao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' ' MESSAGE '** Alteracao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+2,cci PROMPT ' Exclusao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+'  ' MESSAGE '** Exclusao de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+3,cci PROMPT ' Baixa de '+IF(mtp=NIL,'Assistencia','Solicitacao')+'     ' MESSAGE '** Baixa de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+4,cci PROMPT ' Estorno de '+IF(mtp=NIL,'Assistencia','Solicitacao')+'   ' MESSAGE '** Estorno de Baixa de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'
        @ lci+5,cci PROMPT ' Relatorio de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' ' MESSAGE '** Relatorios de '+IF(mtp=NIL,'Assistencia','Solicitacao')+' de mercadoria - <ESC> Retornar **'

        SET INTEN ON
        MENU TO opcao

        IF LASTKEY() = 27
                wvw_lclosewindow()
                RETURN NIL
        ENDIF

        DO CASE
                CASE opcao = 1
                *          INCLUSAO DE ASSISTENCIA
                        sacass10(mtp)
                CASE opcao = 2
                *          ALTERACAO DE ASSISTENCIA
                        sacass11('A',mtp)
                CASE opcao = 3
                *          EXCLUSAO DE ASSISTENCIA
                        sacass11('E',mtp)
                CASE opcao = 4
                *          BAIXA DE ASSISTENCIA
                        sacass11('B',mtp)
                CASE opcao = 5
                *          ESTORNO DE BAIXA DE ASSISTENCIA
                        sacass12(mtp)
                CASE opcao = 6
                *          RELATORIOS DE ASSISTENCIA MERCADORIA
                        sacass2(mtp)
        ENDCASE
ENDDO
RETURN NIL
*********************************  F I M ***********************************
* IMPRESSAO DA ASSISTENCIA DE PRODUTOS
**************************************
FUNCTION imp_ass(mcodmerc,mdescr,mmot,mqtd,mcodven,mqtd_cop,mdat,mhor,mmot1,mmot2)
******************

LOCAL mtraco
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)
mtraco := REPLI(CHR(223),80)
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
IF ! imp_arq('ASSISTEN.REL','R')
        RETURN NIL
ENDIF

FOR i = 1 TO mqtd_cop
        imprt(mtipo_imp,'N')
        imprt(mtipo_imp,'E')
        DEVPOS(PROW(),00);DEVOUT(memp_resa)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,00);DEVOUT(RTRIM(m_set[1,132])+'-'+RTRIM(m_set[1,133])+'-'+RTRIM(m_set[1,134])+'-'+RTRIM(m_set[1,19])+' - Fone: '+m_set[1,136])
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY mtraco
        imprt(mtipo_imp,'E',1)
        @ PROW(),10 SAY 'ASSISTENCIA DE PRODUTOS'
        imprt(mtipo_imp,'C')
        @ PROW()+1,00 SAY 'Emissao:'
        @ PROW(),PCOL()+1 SAY mdat
        @ PROW(),PCOL()+2 SAY 'Hora:'
        @ PROW(),PCOL()+1 SAY mhor
        @ PROW(),PCOL()+2 SAY 'Ope:'
        @ PROW(),PCOL() SAY cod_operado
        @ PROW(),PCOL()+2 SAY 'Ven:'
        @ PROW(),PCOL() SAY mcodven
        imprt(mtipo_imp,'N')
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY 'Cliente......: '+STR(cli->cod_cli,5)+' - '+cli->razao
        @ PROW()+1,00 SAY 'Nome Fantasia: '+cli->nome
        IF ! EMPTY(cli->cgc)
                @ PROW()+1,00 SAY 'CNPJ.........:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cgc,'@@R 99.999.999/9999-99')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(' - Inscricao: '+cli->insc)
        ELSEIF ! EMPTY(cli->cpf)
                @ PROW()+1,00 SAY 'CPF..........:'
                DEVPOS(PROW(),PCOL()+1);DEVOUTPICT(cli->cpf,'@@R 999.999.999-99')
        ENDIF
        @ PROW()+1,00 SAY 'Responsavel..: '+cli->comprado
        @ PROW()+1,00 SAY 'Endereco.....: '+cli->endereco+', '+RTRIM(cli->numero)+IF(! EMPTY(RTRIM(cli->complemento)),' - Compl.:'+RTRIM(cli->complemento),'')
        @ PROW()+1,00 SAY 'Bairro.......: '+cli->bairro
        @ PROW()+1,00 SAY 'Cidade.......: '+cli->cidade+' - UF: '+cli->uf+' - CEP.: '+cli->cep
        @ PROW()+1,00 SAY 'Telefone.....: '+cli->tel1
        @ PROW()+1,00 SAY 'Rota.........: '+RTRIM(cli->rota)
        @ PROW(),00   SAY '               '+RTRIM(cli->rota)
        @ PROW()+1,00 SAY mtraco

        @ PROW()+1,00 SAY 'Codigo'
        @ PROW(),18 SAY 'Descricao'
        @ PROW(),60 SAY '    '
        @ PROW(),PCOL()+3 SAY ' Quantd.'
        @ PROW()+1,00 SAY mtraco
        @ PROW()+1,00 SAY mcodmerc+' - '+mdescr
        @ PROW(),PCOL()+20 SAY mqtd PICT '9999999'
        @ PROW()+1,00 SAY 'MOTIVO: '+mmot
        @ PROW()+1,00 SAY '        '+mmot1
        @ PROW()+1,00 SAY '        '+mmot2
        @ PROW()+1,00 SAY mtraco
        SETPRC(00,00)
        EJECT
        imprt(mtipo_imp,'N')
NEXT
f = 0
SET DEVICE TO SCREEN;SET PRINT TO;SET PRINT OFF
conf_impressao('ASSISTEN.REL')
RETURN NIL

