******************************************
* IMPRESSAO DE PEDIDOS CANCELADOS COMPLETO
******************************************

FUNCTION sac5pe21
*****************

LOCAL mtot_ped,mtot_desc,mtot_quant,mpoint,mdesconto,traco,;
      mtp_venda,mnum_ped,mperc,mcodcli,mcodvend,mdat_ped,mcust_real
MEMVAR mtraco,marq_ali,mdata1,mdata2,mpag,mtit,mtipo
PRIVATE mcliente,mtipo_imp,cons_cli:={}

mtraco := REPLI('=',80)
DO WHILE .T.
        ****************
        SELE(marq_ali);ORDSETFOCUS(5)
        GO TOP
        ****************
        (marq_ali)->(DBSEEK(DTOS(mdata1),.T.))
        IF EOF()
                atencao('Nao existe movimento neste periodo !!!')
                LOOP
        ENDIF
        mtipo_imp := m_indiv[1,18]
        mtot_ped := mtot_desc := mtot_quant := mdesconto := 0
        ver_cli(VAL((marq_ali)->pcod_cli),,,1)
        mdat_ped := (marq_ali)->pdat_ped
        mcodvend := VAL((marq_ali)->pcod_vend)
        mcodcli := VAL((marq_ali)->pcod_cli)
        mtraco := REPLI('=',80)
        mpag := 1
*       marq := 'RES_PED.REL'
*       IF ! imp_arq('RES_PED.REL','R')
*               LOOP
*       ENDIF
        mtit := 'Relatorio de Pedidos CANCELADOS COMPLETO'
        mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
        cabecalho(mpag,mtit,mtipo)
        imprt(mtipo_imp,'N')
        WHILE (marq_ali)->pdatapag <= mdata2 .AND. ! EOF()
