MEMVAR getlist
***************************
* IMPRIMI NOTA FISCAL
***************************

FUNCTION notab(mv)
*********************

LOCAL mtela_ap,mnomenf

MEMVAR mseguro,mencargo,mcod_cli,minsc,m_normal,mcod_nat,m_isento,m_desc,m_icmdif,;
       m_icmsub,mfrete,mtp_vend,mcond_vezes,mintev,mintev1,mintev2,mintev3,mintev4,;
       mintev5,mnum_ped,mdocumento,mdata,marca,mtipo_nota,mtot_nota,mtot_icmf,mtot_icm,;
       mbase_icmf,mbase_icm,mtot_ipi,mtot_quantd,mtot_peso,mtot_liq

PRIVATE mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
      m_acucar:={},msaldo_atu,mextenso,lin1,lin2,;
      mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,m_altera:={},tela2,;
      mpag,mdoc_aux,mtot_aux,mcod_fat,mlin,m_pos:={},mpos,mvlr_icmsub:=0,mdesc_icm:=0,;
      mpr_fat:=0,mdif_icms:=0,mtip_cli:=' ',mbase_sub:=0,micm_sub:=0,;
      mtot_desc:=0,point,;
      mnum_dup,mnum_dup1,mnum_dup2,mnum_dup3,mnum_dup4,mnum_dup5,;
      mvenci,mvenci1,mvenci2,mvenci3,mvenci4,mvenci5,;
      mvlr_dup:=0,mvlr_dup1:=0,mvlr_dup2:=0,mvlr_dup3:=0,mvlr_dup4:=0,mvlr_dup5:=0,;
      mnota,;
      mtot_prod:=0,mpis :=0,mconfis :=0,micms_desc :=0,mpercent:=0

CLEAR GETS

mtela := SAVESCREEN(01,00,24,79)

mlinha := SAVESCREEN(24,00,24,79)
mcod_fat := SPACE(2)
mtraco := REPLI('=',80)
mlin := 10
IF mtipo_nota = 'N'
        mcod_fat := '01'
        op_tela(10,10,12,40,'Codigo da Fatura')
        DEVPOS(01,00);DEVOUT('Digite o Codigo da Fatura:')
        @ 01,COL()+1 GET mcod_fat PICT '99' VALID mcod_fat $ '01,02,03'
        READ
        wvw_lclosewindow()
        IF LASTKEY() = 27
                RETURN NIL
        ENDIF
        IF mcod_fat = '03'
                mpercent:=0
                op_tela(10,10,12,40,'Desconto da Fatura')
                DEVPOS(01,00);DEVOUT('Digite o Codigo da Fatura:')
                @ 01,COL()+1 GET mpercent PICT '9999.99'
                READ
                wvw_lclosewindow()
                IF LASTKEY() = 27
                        RETURN NIL
                ENDIF
        ENDIF
ELSE
        mcod_fat = '01'
