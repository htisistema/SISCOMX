******************************************
* FUNCAO PARA CALCULO DE CUSTO MERCADORIA
******************************************
MEMVAR getlist,nivel_acess

FUNCTION sac4cal
****************
LOCAL MPRG:='SAC4CAL'
LOCAL mtot_des,mp,mv,mdesc_aux,msoma

PRIVATE opcao,tela,lci,cci,lba,cba,micm,mvlr_nota,mfrete,mfrete_aux,mencargo_f,;
        mdisp_asse,mtot_vlr,mtot_vol,muf,mperc,msaldo_mer,menc_aux,mdisp_aux,;
        mpercent,MCONFIS,MPIS,mcod_merc,mmerc,mquantd,mp_lucro,mpr_unit,mdesc1,;
        mdesc2,mdesc3,mipi,mipi_aux,mvlr_merc,mcust_merc,mpr_venda,mlucro,;
        mpr_medio,mcust_real,mvlr_fat,mii:=0,mvlr_icmsub:=0,mimposto,mtot_icm,;
        msaldo_atu,mcod_forn,mfornece,mfabrica,mcod_op,mfob,mcif,mtransp,mnota,;
        tp_ipi,micm_firm:=0,mnivel_cal:='1'

IF ! ver_nivel(mprg,'CONSULTA DE CALCULO CUSTO MERCADORIA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lci := cci := 00
lba := 23
cba := 79

op_tela(00,00,24,79,'CONSULTA DE CALCULO CUSTO MERCADORIA')
*------------------------------------------------------------
CLOSE ALL
IF ! AbriArq('SACPED_E','PED_E');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('SACUF','TABUF');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
*------------------------------------------------------------
WHILE .T.
        MCONFIS := m_set[1,3]
        MPIS := m_set[1,2]
        mimposto := m_set[1,4]
        mpercent := m_set[1,12]
        micm_firm := m_set[1,20]
        mfrete := mfrete_aux := mencargo_f := menc_aux := mdisp_asse := mdisp_aux := ;
        msaldo_mer := mtot_vlr := mtot_vol := mtot_des := mperc := mipi := ;
        mtot_icm := msaldo_atu := mcod_forn := micm := 0
        mfornece := mfabrica := SPACE(30)
        mcod_op := muf := SPACE(2)
        mfob := mcif := mp := mv := SPACE(1)
        mtransp := SPACE(15)
        mnota := SPACE(8)
        DEVPOS(lci+1,cci+1);DEVOUT('Estado de Origem  (Sigla):')
        DEVPOS(lci+1,cci+31);DEVOUT('Aliquota (%):')
        DEVPOS(lci+2,cci+1);DEVOUT('Confis:')
        DEVPOS(lci+2,cci+15);DEVOUT('PIS:')
        DEVPOS(lci+2,cci+26);DEVOUT('Imp.Adic.:')
        DEVPOS(lci+2,cci+44);DEVOUT('IPI/Desc.:[%]:  [R$]:')
        @ lci+3,cci TO lci+3,cba
        DEVPOS(lci+4,cci+1);DEVOUT('Cod.Produto:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantd.....:')
        DEVPOS(lci+6,cci+1);DEVOUT('Valor......:')
        DEVPOS(lci+7,cci+1);DEVOUT('Desconto 1.:')
        DEVPOS(lci+8,cci+1);DEVOUT('Desconto 2.:')
        DEVPOS(lci+9,cci+1);DEVOUT('Desconto 3.:')
        DEVPOS(lci+10,cci+1);DEVOUT('IPI........:')
        DEVPOS(lci+11,cci+1);DEVOUT('Frete......:')
        DEVPOS(lci+12,cci+1);DEVOUT('Encargo....:')
        DEVPOS(lci+13,cci+1);DEVOUT('Despesas...:')
        DEVPOS(lci+14,cci+1);DEVOUT('Lucro......:')
        DEVPOS(lci+14,cci+21);DEVOUT('Lucro [P] % [F]ator:')
        DEVPOS(lci+14,cci+44);DEVOUT('Imp.Import.:')
        @ lci+15,cci TO lci+15,cba
        janela(lci+15,cba,' RESUMO CALCULOS DOS PRECOS ','*','*')
        janela(lci+15,cba,' Precos Anteriores ','*')
        DEVPOS(lci+16,cci+01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(lci+16,cci+14);DEVOUT(' Cus.Mercad.')
        DEVPOS(lci+16,cci+27);DEVOUT('  Custo Real')
        DEVPOS(lci+16,cci+40);DEVOUT(' Custo Medio')
        DEVPOS(lci+16,cci+53);DEVOUT(' Preco Venda')
        DEVPOS(lci+16,cci+66);DEVOUT('       Lucro')
        DEVPOS(lci+18,cci+01);DEVOUT('Saldo Atual da Mecadoria:')
        @ lci+19,cci TO lci+19,cba
        janela(lci+19,cba,' P R E C O S     C A L C U L A D O S ')
        DEVPOS(lci+20,cci+01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(lci+20,cci+14);DEVOUT(' Cus.Mercad.')
        DEVPOS(lci+20,cci+27);DEVOUT('  Custo Real')
        DEVPOS(lci+20,cci+40);DEVOUT(' Custo Medio')
        DEVPOS(lci+20,cci+53);DEVOUT(' Preco Venda')
        DEVPOS(lci+20,cci+66);DEVOUT('       Lucro')
        DEVPOS(lci+22,cci+01);DEVOUT('Saldo Apos a entrada:')
        setcor(3)
        DEVPOS(lci+17,cci+01);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+17,cci+14);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+17,cci+27);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+17,cci+40);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+17,cci+53);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+17,cci+66);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+18,cci+27);DEVOUTPICT(0,'999,999.99')

        DEVPOS(lci+21,cci+01);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+21,cci+14);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+21,cci+27);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+21,cci+40);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+21,cci+53);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+21,cci+66);DEVOUTPICT(0,'9,999,999.99')
        DEVPOS(lci+22,cci+23);DEVOUTPICT(0,'999,999.99')
        setcor(1)
        @ lci+1,cci+28 GET muf PICT '@!' VALID ver_uf(muf)
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                EXIT
        ENDIF
        setcor(3)
        DEVPOS(lci+1,cci+45);DEVOUT(TRANSFORM(mperc,'999.99'))
        setcor(1)
        @ lci+2,cci+9 GET mconfis PICT '999.99'
        @ lci+2,cci+20 GET mpis PICT '999.99'
        @ lci+2,cci+37 GET mimposto PICT '999.99'
        @ lci+2,cci+58 GET mp PICT '@!' VALID mp $ 'X, ' .AND. lim_get()        //WHEN men_get(lci+3,cci+22,'Se escolher [X] esta opcao o IPI e os DESCONTOS sera informado em PRECENTUAL')
        @ lci+2,cci+65 GET mv PICT '@!' VALID IF(EMPTY(mp) .AND. EMPTY(mv) .AND. LASTKEY() = 13,.F.,.T.) WHEN mp = ' '
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        micm := mperc
        IF mp == 'X'
                tp_ipi = 'PERCENTUAL'
        ELSE
                tp_ipi = 'VALOR (R$)'
        ENDIF
        ******************
        SELE('merc')
        ORDSETFOCUS(1)
        GO TOP
        ******************
        WHILE .T.
                mcod_merc := mquantd := mpr_unit := mdesc1 := mdesc2 := mdesc3 := ;
                mipi_aux := mfrete_aux := menc_aux := mdisp_aux := 0
                @ lci+4,cci+14 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,lci+4,cci+21,.F.,1)
                @ lci+5,cci+14 GET mquantd PICT '99,999.99' VALID IF(EMPTY(mquantd),.F.,.T.)
                @ lci+6,cci+14 GET mpr_unit PICT '999,999.9999' VALID IF(EMPTY(mpr_unit),.F.,.T.)
                @ lci+7,cci+14 GET mdesc1 PICT '999,999.9999'
                @ lci+8,cci+14 GET mdesc2 PICT '999,999.9999'
                @ lci+9,cci+14 GET mdesc3 PICT '999,999.9999'
                @ lci+10,cci+14 GET mipi_aux PICT '999,999.9999' VALID lim_get()
                @ lci+11,cci+14 GET mfrete_aux PICT '999,999.9999' VALID IF(mfob = 'X' .AND. EMPTY(mfrete_aux),.F.,.T.) WHEN mcif = ' '
                @ lci+12,cci+14 GET menc_aux PICT '999,999.9999'
                @ lci+13,cci+14 GET mdisp_aux PICT '999,999.9999'
                READ
                IF LASTKEY() = 27
                        EXIT
                ENDIF
                mfrete := (mfrete_aux/(mquantd*mpr_unit))
                mencargo_f := (menc_aux/(mquantd*mpr_unit))
                mdisp_asse := (mdisp_aux/(mquantd*mpr_unit))
                mp_lucro := merc->p_lucro
                WHILE .T.
                        @ lci+14,cci+14 GET mp_lucro PICT '999.99'
                        @ lci+14,cci+42 GET mpercent PICT '@!' VALID mpercent $ 'P,F'
                        @ lci+14,cci+57 GET mii PICT '99.99'
                        READ
                        IF LASTKEY() = 27
                                EXIT
                        ENDIF
                        IF mv = 'X'
                                mipi := (mipi_aux / (mquantd * mpr_unit)) * 100
                                mdesc_aux := (mdesc1 / (mquantd * mpr_unit)) * 100
                                mdesc1 := mdesc_aux
                                mdesc_aux := (mdesc2 / (mquantd * mpr_unit)) * 100
                                mdesc2 := mdesc_aux
                                mdesc_aux := (mdesc3 / (mquantd * mpr_unit)) * 100
                                mdesc3 := mdesc_aux
                        ELSEIF mp = 'X'
                                mipi := mipi_aux
                        ENDIF
                        calc_cus()
                        LOOP
                ENDDO
        ENDDO
ENDDO
wvw_lclosewindow()
RETURN NIL