*       WHILE ! EOF()
                prog_imp(RECNO())
                IF ((marq_ali)->ppag <> 'C');
                   .OR. (! EMPTY(mcodemp) .AND. mcodemp <> (marq_ali)->pempresa)
                        SKIP
                        LOOP
                ENDIF
                ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                mtot_ped := mtot_desc := mtot_quant := 0
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                ENDIF
                @ PROW()+1,00 SAY 'Orcamento No.:'
                @ PROW(),15 SAY (marq_ali)->pnum_ped
                @ PROW(),24 SAY 'CANCELADO'
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                ENDIF
                imprt(mtipo_imp,'N')
                @ PROW()+1,00 SAY 'Data de Cancelamento: '+DTOC((marq_ali)->pdatapag)
                DEVPOS(PROW()+1,00);DEVOUT(' ')
                IF VAL((marq_ali)->pcod_cli) > 0
                        @ PROW(),00 SAY 'Cliente:'
                        @ PROW(),PCOL()+1 SAY (marq_ali)->pcod_cli
                        @ PROW(),PCOL()+1 SAY mcliente
                        @ PROW()+1,00 SAY mtraco
                        @ PROW()+1,00 SAY 'Emissao:'
                ELSE
                        @ PROW(),00 SAY 'Emissao:'
                ENDIF
                @ PROW(),10 SAY (marq_ali)->pdat_ped
                @ PROW(),20 SAY 'Hora:'
                @ PROW(),26 SAY (marq_ali)->phora
                @ PROW(),37 SAY 'Cod.:'
                @ PROW(),43 SAY (marq_ali)->pcod_vend
                @ PROW()+1,00 SAY mtraco
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                ENDIF
                imprt(mtipo_imp,'C')
                @ PROW()+1,00 SAY 'Cod.'
                @ PROW(),08 SAY 'Descricao'
                @ PROW(),50 SAY 'UN'
                @ PROW(),55 SAY 'Quantd.'
                @ PROW(),66 SAY 'Valor Unit.'
                @ PROW(),80 SAY 'Desc.(R$)'
                @ PROW(),91 SAY 'Desc.(%)'
                @ PROW(),102 SAY 'Valor Venda'
                @ PROW(),117 SAY 'Valor Total'
                IF PROW() >= 59
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                ENDIF
                imprt(mtipo_imp,'N')
                @ PROW()+1,00 SAY mtraco
                mnum_ped := (marq_ali)->pnum_ped
                WHILE mnum_ped = (marq_ali)->pnum_ped .AND. ! EOF()
                        IF PROW() >= 59
                                mpag ++
                                EJECT
                                cabecalho(mpag,mtit,mtipo)
                        ENDIF
                        ver_cli(VAL((marq_ali)->pcod_cli),,,1)
                        imprt(mtipo_imp,'C')
                        IF (marq_ali)->ppre_venda > (marq_ali)->pvlr_fat
                                mdesconto =  ((marq_ali)->pquantd * (marq_ali)->pvlr_fat) - ((marq_ali)->pquantd * (marq_ali)->ppre_venda)
                                mperc := ((((marq_ali)->pquantd * (marq_ali)->ppre_venda) - ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)) / ((marq_ali)->pquantd * (marq_ali)->ppre_venda)) * 100
                        ELSE
                                mperc := mdesconto := 0
                        ENDIF
                        @ PROW()+1,00 SAY (marq_ali)->pcod_merc
                        @ PROW(),08 SAY (marq_ali)->pmerc
                        @ PROW(),50 SAY (marq_ali)->punidade
                        @ PROW(),53 SAY (marq_ali)->pquantd PICT '999999.99'
                        IF (marq_ali)->ppre_venda < (marq_ali)->pvlr_fat
                                @ PROW(),64 SAY (marq_ali)->pvlr_fat PICT '99,999,999.99'
                        ELSE
                                @ PROW(),64 SAY (marq_ali)->ppre_venda PICT '99,999,999.99'
                        ENDIF
                        @ PROW(),77 SAY mdesconto PICT '9,999,999.99'
                        @ PROW(),93 SAY mperc PICT '999.99'
                        @ PROW(),101 SAY (marq_ali)->pvlr_fat PICT '99,999,999.99'
                        mcust_real = (marq_ali)->pquantd * (marq_ali)->pvlr_fat
                        @ PROW(),116 SAY mcust_real PICT '99,999,999.99'
                        IF (marq_ali)->ppre_venda > (marq_ali)->pvlr_fat
                                mtot_desc = mtot_desc + ((marq_ali)->pquantd * (marq_ali)->ppre_venda)-((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                                mtot_ped = mtot_ped + ((marq_ali)->pquantd * (marq_ali)->ppre_venda)
                        ELSE
                                mtot_ped = mtot_ped + ((marq_ali)->pquantd * (marq_ali)->pvlr_fat)
                        ENDIF
                        mtot_quant = mtot_quant + (marq_ali)->pquantd
                        SKIP
                ENDDO
                IF PROW() >= 54
                        mpag ++
                        EJECT
                        cabecalho(mpag,mtit,mtipo)
                        imprt(mtipo_imp,'N')
                ENDIF
                imprt(mtipo_imp,'N')
                @ PROW()+1,00 SAY mtraco
                @ PROW()+1,00 SAY 'Volume Total:'
                @ PROW(),14 SAY STRZERO(mtot_quant,6)
                @ PROW()+1,00 SAY 'Sub-total:'
                @ PROW(),11 SAY mtot_ped PICT '99,999,999.99'
                @ PROW(),26 SAY 'Desconto:'
                @ PROW(),35 SAY mtot_desc PICT '99,999,999.99'
                @ PROW(),50 SAY 'Total da Nota:'
                mcust_real = mtot_ped - mtot_desc
                @ PROW(),65 SAY mcust_real PICT '99,999,999.99'
                @ PROW(),65 SAY mcust_real PICT '99,999,999.99'
                @ PROW()+1,00 SAY mtraco
                imprt(mtipo_imp,'N')
        ENDDO
        imprt(mtipo_imp,'N')
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        DBUNLOCKALL()
        RETURN NIL
ENDDO
RETURN NIL

