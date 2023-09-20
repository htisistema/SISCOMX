********************
* ENTRADA DE PRODUTO
********************
MEMVAR nivel_acess,mdata_sis,cod_operado,getlist,memp_resa,mend_firm,mcid_firm,;
       mfone_firm,minsc_firm,mcgc_firm

FUNCTION sac22_1
****************
LOCAL MPRG:='SAC22_1',mtitulo:='ENTRADA DE PRODUTO <NOVA>',;
      op,i,point,msaldo_atu,mmensagem,;
      m_transp:={},m_point:={},mcod_aux,mqtd_ent:={},mquantd_aux,;
      mpreco_aux,mvlr_base,mcod_nat,mtp_nota:='  ',mreg,y:=0,mtela_per,;
      aret:={},cComm,m_param:={},mtot_p,cons_ped:={},mgramatura:=0,machou:=0

PRIVATE opcao,tela,lci,cci,lba,cba,mcod_forn,mfornece,mnum_ped,f4,mp,mv,;
        mdat_ped,mped_forn,mdata_ped,micm,mfob,mcif,mdia1,mdia2,mdia3,mdia4,mdia5,;
        mtransp,mnota,mvol_nota,mvlr_nota,mcomprador,mrecebedor,memissao,msaida,;
        mchegada,mfrete,mfrete_aux,mencargo_f,mdisp_asse,mtot_vlr,mtot_vol,mcod_op,;
        mfabrica,muf,mperc,msaldo_mer,menc_aux,mdisp_aux,mpercent,MCONFIS,mpis,;
        mcod_merc,mgru_sub,mmerc,mcod_bc,mquantd,tp_ipi,mtot_des,msoma,mimposto,;
        munidade,mp_lucro,mpr_unit,mdesc1,mdesc2,mdesc3,mipi,mipi_aux,mpeso,;
        mvlr_merc,mcust_merc,mpr_venda,mlucro,mpr_medio,mcust_real,mvlr_fat,;
        mvlr_ent,mavista,m_entrada:={},m_demo:={},mii:=0,mii_aux:=0,mvlr_icmsub:=0,mbas_icmsu:=0,;
        micm_firm:=0,mcus_merc := 0,mcus_real := 0,mvl_nota,mvl_base,mdesc_aux,mnivel_cal:=' ',;
        mserie:=SPACE(3),mcfop,micmsub:=0,mmodelo:='  ',mvalor_icm:=0,muf_forn:='  ',;
        mnatureza,mcredito,msai_ent,mper_vlr,mper_qtd,m_tipo4:={},;
        mpr_unit4:=0,mvlr_merc4:=0,mcust_mer4:=0,mcust_rea4:=0,mpr_venda4:=0,;
        mpr_medio4:=0,mtot_icm:=0,mtot_ipi:=0,msaldo_ant:=0,set_aredonda,set_vlr_ent,mvarejo:=1,mnorm_ele:= 'N',;
        nulo:='NULL',mtot_icmsub := 0,mvlr_icm_sub := 0,mtipo_icmsub:='I',cons_pede,mvlricmsub

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
lci := cci := 0
lba = 23
cba = 90
*------------------------------------------------------------
IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('sacdolar','dolar');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacuf','tabuf');RETURN NIL;ENDIF
IF ! AbriArq('sacdupp','dupp');RETURN NIL;ENDIF
IF ! AbriArq('sactran','tran');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*------------------------------------------------------------
//SET KEY 281 TO f4_merc('*')           // inclusao de PRODUTO ALT+P
SET KEY -9 TO alt_dados()
***************
set_aredonda := m_set[1,103]
set_vlr_ent  := m_set[1,7]
micm_firm := m_set[1,20]
mpis := m_set[1,2]
mconfis := m_set[1,3]
mimposto := m_set[1,4]
mpercent := m_set[1,12]
mvlr_ent := m_set[1,7]
mavista := SPACE(1)
set_key('forn')
op_tela(00,05,27,95,mtitulo)
WHILE .T.
        exibi_prg(mprg)
        limpa(0,0,33,100)
        mnatureza:=SPACE(40)
        mcredito := msai_ent := ' '
        micm_firm := m_set[1,20]
        memissao  := mchegada  := mdata_sis
        mtot_vlr   := mtot_vol := mtot_icm := mtot_vlr := mtot_des :=;
        mtot_ipi   := mvol_nota := mvlr_nota := msoma := msaldo_atu := ;
        mnum_ped   := micm := mfrete := mfrete_aux := mencargo_f := menc_aux :=;
        mdisp_asse := mdisp_aux := msaldo_mer := mperc := mvlr_base := mcod_forn :=;
        mvalor_icm    := mvlr_icmsub := mbas_icmsub := mper_vlr := mper_qtd := mtot_icmsub := 0
        i          := 1
        ASIZE(m_entrada,0)
        ASIZE(m_tipo4,0)
        ASIZE(m_demo,0)
        ASIZE(m_transp,0)
        ASIZE(m_point,0)
        ASIZE(mqtd_ent,0)
        mped_forn  := SPACE(6)
        mfornece   := mfabrica   := SPACE(30)
        mcod_op    := SPACE(2)
        mavista    := mfob := mcif := SPACE(1)
        mdia1      := mdia2 := mdia3 := mdia4 := mdia5 := ;
        mdia6      := mdia7 := mdia8 := mdia9 := mdia10 := SPACE(3)
        mnota      := SPACE(6)
        mtransp    := mcomprador := mrecebedor := SPACE(15)
        mv         := mnivel_cal := SPACE(1)
        mp         := 'X'
        mcod_nat   := SPACE(5)
        mdata_ped  := msaida := CTOD('  /  /  ')
        mmodelo    := '01'
        mtipo_icmsub:='I'
        SET INTEN ON
        mensagem('Preencha os Campos - <ESC> p/ Retornar')
        janela(lci,cci,' Informacoes de Impostos da Empresa ','*',1)
        DEVPOS(lci+1,cci+1);DEVOUT('ICM(%):')
        DEVPOS(lci+1,cci+14);DEVOUT('PIS(%):')
        DEVPOS(lci+1,cci+28);DEVOUT('Confis(%):')
        DEVPOS(lci+1,cci+45);DEVOUT('Outros Impostos(%):')
        @ lci+2,cci TO lci+2,cba
        janela(lci+2,cci,' Informacoes do Fornecedor ','*',1)
        DEVPOS(lci+3,cci+1);DEVOUT('No.Int.: ')
        DEVPOS(lci+3,cci+18);DEVOUT('No.Ped.:')
        DEVPOS(lci+3,cci+34);DEVOUT('Fornec.:')
        @ lci+4,cci TO lci+4,cba
        janela(lci+4,cci,' Informacoes da Nota ','*',1)
        DEVPOS(lci+5,cci+1);DEVOUT('Nivel:')
        DEVPOS(lci+5,cci+09);DEVOUT('FOB:')
        DEVPOS(lci+5,cci+15);DEVOUT('CIF:')
        DEVPOS(lci+5,cci+21);DEVOUT('Pag.:Av.:')
        DEVPOS(lci+5,cci+32);DEVOUT('Dias:')
        DEVPOS(lci+6,cci+1);DEVOUT('Numero:')
        DEVPOS(lci+6,cci+17);DEVOUT('Volume:')
        DEVPOS(lci+6,cci+37);DEVOUT('Valor:')
        DEVPOS(lci+6,cci+57);DEVOUT('Base ICMS:')
        DEVPOS(lci+7,cci+1);DEVOUT('Valor ICMS:')
        DEVPOS(lci+7,cci+32);DEVOUT('CFOP:')
        DEVPOS(lci+7,cci+44);DEVOUT('Serie:')
        DEVPOS(lci+7,cci+54);DEVOUT('Modelo:')
        DEVPOS(lci+7,cci+65);DEVOUT('Tipo de Nota:')
        DEVPOS(lci+8,cci+1);DEVOUT('Emissao:')
        DEVPOS(lci+8,cci+20);DEVOUT('Saida:')
        DEVPOS(lci+8,cci+37);DEVOUT('Chegada:')
        DEVPOS(lci+8,cci+56);DEVOUT('Frete:')
        DEVPOS(lci+9,cci+01);DEVOUT('Encargos:')
        DEVPOS(lci+9,cci+26);DEVOUT('Desp.Asse.:')
        DEVPOS(lci+10,cci+1);DEVOUT('Vlr.ICM Subst.:')
        DEVPOS(lci+10,cci+29);DEVOUT('Base ICM Subst.:')
        DEVPOS(lci+10,cci+59);DEVOUT('Tipo ICM-SUB [I]ndiv. [G]eral:')
        
        @ lci+11,cci TO lci+11,cba
        janela(lci+11,cci,' Mercadorias Solicitadas ','*',1)
        DEVPOS(lci+12,cci+1);DEVOUT('Cod.Produto:')
        DEVPOS(lci+12,cci+63);DEVOUT('UN:')
        DEVPOS(lci+13,cci+1);DEVOUT('CFOP......:')
        DEVPOS(lci+14,cci+1);DEVOUT('Quantidade:')
        DEVPOS(lci+15,cci+1);DEVOUT('Lucro (%).:')
        DEVPOS(lci+16,cci+1);DEVOUT('Vlr.Unit..:')
        DEVPOS(lci+17,cci+1);DEVOUT('ICMS (%)..:')
        DEVPOS(lci+18,cci+1);DEVOUT('Gramatura.:')
        DEVPOS(lci+19,cci+1);DEVOUT('Desconto..:')
        DEVPOS(lci+20,cci+1);DEVOUT('IPI (%)...:')
        DEVPOS(lci+21,cci+1);DEVOUT('I.I (%)...:')
        DEVPOS(lci+22,cci+1);DEVOUT('Vl.ICM Sub:             (%) de Agregado:')

        botao(lci+14,cci+49,lci+21,cci+76,,' Valores Atuais  ')
        DEVPOS(lci+15,cci+50);DEVOUT('Vlr.Mercad.:')
        DEVPOS(lci+16,cci+50);DEVOUT('Cus.Mercad.:')
        DEVPOS(lci+17,cci+50);DEVOUT('Custo Real.:')
        DEVPOS(lci+18,cci+50);DEVOUT('Custo Medio:')
        DEVPOS(lci+19,cci+50);DEVOUT('Preco Venda:')
        DEVPOS(lci+20,cci+50);DEVOUT('Lucro R$...:')
        DEVPOS(lci+21,cci+50);DEVOUT('Saldo Atual:             ')
        @ lci+23,cci TO lci+23,cba
        janela(lci+23,cci,' RESULTADOS ','*',1)   
        DEVPOS(lci+24,cci+1);DEVOUT('Volume Informado:')
        DEVPOS(lci+24,cci+1);DEVOUT('Volume Informado:')
        DEVPOS(lci+24,cci+35);DEVOUT('Valor Informado:')
        DEVPOS(lci+25,cci+1);DEVOUT('Volume Digitados:')
        DEVPOS(lci+25,cci+35);DEVOUT('Valor Digitados:')
        DEVPOS(lci+25,cci+65);DEVOUT('Itens Digitados:')
        DEVPOS(lci+26,cci+19);DEVOUT('-----------')
        DEVPOS(lci+26,cci+52);DEVOUT('------------')
        DEVPOS(lci+27,cci+1);DEVOUT('Diferenca Vol...:')
        DEVPOS(lci+27,cci+35);DEVOUT('Difierenca Vlr.:')
        mcod_aux := SPACE(1)
        setcor(1)
        @ 35,00 GET mcod_aux PICT '9' VALID mcod_aux $ '1,2,3,4,9'
        READ
        IF LASTKEY() = 27
                RELEASE ALL
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        Wvw_SetTitle( ,' Entrada de Mercadoria '+mcod_aux)
        mcod_op = STRZERO(VAL(mcod_aux),2)
        IF mcod_op = '04'
                mtela_per := SAVESCREEN(00,00,24,79)
                botao(04,10,07,50,,' Percentual de Nota ')
                DEVPOS(05,11);DEVOUT('Percentual do Valor.....:')
*               DEVPOS(06,11);DEVOUT('Percentual da Quantidade:')
                @ 05,37 GET mper_vlr PICT '999.99'
