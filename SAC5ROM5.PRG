*****************************************************
* LISTAGEM RESUMO DE MOVIMENTO ROMANEIO
****************************************************
MEMVAR getlist,nivel_acess,mdata_sis

FUNCTION sac5rom5(ml,mn)
**************
LOCAL MPRG:='SAC5ROM5',;
      lci,cci,lba,cba,opcao,mnum_roma:=SPACE(6),malias,mtip_cons:=' ',;
      mvlr_roma,mqtd_roma,mpeso_roma,mped_roma,mtot_vlr,mtot_qtd,mtot_peso,mtot_ped

PRIVATE mtraco,mtit,mtipo,mpag,mdata1,mdata2,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mal,mno,ali

IF ! ver_nivel(mprg,'RELATORIO MOVIMENTO P/PEDIDO OU ORCAMENTOS','1456',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
ali := mal := ml
mno := mn

mtraco := REPLI('=',132)

lci := cci := 0
lba := 04
cba := 68
*----------------------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
//
IF ! AbriArq('sacorcam','orcam');RETURN NIL;ENDIF
IF ! AbriArq('sacped_s','ped_s');RETURN NIL;ENDIF
IF ! AbriArq('sacprodu','produ');RETURN NIL;ENDIF
IF ! AbriArq('sacroma','roma');RETURN NIL;ENDIF
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,' Relatorio de Romaneio Carga ')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        opcao := 0
        mdata1 := mdata_sis
        mdata2 := mdata_sis+30
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Tipo [P]edido [O]rcamento:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Inicial.............:')
        DEVPOS(lci+3,cci+2);DEVOUT('Data Final...............:')
        @ lci+1,cci+29 GET mtip_cons PICT '@!' VALID mtip_cons $ 'P,O'
        @ lci+2,cci+29 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+3,cci+29 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF mtip_cons = 'P'
                malias := 'ped_s'
        ELSE
                malias := 'orcam'
        ENDIF
        ****************
        SELE(mal);ORDSETFOCUS(3)
        GO TOP
        ****************
        (mal)->(DBSEEK(DTOS(mdata1),.T.))
        marq := 'REL_ROMA.REL'
        IF ! imp_arq('REL_ROMA.REL','R')
                LOOP
        ENDIF
        mvlr_roma := mqtd_roma := mpeso_roma:= mped_roma := mtot_vlr  :=;
        mtot_qtd  := mtot_peso := mtot_ped  :=0
        mpag = 1
        mtit := 'Relatorio de Romaneio de Carga'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo,mprg)
        imprt(mtipo_imp,'C')
        DEVPOS(PROW()+1,02);DEVOUT('Data')
        DEVPOS(PROW(),09);DEVOUT('Romaneio')
        DEVPOS(PROW(),19);DEVOUT('Motorista')
        DEVPOS(PROW(),30);DEVOUT('Placa Carro')
        DEVPOS(PROW(),43);DEVOUT('Cod.Oper.')
        DEVPOS(PROW(),53);DEVOUT('Qtd.Ped')
        DEVPOS(PROW(),61);DEVOUT('        Valor')
        DEVPOS(PROW(),75);DEVOUT('  Qtd.Prod.')
        DEVPOS(PROW(),87);DEVOUT(' Peso Total')
        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        WHILE (mal)->dat_roma <= mdata2 .AND. ! EOF()
                IF ! EMPTY((mal)->cancel);
                   .OR. (mtip_cons = 'P' .AND. ped_orc = 'O');
                   .OR. (mtip_cons = 'O' .AND. ped_orc = 'P')
                        SKIP
                        LOOP
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT((mal)->dat_roma)
                DEVPOS(PROW(),09);DEVOUT((mal)->num_roma)
                DEVPOS(PROW(),19);DEVOUT((mal)->cod_mot)
                DEVPOS(PROW(),30);DEVOUT((mal)->placa_mot)
                DEVPOS(PROW(),43);DEVOUT((mal)->cod_ope)
                mnum_roma := (mal)->num_roma
                WHILE mnum_roma = (mal)->num_roma .AND. ! EOF()
                        prog_imp(RECNO())
                        IF ! EMPTY((mal)->cancel);
                           .OR. (mtip_cons = 'P' .AND. ped_orc = 'O');
                           .OR. (mtip_cons = 'O' .AND. ped_orc = 'P')
                                SKIP
                                LOOP
                        ENDIF
                        ******************************
                        SELE((malias));ORDSETFOCUS(1)
                        GO TOP
                        ******************************
                        (malias)->(DBSEEK((mal)->num_ped))
                        WHILE (malias)->pnum_ped = (mal)->num_ped .AND. ! EOF()
                                prog_imp(RECNO())
                                mvlr_roma := mvlr_roma + ((malias)->pquantd * (malias)->pvlr_fat)
                                mpeso_roma := mpeso_roma + ((malias)->pquantd * (malias)->ppeso)
                                mqtd_roma := mqtd_roma + (malias)->pquantd
                                mtot_vlr := mtot_vlr + ((malias)->pquantd * (malias)->pvlr_fat)
                                mtot_peso := mtot_peso + ((malias)->pquantd * (malias)->ppeso)
                                mtot_qtd := mtot_qtd + (malias)->pquantd
                                SKIP
                        ENDDO
                        mtot_ped ++
                        mped_roma ++
                        ****************
                        SELE(mal);ORDSETFOCUS(3)
                        ****************
                        SKIP
                ENDDO
                DEVPOS(PROW(),53);DEVOUT(TRANSFORM(mped_roma,'999,999'))
                DEVPOS(PROW(),61);DEVOUT(TRANSFORM(mvlr_roma,'99,999,999.99'))
                DEVPOS(PROW(),75);DEVOUT(TRANSFORM(mqtd_roma,'999,999.999'))
                DEVPOS(PROW(),87);DEVOUT(TRANSFORM(mpeso_roma,'999,999.999'))
                mvlr_roma  := mpeso_roma := mqtd_roma  := mped_roma  := 0
                IF PROW() >= 57
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,02);DEVOUT('Data')
                        DEVPOS(PROW(),09);DEVOUT('Romaneio')
                        DEVPOS(PROW(),19);DEVOUT('Motorista')
                        DEVPOS(PROW(),30);DEVOUT('Placa Carro')
                        DEVPOS(PROW(),43);DEVOUT('Cod.Oper.')
                        DEVPOS(PROW(),53);DEVOUT('Qtd.Ped')
                        DEVPOS(PROW(),61);DEVOUT('        Valor')
                        DEVPOS(PROW(),75);DEVOUT('  Qtd.Prod.')
                        DEVPOS(PROW(),87);DEVOUT(' Peso Total')
                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                ENDIF
        ENDDO
        IF PROW() >= 55
                mpag ++
                EJECT
                cabecalho(mpag,mtit,mtipo)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,02);DEVOUT('Data')
                DEVPOS(PROW(),09);DEVOUT('Romaneio')
                DEVPOS(PROW(),19);DEVOUT('Motorista')
                DEVPOS(PROW(),30);DEVOUT('Placa Carro')
                DEVPOS(PROW(),43);DEVOUT('Cod.Oper.')
                DEVPOS(PROW(),53);DEVOUT('Qtd.Ped')
                DEVPOS(PROW(),61);DEVOUT('        Valor')
                DEVPOS(PROW(),75);DEVOUT('  Qtd.Prod.')
                DEVPOS(PROW(),87);DEVOUT(' Peso Total')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
        ENDIF
        DEVPOS(PROW()+1,53);DEVOUT('-------')
        DEVPOS(PROW(),61);DEVOUT('-------------')
        DEVPOS(PROW(),75);DEVOUT('-----------')
        DEVPOS(PROW(),87);DEVOUT('-----------')
        DEVPOS(PROW()+1,53);DEVOUT(TRANSFORM(mtot_ped,'999,999'))
        DEVPOS(PROW(),61);DEVOUT(TRANSFORM(mtot_vlr,'99,999,999.99'))
        DEVPOS(PROW(),75);DEVOUT(TRANSFORM(mtot_qtd,'999,999.999'))
        DEVPOS(PROW(),87);DEVOUT(TRANSFORM(mtot_peso,'999,999.999'))
        DEVPOS(PROW()+2,00);DEVOUT(TIME())
        imprt(mtipo_imp,'N')
        EJECT
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('REL_ROMA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************

