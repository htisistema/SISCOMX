********************
* LISTAGEM ESTATISTICA DE VENDAS P/DIA
********************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5com6
**************
LOCAL MPRG:='SAC5COM6',;
      lci,cci,lba,cba,opcao,i,mdata1,mdata2,mger_vlr,mger_quantd,;
      mger_prunit,mlucro,mc_merc,mc_real,;
      mtot_dom,mtot_seg,mtot_ter,mtot_qua,mtot_qui,mtot_sex,mtot_sab,;
      mquant_dom,mquant_seg,mquant_ter,mquant_qua,mquant_qui,mquant_sex,mquant_sab,;
      mpruni_dom,mpruni_seg,mpruni_ter,mpruni_qua,mpruni_qui,mpruni_sex,mpruni_sab,;
      mmqtd,mmlucro,mmlucroge,m_classifica:={},mtot_vlr,mtot_quantd := 0,mtot_prunit := 0,;
      mdia

PRIVATE mtraco,telaprint,mtit,mtipo,mpag,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

IF ! ver_nivel(mprg,'RELATORIO ESTATISTICA DE VENDAS P/DIA','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

mtraco := REPLI('=',80)

lci := cci := 0
lba := 05
cba := 48
*----------------------------------------------------------------------------
CLOSE ALL
//
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,'RELATORIO ESTATISTICA DE VENDAS P/DIA')
WHILE .T.
        mtipo_imp := m_indiv[1,18]
        i := mlucro := mtot_vlr := mtot_quantd := mtot_prunit := mger_vlr := ;
        mger_quantd := mger_prunit := mtot_dom := mtot_seg := mtot_ter := ;
        mtot_qua := mtot_qui := mtot_sex := mtot_sab := mquant_dom := mquant_seg := ;
        mquant_ter := mquant_qua := mquant_qui := mquant_sex := mquant_sab := mpruni_dom := ;
        mpruni_seg := mpruni_ter := mpruni_qua := mpruni_qui := mpruni_sex := mpruni_sab := 0
        mdata1 := CTOD('  /  /  ')
        mdata2 := mdata_sis
        mc_merc := mc_real := SPACE(1)
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(lci+1,cci+2);DEVOUT('Data Inicial...:')
        DEVPOS(lci+2,cci+2);DEVOUT('Data Final.....:')
        @ lci+3,cci+1 TO lci+3,cba-1
        DEVPOS(lci+4,cci+2);DEVOUT('Custo REAL: [ ]  Custo MERCADORIA: [ ]')

        @ lci+1,cci+19 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ lci+2,cci+19 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ lci+4,cci+15 GET mc_real PICT '@!' VALID mc_real $ 'X, ' .AND. lim_get() WHEN men_get(lci+5,cci+15,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO REAL')
        @ lci+4,cci+38 GET mc_merc PICT '@!' VALID mc_merc $ 'X, ' .AND. lim_get() WHEN mc_real = ' ' .AND. men_get(lci+5,cci+38,'Marque com um "X" esta opcao se deseja calcular lucro pelo CUSTO MERCADORIA')
        READ
        IF LASTKEY() = 27
                CLOSE ALL
                RELEASE mtraco,telaprint,mtit,mtipo,mpag
                EXIT
        ENDIF
        IF EMPTY(mc_merc) .AND. EMPTY(mc_real)
                LOOP
        ENDIF
        IF mdata1 = mdata2
                mdia := 1
        ELSE
                mdia := mdata2 - mdata1
        ENDIF
        mensagem('Aguarde coletando dados')
        ****************
        SELE('mov');ORDSETFOCUS(1)
        DBSETFILTER({|| (SUBSTR(mov->documento,1,2) <> 'TR' .AND. ;
                        SUBSTR(mov->documento,1,2) <> 'BL');
                        .AND. mov->ent_sai = 'S' .AND. (mov->data_s_e <= mdata2 .AND. ;
                        mov->data_s_e >= mdata1) .AND. mov->vl_vend > 0 .AND. mov->tipo = '02'})
        GO TOP
        ****************
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'S'
                mensagem('Aguarde coletando dados para este relatorio')
                WHILE ! EOF()
                        IF DOW(mov->data_s_e) = 1
                                mtot_dom := mtot_dom + (mov->quantd * mov->vl_vend)
                                mquant_dom := mquant_dom + mov->quantd
                        ELSEIF DOW(mov->data_s_e) = 2
                                mtot_seg := mtot_seg + (mov->quantd * mov->vl_vend)
                                mquant_seg := mquant_seg + mov->quantd
                        ELSEIF DOW(mov->data_s_e) = 3
                                mtot_ter := mtot_ter + (mov->quantd * mov->vl_vend)
                                mquant_ter := mquant_ter + mov->quantd
                        ELSEIF DOW(mov->data_s_e) = 4
                                mtot_qua := mtot_qua + (mov->quantd * mov->vl_vend)
                                mquant_qua := mquant_qua + mov->quantd
                        ELSEIF DOW(mov->data_s_e) = 5
                                mtot_qui := mtot_qui + (mov->quantd * mov->vl_vend)
                                mquant_qui := mquant_qui + mov->quantd
                        ELSEIF DOW(mov->data_s_e) = 6
                                mtot_sex := mtot_sex + (mov->quantd * mov->vl_vend)
                                mquant_sex := mquant_sex + mov->quantd
                        ELSE
                                mtot_sab := mtot_sab + (mov->quantd * mov->vl_vend)
                                mquant_sab := mquant_sab + mov->quantd
                        ENDIF
                        mger_vlr := mger_vlr + (mov->quantd * mov->vl_vend)
                        mger_quantd := mger_quantd + mov->quantd
                        IF mc_real = 'X'
                                mger_prunit := mger_prunit + (mov->quantd * mov->pr_unit)
                                IF DOW(mov->data_s_e) = 1
                                        mpruni_dom := mpruni_dom + (mov->quantd * mov->pr_unit)
                                ELSEIF DOW(mov->data_s_e) = 2
                                        mpruni_seg := mpruni_seg + (mov->quantd * mov->pr_unit)
                                ELSEIF DOW(mov->data_s_e) = 3
                                        mpruni_ter := mpruni_ter + (mov->quantd * mov->pr_unit)
                                ELSEIF DOW(mov->data_s_e) = 4
                                        mpruni_qua := mpruni_qua + (mov->quantd * mov->pr_unit)
                                ELSEIF DOW(mov->data_s_e) = 5
                                        mpruni_qui := mpruni_qui + (mov->quantd * mov->pr_unit)
                                ELSEIF DOW(mov->data_s_e) = 6
                                        mpruni_sex := mpruni_sex + (mov->quantd * mov->pr_unit)
                                ELSE
                                        mpruni_sab := mpruni_sab + (mov->quantd * mov->pr_unit)
                                ENDIF
                        ELSE
                                mger_prunit := mger_prunit + (mov->quantd * mov->cust_mer)
                                IF DOW(mov->data_s_e) = 1
                                        mpruni_dom := mpruni_dom + (mov->quantd * mov->cust_mer)
                                ELSEIF DOW(mov->data_s_e) = 2
                                        mpruni_seg := mpruni_seg + (mov->quantd * mov->cust_mer)
                                ELSEIF DOW(mov->data_s_e) = 3
                                        mpruni_ter := mpruni_ter + (mov->quantd * mov->cust_mer)
                                ELSEIF DOW(mov->data_s_e) = 4
                                        mpruni_qua := mpruni_qua + (mov->quantd * mov->cust_mer)
                                ELSEIF DOW(mov->data_s_e) = 5
                                        mpruni_qui := mpruni_qui + (mov->quantd * mov->cust_mer)
                                ELSEIF DOW(mov->data_s_e) = 6
                                        mpruni_sex := mpruni_sex + (mov->quantd * mov->cust_mer)
                                ELSE
                                        mpruni_sab := mpruni_sab + (mov->quantd * mov->cust_mer)
                                ENDIF
                        ENDIF
                        SKIP
                ENDDO
                mmqtd := SPACE(3)
                mmlucro := SPACE(3)
                mmlucroge := SPACE(3)
                ASIZE(m_classifica,0)
                AADD(m_classifica,{'dom',mquant_dom,(mtot_dom - mpruni_dom),((mtot_dom - mpruni_dom)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'seg',mquant_seg,(mtot_seg - mpruni_seg),((mtot_seg - mpruni_seg)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'ter',mquant_ter,(mtot_ter - mpruni_ter),((mtot_ter - mpruni_ter)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'qua',mquant_qua,(mtot_qua - mpruni_qua),((mtot_qua - mpruni_qua)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'qui',mquant_qui,(mtot_qui - mpruni_qui),((mtot_qui - mpruni_qui)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'sex',mquant_sex,(mtot_sex - mpruni_sex),((mtot_sex - mpruni_sex)/(mger_vlr-mger_prunit))*100})
                AADD(m_classifica,{'sab',mquant_sab,(mtot_sab - mpruni_sab),((mtot_sab - mpruni_sab)/(mger_vlr-mger_prunit))*100})
                ASORT(m_classifica,,,{|x,y| x[2] > y[2]})
                mmqtd := m_classifica[1,1]
                ASORT(m_classifica,,,{|x,y| x[3] > y[3]})
                mmlucro := m_classifica[1,1]
                ASORT(m_classifica,,,{|x,y| x[4] > y[4]})
                mmlucroge := m_classifica[1,1]

                mensagem('Espere o Final da Impressao OK - [ESC]Sair')
                mpag = 1
                IF mc_real = 'X'
                        mtit = 'Relatorio do Resumo das Vendas p/ DIAS DA SEMANA (CUST REAL)'
                ELSE
                        mtit = 'Relatorio do Resumo das Vendas p/ DIAS DA SEMANA (CUST MERCADORIA)'
                ENDIF
                mtipo = 'De '+DTOC(mdata1)+' ate '+DTOC(mdata2)
                marq := 'MOV_VEND.REL'
                IF ! imp_arq('MOV_VEND.REL','R')
                        LOOP
                ENDIF
                cabecalho(mpag,mtit,mtipo,mprg)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('Dias')
                DEVPOS(PROW(),29);DEVOUT('Qtd.items')
                DEVPOS(PROW(),41);DEVOUT('Vlr.Med.Custo')
                DEVPOS(PROW(),56);DEVOUT('Vlr.Med.Venda')
                DEVPOS(PROW(),71);DEVOUT(' Total Custos')
                DEVPOS(PROW(),86);DEVOUT(' Total Vendas')
                DEVPOS(PROW(),101);DEVOUT('     Lucro R$')
                DEVPOS(PROW(),116);DEVOUT('Lucro(%)')
                DEVPOS(PROW(),126);DEVOUT('Rel.Geral(%)')
                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+2,00);DEVOUT('DOMINGO.:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_dom,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_dom / mquant_dom,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_dom / mquant_dom,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_dom,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_dom,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_dom - mpruni_dom,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_dom - mpruni_dom)/mpruni_dom)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_dom - mpruni_dom)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'dom'
                        DEVPOS(PROW(),00);DEVOUT('DOMINGO.:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_dom,'999,999.99'))
                ENDIF
                IF mmlucro = 'dom'
                        DEVPOS(PROW(),00);DEVOUT('DOMINGO.:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_dom - mpruni_dom,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_dom - mpruni_dom)/mpruni_dom)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'dom'
                        DEVPOS(PROW(),00);DEVOUT('DOMINGO.:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_dom - mpruni_dom)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT('SEGUNDA.:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_seg,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_seg / mquant_seg,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_seg / mquant_seg,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_seg,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_seg,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_seg - mpruni_seg,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_seg - mpruni_seg)/mpruni_seg)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_seg - mpruni_seg)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'seg'
                        DEVPOS(PROW(),00);DEVOUT('SEGUNDA.:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_seg,'999,999.99'))
                ENDIF
                IF mmlucro = 'seg'
                        DEVPOS(PROW(),00);DEVOUT('SEGUNDA.:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_seg - mpruni_seg,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_seg - mpruni_seg)/mpruni_seg)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'seg'
                        DEVPOS(PROW(),00);DEVOUT('SEGUNDA.:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_seg - mpruni_seg)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                DEVPOS(PROW()+2,00);DEVOUT('TERCA...:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_ter,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_ter / mquant_ter,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_ter / mquant_ter,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_ter,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_ter,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_ter - mpruni_ter,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_ter - mpruni_ter)/mpruni_ter)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_ter - mpruni_ter)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'ter'
                        DEVPOS(PROW(),00);DEVOUT('TERCA...:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_ter,'999,999.99'))
                ENDIF
                IF mmlucro = 'ter'
                        DEVPOS(PROW(),00);DEVOUT('TERCA...:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_ter - mpruni_ter,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_ter - mpruni_ter)/mpruni_ter)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'ter'
                        DEVPOS(PROW(),00);DEVOUT('TERCA...:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_ter - mpruni_ter)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                DEVPOS(PROW()+2,00);DEVOUT('QUARTA..:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_qua,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_qua / mquant_qua,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_qua / mquant_qua,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_qua,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_qua,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_qua - mpruni_qua,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_qua - mpruni_qua)/mpruni_qua)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_qua - mpruni_qua)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'qua'
                        DEVPOS(PROW(),00);DEVOUT('QUARTA..:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_qua,'999,999.99'))
                ENDIF
                IF mmlucro = 'qua'
                        DEVPOS(PROW(),00);DEVOUT('QUARTA..:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_qua - mpruni_qua,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_qua - mpruni_qua)/mpruni_qua)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'qua'
                        DEVPOS(PROW(),00);DEVOUT('QUARTA..:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_qua - mpruni_qua)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                DEVPOS(PROW()+2,00);DEVOUT('QUINTA..:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_qui,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_qui / mquant_qui,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_qui / mquant_qui,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_qui,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_qui,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_qui - mpruni_qui,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_qui - mpruni_qui)/mpruni_qui)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_qui - mpruni_qui)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'qui'
                        DEVPOS(PROW(),00);DEVOUT('QUINTA..:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_qui,'999,999.99'))
                ENDIF
                IF mmlucro = 'qui'
                        DEVPOS(PROW(),00);DEVOUT('QUINTA..:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_qui - mpruni_qui,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_qui - mpruni_qui)/mpruni_qui)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'qui'
                        DEVPOS(PROW(),00);DEVOUT('QUINTA..:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_qui - mpruni_qui)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                DEVPOS(PROW()+2,00);DEVOUT('SEXTA...:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_sex,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_sex / mquant_sex,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_sex / mquant_sex,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_sex,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_sex,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_sex - mpruni_sex,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_sex - mpruni_sex)/mpruni_sex)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_sex - mpruni_sex)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'sex'
                        DEVPOS(PROW(),00);DEVOUT('SEXTA...:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_sex,'999,999.99'))
                ENDIF
                IF mmlucro = 'sex'
                        DEVPOS(PROW(),00);DEVOUT('SEXTA...:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_sex - mpruni_sex,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_sex - mpruni_sex)/mpruni_sex)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'sex'
                        DEVPOS(PROW(),00);DEVOUT('SEXTA...:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_sex - mpruni_sex)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                DEVPOS(PROW()+2,00);DEVOUT('SABADO..:')
                DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_sab,'999,999.99'))
                DEVPOS(PROW(),41);DEVOUT(TRANSFORM(mpruni_sab / mquant_sab,'99,999,999.99'))
                DEVPOS(PROW(),56);DEVOUT(TRANSFORM(mtot_sab / mquant_sab,'99,999,999.99'))
                DEVPOS(PROW(),71);DEVOUT(TRANSFORM(mpruni_sab,'99,999,999.99'))
                DEVPOS(PROW(),86);DEVOUT(TRANSFORM(mtot_sab,'99,999,999.99'))
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_sab - mpruni_sab,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_sab - mpruni_sab)/mpruni_sab)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_sab - mpruni_sab)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                IF mmqtd = 'sab'
                        DEVPOS(PROW(),00);DEVOUT('SABADO..:')
                        DEVPOS(PROW(),28);DEVOUT(TRANSFORM(mquant_sab,'999,999.99'))
                ENDIF
                IF mmlucro = 'sab'
                        DEVPOS(PROW(),00);DEVOUT('SABADO..:')
                        DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mtot_sab - mpruni_sab,'99,999,999.99'))
                        DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mtot_sab - mpruni_sab)/mpruni_sab)*100,'9,999.99'))
                ENDIF
                IF mmlucroge = 'sab'
                        DEVPOS(PROW(),00);DEVOUT('SABADO..:')
                        DEVPOS(PROW(),126);DEVOUT(TRANSFORM(((mtot_sab - mpruni_sab)/(mger_vlr-mger_prunit))*100,'9,999.99'))
                ENDIF

                imprt(mtipo_imp,'N')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',80))
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('TOTAL...:')
                DEVPOS(PROW(),28);DEVOUTPICT(mger_quantd,'999,999.99')
                DEVPOS(PROW(),41);DEVOUTPICT(mger_prunit / mger_quantd,'99,999,999.99')
                DEVPOS(PROW(),56);DEVOUTPICT(mger_vlr / mger_quantd,'99,999,999.99')
                DEVPOS(PROW(),71);DEVOUTPICT(mger_prunit,'99,999,999.99')
                DEVPOS(PROW(),86);DEVOUTPICT(mger_vlr,'99,999,999.99')
                DEVPOS(PROW(),101);DEVOUT(TRANSFORM(mger_vlr - mger_prunit,'99,999,999.99'))
                DEVPOS(PROW(),116);DEVOUT(TRANSFORM(((mger_vlr-mger_prunit)/mger_prunit)*100,'9,999.99'))
                DEVPOS(PROW(),126);DEVOUT(TRANSFORM(100,'9,999.99'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao(marq)
        ELSE
                LOOP
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
**************************** F I M ****************************************************