*               @ 06,37 GET mper_qtd PICT '999.99'
                READ
                IF EMPTY(mper_vlr) .AND. EMPTY(mper_qtd)
                        atencao('Este modulo tem que ser informado algum percentual !!!')
                        RESTSCREEN(00,00,24,79,mtela_per)
                        LOOP
                ENDIF
                opcao := op_simnao('S','Confirma os percentuais:')
                RESTSCREEN(00,00,24,79,mtela_per)
                IF opcao = 'N';LOOP;ENDIF
        ENDIF
        IF mcod_op <> '09'
                IF mcod_op = '02'
                        micm_firm := mpis := mconfis :=0
                ENDIF
                @ lci+1,cci+08 GET micm_firm PICT '99.99'       //VALID lim_get() WHEN men_get(lci+2,cci+9,'Informe o percentual de ICM do Estado ou ENTER p/continuar')
                @ lci+1,cci+21 GET mpis PICT '999.99' WHEN m_set[1,8] <> 'N'
                @ lci+1,cci+38 GET mconfis PICT '999.99' WHEN m_set[1,8] <> 'N'
                @ lci+1,cci+64 GET mimposto PICT '999.99' WHEN m_set[1,8] <> 'N'
                @ lci+3,cci+10 GET mnum_ped PICT '999999' WHEN m_set[1,8] <> 'N'      //.AND. men_get(lci+4,cci+13,'Informe o No.do pedido interno ou ENTER p/continuar') VALID lim_get()
                READ
                IF LASTKEY() = 27
                        fimset()
                        RELEASE ALL
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                setcor(3)
                DEVPOS(lci+3,cci+10);DEVOUT(STRZERO(mnum_ped,6))
                setcor(1)
                IF ! EMPTY(mnum_ped)
                        cons_pede:={}
                        sr_getconnection():exec( "SELECT * FROM sacped_e WHERE num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_pede)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(cons_pede) = 0
                                atencao('Pedido nao encontrado...')
                                LOOP
                        ENDIF
                        IF cons_pede[1,1] = '*'
                                atencao('Este Pedido ja foi Processado !!!')
                                LOOP
                        ENDIF
                        mped_forn:= cons_pede[1,2]
                        mdata_ped := cons_pede[1,4]
                        memissao := cons_pede[1,4]
                        mcod_forn := VAL(cons_pede[1,15])
                        mfornece := cons_pede[1,16]
                        mcif := cons_pede[1,21]
                        mfob := cons_pede[1,20]
                        IF cons_pede[1,26] = 'AV'
                                mavista = 'X'
                        ELSE
                                mdia1 := cons_pede[1,26]
                        ENDIF
                        mdia2 := cons_pede[1,27]
                        mdia3 := cons_pede[1,28]
                        mdia4 := cons_pede[1,29]
                        mdia5 := cons_pede[1,30]
                        mtransp := cons_pede[1,32]
                        mcomprador := cons_pede[1,19]
                        mfrete_aux := cons_pede[1,31]
                        menc_aux := cons_pede[1,33]
                        mdisp_aux := cons_pede[1,34]
                        IF cons_pede[1,22] = 'P'
                                mp := 'X'
                        ELSE
                                mv := 'X'
                        ENDIF
                ENDIF
                @ lci+3,cci+27 GET mped_forn PICT '999999'      //WHEN men_get(lci+4,cci+36,'Informe o No.do pedido fornecedor ou ENTER p/continuar') VALID lim_get()
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                IF EMPTY(mnum_ped)
                        f6_forn()
                ENDIF
                @ lci+3,cci+42 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,ent_forn(@mcod_forn,lci+3,cci+47))
                READ
                setcor(3)
                DEVPOS(lci+3,cci+42);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(lci+3,cci+47);DEVOUT(forn->razao)
                muf_forn := muf := forn->uf
                mfornece := forn->razao
                setcor(1)
                ver_uf(muf)
                micm := mperc
                IF LASTKEY() = 27;LOOP;ENDIF
                opcao := 'S'
                IF mcod_op = '02' .OR. mcod_op = '04'
                        micm_firm = 0
                ENDIF
                @ lci+5,cci+7 GET mnivel_cal PICT '@!' VALID mnivel_cal $ '1,2,3'       //.AND. lim_get() WHEN men_get(lci+6,cci+7,'Nivel [1]: Verifica dos os dados valor total da NOTA e volume - NIVEL [2]: Verifica o Volume e o preco de venda e calculado so o percentual de lucro')
                @ lci+5,cci+13 GET mfob PICT '@!' VALID mfob $ 'X, '    //.AND. lim_get() WHEN men_get(lci+6,cci+13,'Se o frete for pago pela empresa ou ENTER p/continuar')
                @ lci+5,cci+19 GET mcif PICT '@!' VALID mcif $ 'X, ' WHEN mfob = ' ' 
                @ lci+5,cci+30 GET mavista PICT '@!' VALID mavista $ 'X, '      //.AND. lim_get() WHEN men_get(lci+6,cci+42,'Informe os dias de prazo para pagamento p/que possa ser Gerada a DUPLICATA A PAGAR')
                @ lci+5,cci+37 GET mdia1 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+41 GET mdia2 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+45 GET mdia3 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+49 GET mdia4 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+53 GET mdia5 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+57 GET mdia6 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+61 GET mdia7 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+65 GET mdia8 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+69 GET mdia9 PICT '999'WHEN mavista = ' '
                @ lci+5,cci+73 GET mdia10 PICT '999'WHEN mavista = ' '
                @ lci+6,cci+09 GET mnota PICT '@!' VALID ver_ent()
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                IF mcod_op = '02'
                        mtp_nota := 'PD'
                ELSE
                        mtp_nota := 'NF'
                ENDIF
                mensagem('Fazendo Pesquisa da NOTA FISCAL se ja foi Processada Aguarde......')
                aret:={}
                cComm  := "select sr_recno from sacmov where sacmov.documento = "+sr_cdbvalue(mtp_nota+mnota)+" AND sacmov.ent_sai = 'E' AND sacmov.cod_forn = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                sr_getconnection():exec( cComm,,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                setcor(1)
                *************
                IF LEN(aret) > 0
                //IF mov->(DBSEEK(mtp_nota+mnota+'  '+'E'+STRZERO(mcod_forn,4)))
                        atencao('Esta Nota ja foi processada')
                        LOOP
                ENDIF
                mensagem('Preencha os Campos - <ESC> p/ Retornar')
                @ lci+6,cci+25 GET mvol_nota PICT '999,999.999' VALID IF(EMPTY(mvol_nota),.F.,.T.)
                @ lci+6,cci+43 GET mvlr_nota PICT '9,999,999.99' VALID IF(EMPTY(mvlr_nota),.F.,.T.)
                @ lci+6,cci+67 GET mvlr_base PICT '9,999,999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3').AND. m_set[1,8] <> 'N'
                @ lci+7,cci+12 GET mvalor_icm PICT '999,999.99' VALID IF(mvalor_icm > mvlr_base,.F.,.T.) WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. m_set[1,8] <> 'N'
                @ lci+7,cci+38 GET mcod_nat PICT '9.999' VALID IF(EMPTY(mcod_nat),.F.,ver_nat(mcod_nat,'E')) WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. m_set[1,8] <> 'N'
                READ
                @ lci+7,cci+51 GET mserie PICT '@!' WHEN m_set[1,8] <> 'N'
                @ lci+7,cci+62 GET mmodelo PICT '@!' WHEN m_set[1,8] <> 'N'
                @ lci+7,cci+79 GET mnorm_ele PICT '@!' VALID mnorm_ele $ 'N,E' .AND. lim_get() WHEN men_get(0,0,'Informe os [N]->p/Nota Fiscal NORMAL ou [E]-> p/Nota Fiscal ELETRONICA')
                @ lci+8,cci+10 GET memissao PICT '99/99/99'
                @ lci+8,cci+27 GET msaida PICT '99/99/99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. m_set[1,8] <> 'N'
                @ lci+8,cci+46 GET mchegada PICT '99/99/99' VALID IF(EMPTY(mchegada),.F.,.T.)
                @ lci+8,cci+62 GET mfrete_aux PICT '999,999.99' VALID IF(mfob = 'X' .AND. EMPTY(mfrete_aux),.F.,.T.) WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. mcif = ' ' .AND. m_set[1,8] <> 'N'
                @ lci+9,cci+11 GET menc_aux PICT '999,999.99'   //WHEN mnivel_cal = '1'
                @ lci+9,cci+38 GET mdisp_aux PICT '999,999.99'  //WHEN mnivel_cal = '1'
                @ lci+10,cci+17 GET mvlr_icmsub PICT '999,999.99' WHEN m_set[1,8] <> 'N'      //.AND. WHEN mnivel_cal = '1'
                @ lci+10,cci+47 GET mbas_icmsub PICT '999,999.99' VALID IF(mbas_icmsub <= mvlr_icmsub,.F.,.T.) WHEN m_set[1,8] <> 'N' .AND. mvlr_icmsub > 0      //.AND. WHEN mnivel_cal = '1'
                //@ lci+10,cci+89 GET mtipo_icmsub PICT '@!' VALID lim_get() WHEN m_set[1,8] <> 'N' .AND. mvlr_icmsub > 0 .AND. men_get(0,0,'Informe [I] Para infomar o ICM-SUB por Produto [G]eral o ICM-SUB FRACIONADO para todos os Produtos')
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                DEVPOS(lci+24,cci+19);DEVOUT(TRANSFORM(mvol_nota,'999,999.999'))
                DEVPOS(lci+24,cci+52);DEVOUT(TRANSFORM(mvlr_nota,'9,999,999.99'))

                IF muf_forn <> 'EX'
                        mcfop := mcod_nat
                        IF ! EMPTY(mnum_ped)
                                ASIZE(mqtd_ent,0)
                                mquantd := mquantd_aux := cons_pede[1,10]
                                mpreco_aux := mvlr_fat := cons_pede[1,14]
                                mipi_aux := cons_pede[1,36]
                                i:=0
                                FOR i = 1 TO LEN(cons_pede)
                                        AADD(mqtd_ent,{cons_pede[i,6],cons_pede[i,10]})
                                        mtot_des := (cons_pede[i,14] * cons_pede[i,10])
                                        IF cons_pede[i,22] = 'R'
                                                mtot_des := mtot_des - cons_pede[i,23] * cons_pede[i,10]
                                                mtot_des := mtot_des - cons_pede[i,24] * cons_pede[i,10]
                                                mtot_des := mtot_des - cons_pede[i,25] * cons_pede[i,10]
                                                mtot_vlr := mtot_vlr + (mtot_des + (cons_pede[i,36]*cons_pede[i,10]))
                                        ELSE
                                                mtot_des := mtot_des - (mtot_des * (cons_pede[i,23] / 100))
                                                mtot_des := mtot_des - (mtot_des * (cons_pede[i,24] / 100))
                                                mtot_des := mtot_des - (mtot_des * (cons_pede[i,25] / 100))
                                                mtot_vlr := mtot_vlr + (mtot_des + (mtot_des * (cons_pede[i,36]/100)))
                                        ENDIF
                                        mtot_vlr := iat(mtot_vlr,2)
                                        mtot_vol := mtot_vol + cons_pede[i,10]
                                        mtot_des := 0
                                        DEVPOS(lci+25,cci+19);DEVOUT(TRANSFORM(mtot_vol,'999,999.999'))
                                        DEVPOS(lci+25,cci+52);DEVOUT(TRANSFORM(mtot_vlr,'9,999,999.99'))
                                        DEVPOS(lci+25,cci+82);DEVOUT(TRANSFORM(LEN(mqtd_ent),'9,999'))
                                        DEVPOS(lci+27,cci+19);DEVOUT(TRANSFORM(mvol_nota - mtot_vol,'999,999.999'))
                                        DEVPOS(lci+27,cci+52);DEVOUT(TRANSFORM(mvlr_nota - mtot_vlr,'9,999,999.99'))
                                        SKIP
                                NEXT
                        ENDIF
                        opcao := op_simnao('S','Confirma os dados da Nota Fiscal:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                IF mfrete_aux + menc_aux > mvlr_nota
                                        atencao('Frete mais encargos esta maior que valor da nota !!!')
                                        LOOP
                                ENDIF
                                mfrete := mfrete_aux / (mvlr_nota - mfrete_aux)
                                mencargo_f := (menc_aux/mvlr_nota)
                                mdisp_asse := (mdisp_aux/mvlr_nota)
                                msoma := mtot_vlr - (mvlr_nota - mfrete_aux - menc_aux - mvlr_icmsub)
                                IF msoma > set_vlr_ent .OR. msoma < (set_vlr_ent * -1) .OR. mtot_vol <> mvol_nota
                                        IF ! EMPTY(mnum_ped)
                                                mmensagem := SAVESCREEN(12,09,22,60)
                                                setcor(3)
                                                botao(12,10,21,60)
                                                setcor(1)
                                                DEVPOS(13,12);DEVOUT('Valor da Nota:')
                                                DEVPOS(14,12);DEVOUT('Valor Pedido.:')
                                                DEVPOS(15,12);DEVOUT('Diferenca....:')
                                                DEVPOS(16,12);DEVOUT('Volume Nota..:')
                                                DEVPOS(17,12);DEVOUT('Volume Pedido:')
                                                DEVPOS(18,12);DEVOUT('Diferenca....:')
                                                setcor(3)
                                                DEVPOS(13,27);DEVOUT(TRANSFORM(mvlr_nota - menc_aux - mfrete_aux,'999,999,999.99'))
                                                DEVPOS(14,27);DEVOUT(TRANSFORM(mtot_vlr,'999,999,999.99'))
                                                DEVPOS(15,27);DEVOUT(TRANSFORM(mtot_vlr - (mvlr_nota - menc_aux - mfrete_aux),'999999,999.99'))
                                                DEVPOS(16,27);DEVOUT(TRANSFORM(mvol_nota,'999999.999'))
                                                DEVPOS(17,27);DEVOUT(TRANSFORM(mtot_vol,'999999.999'))
                                                DEVPOS(18,27);DEVOUT(TRANSFORM(mvol_nota - mtot_vol,'999999.999'))
                                                setcor(1)
                                                @ 19,11 TO 19,59
                                                SETCOLOR('i')
                                                DEVPOS(20,12);DEVOUT('Pressione qualquer tecla p/continuar')
                                                setcor(1)
                                                INKEY(0)
                                                RESTSCREEN(12,09,22,60,mmensagem)
                                        ENDIF
                                        mtot_vlr := mtot_vol := 0
                                        ASIZE(m_tipo4,0)
                                        ASIZE(m_entrada,0)
                                        ASIZE(m_demo,0)
                                        WHILE .T.
                                                botao(lci+14,cci+49,lci+21,cci+76,,' Valores Atuais  ')
                                                DEVPOS(lci+15,cci+50);DEVOUT('Vlr.Mercad.:')
                                                DEVPOS(lci+16,cci+50);DEVOUT('Cus.Mercad.:')
                                                DEVPOS(lci+17,cci+50);DEVOUT('Custo Real.:')
                                                DEVPOS(lci+18,cci+50);DEVOUT('Custo Medio:')
                                                DEVPOS(lci+19,cci+50);DEVOUT('Preco Venda:')
                                                DEVPOS(lci+20,cci+50);DEVOUT('Lucro R$...:')
                                                DEVPOS(lci+21,cci+50);DEVOUT('Saldo Atual:             ')

                                                mmerc := SPACE(40)
                                                munidade := SPACE(3)
                                                mp_lucro := mpr_unit := mvlr_merc := mcus_merc := mcus_real :=;
                                                mpr_venda := mpr_medio := mlucro := mdesc1 := mdesc2 := mdesc3 := mipi := ;
                                                mipi_aux := mii := mii_aux := mpeso := mquantd := mcod_merc := ;
                                                mdesc_aux := mvlr_merc4 := mcus_merc4 := mcus_real4 := mpr_venda4 := ;
                                                mpr_medio4 := mpr_unit4 := 0
                                                setcor(3)
                                                DEVPOS(lci+12,cci+14);DEVOUTPICT(mcod_merc,'9999')
                                                DEVPOS(lci+12,cci+20);DEVOUT(mmerc)
                                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                                IF mp == 'X'
                                                        tp_ipi = 'PERCENTUAL'
                                                ELSE
                                                        tp_ipi = 'VALOR (R$)'
                                                ENDIF
                                                setcor(1)
                                                mensagem('Digite Codigo ou <ENTER>p/Desc. - <ALT+P>Cad.PROD. - <F10> Consulta - P/alterar valor da nota digite = ALTERAR NOTA')
                                                mcod_bc := SPACE(14)
                                                f4 := ' '
                                                @ lci+12,cci+14 GET mcod_bc PICT '@!' //WHEN men_get(lci+13,cci+14,'Digite o Codigo ou <ENTER>p/Digitar Descricao - <ALT+P>cadastra PRODUTOS')
                                                READ
                                                IF LASTKEY() = 27
                                                        opcao := op_simnao('N','Deseja Sair a entrada da NOTA:')
                                                        IF opcao = 'N'
                                                                LOOP
                                                        ENDIF
                                                        RESTSCREEN(00,00,24,79,tela)
                                                        DBCLOSEALL()
                                                        wvw_lclosewindow()
                                                        RETURN NIL
                                                ENDIF
                                                IF mcod_bc = 'ALTERAR NOTA'
                                                        IF ! aut_sen('**** Senha p/Liberar a Alteracao:','ALT_DADOS')
                                                                LOOP
                                                        ENDIF
                                                        @ lci+6,cci+25 GET mvol_nota PICT '999,999.999' VALID IF(EMPTY(mvol_nota),.F.,.T.)
                                                        @ lci+6,cci+43 GET mvlr_nota PICT '9,999,999.99' VALID IF(EMPTY(mvlr_nota),.F.,.T.)
                                                        READ
                                                        LOOP
                                                ENDIF

                                                IF ! EMPTY(mcod_bc)
                                                        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(6)
                                                                *************
                                                                IF ! merc->(DBSEEK(mcod_bc))
                                                                        *************
                                                                        SELE('merc');ORDSETFOCUS(8)
                                                                        GO TOP
                                                                        *************
                                                                        IF ! merc->(DBSEEK(SUBSTR(mcod_bc,1,10)))
                                                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                                                LOOP
                                                                        ENDIF
                                                                        mreg := cons_ref(merc->ref)
                                                                        IF ! EMPTY(mreg)
                                                                                GO mreg
                                                                        ELSE
                                                                                LOOP
                                                                        ENDIF
                                                                ENDIF
                                                                mcod_merc := VAL(mcod_bc)
                                                        ELSE
                                                                mcod_merc := VAL(mcod_bc)
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(1)
                                                                GO TOP
                                                                *************
                                                                IF ! merc->(DBSEEK(mcod_merc))
                                                                        *************
                                                                        SELE('merc');ORDSETFOCUS(1)
                                                                        *************
                                                                        atencao('Codigo da mercadoria nao cadastrado')
                                                                        LOOP
                                                                ENDIF
                                                        ENDIF
                                                ELSEIF EMPTY(mmerc) 
                                                        mcod_merc := IF(m_set[1,93] <> 'A',f4_merc(,,STRZERO(mvarejo,1),mperc),f4_merc1(,,STRZERO(mvarejo,1),mperc))
                                                        *************
                                                        SELE('merc');ORDSETFOCUS(1)
                                                        GO TOP
                                                        *************
                                                        IF ! merc->(DBSEEK(mcod_merc))
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(1)
                                                                *************
                                                                atencao('Codigo da mercadoria nao cadastrado')
                                                                LOOP
                                                        ENDIF
                                                        mmerc := merc->merc
                                                        IF LASTKEY() = 27
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                                                        LOOP
                                                ENDIF
                                                IF ver_serie() = '141410'
                                                        atencao('Cadastrado pelo Fornecedor: '+merc->cod_fab+'-'+merc->fabrica)
                                                ENDIF
                                                y := 0
                                                machou := SPACE(5)
                                                FOR y = 1 TO LEN(m_entrada)
                                                        IF mcod_merc = m_entrada[y,2]
                                                                machou := STRZERO(m_entrada[y,2],5)
                                                                EXIT
                                                        ENDIF
                                                NEXT
                                                IF ! EMPTY(machou) .AND. ver_serie() <> '141302'
                                                        atencao('Este Produto ja foi Incluido')
                                                        mcfop      := m_entrada[y,25]
                                                        mcod_nat   := m_entrada[y,25]
                                                        mquantd    := m_entrada[y,20]
                                                        mpr_unit   := m_entrada[y,4]
                                                        micm       := m_entrada[y,27]
                                                        mgramatura := m_entrada[y,11]
                                                        mdesc1     := m_entrada[y,14]
                                                        mdesc2     := m_entrada[y,15]
                                                        *************
                                                        SELE('merc');ORDSETFOCUS(1)
                                                        GO TOP
                                                        *************
                                                        merc->(DBSEEK(machou))
                                                ENDIF

                                                IF merc->cod_fab <> STRZERO(mcod_forn,4) .AND. (ver_serie() = '141225' .OR. ver_serie() = '141254')
                                                        atencao('Este Produto estar cadastrado com fornecedor: '+merc->cod_fab+' diferente do que foi informado: '+STRZERO(mcod_forn,4))
                                                ENDIF
                                                mcod_merc := VAL(merc->cod_merc)
                                                mmerc := merc->merc
                                                munidade := merc->unidade
                                                mp_lucro := merc->p_lucro
                                                mpeso := merc->peso
						mgramatura := merc->fatconv

                                                mvlr_icm_sub := mvlricmsub := 0
                                                mvlricmsub := vlr_ncm(merc->nbm,muf_forn)

                                                setcor(3)
                                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                                DEVPOS(lci+12,cci+21);DEVOUT(mmerc)
                                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                                DEVPOS(lci+18,cci+13);DEVOUTPICT(mgramatura,'9.999')
                                                DEVPOS(lci+15,cci+63);DEVOUTPICT(merc->vlr_merc,'9,999,999.99')
                                                DEVPOS(lci+16,cci+63);DEVOUTPICT(merc->cust_merc,'9,999,999.99')
                                                DEVPOS(lci+17,cci+63);DEVOUTPICT(merc->cust_real,'9,999,999.99')
                                                DEVPOS(lci+18,cci+63);DEVOUTPICT(merc->pr_medio,'9,999,999.99')
                                                DEVPOS(lci+19,cci+63);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                                                DEVPOS(lci+20,cci+63);DEVOUTPICT(merc->pr_venda-merc->pr_medio,'9,999,999.99')
                                                DEVPOS(lci+21,cci+63);DEVOUTPICT(merc->saldo_mer,'999,999.99')
                                                DEVPOS(lci+22,cci+42);DEVOUTPICT(mvlricmsub,'999.99')
                                                setcor(1)
                                                //ver_merc()
                                                mcfop := mcod_nat
                                                @ lci+13,cci+13 GET mcfop PICT '9.999'
                                                @ lci+14,cci+13 GET mquantd PICT (unidade(merc->unidade)) VALID IF(EMPTY(mquantd),.F.,.T.)
                                                @ lci+15,cci+13 GET mp_lucro PICT '999.99'      //VALID lim_get() WHEN men_get(lci+14,cci+28,'Informe o percentual de lucro que deseja')
                                                @ lci+16,cci+13 GET mpr_unit PICT (ALLTRIM(m_set[1,97])) VALID IF(EMPTY(mpr_unit),.F.,.T.)    //WHEN men_get(lci+14,cci+45,'Informe o Valor de Venda')
                                                @ lci+17,cci+13 GET micm PICT '999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')    //.AND. men_get(lci+14,cci+62,'Informe o percentual de ICMS')
                                                @ lci+18,cci+13 GET mgramatura PICT '9,999' WHEN mgramatura > 0
                                                //@ lci+19,cci+13 GET mdesc1 PICT '9999.9999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')       //.AND. men_get(lci+15,cci+09,'Informe desconto '+tp_ipi)
                                                @ lci+20,cci+13 GET mipi_aux PICT '999,999.9999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')  //.AND. men_get(lci+15,cci+45,'Informe IPI '+tp_ipi)
                                                @ lci+21,cci+13 GET mii_aux PICT '9999.999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')       //.AND. men_get(lci+15,cci+45,'Informe I.I. [Imposto de Importacao] '+tp_ipi)
                                                READ
                                                IF LASTKEY() = 27;LOOP;ENDIF
                                                mquantd_aux := mquantd
                                                mpreco_aux := mpr_unit
                                                IF mgramatura > 1
                                                        mquantd := mquantd_aux * mgramatura
                                                        mpr_unit := mpreco_aux / mgramatura
                                                ENDIF
                                                IF mv = 'X'
                                                        mipi := (mipi_aux / (mquantd * mpr_unit)) * 100
                                                        mii := (mii_aux / (mquantd * mpr_unit)) * 100
                                                        mdesc_aux := (mdesc1 / mpr_unit) * 100
                                                        mdesc1 := mdesc_aux
                                                        mdesc_aux := (mdesc2 / mpr_unit) * 100
                                                        mdesc2 := mdesc_aux
                                                        mdesc_aux := (mdesc3 / mpr_unit) * 100
                                                        mdesc3 := mdesc_aux
                                                ELSEIF mp = 'X'
                                                        mipi := mipi_aux
                                                        mii := mii_aux
                                                ENDIF
                                                IF mvlricmsub > 0
                                                        //mvlr_icm_sub := ((mpr_unit *((mvlricmsub/100)+1))*(m_set[1,20]/100)) - ((mpr_unit * (m_set[1,20]/100))) 
                                                        mvlr_icm_sub := ((mpr_unit *((mvlricmsub/100)+1))*(m_set[1,20]/100)) - ((mpr_unit * (micm/100))) 
                                                ENDIF                                                        
                                                setcor(3)
                                                DEVPOS(lci+14,cci+13);DEVOUTPICT(mquantd,(unidade(merc->unidade)))
                                                DEVPOS(lci+16,cci+13);DEVOUTPICT(mpr_unit,(ALLTRIM(m_set[1,97])))
                                                DEVPOS(lci+22,cci+13);DEVOUTPICT(mvlr_icm_sub,'999,999.99')
                                                setcor(1)
                                                * Calculo de Custo da Mercadoria
                                                calc_cus1()
                                                ********************************
                                                IF ! EMPTY(machou) .AND. ver_serie() <> '141302'
                                                        opcao := op_simnao('S','Confirma a Alteracao da Mercadoria:')
                                                ELSE
                                                        opcao := op_simnao('S','Confirma a Entrada da Mercadoria:')
                                                ENDIF
                                                IF opcao = 'N'
                                                        LOOP
                                                ELSE
                                                        IF mvlr_icmsub > 0
                                                                mtot_icmsub := mtot_icmsub + (mvlr_icm_sub * mquantd)
                                                        ENDIF
                                                        ccomm :="UPDATE sacmerc SET p_lucro = "+sr_cdbvalue(mp_lucro) +" WHERE cod_merc = "+sr_cdbvalue(merc->cod_merc)
                                                        sr_getconnection():exec(ccomm,,.f.)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        IF ! EMPTY(machou) .AND. ver_serie() <> '141302'
                                                                m_entrada[y,25] := mcfop     
                                                                m_entrada[y,25] := mcod_nat  
                                                                m_entrada[y,20] := mquantd   
                                                                m_entrada[y,10] := mquantd   
                                                                m_entrada[y,4]  := mpr_unit  
                                                                m_entrada[y,27] := micm      
                                                                m_entrada[y,11] := mgramatura
                                                                m_entrada[y,14] := mdesc1    
                                                                m_entrada[y,15] := mdesc2    
                                                                m_demo[y]       := STRZERO(mcod_merc,5)+'-'+mmerc+' '+TRANSFORM(mquantd_aux,'99999.9999')+' '+TRANSFORM(mpreco_aux,'9,999,999.99')
                                                                
                                                                mtot_des := mtot_vlr := mtot_vol := x := 0
                                                                
                                                                FOR x = 1 TO LEN(m_entrada)
                                                                        mtot_des := (m_entrada[x,4] * m_entrada[x,20])
                                                                        mtot_des := mtot_des - (mtot_des * (m_entrada[x,14] / 100))
                                                                        mtot_des := mtot_des - (mtot_des * (m_entrada[x,15] / 100))
                                                                        mtot_vlr := mtot_vlr + (mtot_des + ((m_entrada[x,4]*m_entrada[x,20]) * (m_entrada[x,12]/100)))
                                                                        mtot_vlr := mtot_vlr + (mtot_des + ((m_entrada[x,4]*m_entrada[x,20]) * (m_entrada[x,22]/100)))
                                                                        mtot_vlr := iat(mtot_vlr,2)
                                                                        mtot_vol := iat(mtot_vol + m_entrada[x,20],set_aredonda)
                                                                NEXT
                                                                mtot_des := 0
                                                                IF alt_dados('*')
                                                                        EXIT
                                                                ENDIF
                                                        ELSE

                                                                *                     1           2      3      4         5          6          7
                                                                *         8         9      10       11       12    13    14     15     16
                                                                *          17           18            19          20         21      22       23            24        25      26   27        28
                                                                AADD(m_entrada,{merc->gru_sub,mcod_merc,mmerc,mpr_unit,mvlr_merc,mcust_merc,mcust_real,;
                                                                     mpr_medio,mpr_venda,mquantd,mgramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                                     merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                                AADD(m_tipo4  ,{merc->gru_sub,mcod_merc,mmerc,mpr_unit4,mvlr_merc4,mcust_mer4,mcust_rea4,;
                                                                     mpr_medio4,mpr_venda4,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                                     merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                                AADD(m_demo,STRZERO(mcod_merc,5)+'-'+mmerc+' '+TRANSFORM(mquantd_aux,'99999.9999')+' '+TRANSFORM(mpreco_aux,'9,999,999.99'))
                                                                mtot_des := (mpr_unit * mquantd)
                                                                mtot_des := mtot_des - (mtot_des * (mdesc1 / 100))
                                                                mtot_des := mtot_des - (mtot_des * (mdesc2 / 100))
                                                                mtot_des := mtot_des - (mtot_des * (mdesc3 / 100))
                                                                mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mipi/100)))
                                                                mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mii/100)))
                                                                mtot_vlr := iat(mtot_vlr,2)
                                                                mtot_vol := iat(mtot_vol + mquantd_aux,set_aredonda)
                                                                mtot_des := 0
                                                                IF alt_dados('*')
                                                                        EXIT
                                                                ENDIF
                                                        ENDIF
                                                        setcor(3)
                                                        DEVPOS(lci+25,cci+19);DEVOUT(TRANSFORM(mtot_vol,'999,999.999'))
                                                        DEVPOS(lci+25,cci+52);DEVOUT(TRANSFORM(mtot_vlr,'9,999,999.99'))
                                                        DEVPOS(lci+25,cci+82);DEVOUT(TRANSFORM(LEN(m_entrada),'9,999'))
                                                        DEVPOS(lci+27,cci+19);DEVOUT(TRANSFORM(mvol_nota - mtot_vol,'999,999.999'))
                                                        DEVPOS(lci+27,cci+52);DEVOUT(TRANSFORM(mvlr_nota - mtot_vlr,'9,999,999.99'))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                        ENDDO

                                ENDIF
                                IF (mnivel_cal = '2' .AND. iat(mtot_vol,set_aredonda) = mvol_nota) .OR. ((msoma <= set_vlr_ent .AND. msoma >= (set_vlr_ent * -1));
                                   .AND. iat(mtot_vol,set_aredonda) = mvol_nota)
                                        mtot_vlr = mtot_vlr + menc_aux + mfrete_aux
                                        
                                        IF mtot_icmsub <> mvlr_icmsub
                                                opcao := op_simnao('N','Existe uma Diferenca no valor do ICM SUBSTITUTO, Valor Informado pela Nota:'+TRANSFORM(mvlr_icmsub,'999,999.99')+' Valor Digitado por Produto:'+TRANSFORM(mtot_icmsub,'999,999.99')+' Diferenca de :'+TRANSFORM(mtot_icmsub - mvlr_icmsub,'999,999.99'))
                                                IF opcao = 'N'
                                                        LOOP
                                                ENDIF
                                        ENDIF                                                        
                                        opcao := op_simnao('S','Todas Informacoes "OK"... Confirma Entrada:')
                                        IF opcao = 'N'
                                                LOOP
                                        ELSE
