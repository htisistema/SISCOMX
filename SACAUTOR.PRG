*********************
* MENU DE AUTORIZACAO
*********************
FUNCTION sacautor(mdir)
***************
LOCAL MPRG:='SACAUTOR',;
      opcao,tela,tecla,lci,cci,lba,cba,mt,mqtdcopped

PUBLIC rl_pd[15]        //,mnum_principal

msit_tip := 'VENDA'
exibi_prg(mprg)

lci:=08
cci:=25
lba:=21
cba:=52
opcao:=0
Wvw_Setcodepage(,255)
wvw_setmaincoord(.F.)
SetMode(50,100)
mnum_principal := wvw_nopenwindow('',00,00,50,120)
Wvw_SetTitle( ,memp_resa+SPACE(50)+'SOLICITACAO DE AUTORIZACAO' )
wvw_noclose()
wvw_SetPaintRefresh()
wvw_SetVertCaret(.F.)
wvw_maximize(0)
WVW_CenterWindow(,.T.,.T.)
wvw_SetPaintRefresh(1)

IF ! senha();fim(,'*');ENDIF            // Solicita senha do sistema

setcor(1)
opcao:=0
WHILE .T.
        SET KEY 278 TO autorizar()       // ALT+U (SACROT)
        exibi_prg(mprg)
        IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
        *************************
        SELE('sen');ORDSETFOCUS(1)
        *************************
        botao(10,10,13,70)
        setcor(3)
        DEVPOS(11,11);DEVOUT('Tecle: <ALT> + <U> para iniciar a sessao de AUTORIZACAO')
        DEVPOS(12,11);DEVOUT('Tecle: <ESC> p/ Sair a sessao')
        setcor(1)
        INKEY(0)
        IF LASTKEY() = 278
                autorizar()
        ENDIF
        IF LASTKEY() = 27
                wvw_lclosewindow()
                fim('"SISCOM"-Sistema Integrado de Automacao Comercial ('+mversao+')')
                opcao = 14
                LOOP
        ENDIF
ENDDO
RETURN NIL
************************************** F I M ***************************
