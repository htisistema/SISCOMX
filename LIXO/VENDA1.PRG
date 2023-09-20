*********************
* MENU DE PEDIDOS
*********************
#INCLUDE "wingdi.ch"
#INCLUDE "winuser.ch"
#INCLUDE "COMMCTRL.CH"

FUNCTION venda(mdir)
***************
LOCAL MPRG:='VENDA',opcao,tela,tecla,mt,mqtdcopped
PUBLIC mdata_sis:=DATE(),mnum_principal
Wvw_Setcodepage(,255) 
WVW_SetFont(,'Ms Sans Serif',20,,, PROOF_QUALITY )  // 1024X768
mnum_principal := wvw_nopenwindow('',00,00,50,120)
wvw_setmaincoord(.F.) 
wvw_noclose() 
wvw_SetPaintRefresh() 
wvw_SetVertCaret(.F.) 
wvw_maximize(0) 
WVW_CenterWindow(,.T.,.T.)
wvw_SetPaintRefresh(1) 
Wvw_SetTitle( ,memp_resa+SPACE(50)+' M E N U    D E    V E N D A S')   
msit_tip := 'VENDA'
exibi_prg(mprg)
opcao:=0
WVW_SBCreate()
WVW_SBAddPart(,,110,0,.F.)
WVW_SBSetText(,1,'{SAC0}')
WVW_SBAddPart(,,60,0,.F.)
WVW_SBSetText(,2,m_set[1,18])
WVW_SBAddPart(,,220,0,.F.)
WVW_SBSetText(,3,'Empresa: '+ALLTRIM(mcodempresa)+'-'+SUBSTR(memp_resa,1,20))
WVW_SBAddPart(,,80,0,.F.)
WVW_SBSetText(,4,'Operador: '+ALLTRIM(cod_operado))
WVW_SBAddPart(,,130,0,.F.)
WVW_SBSetText(,5,' >>SISCOM '+mversao+'<< ')
WVW_SBAddPart(,,235,0,.F.)
WVW_SBSetText(,6,'.:HTI Sistemas - (81)'+mfone_HTI+':.')

