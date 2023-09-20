***********************************************
* RELATORIO DO RESUMO GERAL DE TODAS AS NOTAS FISCAIS
***********************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5not6
*****************
LOCAL MPRG:='SAC5NOT6',;
      tela1,lba,cba,mop,opcao,mtraco,mdata1,mdata2,;
      mtot_d1,mtot_int,mtot_ext,micm_d1,micm_int,micm_ext,mpag,mtit,mtipo

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO RESUMO GERAL DAS NOTAS FISCAIS','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lba := 04
cba := 60
*-----------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('SACMOVNT','MOVNT');RETURN NIL;ENDIF
IF ! AbriArq('SACOP','OP');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(0,0,lba+2,cba,' Resumos Notas Fiscais Emitidas ')

WHILE .T.
        exibi_prg(mprg)
        mtipo_imp := m_indiv[1,18]
        mtot_d1 := micm_d1 := mtot_int := micm_int := mtot_ext := micm_ext := 0
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mensagem('Preencha os Campos - <ESC>p/Sair')
        @ 1,0 TO 1,cba
        DEVPOS(0,2);DEVOUT('Data Inicial......:')
        DEVPOS(2,2);DEVOUT('Data Final........:')

        @ 0,22 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,22 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ELSE
                ****************
                SELE('movnt');ORDSETFOCUS(1)
                GO TOP
                ****************
                movnt->(DBSEEK(DTOS(mdata1),.T.))

                IF EOF()
                        atencao('Nao existe movimento neste periodo !!!')
                        LOOP
                ENDIF
                mensagem('Espere o Final da impressao OK !!! - <ESC> Imterrompe a Impressao')
                IF ! imp_arq('NOTA_FIS.REL','R')
                        LOOP
                ENDIF
                mpag := 1
                mtit := 'Relatorio do Resumo Geral das Notas'
                mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                cabecalho(mpag,mtit,mtipo,mprg)
                WHILE movnt->data_s_e <= mdata2 .AND. ! EOF()
                        IF movnt->cod_nat = SPACE(4) .OR. movnt->tipo <> '03' .OR. movnt->cancel = 'C'
                                SKIP
                                LOOP
                        ENDIF
                        IF movnt->cod_nota = 'B'
                                mtot_d1 := mtot_d1 + (movnt->quantd*movnt->vl_fatura) + ((movnt->quantd*movnt->vl_fatura)*movnt->icm_f)
                                micm_d1 := micm_d1 + ((movnt->quantd*movnt->vl_fatura)*(movnt->icm/100))
                        ELSEIF m_set[1,19] = movnt->uf_cli
                                mtot_int := mtot_int + (movnt->quantd*movnt->vl_fatura) + ((movnt->quantd*movnt->vl_fatura)*movnt->icm_f)
                                micm_int := micm_int + ((movnt->quantd*movnt->vl_fatura)*(movnt->icm/100))
                        ELSE
                                mtot_ext := mtot_ext + (movnt->quantd*movnt->vl_fatura) + ((movnt->quantd*movnt->vl_fatura)*movnt->icm_f)
                                micm_ext := micm_ext + ((movnt->quantd*movnt->vl_fatura)*(movnt->icm/100))
                        ENDIF
                        SKIP
                ENDDO
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+4,00);DEVOUT(REPLI('*',80))
                DEVPOS(PROW()+1,00);DEVOUT('Total das Notas "D1" .............:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_d1,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('- ICMS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(micm_d1,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total das Notas S/U Estaduais ....:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_int,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('- ICMS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(micm_int,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Total das Notas S/U Interestaduais:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ext,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('- ICMS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(micm_ext,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                DEVPOS(PROW()+1,00);DEVOUT('Total das Notas S/U ..............:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ext+mtot_int,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('- ICMS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(micm_ext+micm_int,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('=',80))
                DEVPOS(PROW()+1,00);DEVOUT('Total Geral das Notas ............:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ext+mtot_int+mtot_d1,'99,999,999.99'))
                DEVPOS(PROW(),PCOL()+2);DEVOUT('- ICMS:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(micm_ext+micm_int+micm_d1,'99,999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('*',80))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('NOTA_FIS.REL')
                RETURN NIL
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************