ENDIF
WHILE .T.
        ASIZE(m_altera,0)
        mtot_icm := mtot_nota := mtot_desc := mtot_quantd := mtot_peso := ;
        mtot_liq := mtot_icmf := mtot_aux := mtot_ipi := mvlr_icmsub := ;
        mdesc_icm :=i := f := mbase_icm := mbase_icmf := 0
        lin1 := lin2 := SPACE(60)
        mpos := 1
        marca := SPACE(1)
        IF mtipo_nota = 'N'
                FOR f = 1 TO LEN(m_normal)
                        mpr_fat := IF(mcod_fat = '01',m_normal[f,7],IF(mcod_fat='02',IF(! EMPTY(m_normal[f,32]),m_normal[f,32],(m_normal[f,12] * (m_set[1,6]/100+1))),m_normal[f,7] - (m_normal[f,7] * (mpercent/100))))
                        AADD(m_altera,m_normal[f,21]+' '+m_normal[f,2]+' '+TRANSFORM(m_normal[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_normal[f,20],'99.99'))
                        AADD(m_pos,{'mnormal',f})
                        mpos++
                        mtot_aux := mtot_aux + (mpr_fat * m_normal[f,5])        //- IF(mcod_nat = '6.109',(mpr_fat * m_normal[f,5])*.12,0)
                        mtot_nota := mtot_nota + (mpr_fat * m_normal[f,5])      //- IF(mcod_nat = '6.109',(mpr_fat * m_normal[f,5])*.12,0)
                        mtot_ipi := mtot_ipi + (mpr_fat * m_normal[f,5]) * (m_normal[f,24]/100)
                        mtot_desc := mtot_desc + ((mpr_fat * m_normal[f,5])*(m_normal[f,11]/100))
                        mtot_quantd := mtot_quantd + m_normal[f,5]
                        mtot_peso := mtot_peso + (m_normal[f,9] * m_normal[f,5])
                        IF m_normal[f,13] > 0
                                mbase_icmf := mbase_icmf + (mpr_fat * m_normal[f,5])
                                mtot_icmf := mtot_icmf + m_normal[f,13]
                        ENDIF
                        IF m_normal[f,14] = 'N' .AND. m_normal[f,20] > 0
                                mbase_icm = mbase_icm + (mpr_fat * m_normal[f,5])
                        ENDIF
                        IF ! EMPTY(m_normal[f,22])                                                    // 2.35
                                mvlr_icmsub := mvlr_icmsub + ((mpr_fat * m_normal[f,5])*(mpr_fat * (m_normal[f,20]/100)) - (m_normal[f,20]/100) * (mpr_fat * m_normal[f,5]))
                        ENDIF
                        IF m_normal[f,25] = 'S'  //desconto icm no produto
                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (mpr_fat * m_normal[f,5])
                        ENDIF
                NEXT
                FOR f = 1 TO LEN(m_isento)
                        mpr_fat := IF(mcod_fat = '01',m_isento[f,7],IF(mcod_fat='02',IF(! EMPTY(m_isento[f,32]),m_isento[f,32],(m_isento[f,12] * (m_set[1,6]/100+1))),m_isento[f,7] - (m_isento[f,7] * (mpercent/100))))
*                       mpr_fat := IF(mcod_fat = '01',m_isento[f,7],IF(! EMPTY(m_isento[f,32]),m_isento[f,32],(m_isento[f,12] * (m_set[1,6]/100+1))))
                        AADD(m_altera,m_isento[f,21]+' '+m_isento[f,2]+' '+TRANSFORM(m_isento[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_isento[f,20],'99.99'))
                        AADD(m_pos,{'misento',f})
                        mpos++
                        mtot_aux := mtot_aux + (mpr_fat * m_isento[f,5])        //- IF(mcod_nat = '6.109',(mpr_fat * m_isento[f,5])*.12,0)
                        mtot_nota := mtot_nota + (mpr_fat * m_isento[f,5])      //- IF(mcod_nat = '6.109',(mpr_fat * m_isento[f,5])*.12,0)
                        mtot_ipi := mtot_ipi + (mpr_fat * m_isento[f,5]) * (m_isento[f,24]/100)
                        mtot_desc := mtot_desc + (mpr_fat * m_isento[f,5])*(m_isento[f,11]/100)
                        mtot_quantd := mtot_quantd + m_isento[f,5]
                        mtot_peso := mtot_peso + (m_isento[f,9] * m_isento[f,5])
                        IF m_isento[f,13] > 0
                                mbase_icmf := mbase_icmf + (mpr_fat * m_isento[f,5])
                                mtot_icmf := mtot_icmf + m_isento[f,13]
                        ENDIF
                        IF m_isento[f,14] = 'N' .AND. m_isento[f,20] > 0
                                mbase_icm = mbase_icm + (mpr_fat * m_isento[f,5])
                        ENDIF
                        IF ! EMPTY(m_isento[f,22])                                                    // 2.35
                                mvlr_icmsub := mvlr_icmsub + ((mpr_fat * m_isento[f,5])*(mpr_fat * (m_isento[f,20]/100)) - (m_isento[f,20]/100) * (mpr_fat * m_isento[f,5]))
                        ENDIF
                        IF m_isento[f,25] = 'S'
                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (mpr_fat * m_isento[f,5])
                        ENDIF
                NEXT
                FOR f = 1 TO LEN(m_desc)
                        mpr_fat := IF(mcod_fat = '01',m_desc[f,7],IF(mcod_fat='02',IF(! EMPTY(m_desc[f,32]),m_desc[f,32],(m_desc[f,12] * (m_set[1,6]/100+1))),m_desc[f,7] - (m_desc[f,7] * (mpercent/100))))
*                        mpr_fat := IF(mcod_fat = '01',m_desc[f,7],IF(! EMPTY(m_desc[f,32]),m_desc[f,32],(m_desc[f,12] * (m_set[1,6]/100+1))))
                        AADD(m_altera,m_desc[f,21]+' '+m_desc[f,2]+' '+TRANSFORM(m_desc[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_desc[f,20],'99.99'))
                        AADD(m_pos,{'mdesc',f})
                        mpos++
                        mtot_aux := mtot_aux + (mpr_fat * m_desc[f,5])          //- IF(mcod_nat = '6.109',(mpr_fat * m_desc[f,5])*.12,0)
                        mtot_nota := mtot_nota + (mpr_fat * m_desc[f,5])        //- IF(mcod_nat = '6.109',(mpr_fat * m_desc[f,5])*.12,0)
                        mtot_ipi := mtot_ipi + (mpr_fat * m_desc[f,5]) * (m_desc[f,24]/100)
                        mtot_desc := mtot_desc + (mpr_fat * m_desc[f,5])*(m_desc[f,11]/100)
                        mtot_quantd := mtot_quantd + m_desc[f,5]
                        mtot_peso := mtot_peso + (m_desc[f,9] * m_desc[f,5])
                        IF m_desc[f,13] > 0
                                mbase_icmf := mbase_icmf + (mpr_fat * m_desc[f,5])
                                mtot_icmf := mtot_icmf + m_desc[f,13]
                        ENDIF
                        IF m_desc[f,14] = 'N' .AND. m_desc[f,20] > 0
                                mbase_icm = mbase_icm + (mpr_fat * m_desc[f,5])
                        ENDIF
                        IF ! EMPTY(m_desc[f,22])                                                    // 2.35
                                mvlr_icmsub := mvlr_icmsub + ((mpr_fat * m_desc[f,5])*((m_desc[f,22]/100)+1))*(m_desc[f,20]/100) - (m_desc[f,20]/100) * (mpr_fat * m_desc[f,5])
                        ENDIF
                        IF m_desc[f,25] = 'S'
                                mdesc_icm := mdesc_icm + ((m_set[1,20]/100) * mpr_fat)
                        ENDIF
                NEXT
                FOR f = 1 TO LEN(m_icmdif)
                        mpr_fat := IF(mcod_fat = '01',m_icmdif[f,7],IF(mcod_fat='02',IF(! EMPTY(m_icmdif[f,32]),m_icmdif[f,32],(m_icmdif[f,12] * (m_set[1,6]/100+1))),m_icmdif[f,7] - (m_icmdif[f,7] * (mpercent/100))))
*                        mpr_fat := IF(mcod_fat = '01',m_icmdif[f,7],IF(! EMPTY(m_icmdif[f,32]),m_icmdif[f,32],(m_icmdif[f,12] * (m_set[1,6]/100+1))))
                        AADD(m_altera,m_icmdif[f,21]+' '+m_icmdif[f,2]+' '+TRANSFORM(m_icmdif[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_icmdif[f,20],'99.99'))
                        AADD(m_pos,{'micmdif',f})
                        mpos++
                        mtot_aux := mtot_aux + (mpr_fat * m_icmdif[f,5])        //- IF(mcod_nat = '6.109',(mpr_fat * m_icmdif[f,5])*.12,0)
                        mtot_nota := mtot_nota + (mpr_fat * m_icmdif[f,5])      //- IF(mcod_nat = '6.109',(mpr_fat * m_icmdif[f,5])*.12,0)
                        mtot_ipi := mtot_ipi + (mpr_fat * m_icmdif[f,5]) * (m_icmdif[f,24]/100)
                        mtot_desc := mtot_desc + (mpr_fat * m_icmdif[f,5])*(m_icmdif[f,11]/100)
                        mtot_quantd := mtot_quantd + m_icmdif[f,5]
                        mtot_peso := mtot_peso + (m_icmdif[f,9] * m_icmdif[f,5])
                        IF m_icmdif[f,13] > 0
                                mbase_icmf := mbase_icmf + (mpr_fat * m_icmdif[f,5])
                                mtot_icmf := mtot_icmf + m_icmdif[f,13]
                        ENDIF
                        IF m_icmdif[f,14] = 'N' .AND. m_icmdif[f,20] > 0
                                mbase_icm = mbase_icm + (mpr_fat * m_icmdif[f,5])
                        ENDIF
                        IF ! EMPTY(m_icmdif[f,22])                                                    // 2.35
                                mvlr_icmsub := mvlr_icmsub + ((mpr_fat * m_icmdif[f,5])*((m_icmdif[f,22]/100)+1))*(m_icmdif[f,20]/100) - (m_icmdif[f,20]/100) * (mpr_fat *  m_icmdif[f,5])
                        ENDIF
                        IF m_icmdif[f,25] = 'S'
                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (mpr_fat* m_icmdif[f,5])
                        ENDIF
                NEXT
                FOR f = 1 TO LEN(m_icmsub)
                        mpr_fat := IF(mcod_fat = '01',m_icmsub[f,7],IF(mcod_fat='02',IF(! EMPTY(m_icmsub[f,32]),m_icmsub[f,32],(m_icmsub[f,12] * (m_set[1,6]/100+1))),m_icmsub[f,7] - (m_icmsub[f,7] * (mpercent/100))))
*                        mpr_fat := IF(mcod_fat = '01',m_icmsub[f,7],IF(! EMPTY(m_icmsub[f,32]),m_icmsub[f,32],(m_icmsub[f,12] * (m_set[1,6]/100+1))))
                        AADD(m_altera,m_icmsub[f,21]+' '+m_icmsub[f,2]+' '+TRANSFORM(m_icmsub[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_icmsub[f,20],'99.99'))
                        AADD(m_pos,{'micmsub',f})
                        mpos++
                        mtot_aux := mtot_aux + (mpr_fat * m_icmsub[f,5])        //- IF(mcod_nat = '6.109',(mpr_fat * m_icmsub[f,5])*.12,0)
                        mtot_nota := mtot_nota + (mpr_fat * m_icmsub[f,5])      //- IF(mcod_nat = '6.109',(mpr_fat * m_icmsub[f,5])*.12,0)
                        mtot_ipi := mtot_ipi + (mpr_fat * m_icmsub[f,5]) * (m_icmsub[f,24]/100)
                        mtot_desc := mtot_desc + (mpr_fat * m_icmsub[f,5])*(m_icmsub[f,11]/100)
                        mtot_quantd := mtot_quantd + m_icmsub[f,5]
                        mtot_peso := mtot_peso + (m_icmsub[f,9] * m_icmsub[f,5])
                        IF m_icmsub[f,13] > 0
                                mbase_icmf := mbase_icmf + (mpr_fat * m_icmsub[f,5])
                                mtot_icmf := mtot_icmf + m_icmsub[f,13]
                        ENDIF
                        IF m_icmsub[f,14] = 'N' .AND. m_icmsub[f,20] > 0
                                mbase_icm = mbase_icm + (mpr_fat * m_icmsub[f,5])
                        ENDIF
                        IF ! EMPTY(m_icmsub[f,22])                                                    // 2.35
                                mvlr_icmsub := mvlr_icmsub + (((mpr_fat * m_icmsub[f,5])*((m_icmsub[f,22]/100)+1))*(m_icmsub[f,20]/100) - (m_icmsub[f,20]/100) * (mpr_fat * m_icmsub[f,5]))
                        ENDIF
                        IF m_icmsub[f,25] = 'S'
                                mdesc_icm := mdesc_icm + (m_set[1,20]/100) * (mpr_fat * m_icmsub[f,5])
                        ENDIF
                NEXT
                IF SUBSTR(mcod_nat,1,1) = '6'  .AND. ver_serie() = '141362' .AND. ! EMPTY(minsc) .AND. mtip_cli = 'C'
                        mdif_icms := mtot_nota * 0.05
                ELSEIF SUBSTR(mcod_nat,1,1) = '6'  .AND. ver_serie() = '141362' .AND. ! EMPTY(minsc) .AND. mtip_cli = 'R'
                        mdif_icms := 0
                        mbase_sub := mtot_nota * 1.35
                        micm_sub  := mtot_nota * .1095
                ENDIF
                IF mcod_nat = '6.109' .OR. mcod_nat = '6.110'
                        mpis :=iat(mtot_nota * .0165,2)
                        mconfis :=iat(mtot_nota * .076,2)
                        micms_desc :=iat(mtot_nota * .12,2)
                        mtot_nota := mtot_nota - (mpis+mconfis+micms_desc)
                ENDIF
        ELSE
                FOR f = 1 TO LEN(m_normal)
                        mpr_fat := m_normal[f,7]
                        AADD(m_altera,m_normal[f,21]+' '+m_normal[f,2]+' '+TRANSFORM(m_normal[f,5],'99999.99')+' '+TRANSFORM(mpr_fat,'9999999.99')+' '+TRANSFORM(m_normal[f,20],'99.99'))
                        AADD(m_pos,{'mnormal',f})
                        mpos++
                NEXT
        ENDIF
        f := 0
        i := 1
        mensagem('Para ALTERAR algum PRODUTO <ENTER> e <ESC>p/proseguir sem alterar')
        tela2 := SAVESCREEN(01,00,24,79)
        WHILE .T.
                botao(02,02,20,78,,' Alteracao de Produtos ','*')
                DEVPOS(03,04);DEVOUT('Produto')
                DEVPOS(03,52);DEVOUT('Quantd.')
                DEVPOS(03,61);DEVOUT('Valor')
                DEVPOS(03,72);DEVOUT("ICM'S")
                @ 04,03 to 04,77
                @ 12,03 to 12,77
                DEVPOS(13,03);DEVOUT('Sub Total_:')
                DEVPOS(13,51);DEVOUT('Vlr.Total_:')
                @ 14,03 to 14,77
                janela(14,03,'� DADOS PARA NOTA FISCAL DE CORRECAO ','*','D')
                DEVPOS(15,03);DEVOUT('Base ICMS.......:             ')
                DEVPOS(15,33);DEVOUT('Vlr.ICMS.......:             ')
                DEVPOS(16,03);DEVOUT('Base ICMS SUBST.:             ')
                DEVPOS(16,33);DEVOUT('Vlr.ICMS SUBST.:             ')
                DEVPOS(17,03);DEVOUT('Vlr.Total IPI...:             ')
                DEVPOS(18,03);DEVOUT('Vlr.Total Prod..:             ')
                DEVPOS(18,33);DEVOUT('Vlr.Total NOTA.:             ')
                DEVPOS(19,03);DEVOUT('Quantidade TOTAL:             Peso Bruto:             Liquido:             ')
                setcor(3)
                DEVPOS(13,15);DEVOUTPICT(mtot_nota + mtot_desc + mfrete + mseguro + mencargo,'9,999,999.99')
                DEVPOS(13,63);DEVOUTPICT(mtot_nota+mdif_icms,'9,999,999.99')
                setcor(1)
                setcor(10);point := ACHOICE(05,05,11,77,m_altera);setcor(1)
                IF point = 0
                        EXIT
                ELSE
                        limpa(13,07,13,76)
                        DEVPOS(13,08);DEVOUT('Quantd.:')
                        DEVPOS(13,27);DEVOUT('Vlr.:')
                        DEVPOS(13,46);DEVOUT('ICM:')
                        IF m_pos[point,1] = 'mnormal'
                                DEVPOS(12,08);DEVOUT('Produto: '+m_normal[m_pos[point,2],21]+' '+m_normal[m_pos[point,2],2])
                                @ 13,17 GET m_normal[m_pos[point,2],5] PICT '99999.99'
                                @ 13,33 GET m_normal[m_pos[point,2],7] PICT '9999999.99'
                        ENDIF
                        IF m_pos[point,1] = 'misento'
                                DEVPOS(12,08);DEVOUT('Produto: '+m_isento[m_pos[point,2],21]+' '+m_isento[m_pos[point,2],2])
                                @ 13,17 GET m_isento[m_pos[point,2],5] PICT '99999.99'
                                @ 13,33 GET m_isento[m_pos[point,2],7] PICT '9999999.99'
                        ENDIF
                        IF m_pos[point,1] = 'mdesc'
                                DEVPOS(12,08);DEVOUT('Produto: '+m_desc[m_pos[point,2],21]+' '+m_desc[m_pos[point,2],2])
                                @ 13,17 GET m_desc[m_pos[point,2],5] PICT '99999.99'
                                @ 13,33 GET m_desc[m_pos[point,2],7] PICT '9999999.99'
                        ENDIF
                        IF m_pos[point,1] = 'micmdif'
                                DEVPOS(12,08);DEVOUT('Produto: '+m_icmdif[m_pos[point,2],21]+' '+m_icmdif[m_pos[point,2],2])
                                @ 13,17 GET m_icmdif[m_pos[point,2],5] PICT '99999.99'
                                @ 13,33 GET m_icmdif[m_pos[point,2],7] PICT '9999999.99'
                        ENDIF
                        IF m_pos[point,1] = 'micmsub'
                                DEVPOS(12,08);DEVOUT('Produto: '+m_icmsub[m_pos[point,2],21]+' '+m_icmsub[m_pos[point,2],2])
                                @ 13,17 GET m_icmsub[m_pos[point,2],5] PICT '99999.99'
                                @ 13,33 GET m_icmsub[m_pos[point,2],7] PICT '9999999.99'
                        ENDIF
                        READ
                        IF LASTKEY() = 27
                                LOOP
                        ENDIF
                        EXIT
                ENDIF
        ENDDO
        IF point > 0
                LOOP
        ENDIF
        IF mtipo_nota = 'C'
                mtot_prod:=0
                IF mv = '2'
                        mbase_icm := totnt-> vl_base
                        mtot_icm  := totnt-> vl_icm
                        mtot_icmf := totnt-> vl_icmsu
                        mtot_prod := totnt-> vl_prod
                        mtot_nota := totnt-> vl_nota
                        mtot_ipi  := totnt-> ipi
                        mtot_peso := totnt-> peso
                        mtot_liq  := totnt-> peso_liq
                ENDIF
                @ 15,20 GET mbase_icm PICT '9,999,999.99'
                @ 15,50 GET mtot_icm PICT '9,999,999.99'
                @ 16,20 GET mbase_icmf PICT '9,999,999.99'
                @ 16,50 GET mtot_icmf PICT '9,999,999.99'
                @ 17,20 GET mtot_ipi PICT '9,999,999.99'
                @ 18,20 GET mtot_prod PICT '9,999,999.99'
                @ 18,50 GET mtot_nota PICT '9,999,999.99'
                @ 19,20 GET mtot_quantd PICT '999,999.99'
                @ 19,44 GET mtot_peso PICT '999,999.99'
                @ 19,65 GET mtot_liq PICT '999,999.99'
                READ
        ENDIF
        mopcao := op_simnao('S','Confirma Todos os Dados Preenchido:')
        IF mopcao = 'N'
                RESTSCREEN(01,00,24,79,mtela)
                RELEASE mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
                        m_acucar:={},mbase_icmf,mtot_icmf,mbase_icm,mtot_icm,msaldo_atu,mextenso,lin1,lin2,;
                        mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mtot_peso,mtot_liq,m_altera:={},tela2,;
                        mpag,mdoc_aux,mtot_aux,mcod_fat,mlin,m_pos:={},mpos
                RETURN NIL
        ENDIF
        mnota := op_simnao('S','Confirma Impressao da Nota Fiscal:')
        IF mnota = 'N'
                RESTSCREEN(01,00,24,79,mtela)
                RELEASE mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
                        m_acucar:={},mbase_icmf,mtot_icmf,mbase_icm,mtot_icm,msaldo_atu,mextenso,lin1,lin2,;
                        mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mtot_peso,mtot_liq,m_altera:={},tela2,;
                        mpag,mdoc_aux,mtot_aux,mcod_fat,mlin,m_pos:={},mpos
                RETURN NIL
        ENDIF
        CLEAR GETS
        mnomenf := m_set[1,18]
        IF LEN(m_normal) > 0
                sacnfb(m_normal,mv,'ICM NORMAL')
                marca := '*'
                mfrete := 0
        ENDIF
        IF LEN(m_isento) > 0
                sacnfb(m_isento,mv,'ICM ISENTO')
                marca := '*'
                mfrete := 0
        ENDIF
        IF LEN(m_desc) > 0
                sacnfb(m_desc,mv,'COM DESCONTO DE ICM')
                marca := '*'
                mfrete := 0
        ENDIF
        IF LEN(m_icmdif) > 0
                sacnfb(m_icmdif,mv,'ICM DIFERENCIADO')
                marca := '*'
                mfrete := 0
        ENDIF
        IF LEN(m_icmsub) > 0
                sacnfb(m_icmsub,mv,'ICM SUBSTITUIDO')
                marca := '*'
                mfrete := 0
        ENDIF
        RESTSCREEN(01,00,24,79,mtela)
        RELEASE mopcao,opcao,mlinha,mtela,mmtela1,i,pode,f,mtraco,mcodigo,mdescricao,;
                m_acucar:={},mbase_icmf,mtot_icmf,mbase_icm,mtot_icm,msaldo_atu,mextenso,lin1,lin2,;
                mlin1,mlin2,mlin3,mlin4,mlin5,mlin6,mtot_peso,mtot_liq,m_altera:={},tela2,;
                mpag,mdoc_aux,mtot_aux,mcod_fat,mlin,m_pos:={},mpos
        RETURN NIL
ENDDO
RETURN NIL
*********************** F I M **********************************