SET KEY 275 TO sac62()
SET KEY 306 TO SACEMAIL()       // ALT+M
SET MESSAGE TO MAXROW() CENTER
setcor(1)
IF ! senha();fim(,'*');ENDIF            // Solicita senha do sistema
setcor(1)
opcao:=0
//SETINKEYAFTERBLOCK({|nkey| AfterInkey(nkey)})
WHILE .T.
        limpa(MAXROW(),00,MAXROW(),79)
        exibi_prg(mprg)
        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
        *************************
        SELE('sen');ORDSETFOCUS(1)
        *************************
        ver_mensa(cod_operado)          //verifica mensagens
        CLOSE ALL
        //IF ! abriarq('saccfg','cfg');RETURN NIL;ENDIF
        setcor(1)
        botao(00,00,02,17)
        botao(00,18,02,35)
        botao(00,36,02,53)
        botao(00,54,02,71)

        botao(03,00,05,23)
        botao(03,24,05,47)
        botao(03,48,05,71)

        botao(06,00,08,23)
        botao(06,24,08,47)
        botao(06,48,08,71)

        botao(09,00,11,17)
        botao(09,18,11,35)
        botao(09,36,11,53)
        botao(09,54,11,71)
        @ 01,01 PROMPT ' 0 - Pedidos    ' MESSAGE '** Emissao de Pedidos - <ESC> p/Fim do sistema **'
        @ 01,19 PROMPT ' 1 - Orcamentos ' MESSAGE '** Emissao de Orcamentos - <ESC> p/Fim do sistema **'
        @ 01,37 PROMPT ' 2 - Trocas     ' MESSAGE '** Trocas de Mercadorias - <ESC> p/Fim do sistema **'
        @ 01,55 PROMPT ' Ordem Servico  ' MESSAGE '** Ordem de Servicos - <ESC> p/Fim do sistema **'
        @ 04,01 PROMPT ' 3 - Incl.Clientes    '  MESSAGE '** Inclusao, Alteracao e Exclusao de Cliente - <ESC> p/Fim do sistema **'
        @ 04,25 PROMPT ' 4 - Cons.Clientes    ' MESSAGE '** Consulta de Clientes - <ESC> p/Fim do sistema **'
        @ 04,49 PROMPT ' 5 - Emissao N.fiscal ' MESSAGE '** Emissao de nota fiscal <ESC> p/Fim do sistema **'
        @ 07,01 PROMPT ' 6 - Menu Pedidos     ' MESSAGE '** Entrega de Pedidos e Relatorios - <ESC> p/Fim do sistema **'
        @ 07,25 PROMPT ' 7 - Falta de Produto ' MESSAGE '** Lista de Falta de PRODUTOS - <ESC> p/Fim do sistema **'
        @ 07,49 PROMPT ' 8 - Calculadora      ' MESSAGE '** Calculadora **'
        @ 10,01 PROMPT ' 9 - Calendario ' MESSAGE '** Calendario **'
        @ 10,19 PROMPT ' Copia Pedido:'+STRZERO(cfg->qtdcopped,1) MESSAGE '** Quantidade de copias do pedido *'
        @ 10,37 PROMPT ' Relogio Ponto  ' MESSAGE '** Relogio de Ponto **'
        @ 10,55 PROMPT ' X - Fim      ' MESSAGE '** Sai do sistema **'
        SET INTEN ON
        MENU TO opcao
        setcor(1)

        IF LASTKEY() = 27 .OR. opcao = 14
                SET MESSAGE TO 24 CENTER
                fim('"SISCOM"-Sistema Integrado de Automacao Comercial ('+mversao+')')
                wvw_lclosewindow()
        ENDIF
        DO CASE
                CASE opcao = 1 
        *                 PEDIDOS
                        sac23(1,,02,01)
                 CASE opcao = 2
        *                 ORCAMENTOS
                        sac23(,1,02,19)
                 CASE opcao = 3
        *                 TROCA
                        sactroca()
                CASE opcao = 4 
        *               ORDEM SERVICOS
                        sacos1()
                CASE opcao = 5
        *                 INCLUSAO CLIENTE
                        *************
                        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
                        IF ! AbriArq('saccep','cep');RETURN NIL;ENDIF
                        //
                        IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
                        IF ! AbriArq('sactabme','tabme');RETURN NIL;ENDIF
                        IF ! AbriArq('regiao','reg');RETURN NIL;ENDIF
                        IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
                        set_key('cliente')
                        SELE('cli');ORDSETFOCUS(2)
                        GO TOP
                        *************
                        f7_cli('*')
                CASE opcao = 6
        *                 CONSULTA DE CLIENTES
                        sac42()
                CASE opcao = 7
        *                 EMISSAO DE NOTA FISCAL
                         sac210()
                CASE opcao = 8
        *                 ENTREGA DE PEDIDOS
                        mtel := SAVESCREEN(00,00,24,79)
                        botao(08,02,11,27,,' Menu Pedidos ')
                        setcor(9)
                        @ 09,03 PROMPT '  Entrega de Pedidos  ' MESSAGE '** Entrega de pedidos **'
                        @ 10,04 PROMPT '  Relatorio Pedidos   ' MESSAGE '** Relatorio de Pedidos/Entregue **'
                        SET INTEN ON
                        MENU TO op
                        IF LASTKEY() = 27
                                RESTSCREEN(00,00,24,79,mtel)
                                LOOP
                        ENDIF
                        DO CASE
                                CASE op = 1
                                        *     ENTREGA DE PEDIDOS
                                        RESTSCREEN(00,00,24,79,mtel)
                                        sacentre()
                                CASE op = 2
                                        *     ORCAMENTOS
                                        RESTSCREEN(00,00,24,79,mtel)
                                        sac5ped6()
                        ENDCASE
                CASE opcao = 9
                        sacpdflt()
                CASE opcao = 10
                        calcu()
                CASE opcao = 11
                        cale()
                CASE opcao = 12
                        mensagem('Pressione qualquer tecla p/continuar...')
                        INKEY(0)
                        IF LASTKEY() = 272      //alt+q
                                mqtdcopped:= m_indiv[1,11]
                                @ 19,29 SAY ' Qtd.Copia Ped.:'
                                @ 19,45 GET mqtdcopped PICT '9'
                                READ
                                BLOQREG()
                                m_indiv[1,11]:= mqtdcopped
                                DBCOMMIT()
                                DBUNLOCK()
                        ENDIF
                CASE opcao = 13
                        * RELOGIO DE PONTO
                        sacrl0()
        ENDCASE
ENDDO
RETURN NIL

************************************** F I M ***************************
