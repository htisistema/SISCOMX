****************************
* MOVIMENTACAO DE VISITAS
****************************

FUNCTION sac6212

LOCAL mprg:='SAC6212',mtitulo:='RELATORIO DE VISITAS'
LOCAL lci,cci,lba,cba,opcao,tela,mdata1,mdata2,mtit,mtipo,mhora_ini,mcod_tec,;
      mhora_ant:=0,mdia
LOCAL mtot_dura:=0,mtot_horas:=0,mtot_intev:=0,;
      mdia_dura:=0,mdia_horas:=0,mdia_intev:=0

PRIVATE traco,mcliente,mcpf,mcgc,mnome_vend,mcom_ven,mcod_cli
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,mtitulo,'156',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

opcao := SPACE(1)
traco := REPLI('=',80)
lci := 06
cci := 1
lba := 13
cba := 78
tela := SAVESCREEN(00,00,24,79)
********************************************
IF ! AbriArq('sacctvis','ctvis');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
SELE('ctvis')
ORDSETFOCUS(1)
********************************************
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        mdata1 := CTOD('  /  /  ')
        mdata2 := CTOD('  /  /  ')
        mdia := CTOD('  /  /  ')
        mhora_ini := '  :  :  '
*       mhora_fim := '  :  :  '
        mtot_dura:=0
        mtot_horas:=0
        mtot_intev:=0
        mdia_dura:=0
        mdia_horas:=0
        mdia_intev:=0
        mhora_ant := 0
        mcod_tec := 0
        mcod_cli := 0
        mcliente := SPACE(40)
        botao(lci,cci,lba,cba,,mtitulo)
        setcor(1)
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final..:')
        DEVPOS(lci+3,cci+2);DEVOUT('Hora Inicial:')
        DEVPOS(lci+4,cci+2);DEVOUT('Cod.Tecnico.:')
        DEVPOS(lci+5,cci+2);DEVOUT('Cod.Cliente.:')
        @ lci+1,cci+17 GET mdata1
        @ lci+2,cci+17 GET mdata2  VALID IF(mdata1 > mdata2,.F.,.T.)
        @ lci+3,cci+17 GET mhora_ini PICT '99:99:99' VALID IF(EMPTY(mhora_ini),.F.,.T.)
 *      @ lci+3,COL()+1 GET mhora_fim PICT '99:99:99'
        @ lci+4,cci+17 GET mcod_tec PICT '999' VALID ven(mcod_tec,lci+4,cci+21)    //IF(EMPTY(mcod_tec),.F.,ven(mcod_tec,lci+4,cci+21))
        @ lci+5,cci+17 GET mcod_cli PICT '99999' VALID ver_cli(mcod_cli,lci+5,cci+23)
        READ
        IF LASTKEY() = 27
                RESTSCREEN(00,00,24,79)
                RETURN NIL
        ENDIF