*                                               mvlr_nota
*                                               mvl_base := msoma
                                                repl_forn()
                                                IF ! EMPTY(mnum_ped) .AND. msoma <= mvlr_ent ;
                                                   .AND. msoma >= (mvlr_ent * -1) .AND.;
                                                    mtot_vol == mvol_nota
                                                        mfrete := mfrete_aux / (mvlr_nota - mfrete_aux)
                                                        mencargo_f := (menc_aux/mvlr_nota)
                                                        mdisp_asse := (mdisp_aux/mvlr_nota)
                                                        i:=0
                                                        FOR i = 1 TO LEN(cons_pede)
                                                                mpeso := cons_pede[i,9]
                                                                mpr_unit := cons_pede[i,14]
                                                                point := RECNO()
                                                                ver_lucro(cons_pede[i,6])
                                                                GO point
                                                                mquantd := cons_pede[i,10]
                                                                IF cons_pede[1,22] = 'R'
                                                                        mdesc1 := (cons_pede[i,23]/cons_pede[i,14])*100
                                                                        mdesc2 := (cons_pede[i,24]/cons_pede[i,14])*100
                                                                        mdesc3 := (cons_pede[i,25]/cons_pede[i,14])*100
                                                                        mipi := (cons_pede[i,36]/cons_pede[i,14])*100
                                                                ELSE
                                                                        mdesc1 := cons_pede[i,23]
                                                                        mdesc2 := cons_pede[i,24]
                                                                        mdesc3 := cons_pede[i,25]
                                                                        mipi := cons_pede[i,36]
                                                                ENDIF
                                                                mcod_merc := VAL(cons_pede[i,6])
                                                                setcor(3)
                                                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                                                DEVPOS(lci+12,cci+20);DEVOUT(cons_pede[i,7])
                                                                DEVPOS(lci+12,cci+66);DEVOUT(cons_pede[i,8])
                                                                DEVPOS(lci+14,cci+13);DEVOUTPICT(mquantd,(unidade(merc->unidade)))
                                                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                                                DEVPOS(lci+16,cci+13);DEVOUTPICT(cons_pede[i,14],'9,999,999.9999')
                                                                DEVPOS(lci+19,cci+13);DEVOUTPICT(mdesc1,'9,999.9999')
                                                                DEVPOS(lci+20,cci+13);DEVOUTPICT(mipi,'9,999.9999')
                                                                setcor(1)
                                                                calc_cus1()
                                                                GO point
                                                                mensagem('Tecle <ENTER> p/Continuar ou <ESC> p/Sair Tudo')
                                                                INKEY(0)
                                                                IF LASTKEY() = 27
                                                                        RESTSCREEN(00,00,24,79,tela)
                                                                        EXIT
                                                                ENDIF
                                                                *                  1        2           3       4        5          6          7
                                                                *       8          9        10         11         12    13    14     15     16
                                                                *       17     18      19     20       21      22      23
                                                                AADD(m_entrada,{cons_pede[i,5],VAL(cons_pede[i,6]),cons_pede[i,7],mpr_unit,mvlr_merc,mcust_merc,mcust_real,;
                                                                    mpr_medio,mpr_venda,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                                    cons_pede[i,17],cons_pede[i,18],cons_pede[i,37],mquantd,mpr_venda,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                                AADD(m_tipo4  ,{cons_pede[i,5],VAL(cons_pede[i,6]),cons_pede[i,7],mpr_unit4,mvlr_merc4,mcust_mer4,mcust_rea4,;
                                                                    mpr_medio4,mpr_venda4,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                                    cons_pede[i,17],cons_pede[i,18],cons_pede[i,37],mquantd,mpr_venda,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                                SKIP
                                                        NEXT
                                                        IF LASTKEY() = 27;EXIT;ENDIF
                                                ENDIF
                                                IF ! EMPTY(mnum_ped)
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                aret:={}
                                                                sr_getconnection():exec("SELECT saldo_comp FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mqtd_ent[i,1]),,.t.,@aret)
                                                                sr_getconnection():exec("UPDATE sacmerc SET saldo_comp  = "+sr_cdbvalue(aret[1,1] - mqtd_ent[i,2])+" WHERE cod_merc = "+sr_cdbvalue(mqtd_ent[i,1]),,.f.)
                                                                IF SR_SetActiveConnection(nCnn1) > 0
                                                                        sr_getconnection():exec("UPDATE sacmerc SET saldo_comp  = "+sr_cdbvalue(aret[1,1] - mqtd_ent[i,2])+" WHERE cod_merc = "+sr_cdbvalue(mqtd_ent[i,1]),,.f.)
                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                ENDIF
                                                                SR_SetActiveConnection(nCnn)
                                                                sr_getconnection():exec("COMMIT",,.f.)
                                                        NEXT
                                                ENDIF
                                                IF mcod_op = '02' .OR. mcod_op ='03'
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                IF mcod_op = '03'
                                                                        ver_nat(m_entrada[i,25],'E')
                                                                        aret := {}
                                                                        sr_getconnection():exec("SELECT saldo_fis,icm FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                                                        sr_getconnection():exec("UPDATE sacmerc SET dat_ult_e = "+sr_cdbvalue(mchegada)+;
                                                                                        ",saldo_fis = "+sr_cdbvalue(aret[1,1] + IF(mcredito='S',m_entrada[i,10],0))+;
                                                                                        ",icm = "+sr_cdbvalue(iat(aret[1,2] + IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10])* (m_entrada[i,27]/100)),0),2))+;
                                                                                        " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                                        IF mcredito = 'S'
                                                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                        'processo,ent_sai )'+;
                                                                                        ' VALUES ('+;
                                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                        sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                        sr_cdbvalue(aret[1,1])+','+; //6
                                                                                        sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                                        sr_cdbvalue('SAC22_1')+','+; //9
                                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                        sr_cdbvalue('ENTRADA: '+IF(mcod_op = '02','PD','NF')+mnota)+','+; //11
                                                                                        sr_cdbvalue('E')+')',,.f.)
                                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF

                                                                        IF ver_serie() = '141287' .OR. ver_serie() = '14128D'
                                                                                sr_getconnection():exec("UPDATE sacmerc SET pr_fat = "+sr_cdbvalue(iat(m_entrada[i,9],2))+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                                                //sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF
                                                                        mtp_nota := 'NF'

                                                                ELSE
                                                                        mtp_nota := 'PD'
                                                                        aret := {}
                                                                        sr_getconnection():exec("SELECT saldo_mer,pr_unit,vlr_merc,cust_merc,pr_venda,cust_real,pr_medio,doc_ent FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                                                        sr_getconnection():exec("UPDATE sacmerc SET data_atu = "+sr_cdbvalue(mdata_sis)+;
                                                                                                ",a_pr_unit = "+sr_cdbvalue(aret[1,2])+;
                                                                                                ",a_vlr_merc = "+sr_cdbvalue(aret[1,3])+;
                                                                                                ",a_cust_mer = "+sr_cdbvalue(aret[1,4])+;
                                                                                                ",a_pr_venda = "+sr_cdbvalue(aret[1,5])+;
                                                                                                ",a_cust_rea = "+sr_cdbvalue(aret[1,6])+;
                                                                                                ",a_pr_medio = "+sr_cdbvalue(aret[1,7])+;
                                                                                                ",pr_unit   = "+sr_cdbvalue(iat(m_entrada[i,4],set_aredonda))+;
                                                                                                ",vlr_merc  = "+sr_cdbvalue(iat(m_entrada[i,5],set_aredonda))+;
                                                                                                ",cust_merc = "+sr_cdbvalue(iat(m_entrada[i,6],set_aredonda))+;
                                                                                                ",pr_venda  = "+sr_cdbvalue(iat(m_entrada[i,9],set_aredonda))+;
                                                                                                ",cust_real = "+sr_cdbvalue(iat(m_entrada[i,7],set_aredonda))+;
                                                                                                ",pr_medio  = "+sr_cdbvalue(iat(m_entrada[i,8],set_aredonda))+;
                                                                                                ",saldo_ant = "+sr_cdbvalue(aret[1,1])+;
                                                                                                ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_entrada[i,10] )+;
                                                                                                ",dat_ult_e = "+sr_cdbvalue(mchegada)+;
                                                                                                ",ul_alt_pr = "+IF(aret[1,5] <> m_entrada[i,9],sr_cdbvalue(mdata_sis),nulo)+;
                                                                                                ",opera_pr     = "+sr_cdbvalue(cod_operado)+;
                                                                                                ",isento    = "+sr_cdbvalue(m_entrada[i,19])+;
                                                                                                ",doc_ent_a = "+sr_cdbvalue(aret[1,8])+;
                                                                                                ",doc_ent   = "+sr_cdbvalue('PD'+mnota)+;
                                                                                                " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                                                sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                                sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC22')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue(IF(mcod_op = '02','ENTRADA: PD','ENTRADA: NF')+mnota)+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                                ENDIF
                                                        NEXT
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                IF mcod_op = '03'
                                                                        *************
                                                                        SELE('mov');ORDSETFOCUS(1)
                                                                        *************
                                                                        atu_movi('NF','03',i)
                                                                ELSE
                                                                        *************
                                                                        SELE('mov');ORDSETFOCUS(1)
                                                                        *************
                                                                        atu_movi('PD','02',i)
                                                                ENDIF
                                                        NEXT
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                IF mnum_ped > 0
                                                                        cons_pede:={}
                                                                        sr_getconnection():exec( "SELECT * FROM sacped_e WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_pede)
                                                                        sr_getconnection():exec( "UPDATE sacped_e SET recebi = '*'  WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                        IF m_entrada[i,10] >= cons_pede[i,10]
                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                LOOP
                                                                        ELSE
                                                                                WHILE .T.
                                                                                        op := mensagem1('Quantidade a Menor <S>aldo <D>evolvido:',' ','S,D')
                                                                                        IF LASTKEY() = 27;LOOP;ENDIF
                                                                                        IF op = 'S'
                                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                                EXIT
                                                                                        ELSE
                                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - cons_pede[i,10])+",devolvido = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                                EXIT
                                                                                        ENDIF
                                                                                ENDDO
                                                                        ENDIF
                                                                ENDIF
                                                        NEXT i
                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                        IF mcod_op = '03'
                                                                sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                                                        'documento,serie,modelo,'+;
                                                                        'num_ped,emissao,ent_sai,'+;
                                                                        'cod_cli,cliente,uf_cli,'+;
                                                                        'cid_cli,insc_cli,cpf_cli,'+;
                                                                        'cgc_cli,vl_base,vl_nota,'+;
                                                                        'vl_icm,vlr_icmsub,base_icmsu,'+;
                                                                        'frete,encargo_f,disp_asse,ipi,'+;
                                                                        'cod_nat,norm_ele,'+;
                                                                        'SR_DELETED )'+;
                                                                        ' VALUES ('+;
                                                                        sr_cdbvalue(mcodempresa         )+','+; //1
                                                                        sr_cdbvalue('NF'+mnota          )+','+; //2
                                                                        sr_cdbvalue(mserie              )+','+; //3
                                                                        sr_cdbvalue(mmodelo             )+','+; //4
                                                                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                                        sr_cdbvalue(mchegada            )+','+; //6
                                                                        sr_cdbvalue('E'                 )+','+; //7
                                                                        sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                                                        sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                                                        sr_cdbvalue(forn->uf    )+','+;//10
                                                                        sr_cdbvalue(forn->cidade)+','+; //11
                                                                        sr_cdbvalue(forn->insc  )+','+;//12
                                                                        sr_cdbvalue(forn->cpf   )+','+;//13
                                                                        sr_cdbvalue(forn->cgc   )+','+;//14
                                                                        sr_cdbvalue(mvlr_base   )+','+;//15
                                                                        sr_cdbvalue(mvlr_nota   )+','+;//16
                                                                        sr_cdbvalue(mvalor_icm  )+','+;//17
                                                                        sr_cdbvalue(mvlr_icmsub )+','+;//18
                                                                        sr_cdbvalue(mbas_icmsub )+','+;//19
                                                                        sr_cdbvalue(mfrete_aux  )+','+;//20
                                                                        sr_cdbvalue(menc_aux    )+','+;//21
                                                                        sr_cdbvalue(mdisp_aux   )+','+;//22
                                                                        sr_cdbvalue(iat(mtot_ipi,2))+','+;//23
                                                                        sr_cdbvalue(mcod_nat    )+','+;//24
                                                                        sr_cdbvalue(mnorm_ele    )+','+;//25
                                                                        sr_cdbvalue(' ')+')',,.f.)
                                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        ENDIF
                                                ELSE
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                aret := {}
                                                                sr_getconnection():exec("SELECT saldo_mer,saldo_fis,doc_ent,icm,pr_unit,vlr_merc,cust_merc,pr_venda,cust_real,pr_medio FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                                                IF mcod_op = '04'
                                                                                        //",ul_alt_pr = "+sr_cdbvalue(mchegada                          )+;
                                                                        ver_nat(m_tipo4[i,25],'E')
                                                                        sr_getconnection():exec("UPDATE sacmerc SET data_atu = "+sr_cdbvalue(mdata_sis)+;
                                                                                        ",dat_ult_e = "+sr_cdbvalue(mchegada                          )+;
                                                                                        ",ul_alt_pr = "+IF(aret[1,8] <> m_tipo4[i,9],sr_cdbvalue(mdata_sis),nulo)+; //sr_cdbvalue(IF(aret[1,8] <> m_tipo4[i,9],mdata_sis,nulo))+;
                                                                                        ",opera_pr     = "+sr_cdbvalue(cod_operado)+;
                                                                                        ",isento    = "+sr_cdbvalue(m_entrada[i,19]                   )+;
                                                                                        ",doc_ent_a = "+sr_cdbvalue(aret[1,3]                     )+;
                                                                                        ",doc_ent   = "+sr_cdbvalue('PD'+mnota                        )+;
                                                                                        ",a_pr_unit  = "+sr_cdbvalue(aret[1,5] )+;
                                                                                        ",a_vlr_merc = "+sr_cdbvalue(aret[1,6] )+;
                                                                                        ",a_cust_mer = "+sr_cdbvalue(aret[1,7] )+;
                                                                                        ",a_pr_venda = "+sr_cdbvalue(aret[1,8] )+;
                                                                                        ",a_cust_rea = "+sr_cdbvalue(aret[1,9] )+;
                                                                                        ",a_pr_medio = "+sr_cdbvalue(aret[1,10])+;
                                                                                        ",pr_unit   = "+sr_cdbvalue(iat(m_tipo4[i,4],set_aredonda))+;
                                                                                        ",vlr_merc  = "+sr_cdbvalue(iat(m_tipo4[i,5],set_aredonda))+;
                                                                                        ",cust_merc = "+sr_cdbvalue(iat(m_tipo4[i,6],set_aredonda))+;
                                                                                        ",pr_venda  = "+sr_cdbvalue(iat(m_tipo4[i,9],set_aredonda))+;
                                                                                        ",cust_real = "+sr_cdbvalue(iat(m_tipo4[i,7],set_aredonda))+;
                                                                                        ",pr_medio  = "+sr_cdbvalue(iat(m_tipo4[i,8],set_aredonda))+;
                                                                                        ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_tipo4[i,10])+;
                                                                                        ",saldo_fis = "+sr_cdbvalue(aret[1,2] + IF(mcredito='S',m_tipo4[i,10],0))+;
                                                                                        ",icm = "+sr_cdbvalue(iat(aret[1,4] + IF(! EMPTY(m_entrada[i,27]),((m_tipo4[i,5] * m_tipo4[i,10])* (m_tipo4[i,27]/100)),0),2))+;
                                                                                        " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                sr_cdbvalue(m_tipo4[i,10])+','+; //5
                                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                                sr_cdbvalue(aret[1,1] + m_tipo4[i,10])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC22')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue(IF(mcod_op = '02','ENTRADA: PD','ENTRADA: NF')+mnota)+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                                        IF mcredito = 'S'
                                                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                        'processo,ent_sai )'+;
                                                                                        ' VALUES ('+;
                                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                        sr_cdbvalue(m_tipo4[i,10])+','+; //5
                                                                                        sr_cdbvalue(aret[1,2])+','+; //6
                                                                                        sr_cdbvalue(aret[1,2] + m_tipo4[i,10])+','+; //7
                                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                                        sr_cdbvalue('SAC22_1')+','+; //9
                                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                        sr_cdbvalue('ENTRADA: '+IF(mcod_op = '02','PD','NF')+mnota)+','+; //11
                                                                                        sr_cdbvalue('E')+')',,.f.)
                                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF

                                                                ELSE
                                                                        ver_nat(m_entrada[i,25],'E')

                                                                        sr_getconnection():exec("UPDATE sacmerc SET data_atu = "+sr_cdbvalue(mdata_sis)+;
                                                                                        ",dat_ult_e  = "+sr_cdbvalue(mchegada                          )+;
                                                                                        ",ul_alt_pr = "+IF(aret[1,8] <> m_entrada[i,9],sr_cdbvalue(mdata_sis),nulo)+;//sr_cdbvalue(IF(aret[1,8] <> m_entrada[i,9],mdata_sis,nulo))+; //",ul_alt_pr  = "+sr_cdbvalue(mchegada                          )+;
                                                                                        ",opera_pr     = "+sr_cdbvalue(cod_operado)+;
                                                                                        ",isento     = "+sr_cdbvalue(m_entrada[i,19]                   )+;
                                                                                        ",doc_ent_a  = "+sr_cdbvalue(aret[1,3]                     )+;
                                                                                        ",doc_ent    = "+sr_cdbvalue('PD'+mnota                        )+;
                                                                                        ",a_pr_unit  = "+sr_cdbvalue(aret[1,5] )+;
                                                                                        ",a_vlr_merc = "+sr_cdbvalue(aret[1,6] )+;
                                                                                        ",a_cust_mer = "+sr_cdbvalue(aret[1,7] )+;
                                                                                        ",a_pr_venda = "+sr_cdbvalue(aret[1,8] )+;
                                                                                        ",a_cust_rea = "+sr_cdbvalue(aret[1,9] )+;
                                                                                        ",a_pr_medio = "+sr_cdbvalue(aret[1,10])+;
                                                                                        ",pr_unit   = "+sr_cdbvalue(iat(m_entrada[i,4],set_aredonda))+;
                                                                                        ",vlr_merc  = "+sr_cdbvalue(iat(m_entrada[i,5],set_aredonda))+;
                                                                                        ",cust_merc = "+sr_cdbvalue(iat(m_entrada[i,6],set_aredonda))+;
                                                                                        ",pr_venda  = "+sr_cdbvalue(iat(m_entrada[i,9],set_aredonda))+;
                                                                                        ",cust_real = "+sr_cdbvalue(iat(m_entrada[i,7],set_aredonda))+;
                                                                                        ",pr_medio  = "+sr_cdbvalue(iat(m_entrada[i,8],set_aredonda))+;
                                                                                        ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_entrada[i,10])+;
                                                                                        ",saldo_fis = "+sr_cdbvalue(aret[1,2] + IF(mcredito='S',m_entrada[i,10],0))+;
                                                                                        ",icm = "+sr_cdbvalue(iat(aret[1,4] + IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10])* (m_entrada[i,27]/100)),0),2))+;
                                                                                        " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                                sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC22')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue(IF(mcod_op = '02','ENTRADA: PD','ENTRADA: NF')+mnota)+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                                        IF mcredito = 'S'
                                                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                        'processo,ent_sai )'+;
                                                                                        ' VALUES ('+;
                                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                        sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                        sr_cdbvalue(aret[1,2])+','+; //6
                                                                                        sr_cdbvalue(aret[1,2] + m_entrada[i,10])+','+; //7
                                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                                        sr_cdbvalue('SAC22_1')+','+; //9
                                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                        sr_cdbvalue('ENTRADA: '+IF(mcod_op = '02','PD','NF')+mnota)+','+; //11
                                                                                        sr_cdbvalue('E')+')',,.f.)
                                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF

                                                                ENDIF
                                                        NEXT
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                mtp_nota := 'NF'
                                                                atu_movi('NF','01',i)

                                                                IF mcod_op = '04'
                                                                        sr_getconnection():exec('INSERT INTO sacmov (empresa,'+;
                                                                                'documento,serie,modelo,'+;
                                                                                'num_ped,ped_forn,'+;
                                                                                'gru_sub,codigo,produto,cod_fab,'+;
                                                                                'fabrica,unidade,data_s_e,ent_sai,'+;
                                                                                'saldo_ant,quantd,quantd_aux,'+;
                                                                                'pr_venda1,pr_venda,pr_unit,cod_forn,'+;
                                                                                'fornece,uf_cli,icm_aliq,icm_sub,'+;
                                                                                'fob,cif,dia1,dia2,dia3,emissao,saida,'+;
                                                                                'chegada,frete,encargo_f,disp_asse,'+;
                                                                                'ipi_aliq,ipi,peso,desc1,desc2,desc3,'+;
                                                                                'tipo,isento,sittrib,cod_nat,cod_oper,'+;
                                                                                'icm,norm_ele,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(mcodempresa         )+','+; //1
                                                                                sr_cdbvalue('PD'+mnota          )+','+; //2
                                                                                sr_cdbvalue(mserie              )+','+; //3
                                                                                sr_cdbvalue(mmodelo             )+','+; //4
                                                                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                                                sr_cdbvalue(mped_forn              )+','+; //6
                                                                                sr_cdbvalue(m_tipo4[i,1]           )+','+; //8
                                                                                sr_cdbvalue(STRZERO(m_tipo4[i,2],5))+','+;//9
                                                                                sr_cdbvalue(m_tipo4[i,3]           )+','+;//10
                                                                                sr_cdbvalue(m_tipo4[i,17]          )+','+; //11
                                                                                sr_cdbvalue(LEFT(m_tipo4[i,18],30))+','+;//12
                                                                                sr_cdbvalue(m_tipo4[i,23]          )+','+;//13
                                                                                sr_cdbvalue(mchegada               )+','+;//14
                                                                                sr_cdbvalue('E'                    )+','+;//15
                                                                                sr_cdbvalue(m_tipo4[i,28]          )+','+;//16
                                                                                sr_cdbvalue(m_tipo4[i,10]          )+','+;//17
                                                                                sr_cdbvalue(m_tipo4[i,10]          )+','+;//18
                                                                                sr_cdbvalue(iat(merc->pr_venda,2)         )+','+;//19
                                                                                sr_cdbvalue(iat(m_tipo4[i,9],2)           )+','+;//20
                                                                                sr_cdbvalue(iat(m_tipo4[i,5],2)           )+','+;//21
                                                                                sr_cdbvalue(STRZERO(mcod_forn,4)   )+','+;//22
                                                                                sr_cdbvalue(LEFT(mfornece,30)      )+','+;//23
                                                                                sr_cdbvalue(forn->uf               )+','+;//24
                                                                                sr_cdbvalue(m_tipo4[i,27]                                       )+','+;//13
                                                                                sr_cdbvalue(m_tipo4[i,26]                                       )+','+;//14
                                                                                sr_cdbvalue(mfob                                                )+','+;//15
                                                                                sr_cdbvalue(mcif                                                )+','+;//16
                                                                                sr_cdbvalue(STRZERO(val(mdia1),2)                               )+','+;//17
                                                                                sr_cdbvalue(STRZERO(val(mdia2),2)                               )+','+;//18
                                                                                sr_cdbvalue(STRZERO(val(mdia3),2)                               )+','+;//19
                                                                                sr_cdbvalue(memissao                                            )+','+;//20
                                                                                sr_cdbvalue(msaida                                              )+','+;//21
                                                                                sr_cdbvalue(mchegada                                            )+','+;//22
                                                                                sr_cdbvalue(iat((m_tipo4[i,5] * m_tipo4[i,10]) * mfrete,2)    )+','+;//23
                                                                                sr_cdbvalue(iat((m_tipo4[i,5] * m_tipo4[i,10]) * mencargo_f,2))+','+;//24
                                                                                sr_cdbvalue(iat((m_tipo4[i,5] * m_tipo4[i,10]) * mdisp_asse,2))+','+;//13
                                                                                sr_cdbvalue(m_tipo4[i,12]                                       )+','+;//14
                                                                                sr_cdbvalue(iat((m_tipo4[i,5] * m_tipo4[i,10]) * (m_tipo4[i,12]/100),2))+','+;//15
                                                                                sr_cdbvalue(m_tipo4[i,13]                                       )+','+;//16
                                                                                sr_cdbvalue(iat((m_tipo4[i,4] * m_tipo4[i,10]) * (m_tipo4[i,14]/100),2))+','+;//17
                                                                                sr_cdbvalue(iat((m_tipo4[i,4] * m_tipo4[i,10])* (m_tipo4[i,15]/100),2) )+','+;//18
                                                                                sr_cdbvalue(iat((m_tipo4[i,4] * m_tipo4[i,10])*(m_tipo4[i,16]/100),2)  )+','+;//19
                                                                                sr_cdbvalue('02'                                                )+','+;//20
                                                                                sr_cdbvalue(m_tipo4[i,19]                                       )+','+;//21
                                                                                sr_cdbvalue(m_tipo4[i,24]                                       )+','+;//22
                                                                                sr_cdbvalue(m_tipo4[i,25]                                       )+','+;//23
                                                                                sr_cdbvalue(cod_operado                                         )+','+;//24
                                                                                sr_cdbvalue(iat(IF(! EMPTY(m_tipo4[i,27]),((m_tipo4[i,5] * m_tipo4[i,10]) * (m_tipo4[i,27]/100)),0),4))+','+;//25
                                                                                sr_cdbvalue(mnorm_ele)+','+;//26
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                                ENDIF
                                                        NEXT
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        i := 0
                                                        FOR i=1 TO LEN(m_entrada)
                                                                IF mnum_ped > 0
                                                                        cons_pede:={}
                                                                        sr_getconnection():exec( "SELECT * FROM sacped_e WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.t.,@cons_pede)
                                                                        sr_getconnection():exec( "UPDATE sacped_e SET recebi = '*'  WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                        IF m_entrada[i,10] >= cons_pede[i,10]
                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                LOOP
                                                                        ELSE
                                                                                WHILE .T.
                                                                                        op := mensagem1('Quantidade a Menor <S>aldo <D>evolvido:',' ','S,D')
                                                                                        IF LASTKEY() = 27;LOOP;ENDIF
                                                                                        IF op = 'S'
                                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                                EXIT
                                                                                        ELSE
                                                                                                sr_getconnection():exec( "UPDATE sacped_e SET saldo = "+sr_cdbvalue(cons_pede[1,12] - cons_pede[i,10])+",devolvido = "+sr_cdbvalue(cons_pede[1,12] - m_entrada[i,10])+" WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5))+" AND num_ped = "+sr_cdbvalue(STRZERO(mnum_ped,6)),,.f.)
                                                                                                EXIT
                                                                                        ENDIF
                                                                                ENDDO
                                                                        ENDIF
                                                                ENDIF
                                                        NEXT i
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                                                'documento,serie,modelo,'+;
                                                                'num_ped,emissao,ent_sai,'+;
                                                                'cod_cli,cliente,uf_cli,'+;
                                                                'cid_cli,insc_cli,cpf_cli,'+;
                                                                'cgc_cli,vl_base,vl_nota,'+;
                                                                'vl_icm,vlr_icmsub,base_icmsu,'+;
                                                                'frete,encargo_f,disp_asse,ipi,'+;
                                                                'cod_nat,norm_ele,'+;
                                                                'SR_DELETED )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(mcodempresa         )+','+; //1
                                                                sr_cdbvalue('NF'+mnota          )+','+; //2
                                                                sr_cdbvalue(mserie              )+','+; //3
                                                                sr_cdbvalue(mmodelo             )+','+; //4
                                                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                                sr_cdbvalue(mchegada            )+','+; //6
                                                                sr_cdbvalue('E'                 )+','+; //7
                                                                sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                                                sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                                                sr_cdbvalue(forn->uf    )+','+;//10
                                                                sr_cdbvalue(forn->cidade)+','+; //11
                                                                sr_cdbvalue(forn->insc  )+','+;//12
                                                                sr_cdbvalue(forn->cpf   )+','+;//13
                                                                sr_cdbvalue(forn->cgc   )+','+;//14
                                                                sr_cdbvalue(mvlr_base   )+','+;//15
                                                                sr_cdbvalue(mvlr_nota   )+','+;//16
                                                                sr_cdbvalue(mvalor_icm)+','+;//17
                                                                sr_cdbvalue(mvlr_icmsub )+','+;//18
                                                                sr_cdbvalue(mbas_icmsub )+','+;//19
                                                                sr_cdbvalue(mfrete_aux  )+','+;//20
                                                                sr_cdbvalue(menc_aux    )+','+;//21
                                                                sr_cdbvalue(mdisp_aux   )+','+;//22
                                                                sr_cdbvalue(iat(mtot_ipi,2))+','+;//23
                                                                sr_cdbvalue(mcod_nat    )+','+;//24
                                                                sr_cdbvalue(mnorm_ele    )+','+;//25
                                                                sr_cdbvalue(' ')+')',,.f.)
                                                        IF mcod_op = '04'
                                                                sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                                                        'documento,serie,modelo,'+;
                                                                        'num_ped,emissao,ent_sai,'+;
                                                                        'cod_cli,cliente,uf_cli,'+;
                                                                        'cid_cli,insc_cli,cpf_cli,'+;
                                                                        'cgc_cli,vl_base,vl_nota,'+;
                                                                        'vl_icm,vlr_icmsub,base_icmsu,'+;
                                                                        'frete,encargo_f,disp_asse,ipi,'+;
                                                                        'cod_nat,norm_ele,'+;
                                                                        'SR_DELETED )'+;
                                                                        ' VALUES ('+;
                                                                        sr_cdbvalue(mcodempresa         )+','+; //1
                                                                        sr_cdbvalue('PD'+mnota          )+','+; //2
                                                                        sr_cdbvalue(mserie              )+','+; //3
                                                                        sr_cdbvalue(mmodelo             )+','+; //4
                                                                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                                        sr_cdbvalue(mchegada            )+','+; //6
                                                                        sr_cdbvalue('E'                 )+','+; //7
                                                                        sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                                                        sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                                                        sr_cdbvalue(forn->uf    )+','+;//10
                                                                        sr_cdbvalue(forn->cidade)+','+; //11
                                                                        sr_cdbvalue(forn->insc  )+','+;//12
                                                                        sr_cdbvalue(forn->cpf   )+','+;//13
                                                                        sr_cdbvalue(forn->cgc   )+','+;//14
                                                                        sr_cdbvalue(iat(mvlr_base / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//24
                                                                        sr_cdbvalue(iat(mvlr_nota / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//16
                                                                        sr_cdbvalue(iat(mvalor_icm / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//17
                                                                        sr_cdbvalue(iat(mvlr_icmsub / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//18
                                                                        sr_cdbvalue(iat(mbas_icmsub / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//19
                                                                        sr_cdbvalue(iat(mfrete_aux / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//20
                                                                        sr_cdbvalue(iat(menc_aux / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//21
                                                                        sr_cdbvalue(iat(mdisp_aux / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//22
                                                                        sr_cdbvalue(iat(mtot_ipi / IF(EMPTY(mper_vlr),1,mper_vlr/100),2))+','+;//23
                                                                        sr_cdbvalue(mcod_nat                                       )+','+;//24
                                                                        sr_cdbvalue(mnorm_ele                                       )+','+;//25
                                                                        sr_cdbvalue(' ')+')',,.f.)
                                                        ENDIF
                                                ENDIF
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                IF ! EMPTY(mdia1) .OR. mfob = 'X'
                                                        opcao := op_simnao('S','Deseja Gerar DUPLICATA A PAGAR:')
                                                        IF opcao = 'S';dup_pag();ENDIF
                                                ENDIF
                                                IF ! EMPTY(mavista)
                                                        opcao := op_simnao('S','Deseja Gerar DUPLICATA A PAGAR avista:')
                                                        IF opcao = 'S';dup_pag();ENDIF
                                                ENDIF
                                                opcao := op_simnao('S','Deseja emitir o resumo da nota fiscal de entrada: ')
                                                IF opcao = 'S'
                                                        imp_resu(mtp_nota,mnota)
                                                        IF mcod_op = '04'
                                                                imp_resu('PD',mnota)
                                                        ENDIF
                                                ENDIF
                                                opcao := op_simnao('N','Deseja emitir ETIQUETA DOS PRODUTOS [S/n]:')
                                                IF opcao = 'S';sac5etq1('E');ENDIF
                                        ENDIF
                                ENDIF
                        ENDIF
                ELSE    // NOTA DE IMPORTACAO
                        mv := 'X'
                        mcfop := mcod_nat
                        opcao := op_simnao('S','Confirma os dados da Nota Fiscal:')
                        IF opcao = 'N'
                                LOOP
                        ELSE
                                mfrete := mfrete_aux / (mvlr_nota - mfrete_aux)
                                mencargo_f := (menc_aux/mvlr_nota)
                                mdisp_asse := (mdisp_aux/mvlr_nota)
*                               IF mtot_vol <> mvol_nota
                                        mtot_vlr := mtot_vol := 0
                                        ASIZE(m_entrada,0)
                                        ASIZE(m_tipo4,0)
                                        ASIZE(m_demo,0)
                                        WHILE .T.
                                                botao(lci+14,cci+49,lci+21,cci+76,,' Valores Atuais  ')
                                                DEVPOS(lci+15,cci+50);DEVOUT('Vlr.Mercad.:')
                                                DEVPOS(lci+16,cci+50);DEVOUT('Cus.Mercad.:')
                                                DEVPOS(lci+17,cci+50);DEVOUT('Custo Real.:')
                                                DEVPOS(lci+18,cci+50);DEVOUT('Custo Medio:')
                                                DEVPOS(lci+19,cci+50);DEVOUT('Preco Venda:')
                                                DEVPOS(lci+20,cci+50);DEVOUT('Lucro R$...:')
                                                DEVPOS(lci+21,cci+50);DEVOUT('Saldo Atual:             ')

                                                IF mtot_vol = mvol_nota
                                                        EXIT
                                                ENDIF
                                                *************
                                                SELE('merc');ORDSETFOCUS(1)
                                                GO TOP
                                                *************
                                                munidade := SPACE(3)
                                                mmerc := SPACE(40)
                                                mcod_bc := SPACE(14)
                                                mcod_merc := mquantd := mp_lucro := ;
                                                mdesc_aux := mdesc1 := ;
                                                mdesc2 := mdesc3 := mipi := mipi_aux := ;
                                                mii := mii_aux := mpeso := mlucro := ;
                                                mvlr_merc := mcus_merc := mcus_real :=;
                                                mpr_venda := mpr_medio := mpr_unit := ;
                                                mvlr_merc4 := mcus_merc4 := mcus_real4 :=;
                                                mpr_venda4 := mpr_medio4 := mpr_unit4 := mvlr_icm_sub := 0
                                                setcor(3)
                                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                                DEVPOS(lci+12,cci+20);DEVOUT(mmerc)
                                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                                IF mp == 'X'
                                                        tp_ipi = 'PERCENTUAL'
                                                ELSE
                                                        tp_ipi = 'VALOR (R$)'
                                                ENDIF
                                                setcor(1)
                                                mensagem('Digite Codigo ou <ENTER>p/Desc. - <ALT+P>Cad.PROD. - <F10>Consulta')
                                                f4 := ' '
                                                @ lci+12,cci+14 GET mcod_bc PICT '@!'   //WHEN men_get(lci+13,cci+14,'Digite o Codigo ou <ENTER>p/Digitar Descricao - <ALT+P>cadastra PRODUTOS') VALID lim_get()
                                                READ
                                                IF LASTKEY() = 27
                                                        opcao := op_simnao('N','Deseja Sair a entrada da NOTA:')
                                                        IF opcao = 'N'
                                                                LOOP
                                                        ENDIF
                                                        RESTSCREEN(00,00,24,79,tela)
                                                        DBCLOSEALL()
                                                        wvw_lclosewindow()
                                                        RETURN NIL
                                                ENDIF
                                                IF EMPTY(mcod_bc)
                                                        @ lci+12,cci+21 GET mmerc PICT '@!'             //VALID lim_get() WHEN men_get(lci+12,cci+21,'<Digite descricao mercadoria>  <ENTER>p/retornar ')
                                                        READ
                                                        IF LASTKEY() = 27;LOOP;ENDIF
                                                ENDIF
                                                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                                                        LOOP
                                                ENDIF
                                                IF ! EMPTY(mcod_bc)
                                                        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(6)
                                                                *************
                                                                IF ! merc->(DBSEEK(mcod_bc))
                                                                        *************
                                                                        ORDSETFOCUS(8)
                                                                        GO TOP
                                                                        *************
                                                                        IF ! merc->(DBSEEK(SUBSTR(mcod_bc,1,10)))
                                                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                                                LOOP
                                                                        ENDIF
                                                                        mreg := cons_ref(merc->ref)
                                                                        IF ! EMPTY(mreg)
                                                                                GO mreg
                                                                        ELSE
                                                                                LOOP
                                                                        ENDIF
                                                                ENDIF
                                                                mcod_merc := VAL(mcod_bc)
                                                        ELSE
                                                                mcod_merc := VAL(mcod_bc)
                                                                *************
                                                                SELE('merc');ORDSETFOCUS(1)
                                                                *************

                                                                IF ! merc->(DBSEEK(STRZERO(mcod_merc,5)))
                                                                        atencao('Codigo da mercadoria nao cadastrado')
                                                                        LOOP
                                                                ENDIF
                                                        ENDIF
                                                ELSEIF ! EMPTY(mmerc)
                                                        IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                                                        //f4_merc()
                                                        IF LASTKEY() = 27;LOOP;ENDIF
                                                ENDIF
                                                y := 0
                                                FOR y = 1 TO LEN(m_entrada)
                                                        IF mcod_merc = m_entrada[y,2]
                                                                atencao('Este Produto ja foi Incluido')
                                                                EXIT
                                                        ENDIF
                                                NEXT
                                                mcod_merc := VAL(merc->cod_merc)
                                                mmerc := merc->merc
                                                munidade := merc->unidade
                                                mp_lucro := merc->p_lucro
                                                mpeso := merc->peso
						mgramatura := merc->fatconv

                                                setcor(3)
                                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                                DEVPOS(lci+12,cci+21);DEVOUT(merc->merc)
                                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                                DEVPOS(lci+18,cci+13);DEVOUTPICT(mgramatura,'9.999')
                                                DEVPOS(lci+15,cci+63);DEVOUTPICT(merc->vlr_merc,'9,999,999.99')
                                                DEVPOS(lci+16,cci+63);DEVOUTPICT(merc->cust_merc,'9,999,999.99')
                                                DEVPOS(lci+17,cci+63);DEVOUTPICT(merc->cust_real,'9,999,999.99')
                                                DEVPOS(lci+18,cci+63);DEVOUTPICT(merc->pr_medio,'9,999,999.99')
                                                DEVPOS(lci+19,cci+63);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                                                DEVPOS(lci+20,cci+63);DEVOUTPICT(merc->pr_venda-merc->pr_medio,'9,999,999.99')
                                                DEVPOS(lci+21,cci+63);DEVOUTPICT(merc->saldo_mer,'999,999.99')
                                                setcor(1)

                                                //ver_merc()
                                                mcfop := mcod_nat
                                                @ lci+13,cci+13 GET mcfop PICT '9.999'
                                                @ lci+14,cci+13 GET mquantd PICT (unidade(merc->unidade)) VALID IF(EMPTY(mquantd),.F.,.T.)
                                                @ lci+15,cci+13 GET mp_lucro PICT '999.99'
                                                @ lci+16,cci+13 GET mpr_unit PICT (ALLTRIM(m_set[1,97])) VALID IF(EMPTY(mpr_unit),.F.,.T.)
                                                @ lci+17,cci+13 GET micm PICT '999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')
                                                @ lci+18,cci+13 GET mgramatura PICT '9.999' WHEN mgramatura > 0
                                                //@ lci+19,cci+13 GET mdesc1 PICT '9999.9999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')       //.AND. men_get(lci+15,cci+09,'Informe desconto '+tp_ipi)
                                                @ lci+20,cci+13 GET mipi_aux PICT '999,999.9999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')  //.AND. men_get(lci+15,cci+45,'Informe IPI '+tp_ipi)
                                                @ lci+21,cci+13 GET mii_aux PICT '9999.999' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3')       //.AND. men_get(lci+15,cci+45,'Informe I.I. [Imposto de Importacao] '+tp_ipi)
                                                @ lci+22,cci+13 GET mvlr_icm_sub PICT '999,999.99' WHEN (mnivel_cal = '1' .OR. mnivel_cal = '3') .AND. mtipo_icmsub = 'I'
                                                READ
                                                IF LASTKEY() = 27;LOOP;ENDIF
                                                mquantd_aux := mquantd
                                                mpreco_aux := mpr_unit
                                                IF mgramatura > 1
                                                        mquantd := mquantd_aux * mgramatura
                                                        mpr_unit := mpreco_aux / mgramatura
                                                ENDIF

                                                IF mv = 'X'
                                                        mipi := (mipi_aux / (mquantd * mpr_unit)) * 100
                                                        mii := (mii_aux / (mquantd * mpr_unit)) * 100
                                                        mdesc_aux := (mdesc1 / mpr_unit) * 100
                                                        mdesc1 := mdesc_aux
                                                        mdesc_aux := (mdesc2 / mpr_unit) * 100
                                                        mdesc2 := mdesc_aux
                                                        mdesc_aux := (mdesc3 / mpr_unit) * 100
                                                        mdesc3 := mdesc_aux
                                                ENDIF
                                                setcor(3)
                                                DEVPOS(lci+14,cci+13);DEVOUTPICT(mquantd,(unidade(merc->unidade)))
                                                DEVPOS(lci+16,cci+13);DEVOUTPICT(mpr_unit,(ALLTRIM(m_set[1,97])))
                                                setcor(1)
                                                * Calculo de Custo da Mercadoria
                                                calc_cus1()
                                                ********************************
                                                opcao := op_simnao('S','Confirma a Entrada da Mercadoria:')
                                                IF opcao = 'N'
                                                        LOOP
                                                ELSE
                                                        IF mvlr_icmsub > 0
                                                                mtot_icmsub := mtot_icmsub + (mvlr_icm_sub * mquantd)
                                                        ENDIF
                                                        ccomm :="UPDATE sacmerc SET p_lucro = "+sr_cdbvalue(mp_lucro) +" WHERE cod_merc = "+sr_cdbvalue(merc->cod_merc)
                                                        sr_getconnection():exec(ccomm,,.f.)
                                                        sr_getconnection():exec('COMMIT',,.f.)
                                                        *                      1          2      3      4         5          6          7
                                                        *         8         9      10         11         12    13    14     15     16
                                                        *          17           18            19          20         21      22       23            24        25      26   27
                                                        AADD(m_entrada,{merc->gru_sub,mcod_merc,mmerc,mpr_unit,mvlr_merc,mcust_merc,mcust_real,;
                                                             mpr_medio,mpr_venda,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                             merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                        AADD(m_tipo4  ,{merc->gru_sub,mcod_merc,mmerc,mpr_unit4,mvlr_merc4,mcust_mer4,mcust_rea4,;
                                                             mpr_medio4,mpr_venda4,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                                             merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                                        AADD(m_demo,STRZERO(mcod_merc,5)+'-'+mmerc+' '+TRANSFORM(mquantd_aux,'99999.9999')+' '+TRANSFORM(mpreco_aux,'9,999,999.99'))
                                                        mtot_des := (mpr_unit * mquantd)
                                                        mtot_des := mtot_des - (mtot_des * (mdesc1 / 100))
                                                        mtot_des := mtot_des - (mtot_des * (mdesc2 / 100))
                                                        mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mipi/100)))
                                                        mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mii/100)))
                                                        mtot_vlr := iat(mtot_vlr,2)
                                                        mtot_vol := iat(mtot_vol + mquantd_aux,set_aredonda)
                                                        mtot_des := 0
                                                        setcor(3)
                                                        DEVPOS(lci+25,cci+19);DEVOUT(TRANSFORM(mtot_vol,'999,999.999'))
                                                        DEVPOS(lci+25,cci+52);DEVOUT(TRANSFORM(mtot_vlr,'9,999,999.99'))
                                                        DEVPOS(lci+25,cci+82);DEVOUT(TRANSFORM(LEN(m_entrada),'9,999'))
                                                        DEVPOS(lci+27,cci+19);DEVOUT(TRANSFORM(mvol_nota - mtot_vol,'999,999.999'))
                                                        DEVPOS(lci+27,cci+52);DEVOUT(TRANSFORM(mvlr_nota - mtot_vlr,'9,999,999.99'))
                                                        setcor(1)
                                                        LOOP
                                                ENDIF
                                        ENDDO
*                               ENDIF
                                IF iat(mtot_vol,set_aredonda) = mvol_nota
                                        mtot_vlr := mtot_vlr + menc_aux + mfrete_aux
                                        IF mtot_icmsub <> mvlr_icmsub
                                                opcao := op_simnao('N','Existe uma Diferenca no valor do ICM SUBSTITUTO, Valor Informado pela Nota:'+TRANSFORM(mvlr_icmsub,'999,999.99')+' Valor Digitado por Produto:'+TRANSFORM(mtot_icmsub,'999,999.99')+' Diferenca de :'+TRANSFORM(mtot_icmsub - mvlr_icmsub,'999,999.99'))
                                                IF opcao = 'N'
                                                        LOOP
                                                ENDIF
                                        ENDIF                                                        

                                        opcao := op_simnao('S','Todas Informacoes "OK"... Confirma Entrada:')
                                        IF opcao = 'N'
                                                LOOP
                                        ELSE

                                                mvl_base := msoma
                                                repl_forn()
                                                i := 0
                                                FOR i=1 TO LEN(m_entrada)
                                                        aret := {}
                                                        sr_getconnection():exec("SELECT saldo_mer,saldo_fis,doc_ent,icm,pr_unit,vlr_merc,cust_merc,pr_venda,cust_real,pr_medio FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                                        ver_nat(m_entrada[i,25],'E')
                                                        sr_getconnection():exec("UPDATE sacmerc SET data_atu = "+sr_cdbvalue(mdata_sis)+;
                                                                              ",a_pr_unit = "+sr_cdbvalue(aret[1,5])+;
                                                                              ",a_vlr_merc = "+sr_cdbvalue(aret[1,6])+;
                                                                              ",a_cust_mer = "+sr_cdbvalue(aret[1,7])+;
                                                                              ",a_pr_venda = "+sr_cdbvalue(aret[1,8] )+;
                                                                              ",a_cust_rea = "+sr_cdbvalue(aret[1,9])+;
                                                                              ",a_pr_medio = "+sr_cdbvalue(aret[1,10] )+;
                                                                              ",pr_unit   = "+sr_cdbvalue(iat(m_entrada[i,4],set_aredonda))+;
                                                                              ",vlr_merc  = "+sr_cdbvalue(iat(m_entrada[i,5],set_aredonda))+;
                                                                              ",cust_merc = "+sr_cdbvalue(iat(m_entrada[i,6],set_aredonda))+;
                                                                              ",pr_venda  = "+sr_cdbvalue(iat(m_entrada[i,9],set_aredonda))+;
                                                                              ",cust_real = "+sr_cdbvalue(iat(m_entrada[i,7],set_aredonda))+;
                                                                              ",pr_medio  = "+sr_cdbvalue(iat(m_entrada[i,8],set_aredonda))+;
                                                                              ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_entrada[i,10]   )+;
                                                                              ",dat_ult_e = "+sr_cdbvalue(mchegada                          )+;
                                                                              ",ul_alt_pr = "+IF(aret[1,8] <> m_entrada[i,9],sr_cdbvalue(mdata_sis),nulo)+;//sr_cdbvalue(IF(aret[1,8] <> m_entrada[i,9],mdata_sis,nulo))+; //",ul_alt_pr = "+sr_cdbvalue(mchegada                          )+;
                                                                              ",opera_pr     = "+sr_cdbvalue(cod_operado)+;
                                                                              ",isento    = "+sr_cdbvalue(m_entrada[i,19]                   )+;
                                                                              ",doc_ent_a = "+sr_cdbvalue(aret[1,3]                     )+;
                                                                              ",doc_ent   = "+sr_cdbvalue('PD'+mnota                        )+;
                                                                              ",saldo_fis = "+sr_cdbvalue(aret[1,2] + IF(mcredito='S',m_entrada[i,10],0))+;
                                                                              ",icm = "+sr_cdbvalue(iat(aret[1,4] + IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10])* (m_entrada[i,27]/100)),0),2))+;
                                                                              " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                                sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC22')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue(IF(mcod_op = '02','ENTRADA: PD','ENTRADA: NF')+mnota)+','+; //11
                                                                                sr_cdbvalue('E')+','+; //11
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                                        IF mcredito = 'S'
                                                                                sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                                        'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                        'processo,ent_sai )'+;
                                                                                        ' VALUES ('+;
                                                                                        sr_cdbvalue(DATE())+','+; //1
                                                                                        sr_cdbvalue(mdata_sis)+','+; //2
                                                                                        sr_cdbvalue(TIME())+','+; //3
                                                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                        sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                        sr_cdbvalue(aret[1,2])+','+; //6
                                                                                        sr_cdbvalue(aret[1,2] + m_entrada[i,10])+','+; //7
                                                                                        sr_cdbvalue(cod_operado)+','+; //8
                                                                                        sr_cdbvalue('SAC22_1')+','+; //9
                                                                                        sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                        sr_cdbvalue('ENTRADA: '+IF(mcod_op = '02','PD','NF')+mnota)+','+; //11
                                                                                        sr_cdbvalue('E')+')',,.f.)
                                                                                        sr_getconnection():exec("COMMIT",,.f.)
                                                                        ENDIF

                                                NEXT
                                                sr_getconnection():exec('COMMIT',,.f.)
                                                i := 0
                                                FOR i=1 TO LEN(m_entrada)
                                                        mtp_nota := 'NF'
                                                        atu_movi('NF','01',i)
                                                NEXT i
                                                sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                                        'documento,serie,modelo,'+;
                                                        'num_ped,emissao,ent_sai,'+;
                                                        'cod_cli,cliente,uf_cli,'+;
                                                        'cid_cli,insc_cli,cpf_cli,'+;
                                                        'cgc_cli,vl_nota,'+;
                                                        'vl_icm,aliq_icm,vlr_icmsub,base_icmsu,'+;
                                                        'frete,encargo_f,disp_asse,ipi,'+;
                                                        'vl_base,cod_nat,norm_ele,'+;
                                                        'SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(mcodempresa         )+','+; //1
                                                        sr_cdbvalue('NF'+mnota          )+','+; //2
                                                        sr_cdbvalue(mserie              )+','+; //3
                                                        sr_cdbvalue(mmodelo             )+','+; //4
                                                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                        sr_cdbvalue(mchegada            )+','+; //6
                                                        sr_cdbvalue('E'                 )+','+; //7
                                                        sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                                        sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                                        sr_cdbvalue(forn->uf    )+','+;//10
                                                        sr_cdbvalue(forn->cidade)+','+; //11
                                                        sr_cdbvalue(forn->insc  )+','+;//12
                                                        sr_cdbvalue(forn->cpf   )+','+;//13
                                                        sr_cdbvalue(forn->cgc   )+','+;//14
                                                        sr_cdbvalue(mvlr_nota   )+','+;//15
                                                        sr_cdbvalue(mvalor_icm     )+','+;//16
                                                        sr_cdbvalue(m_entrada[1,27])+','+;//17
                                                        sr_cdbvalue(mvlr_icmsub )+','+;//18
                                                        sr_cdbvalue(mbas_icmsub )+','+;//19
                                                        sr_cdbvalue(mfrete_aux  )+','+;//20
                                                        sr_cdbvalue(menc_aux    )+','+;//21
                                                        sr_cdbvalue(mdisp_aux   )+','+;//22
                                                        sr_cdbvalue(iat(mtot_ipi,2))+','+;//23
                                                        sr_cdbvalue(mvlr_base   )+','+;//24
                                                        sr_cdbvalue(mcod_nat    )+','+;//24
                                                        sr_cdbvalue(mnorm_ele    )+','+;//25
                                                        sr_cdbvalue(' ')+')',,.f.)
                                                sr_getconnection():exec("COMMIT",,.f.)
                                                ****************
                                                SELE('icm')
                                                GO TOP
                                                ****************
                                                IF BLOQREG()
                                                        icm-> data := mchegada
                                                        icm-> documento := 'NF'+mnota
                                                        icm-> deb_cred := icm->deb_cred + iat(mtot_icm,2)
                                                        DBCOMMIT()
                                                        DBUNLOCK()
                                                ENDIF
                                                opcao := mensagem1('Deseja emitir o resumo da nota fiscal de entrada: ','S','S,N')
                                                IF opcao = 'S'
                                                        imp_resu(mtp_nota,mnota)
                                                ENDIF
                                        ENDIF
                                ENDIF
                        ENDIF
                ENDIF
        ELSE
                f6_forn()
                @ lci+3,cci+42 GET mcod_forn PICT '9999' VALID IF(EMPTY(mcod_forn),.F.,ent_forn(@mcod_forn,lci+3,cci+47))
                READ
                setcor(3)
                DEVPOS(lci+3,cci+42);DEVOUT(STRZERO(mcod_forn,4))
                DEVPOS(lci+3,cci+47);DEVOUT(forn->razao)
                muf_forn := forn->uf
                muf      := forn->uf
                setcor(1)
                ver_uf(muf)
                micm := mperc
                IF LASTKEY() = 27;LOOP;ENDIF
                @ lci+6,cci+09 GET mnota PICT '@!' VALID ver_ent()
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                **************************
                SELE('mov');ORDSETFOCUS(4)
                GO TOP
                **************************
                mtp_nota := 'PD'
                IF mov->(DBSEEK(mtp_nota+mnota+'  '+'E'+STRZERO(mcod_forn,4)))
                        atencao('Esta Nota ja foi processada')
                        LOOP
                ENDIF
                @ lci+6,cci+25 GET mvol_nota PICT '999,999.999' VALID IF(EMPTY(mvol_nota),.F.,.T.)
                READ
                IF LASTKEY() = 27;LOOP;ENDIF
                mv := 'X'
                mcfop := mcod_nat
                opcao := op_simnao('S','Confirma os dados da Nota Fiscal:')
                IF opcao = 'N'
                        LOOP
                ELSE
                        mtot_vlr := mtot_vol := 0
                        ASIZE(m_entrada,0)
                        ASIZE(m_tipo4,0)
                        ASIZE(m_demo,0)
                        WHILE .T.
                                botao(lci+14,cci+49,lci+21,cci+76,,' Valores Atuais  ')
                                DEVPOS(lci+15,cci+50);DEVOUT('Vlr.Mercad.:')
                                DEVPOS(lci+16,cci+50);DEVOUT('Cus.Mercad.:')
                                DEVPOS(lci+17,cci+50);DEVOUT('Custo Real.:')
                                DEVPOS(lci+18,cci+50);DEVOUT('Custo Medio:')
                                DEVPOS(lci+19,cci+50);DEVOUT('Preco Venda:')
                                DEVPOS(lci+20,cci+50);DEVOUT('Lucro R$...:')
                                DEVPOS(lci+21,cci+50);DEVOUT('Saldo Atual:             ')

                                IF mtot_vol = mvol_nota
                                        EXIT
                                ENDIF
                                *************
                                SELE('merc');ORDSETFOCUS(1)
                                GO TOP
                                *************
                                munidade := SPACE(3)
                                mmerc := SPACE(40)
                                mcod_bc := SPACE(14)
                                mcod_merc := mquantd := mp_lucro := ;
                                mpr_unit := mdesc_aux := mdesc1 := ;
                                mdesc2 := mdesc3 := mipi := mipi_aux := ;
                                mii := mii_aux := mpeso := mvlr_merc := ;
                                mcus_merc := mcus_real := mpr_venda := ;
                                mpr_medio := mlucro := ;
                                mvlr_merc4 := mcus_merc4 := mcus_real4 :=;
                                mpr_venda4 := mpr_medio4 := mpr_unit4 := mvlr_icm_sub := 0
                                setcor(3)
                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                DEVPOS(lci+12,cci+20);DEVOUT(mmerc)
                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                DEVPOS(lci+13,cci+28);DEVOUTPICT(mp_lucro,'999.99')
                                IF mp == 'X'
                                        tp_ipi = 'PERCENTUAL'
                                ELSE
                                        tp_ipi = 'VALOR (R$)'
                                ENDIF
                                setcor(1)
                                mensagem('Digite Codigo ou <ENTER>p/Desc. - <ALT+P>Cad.PROD. - <F10>Consulta')
                                f4 := ' '
                                @ lci+12,cci+14 GET mcod_bc PICT '@!'   //WHEN men_get(lci+13,cci+14,'Digite o Codigo ou <ENTER>p/Digitar Descricao - <ALT+P>cadastra PRODUTOS') VALID lim_get()
                                READ
                                IF LASTKEY() = 27
                                        opcao := op_simnao('N','Deseja Sair a entrada da NOTA:')
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                        RESTSCREEN(00,00,24,79,tela)
                                        DBCLOSEALL()
                                        wvw_lclosewindow()
                                        RETURN NIL
                                ENDIF
                                IF EMPTY(mcod_bc)
                                        @ lci+12,cci+21 GET mmerc PICT '@!'             //VALID lim_get() WHEN men_get(lci+12,cci+21,'<Digite descricao mercadoria>  <ENTER>p/retornar ')
                                        READ
                                        IF LASTKEY() = 27;LOOP;ENDIF
                                ENDIF
                                IF EMPTY(mcod_bc) .AND. EMPTY(mmerc)
                                        LOOP
                                ENDIF
                                IF ! EMPTY(mcod_bc)
                                        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                                                *************
                                                SELE('merc');ORDSETFOCUS(6)
                                                *************
                                                IF ! merc->(DBSEEK(mcod_bc))
                                                        *************
                                                        ORDSETFOCUS(8)
                                                        GO TOP
                                                        *************
                                                        IF ! merc->(DBSEEK(SUBSTR(mcod_bc,1,10)))
                                                                atencao('Codigo de BARRA e REFERENCIA AUXILIAR nao cadastrado')
                                                                LOOP
                                                        ENDIF
                                                ENDIF
                                                mcod_merc := VAL(mcod_bc)
                                        ELSE
                                                mcod_merc := VAL(mcod_bc)
                                                *************
                                                SELE('merc');ORDSETFOCUS(1)
                                                *************

                                                IF ! merc->(DBSEEK(STRZERO(mcod_merc,5)))
                                                        atencao('Codigo da mercadoria nao cadastrado')
                                                        LOOP
                                                ENDIF
                                        ENDIF
                                ELSEIF ! EMPTY(mmerc)
                                        IF(m_set[1,93] <> 'A',f4_merc(),f4_merc1())
                                        //f4_merc()
                                        IF LASTKEY() = 27;LOOP;ENDIF
                                ENDIF
                                y := 0
                                FOR y = 1 TO LEN(m_entrada)
                                        IF mcod_merc = m_entrada[y,2]
                                                atencao('Este Produto ja foi Incluido')
                                                EXIT
                                        ENDIF
                                NEXT
                                mcod_merc := VAL(merc->cod_merc)
                                mmerc := merc->merc
                                munidade := merc->unidade
                                mp_lucro := merc->p_lucro
                                mpeso := merc->peso
				mgramatura := merc->fatconv
                                setcor(3)
                                DEVPOS(lci+12,cci+14);DEVOUT(STRZERO(mcod_merc,5))
                                DEVPOS(lci+12,cci+20);DEVOUT(merc->merc)
                                DEVPOS(lci+12,cci+66);DEVOUT(munidade)
                                DEVPOS(lci+15,cci+13);DEVOUTPICT(mp_lucro,'999.99')
                                DEVPOS(lci+18,cci+13);DEVOUTPICT(mgramatura,'9.999')
                                DEVPOS(lci+15,cci+01);DEVOUTPICT(merc->vlr_merc,'9,999,999.99')
                                DEVPOS(lci+16,cci+14);DEVOUTPICT(merc->cust_merc,'9,999,999.99')
                                DEVPOS(lci+17,cci+27);DEVOUTPICT(merc->cust_real,'9,999,999.99')
                                DEVPOS(lci+18,cci+40);DEVOUTPICT(merc->pr_medio,'9,999,999.99')
                                DEVPOS(lci+19,cci+53);DEVOUTPICT(merc->pr_venda,'9,999,999.99')
                                DEVPOS(lci+20,cci+66);DEVOUTPICT(merc->pr_venda-merc->pr_medio,'9,999,999.99')
                                DEVPOS(lci+21,cci+27);DEVOUTPICT(merc->saldo_mer,'999,999.99')
                                setcor(1)

                                //ver_merc()
                                @ lci+14,cci+13 GET mquantd PICT (unidade(merc->unidade)) VALID IF(EMPTY(mquantd),.F.,.T.)
                                @ lci+16,cci+13 GET mpr_unit PICT (ALLTRIM(m_set[1,97]))
                                READ
                                IF LASTKEY() = 27;LOOP;ENDIF
                                mquantd_aux := mquantd
                                mpreco_aux := mpr_unit
                                IF mgramatura > 1
                                        mquantd := mquantd_aux * mgramatura
                                        mpr_unit := mpreco_aux / mgramatura
                                ENDIF

                                setcor(3)
                                DEVPOS(lci+14,cci+13);DEVOUTPICT(mquantd,(unidade(merc->unidade)))
                                DEVPOS(lci+16,cci+13);DEVOUTPICT(mpr_unit,(ALLTRIM(m_set[1,97])))
                                setcor(1)
                                ********************************
                                opcao := op_simnao('S','Confirma a Entrada da Mercadoria [S/n]:')
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        IF mvlr_icmsub > 0
                                                mtot_icmsub := mtot_icmsub + (mvlr_icm_sub * mquantd)
                                        ENDIF
                                        *                      1          2      3      4         5          6          7
                                        *         8         9      10         11         12    13    14     15     16
                                        *          17           18            19          20         21      22       23            24        25      26   27
                                        AADD(m_entrada,{merc->gru_sub,mcod_merc,mmerc,mpr_unit,mvlr_merc,mcust_merc,mcust_real,;
                                             mpr_medio,mpr_venda,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                             merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                        AADD(m_tipo4  ,{merc->gru_sub,mcod_merc,mmerc,mpr_unit4,mvlr_merc4,mcust_mer4,mcust_rea4,;
                                             mpr_medio4,mpr_venda4,mquantd,merc->gramatura,mipi,mpeso,mdesc1,mdesc2,mdesc3,;
                                             merc->cod_fab,merc->fabrica,merc->isento,mquantd_aux,mpreco_aux,mii,merc->unidade,merc->sittrib,mcfop,micmsub,micm,merc->saldo_mer})
                                        AADD(m_demo,STRZERO(mcod_merc,5)+'-'+mmerc+' '+TRANSFORM(mquantd_aux,'99999.9999')+' '+TRANSFORM(mpreco_aux,'9,999,999.99'))
                                        mtot_des := (mpr_unit * mquantd)
                                        mtot_des := mtot_des - (mtot_des * (mdesc1 / 100))
                                        mtot_des := mtot_des - (mtot_des * (mdesc2 / 100))
                                        mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mipi/100)))
                                        mtot_vlr := mtot_vlr + (mtot_des + ((mpr_unit*mquantd) * (mii/100)))
                                        mtot_vlr := iat(mtot_vlr,2)
                                        mtot_vol := iat(mtot_vol + mquantd_aux,set_aredonda)
                                        mtot_des := 0
                                        setcor(3)
                                        //limpa(lci+17,cci+1,lci+17,cba-1)
                                        //limpa(lci+21,cci+1,lci+21,cba-1)
                                        DEVPOS(lci+25,cci+19);DEVOUT(TRANSFORM(mtot_vol,'999,999.999'))
                                        DEVPOS(lci+25,cci+52);DEVOUT(TRANSFORM(mtot_vlr,'9,999,999.99'))
                                        DEVPOS(lci+25,cci+82);DEVOUT(TRANSFORM(LEN(m_entrada),'9,999'))
                                        DEVPOS(lci+27,cci+19);DEVOUT(TRANSFORM(mvol_nota - mtot_vol,'999,999.999'))
                                        DEVPOS(lci+27,cci+52);DEVOUT(TRANSFORM(mvlr_nota - mtot_vlr,'9,999,999.99'))
                                        setcor(1)

                                        LOOP
                                ENDIF
                        ENDDO
                        IF iat(mtot_vol,set_aredonda) = mvol_nota
                                mtot_vlr := mtot_vlr + menc_aux + mfrete_aux
                                IF mtot_icmsub <> mvlr_icmsub
                                        opcao := op_simnao('N','Existe uma Diferenca no valor do ICM SUBSTITUTO, Valor Informado pela Nota:'+TRANSFORM(mvlr_icmsub,'999,999.99')+' Valor Digitado por Produto:'+TRANSFORM(mtot_icmsub,'999,999.99')+' Diferenca de :'+TRANSFORM(mtot_icmsub - mvlr_icmsub,'999,999.99'))
                                        IF opcao = 'N'
                                                LOOP
                                        ENDIF
                                ENDIF                                                        
                                opcao := op_simnao('S','Todas Informacoes "OK"... Confirma Entrada:')
                                IF opcao = 'N'
                                        LOOP
                                ELSE
                                        mvl_base := msoma
                                        repl_forn()
                                        i := 0
                                        FOR i=1 TO LEN(m_entrada)
                                                        aret := {}
                                                        sr_getconnection():exec("SELECT saldo_mer,saldo_fis,doc_ent,icm,chegada FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.t.,@aret)
                                                        sr_getconnection():exec("UPDATE sacmerc SET "+;
                                                                              ",saldo_ant = "+sr_cdbvalue(aret[1,1])+;
                                                                              ",saldo_mer = "+sr_cdbvalue(aret[1,1] + m_entrada[i,10])+;
                                                                              ",dat_ult_e = "+sr_cdbvalue(mchegada                    )+;
                                                                              ",doc_ent_a = "+sr_cdbvalue(aret[1,3]                     )+;
                                                                              ",doc_ent   = "+sr_cdbvalue('PD'+mnota                        )+;
                                                                              ",saldo_fis = "+sr_cdbvalue(aret[1,2] + m_entrada[i,10])+;
                                                                              " WHERE cod_merc = "+sr_cdbvalue(STRZERO(m_entrada[i,2],5)),,.f.)
                                                        sr_getconnection():exec('INSERT INTO logproduto (data_sis,data,'+;
                                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                                'processo,ent_sai,SR_DELETED )'+;
                                                                                ' VALUES ('+;
                                                                                sr_cdbvalue(DATE())+','+; //1
                                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                                sr_cdbvalue(TIME())+','+; //3
                                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                                sr_cdbvalue(aret[1,1])+','+; //6
                                                                                sr_cdbvalue(aret[1,1] + m_entrada[i,10])+','+; //7
                                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                                sr_cdbvalue('SAC22')+','+; //9
                                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                                sr_cdbvalue(IF(mcod_op = '02','ENTRADA: PD','ENTRADA: NF')+mnota)+','+; //11
                                                                                sr_cdbvalue('E')+','+; //12
                                                                                sr_cdbvalue(' ')+')',,.f.)
                                                        sr_getconnection():exec('INSERT INTO logprod_fis (data_sis,data,'+;
                                                                'hora,cod_prod,quantd,saldo_ant,saldo_pos,cod_oper,prog,terminal,'+;
                                                                'processo,ent_sai )'+;
                                                                ' VALUES ('+;
                                                                sr_cdbvalue(DATE())+','+; //1
                                                                sr_cdbvalue(mdata_sis)+','+; //2
                                                                sr_cdbvalue(TIME())+','+; //3
                                                                sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+; //4
                                                                sr_cdbvalue(m_entrada[i,10])+','+; //5
                                                                sr_cdbvalue(aret[1,2])+','+; //6
                                                                sr_cdbvalue(aret[1,2] + m_entrada[i,10])+','+; //7
                                                                sr_cdbvalue(cod_operado)+','+; //8
                                                                sr_cdbvalue('SAC22_1')+','+; //9
                                                                sr_cdbvalue(LEFT(NETNAME(),15))+','+; //12
                                                                sr_cdbvalue('ENTRADA: '+IF(mcod_op = '02','PD','NF')+mnota)+','+; //11
                                                                sr_cdbvalue('E')+')',,.f.)
                                                                sr_getconnection():exec("COMMIT",,.f.)

                                        NEXT
                                        i := 0
                                        FOR i=1 TO LEN(m_entrada)
                                                ver_cod(m_entrada[i,2],,,,,'*')
                                                sr_getconnection():exec('INSERT INTO sacmov (empresa,'+;
                                                        'documento,serie,modelo,'+;
                                                        'num_ped,ped_forn,data_ped,'+;
                                                        'gru_sub,codigo,produto,cod_fab,'+;
                                                        'fabrica,unidade,data_s_e,ent_sai,'+;
                                                        'saldo_ant,quantd,quantd_aux,'+;
                                                        'pr_venda1,pr_venda,pr_unit,cod_forn,'+;
                                                        'fornece,uf_cli,icm_aliq,icm_sub,'+;
                                                        'fob,cif,dia1,dia2,dia3,emissao,saida,'+;
                                                        'chegada,disp_asse,'+;
                                                        'ipi_aliq,ipi,peso,desc1,desc2,desc3,'+;
                                                        'tipo,isento,sittrib,cod_nat,cod_oper,'+;
                                                        'icm,norm_ele,SR_DELETED )'+;
                                                        ' VALUES ('+;
                                                        sr_cdbvalue(mcodempresa         )+','+; //1
                                                        sr_cdbvalue('PD'+mnota          )+','+; //2
                                                        sr_cdbvalue(mserie              )+','+; //3
                                                        sr_cdbvalue(mmodelo             )+','+; //4
                                                        sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                        sr_cdbvalue(mped_forn              )+','+; //6
                                                        sr_cdbvalue(mdata_ped              )+','+; //7
                                                        sr_cdbvalue(m_entrada[i,1]           )+','+; //8
                                                        sr_cdbvalue(STRZERO(m_entrada[i,2],5))+','+;//9
                                                        sr_cdbvalue(m_entrada[i,3]           )+','+;//10
                                                        sr_cdbvalue(m_entrada[i,17]          )+','+; //11
                                                        sr_cdbvalue(LEFT(m_entrada[i,18],30)          )+','+;//12
                                                        sr_cdbvalue(m_entrada[i,23]          )+','+;//13
                                                        sr_cdbvalue(mchegada               )+','+;//14
                                                        sr_cdbvalue('E'                    )+','+;//15
                                                        sr_cdbvalue(m_entrada[i,28]          )+','+;//16
                                                        sr_cdbvalue(m_entrada[i,10]          )+','+;//17
                                                        sr_cdbvalue(m_entrada[i,10]          )+','+;//18
                                                        sr_cdbvalue(merc->pr_venda         )+','+;//19
                                                        sr_cdbvalue(m_entrada[i,9]           )+','+;//20
                                                        sr_cdbvalue(m_entrada[i,5]           )+','+;//21
                                                        sr_cdbvalue(STRZERO(mcod_forn,4)   )+','+;//22
                                                        sr_cdbvalue(LEFT(mfornece,30)      )+','+;//23
                                                        sr_cdbvalue(forn->uf               )+','+;//24
                                                        sr_cdbvalue(m_entrada[i,27]                                       )+','+;//13
                                                        sr_cdbvalue(m_entrada[i,26]                                       )+','+;//14
                                                        sr_cdbvalue(mfob                                                )+','+;//15
                                                        sr_cdbvalue(mcif                                                )+','+;//16
                                                        sr_cdbvalue(STRZERO(val(mdia1),2)                                               )+','+;//17
                                                        sr_cdbvalue(STRZERO(val(mdia2),2)                                               )+','+;//18
                                                        sr_cdbvalue(STRZERO(val(mdia3),2)                                               )+','+;//19
                                                        sr_cdbvalue(memissao                                            )+','+;//20
                                                        sr_cdbvalue(msaida                                              )+','+;//21
                                                        sr_cdbvalue(mchegada                                            )+','+;//22
                                                        sr_cdbvalue((m_entrada[i,5] * m_entrada[i,10]) * mfrete             )+','+;//23
                                                        sr_cdbvalue((m_entrada[i,5] * m_entrada[i,10]) * mencargo_f         )+','+;//24
                                                        sr_cdbvalue((m_entrada[i,5] * m_entrada[i,10]) * mdisp_asse         )+','+;//13
                                                        sr_cdbvalue(m_entrada[i,12]                                       )+','+;//14
                                                        sr_cdbvalue((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,12]/100))+','+;//15
                                                        sr_cdbvalue(m_entrada[i,13]                                       )+','+;//16
                                                        sr_cdbvalue((m_entrada[i,4] * m_entrada[i,10]) * (m_entrada[i,14]/100))+','+;//17
                                                        sr_cdbvalue((m_entrada[i,4] * m_entrada[i,10])* (m_entrada[i,15]/100) )+','+;//18
                                                        sr_cdbvalue((m_entrada[i,4] * m_entrada[i,10])*(m_entrada[i,16]/100)  )+','+;//19
                                                        sr_cdbvalue('02'                                                )+','+;//20
                                                        sr_cdbvalue(m_entrada[i,19]                                       )+','+;//21
                                                        sr_cdbvalue(m_entrada[i,24]                                       )+','+;//22
                                                        sr_cdbvalue(m_entrada[i,25]                                       )+','+;//23
                                                        sr_cdbvalue(cod_operado                                         )+','+;//13
                                                        sr_cdbvalue(IF(! EMPTY(m_entrada[i,27]),((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,27]/100)),0))+','+;//13
                                                        sr_cdbvalue(mnorm_ele)+','+;//13
                                                        sr_cdbvalue(' ')+')',,.f.)

                                                mtot_ipi := mtot_ipi + (m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,12]/100)
                                                IF ! EMPTY(m_entrada[i,27])
                                                        mtot_icm := mtot_icm + ((m_entrada[i,5] * m_entrada[i,10]) * (m_entrada[i,27]/100))
                                                ENDIF
                                        NEXT i
                                        sr_getconnection():exec('INSERT INTO sactotnt (empresa,'+;
                                                'documento,serie,modelo,'+;
                                                'num_ped,emissao,ent_sai,'+;
                                                'cod_cli,cliente,uf_cli,'+;
                                                'cid_cli,insc_cli,cpf_cli,'+;
                                                'cgc_cli,vl_nota,'+;
                                                'vl_icm,aliq_icm,vlr_icmsub,base_icmsu,'+;
                                                'frete,encargo_f,disp_asse,ipi,'+;
                                                'vl_base,cod_nat,norm_ele,'+;
                                                'SR_DELETED )'+;
                                                ' VALUES ('+;
                                                sr_cdbvalue(mcodempresa         )+','+; //1
                                                sr_cdbvalue('PD'+mnota          )+','+; //2
                                                sr_cdbvalue(mserie              )+','+; //3
                                                sr_cdbvalue(mmodelo             )+','+; //4
                                                sr_cdbvalue(STRZERO(mnum_ped,6) )+','+; //5
                                                sr_cdbvalue(mchegada            )+','+; //6
                                                sr_cdbvalue('E'                 )+','+; //7
                                                sr_cdbvalue(STRZERO(mcod_forn,4))+','+; //8
                                                sr_cdbvalue(LEFT(mfornece,30)   )+','+;//9
                                                sr_cdbvalue(forn->uf    )+','+;//10
                                                sr_cdbvalue(forn->cidade)+','+; //11
                                                sr_cdbvalue(forn->insc  )+','+;//12
                                                sr_cdbvalue(forn->cpf   )+','+;//13
                                                sr_cdbvalue(forn->cgc   )+','+;//14
                                                sr_cdbvalue(mvlr_nota   )+','+;//15
                                                sr_cdbvalue(mvalor_icm     )+','+;//16
                                                sr_cdbvalue(m_entrada[1,27])+','+;//17
                                                sr_cdbvalue(mvlr_icmsub )+','+;//18
                                                sr_cdbvalue(mbas_icmsub )+','+;//19
                                                sr_cdbvalue(mfrete_aux  )+','+;//20
                                                sr_cdbvalue(menc_aux    )+','+;//21
                                                sr_cdbvalue(mdisp_aux   )+','+;//22
                                                sr_cdbvalue(iat(mtot_ipi,2))+','+;//23
                                                sr_cdbvalue(mvlr_base   )+','+;//24
                                                sr_cdbvalue(mcod_nat    )+','+;//24
                                                sr_cdbvalue(mnorm_ele    )+','+;//25
                                                sr_cdbvalue(' ')+')',,.f.)
                                        sr_getconnection():exec("COMMIT",,.f.)
                                        opcao := op_simnao('S','Deseja emitir o resumo da nota fiscal de entrada: ')
                                        IF opcao = 'S';imp_resu(mtp_nota,mnota);ENDIF
                                ENDIF
                        ENDIF
                ENDIF
        ENDIF
ENDDO
fimset()
wvw_lclosewindow()
RETURN NIL
*********************************** f i m ***********************************************
FUNCTION calc_cus1(consulta)
*******************
LOCAL icm_aux:=0,mmedio_ven,mtipo_preco,firm_aux:=0,pis_aux:=0,;
      confis_aux:=0,micm_calc:=0,calc_merc:={}
MEMVAR mcod_merc,micm,mcod_op,micm_firm,mpis,mconfis,mvlr_merc,mcust_merc,mpr_unit,;
       mdesc1,mdesc2,mdesc3,mencargo_f,mipi,mfrete,mii,mdisp_asse,mvlr_icmsub,;
       mvlr_nota,mimposto,mp_lucro,mfator,mcust_real,mquantd,mpr_medio,mpr_venda,;
       mpercent,lci,cci,mnivel_cal,micmsub

calc_merc:={}
cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
sr_getconnection():exec(ccomm,,.t.,@calc_merc)
IF LEN(calc_merc) = 0
        atencao('Codigo nao Cadastrado !!!')
        RETURN .F.
ENDIF

micm_calc := icm_aux := micm
firm_aux := micm_firm
pis_aux  := mpis
confis_aux := mconfis
IF calc_merc[1,61] = 'S'   //.OR. mcod_op = '02'
        micm_firm := micm_calc := 0
ENDIF
IF mnivel_cal = '1'
        mvlr_merc := mpr_unit - (mpr_unit*(mdesc1/100))
        mvlr_merc := mvlr_merc + (iat(mvlr_merc * mencargo_f,2)) + (iat(mvlr_merc * mfrete,2))
        IF mipi > 0
                mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100)) - (mvlr_merc * (micm_calc/100))
        ELSE
                mcust_merc := mvlr_merc * (100 - micm_calc)
                mcust_merc := mcust_merc / 100
        ENDIF
        IF mii > 0
                mcust_merc := mvlr_merc + (mvlr_merc * (mii/100))
        ENDIF
        IF mdisp_asse > 0
                mcust_merc := mcust_merc + (mvlr_merc * mdisp_asse)
        ENDIF
        micmsub := 0
        micmsub := mvlr_icm_sub
        mcust_merc := mcust_merc + micmsub
        **********************************************************************
        mfator := 100 - (mpis + mconfis + micm_firm + mimposto + mp_lucro)
        **********************************************************************
        mcust_real := (mcust_merc / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
        IF calc_merc[1,56] > 0
                mpr_medio := ((mquantd * mcust_real) + (calc_merc[1,56] * calc_merc[1,48])) / (mquantd + calc_merc[1,56])
        ELSE
                mpr_medio := mcust_real
        ENDIF
        IF m_set[1,79] == 'O'
                mpr_venda := (mcust_merc / (100 - (micm_firm+mpis+mconfis+mimposto+mp_lucro)))*100
        ELSEIF m_set[1,79] == 'M'
                IF mpercent == 'P'
                        mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF mpercent == 'F'
                        mpr_venda := (mpr_medio / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                ENDIF
        ELSEIF m_set[1,79] == 'R'
                IF mpercent == 'P'
                        mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF mpercent == 'F'
                        mpr_venda := (mcust_real / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                ENDIF
        ENDIF
        IF mcod_op = '04'
                mpr_unit4 := mpr_unit / IF(EMPTY(mper_vlr),1,mper_vlr/100)
                mvlr_merc4 := mpr_unit4 - (mpr_unit4*(mdesc1/100))
                //mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc2/100))
                //mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc3/100))
                mvlr_merc4 := mvlr_merc4 + (iat(mvlr_merc4 * mencargo_f,2)) + (iat(mvlr_merc4 * mfrete,2))

                IF mipi > 0
                        mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mipi/100)) - (mvlr_merc4 * (micm_calc/100))
                ELSE
                        mcust_mer4 := mvlr_merc4 * (100 - micm_calc)
                        mcust_mer4 := mcust_mer4 / 100
                ENDIF
                IF mii > 0
                        mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mii/100))
                ENDIF
                IF mdisp_asse > 0
                        mcust_mer4 := mcust_mer4 + (mvlr_merc4 * mdisp_asse)
                ENDIF
                micmsub := 0
                IF mvlr_icmsub > 0
                        micmsub := (mvlr_merc4 * (mvlr_icmsub/mvlr_nota))
                        mcust_mer4 := mcust_mer4 + micmsub
                ENDIF
                **********************************************************************
                mfator := 100 - (mpis + mconfis + micm_firm + mimposto + mp_lucro)
                **********************************************************************
                mcust_rea4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
                //mcust_rea4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto)))*100
                IF calc_merc[1,56] > 0
                        mpr_medio4 := ((mquantd * mcust_rea4) + (calc_merc[1,56] * calc_merc[1,48])) / (mquantd + calc_merc[1,56])
                ELSE
                        mpr_medio4 := mcust_rea4
                ENDIF
                IF m_set[1,79] == 'O'
                        mpr_venda4 := (mcust_mer4 / (100 - (micm_firm+mpis+mconfis+mimposto+mp_lucro)))*100
                ELSEIF m_set[1,79] == 'M'
                        IF mpercent == 'P'
                                mpr_venda4 := mpr_medio4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                        ELSEIF mpercent == 'F'
                                mpr_venda4 := (mpr_medio4 / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                        ENDIF
                ELSEIF m_set[1,79] == 'R'
                        IF mpercent == 'P'
                                mpr_venda4 := mcust_rea4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                        ELSEIF mpercent == 'F'
                                mpr_venda4 := (mcust_rea4 / (100-mp_lucro)) * 100  // pelo CUSTO REAL
                        ENDIF
                ENDIF
        ENDIF
ELSEIF mnivel_cal = '2'
        mvlr_merc := mpr_unit
        mcust_merc := mvlr_merc
        mcust_real := mcust_merc
        mpr_medio := ((mquantd * mcust_real) + (calc_merc[1,56] * calc_merc[1,48])) / (mquantd + calc_merc[1,56])
        IF m_set[1,79] = 'M'
                mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ELSEIF m_set[1,79] = 'R'
                mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ENDIF
ELSEIF mnivel_cal = '3'
        mvlr_merc := mpr_unit - (mpr_unit*(mdesc1/100))
        //mvlr_merc := mvlr_merc - (mpr_unit*(mdesc2/100))
        //mvlr_merc := mvlr_merc - (mpr_unit*(mdesc3/100))
        mvlr_merc := mvlr_merc + (iat(mvlr_merc * mencargo_f,2)) + (iat(mvlr_merc * mfrete,2))

        //mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100)) - (mvlr_merc * (micm_calc/100))
        mcust_merc := mvlr_merc + (mvlr_merc * (mipi/100))

        IF mii > 0
                mcust_merc := mcust_merc + (mcust_merc * (mii/100))
        ENDIF
        IF mdisp_asse > 0
                mcust_merc := mcust_merc + (mcust_merc * mdisp_asse)
        ENDIF
        micmsub := 0
        IF mvlr_icmsub > 0
                micmsub := (mvlr_merc * (mvlr_icmsub/mvlr_nota))
                mcust_merc := mcust_merc + micmsub
        ENDIF

        mcust_real := mcust_merc*(((micm_firm - micm_calc)/100)+1)
        mcust_real := mcust_real*((mpis/100)+1)
        mcust_real := mcust_real*((mconfis/100)+1)
        mcust_real := mcust_real*((mimposto/100)+1)

        IF calc_merc[1,56] > 0
                mpr_medio := ((mquantd * mcust_real) + (calc_merc[1,56] * calc_merc[1,48])) / (mquantd + calc_merc[1,56])
        ELSE
                mpr_medio := mcust_real
        ENDIF
        IF m_set[1,79] == 'M'
                mpr_venda := mpr_medio * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ELSEIF m_set[1,79] == 'R'
                mpr_venda := mcust_real * ((mp_lucro/100)+1)  // pelo CUSTO REAL
        ENDIF
        IF mcod_op = '04'
                mpr_unit4 := mpr_unit / IF(EMPTY(mper_vlr),1,mper_vlr/100)
                mvlr_merc4 := mpr_unit4 - (mpr_unit4*(mdesc1/100))
                //mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc2/100))
                //mvlr_merc4 := mvlr_merc4 - (mpr_unit4*(mdesc3/100))
                mvlr_merc4 := mvlr_merc4 + (iat(mvlr_merc4 * mencargo_f,2)) + (iat(mvlr_merc4 * mfrete,2))

                mcust_mer4 := mvlr_merc4 + (mvlr_merc4 * (mipi/100)) - (mvlr_merc4 * (micm_calc/100))
                IF mii > 0
                        mcust_mer4 := mcust_merc4 + (mvlr_merc4 * (mii/100))
                ENDIF
                IF mdisp_asse > 0
                        mcust_mer4 := mcust_mer4 + (mvlr_merc4 * mdisp_asse)
                ENDIF
                micmsub := 0
                IF mvlr_icmsub > 0
                        micmsub := (mvlr_merc4 * (mvlr_icmsub/mvlr_nota))
                        mcust_mer4 := mcust_mer4 + micmsub
                ENDIF

                mcust_rea4 := mcust_mer4*((micm_firm/100)+1)
                mcust_rea4 := mcust_rea4*((mpis/100)+1)
                mcust_rea4 := mcust_rea4*((mconfis/100)+1)
                mcust_rea4 := mcust_rea4*((mimposto/100)+1)

                IF calc_merc[1,56] > 0
                        mpr_medio4 := ((mquantd * mcust_rea4) + (calc_merc[1,56] * calc_merc[1,48])) / (mquantd + calc_merc[1,56])
                ELSE
                        mpr_medio4 := mcust_rea4
                ENDIF
                IF m_set[1,79] == 'M'
                        mpr_venda4 := mpr_medio4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ELSEIF m_set[1,79] == 'R'
                        mpr_venda4 := mcust_rea4 * ((mp_lucro/100)+1)  // pelo CUSTO REAL
                ENDIF
        ENDIF
ENDIF
op_tela(00,05,10,95,' RESUMO CALCULOS DOS PRECOS ')
WHILE .T.
        setcor(3)
        DEVPOS(0,01);DEVOUT(' Precos Anteriores ')
        @ 1,00 TO 1,95
        setcor(1)
        DEVPOS(2,01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(2,14);DEVOUT(' Cus.Mercad.')
        DEVPOS(2,27);DEVOUT('  Custo Real')
        DEVPOS(2,40);DEVOUT(' Custo Medio')
        DEVPOS(2,53);DEVOUT(' Preco Venda')
        DEVPOS(2,66);DEVOUT('       Lucro')
        DEVPOS(4,01);DEVOUT('Saldo Atual da Mecadoria:             ')
        DEVPOS(5,0);DEVOUT(REPLI(CHR(223),95))
        //@ 5,0 TO 5,95
        setcor(3)
        DEVPOS(6,01);DEVOUT(' Precos Calculados ')
        @ 7,0 TO 7,95
        setcor(1)
        DEVPOS(8,01);DEVOUT(' Vlr.Mercad.')
        DEVPOS(8,14);DEVOUT(' Cus.Mercad.')
        DEVPOS(8,27);DEVOUT('  Custo Real')
        DEVPOS(8,40);DEVOUT(' Custo Medio')
        DEVPOS(8,53);DEVOUT(' Preco Venda')
        DEVPOS(8,66);DEVOUT('       Lucro')
        DEVPOS(10,01);DEVOUT('Saldo Apos a entrada:             ')

        setcor(3)
        DEVPOS(3,01);DEVOUTPICT(calc_merc[1,43],'9,999,999.99')
        DEVPOS(3,14);DEVOUTPICT(calc_merc[1,44],'9,999,999.99')
        DEVPOS(3,27);DEVOUTPICT(calc_merc[1,45],'9,999,999.99')
        DEVPOS(3,40);DEVOUTPICT(calc_merc[1,48],'9,999,999.99')
        DEVPOS(3,66);DEVOUTPICT(calc_merc[1,46]-calc_merc[1,48],'9,999,999.99')
        DEVPOS(4,27);DEVOUTPICT(calc_merc[1,56],'999,999.99')   

        DEVPOS(9,01);DEVOUTPICT(mvlr_merc,'9,999,999.99')
        DEVPOS(9,14);DEVOUTPICT(mcust_merc,'9,999,999.99')
        DEVPOS(9,27);DEVOUTPICT(mcust_real,'9,999,999.99')
        DEVPOS(9,40);DEVOUTPICT(mpr_medio,'9,999,999.99')
        DEVPOS(9,66);DEVOUTPICT(mpr_venda-mpr_medio,'9,999,999.99')
        DEVPOS(10,23);DEVOUTPICT(calc_merc[1,56]+mquantd,'999,999.99')
        IF mcust_real >= calc_merc[1,46]
                DEVPOS(3,53);DEVOUTPICT(calc_merc[1,46],'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                IF 'N' = op_simnao('S','Preco de Venda Calculado R$: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' e Maior que o Preco de Venda Anterior R$: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999,999.99'))+' ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor Custo Real Calculado: '+ALLTRIM(TRANSFORM(mcust_real,'999,999,999.99'))+' Preco de Venda Anterior: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO',,,STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                        mpr_venda := calc_merc[1,46]
                //ELSE
                ENDIF
                EXIT
        ELSEIF calc_merc[1,46] <= mpr_venda
                DEVPOS(3,53);DEVOUTPICT(calc_merc[1,46],'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                IF 'N' = op_simnao('S','Preco de Venda Atual Menor R$: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999,999.99'))+' que Preco Venda Calculado R$: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor Anterior: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999,999.99'))+' Preco de Venda Calculado: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO',,,STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                        mpr_venda := calc_merc[1,46]

                //ELSE
                ENDIF
                EXIT
        ELSEIF calc_merc[1,46] >= mpr_venda
                DEVPOS(3,53);DEVOUTPICT(calc_merc[1,46],'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
                IF 'S' = op_simnao('N','Preco de Venda ANTERIOR R$: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999,999.99'))+' Maior que Preco Venda Calculado R$: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ATUALIZAR')
                        IF ! aut_sen('Cod.Produto: '+STRZERO(mcod_merc,5)+' - Valor de Venda Anterior: '+ALLTRIM(TRANSFORM(calc_merc[1,46],'999,999,999.99'))+' Preco de Venda Calculado: '+ALLTRIM(TRANSFORM(mpr_venda,'999,999.99'))+' ... Senha de autorizacao:','LIB_ATU_PRECO',,,STRZERO(mcod_merc,5))
                                LOOP
                        ENDIF
                ELSE
                        mpr_venda := calc_merc[1,46]
                ENDIF
                EXIT
/*
        mtipo_preco := 'N'
        mtipo_preco:= op_simnao('N','Deseja ATUALIZAR O *** PRECO DE VENDA ***:')
        IF mtipo_preco = 'N'
                mpr_venda := calc_merc[1,46]
        ENDIF
*/
        ELSE
                DEVPOS(3,53);DEVOUTPICT(calc_merc[1,46],'9,999,999.99')
                DEVPOS(9,53);DEVOUTPICT(mpr_venda,'9,999,999.99')
        ENDIF
ENDDO
setcor(1)
******************
//SELE(msele);IF(morde>0,ORDSETFOCUS(morde),)
******************
micm       := icm_aux
micm_firm  := firm_aux
mpis       := pis_aux
mconfis    := confis_aux
wvw_lclosewindow()
RETURN .T.
************************** F I M **********************
FUNCTION vlr_ncm(vncm,vuf)
**********************
LOCAL mvlrncm
mvlrncm := {}
sr_getconnection():exec( "SELECT * FROM sacncm WHERE codigo = "+sr_cdbvalue(vncm),,.t.,@mvlrncm)
IF LEN(mvlrncm) = 0
        RETURN 0
ELSE
        IF vuf = m_set[1,19]
                RETURN mvlrncm[1,3]
        ELSEIF AT(vuf,'AL,BA,CE,MA,PB,PE,PI,RN,SE,AC,AP,AM,PA,RO,RR,TO') > 0
                RETURN mvlrncm[1,4]
        ELSEIF AT(vuf,'PR,SC,RG,MG,ES,RJ,SP') > 0
                RETURN mvlrncm[1,5]
        ELSE
                RETURN 0
        ENDIF
ENDIF
RETURN 0
************************** F I M **********************