/*
        mh := hr_seg(ELAPTIME(mhora_ini,mhora_fim))
        DEVPOS(lci+6,cci+2);DEVOUT(mh)
        DEVPOS(lci+7,cci+2);DEVOUT(ELAPTIME(mhora_ini,mhora_fim))
        DEVPOS(lci+8,cci+2);DEVOUT(TSTRING(mh))
        INKEY(0)
*/
        ****************************
        SELE('ctvis');ORDSETFOCUS(1)
        GO TOP
        ****************************
        ctvis->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                RESTSCREEN(00,00,24,79,tela)
                RETURN NIL
        ENDIF
        IF ! imp_arq('R_VISITA.REL','R')
                LOOP
        ENDIF
        mtit := 'RELATORIO DE VISITAS A CLIENTE'
        mtipo := 'Operador: '+STRZERO(mcod_tec,3)+'-'+sen->snome
        pag=0
        mhora_ant := mhora_ini
        mdia := ctvis->data_visi
        WHILE ctvis->data_visi <= mdata2 .AND. ! EOF()
                IF pag=0 .OR. PROW()>=59
                        pag=pag+1
                        IF pag>1
                                EJECT
                        ENDIF
                        cabecalho(pag,mtit,mtipo,mprg)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT('  Data  ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Cliente                             ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Hr.Inic.')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Hr.Final')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Duracao ')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Intervalo')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Tec')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Ope')
                        DEVPOS(PROW(),PCOL()+2);DEVOUT('Data Proc')
                        imprt(mtipo_imp,'N')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        imprt(mtipo_imp,'C')
                ENDIF
                IF ! EMPTY(mcod_tec) .AND. STRZERO(mcod_tec,3) <> ctvis->cod_tec
                        SKIP
                        mdia := ctvis->data_visi
                        LOOP
                ENDIF
                IF ! EMPTY(mcod_cli) .AND. STRZERO(mcod_cli,5) <> ctvis->cod_cli
                        SKIP
                        mdia := ctvis->data_visi
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(DTOC(ctvis->data_visi))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('Hora de Inicio de Trabalho          ')
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mhora_ini)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(mhora_ini)
                DEVPOS(PROW(),PCOL()+2);DEVOUT(ELAPTIME(ctvis->hora_ini,ctvis->hora_ini))
                WHILE mdia = ctvis->data_visi
                        IF ! EMPTY(mcod_tec) .AND. STRZERO(mcod_tec,3) <> ctvis->cod_tec
                                SKIP
                                LOOP
                        ENDIF
                        IF ! EMPTY(mcod_cli) .AND. STRZERO(mcod_cli,5) <> ctvis->cod_cli
                                SKIP
                                LOOP
                        ENDIF
                        DEVPOS(PROW()+1,00);DEVOUT(DTOC(ctvis->data_visi))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(ctvis->cod_cli)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(LEFT(ctvis->cliente,30))
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(ctvis->hora_ini)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(ctvis->hora_fim)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(ELAPTIME(ctvis->hora_ini,ctvis->hora_fim))
                        IF ! EMPTY(mhora_ant)
                                DEVPOS(PROW(),PCOL()+2);DEVOUT(TSTRING(hr_seg(ELAPTIME(mhora_ant,ctvis->hora_ini))))
                                mtot_horas:= mtot_horas + (hr_seg(ELAPTIME(ctvis->hora_ini,ctvis->hora_fim)) + hr_seg(ELAPTIME(mhora_ant,ctvis->hora_ini)))
                                mtot_intev:= mtot_intev + hr_seg(ELAPTIME(mhora_ant,ctvis->hora_ini))
                                mdia_horas:= mdia_horas + (hr_seg(ELAPTIME(ctvis->hora_ini,ctvis->hora_fim)) + hr_seg(ELAPTIME(mhora_ant,ctvis->hora_ini)))
                                mdia_intev:= mdia_intev + hr_seg(ELAPTIME(mhora_ant,ctvis->hora_ini))
                        ENDIF
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(ctvis->cod_tec)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(ctvis->cod_oper)
                        DEVPOS(PROW(),PCOL()+2);DEVOUT(DTOC(ctvis->data_proc))
                        mhora_ant := ctvis->hora_fim
                        mtot_dura := mtot_dura + (hr_seg(ELAPTIME(ctvis->hora_ini,ctvis->hora_fim)))
                        mdia_dura := mdia_dura + (hr_seg(ELAPTIME(ctvis->hora_ini,ctvis->hora_fim)))
                        SKIP
                ENDDO
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',132))
                DEVPOS(PROW()+1,37);DEVOUT('Total de Geral.....: '+TSTRING(mdia_horas))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TSTRING(mdia_dura))
                DEVPOS(PROW(),PCOL()+2);DEVOUT(TSTRING(mdia_intev))
                DEVPOS(PROW()+1,00);DEVOUT('  ')
                mdia_horas:=0
                mdia_intev:=0
                mdia_dura :=0
                mhora_ant := mhora_ini
                mdia := ctvis->data_visi
        ENDDO
        DEVPOS(PROW()+1,00);DEVOUT('******************* RESUMO *******************')
        DEVPOS(PROW()+1,00);DEVOUT('Total de Geral.....: '+TSTRING(mtot_horas))
        DEVPOS(PROW()+1,00);DEVOUT('Total no Cliente...: '+TSTRING(mtot_dura))
        DEVPOS(PROW()+1,00);DEVOUT('Total de Intervalos: '+TSTRING(mtot_intev))
        EJECT
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('R_VISITA.REL')
ENDDO
******************************** f i m **************************************
* TRANFORMAR HORAS EM SEGUNDOS
******************************
FUNCTION hr_seg(mhoras)
***********************
LOCAL nh:=0
nh:= VAL(SUBSTR(mhoras,1,2))*3600 + VAL(SUBSTR(mhoras,4,2))*60 + VAL(SUBSTR(mhoras,7,2))
RETURN nh
