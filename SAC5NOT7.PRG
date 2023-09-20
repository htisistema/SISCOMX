* RELATORIO DE NOTAS FISCAIS DE ENTRADAS
***********************************************
MEMVAR getlist,mdata_sis,nivel_acess

FUNCTION sac5not7
*****************
LOCAL MPRG:='SAC5NOT7',mtitulo := 'RELATORIO DE NOTAS FISCAIS DE ENTRADA',;
      opcao,mtraco,mdata1,mdata2,;
      mtot_nota,mtot_icm,mtot_icmsub:=0,mpag,mtit,mtipo,mcfop,mtot_ipi,;
      mdia,mdia_nota,mdia_icm,mdia_ipi,mdia_icmsub,mnota_frete:=' ',;
      ccomm,mali,mcodemp:=SPACE(3),mcons_forn:={},mimp_prod := 'N',m_merc:={},mtot_qtd:=0,mtot_qtdprod:=0
PRIVATE msai_ent,mcredito,mnatureza,;
        mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mcod_for:=0,mcod_merc := 0

IF ! ver_nivel(mprg,mtitulo,'15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
mtraco := REPLI('=',132)
*-----------------------------------------------------
//IF ! AbriArq('insopera','sen');RETURN NIL;ENDIF
IF ! AbriArq('SACTOTNT','TOTNT');RETURN NIL;ENDIF
IF ! AbriArq('sacmov','mov');RETURN NIL;ENDIF
IF ! AbriArq('SACOP','OP');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*-----------------------------------------------------
op_tela(0,0,8,70,mtitulo)
WHILE .T.
        exibi_prg(mprg)
        ********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
        ***************************************************
        mtot_qtd := mtot_nota := mtot_icm := mtot_icmsub := mtot_ipi := ;
        mdia_nota:= mdia_icm := mdia_ipi := mdia_icmsub:= mcod_for := mcod_merc := mtot_qtdprod := 0
        mdata1 := mdata_sis - 31
        mdata2 := mdata_sis
        mcfop := SPACE(5)
        mdia:= CTOD('  /  /  ')
        mnota_frete := mimp_prod := 'N'
        m_merc:={}
        mensagem('Preencha os Campos - <ESC>p/Sair')
        DEVPOS(0,2);DEVOUT('Codigo da Empresa.....:')
        DEVPOS(1,2);DEVOUT('Data Inicial..........:')
        DEVPOS(2,2);DEVOUT('Data Final............:')
        DEVPOS(3,2);DEVOUT('Tipo CFOP.............:')
        DEVPOS(4,2);DEVOUT('Codigo Fornecedor.....:')
        DEVPOS(5,2);DEVOUT('Codigo Produto........:')
        DEVPOS(6,2);DEVOUT('Imp.Produtos [S/N]....:')
        DEVPOS(7,2);DEVOUT('So Fiscal Frete [S/N].:')

        @ 0,26 GET mcodemp PICT "999" VALID ver_emp(mcodemp,0,26,,'*') WHEN mmult_emp = 'S'
        @ 1,26 GET mdata1 PICT '99/99/99' VALID IF(EMPTY(mdata1),.F.,.T.)
        @ 2,26 GET mdata2 PICT '99/99/99' VALID IF(mdata2 < mdata1 ,.F.,.T.)
        @ 3,26 GET mcfop  PICT '9.999'
        @ 4,26 GET mcod_for PICT '9999' VALID IF(EMPTY(mcod_for),.T.,v_fornece(mcod_for,4,27))
        @ 5,26 GET mcod_merc PICT '99999' VALID ver_cod(mcod_merc,5,28,,0)
        @ 6,26 GET mimp_prod PICT '@!' VALID mimp_prod $ 'S,N'
        @ 7,26 GET mnota_frete PICT '@!' VALID mnota_frete $ 'S,N'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ELSE
                mensagem('Espere o coletando dados p/o relatorio OK !!!')
                cComm  := "SELECT * FROM sactotnt WHERE emissao  BETWEEN "+sr_cdbvalue(mdata1)+" AND "+sr_cdbvalue(mdata2)+" AND ent_sai ='E' AND cancel IS NULL"
                IF ! EMPTY(mcfop)
                        ccomm := ccomm + " AND cod_nat = "+sr_cdbvalue(mcfop)
                ENDIF
                IF ! EMPTY(mcod_for)
                        ccomm := ccomm + " AND cod_cli = "+sr_cdbvalue(STRZERO(mcod_for,4)+' ')
                ENDIF
                IF mnota_frete = 'S'
                        ccomm := ccomm + " AND tip_sef = '70'"
                ENDIF
                IF ! EMPTY(mcodemp)
                        ccomm := ccomm + " AND empresa = "+sr_cdbvalue(mcodemp)
                ENDIF
                ccomm := ccomm + " ORDER BY emissao,documento,cod_nota,cod_nat"
                dbUseArea( .F.,"SQLRDD",cComm,"q_totnt")
                mali := 'q_totnt'
                SELE('q_totnt')
                DBGOTOP()
                IF EOF()
                        atencao('Nao existe documento neste Periodo...')
                        (mali)->(DBCLOSEAREA())
                        LOOP
                ENDIF
                mensagem('Espere o Final da impressao OK !!! - <ESC> Imterrompe a Impressao')
                IF ! imp_arq('NOTA_ENT.REL','R')
                        (mali)->(DBCLOSEAREA())
                        LOOP
                ENDIF
                mpag := 0
                mtit := 'Relatorio de Notas Fiscais de Entradas'
                mtipo := 'periodo: '+DTOC(mdata1)+' a '+DTOC(mdata2)
                mdia := q_totnt->emissao
                WHILE ! EOF()
                        prog_imp(RECNO(),DTOC(q_totnt->emissao))
                        IF ! EMPTY(mcod_merc)
                                m_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(q_totnt->documento)+' AND codigo = '+sr_cdbvalue(mcod_merc)+" AND ent_sai ='E'",,.t.,@m_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc) = 0
                                        SKIP
                                        LOOP
                                ENDIF
                        ELSEIF mimp_prod = 'S'
                                m_merc := {}
                                sr_getconnection():exec("SELECT * FROM sacmov WHERE documento = "+sr_cdbvalue(q_totnt->documento)+" AND ent_sai ='E'",,.t.,@m_merc)
                                sr_getconnection():exec('COMMIT',,.f.)
                                IF LEN(m_merc) = 0
                                        SKIP
                                        LOOP
                                ENDIF
                        ENDIF
                        IF mpag=0 .OR. PROW()>=59
                                mpag ++
                                IF mpag>1
                                        EJECT
                                ENDIF
                                cabecalho(mpag,mtit,mtipo,mprg)
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('  Data    ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('No. Nota')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Valor Nota')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  Valor Base')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Valor ICM')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('  ICM Subst.')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' Valor IPI')
                                DEVPOS(PROW(),PCOL()+2);DEVOUT('Fornecedor                           ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(' CFOP')
                                DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                        ENDIF
                        IF mdia <> q_totnt->emissao
                                imprt(mtipo_imp,'C')
                                DEVPOS(PROW()+1,00);DEVOUT('        ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(8))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT('------------')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('            ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('----------')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('------------')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('----------')
                                DEVPOS(PROW()+1,00);DEVOUT('        ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(8))
                                DEVPOS(PROW(),PCOL()+3);DEVOUT(TRANSFORM(mdia_nota,'9,999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT('            ')
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_icm,'999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_icmsub,'9,999,999.99'))
                                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_ipi,'999,999.99'))
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                                mdia_icm := mdia_icmsub := mdia_nota := mdia_ipi := 0
                                mdia := q_totnt->emissao
                        ENDIF
                        imprt(mtipo_imp,'C')
                        DEVPOS(PROW()+1,00);DEVOUT(q_totnt->emissao)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(q_totnt->documento)
                        DEVPOS(PROW(),PCOL()+3);DEVOUT(TRANSFORM(q_totnt->vl_nota,'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_totnt->vl_base,'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_totnt->vl_icm,'999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_totnt->vlr_icmsub,'9,999,999.99'))
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(q_totnt->ipi,'999,999.99'))
			mcons_forn:={}
			sr_getconnection():exec("SELECT * FROM sacforn WHERE cod_forn = "+sr_cdbvalue(q_totnt->cod_cli),,.t.,@mcons_forn)
                        sr_getconnection():exec('COMMIT',,.f.)
			IF LEN(mcons_forn) > 0
	                        DEVPOS(PROW(),PCOL()+2);DEVOUT(mcons_forn[1,1]+'-'+mcons_forn[1,2])
	               	ELSE
	                        DEVPOS(PROW(),PCOL()+2);DEVOUT(SPACE(45))
			ENDIF
                        //DEVPOS(PROW(),PCOL()+2);DEVOUT(q_totnt->cod_cli+'- '+q_totnt->cliente)
                        DEVPOS(PROW(),PCOL()+1);DEVOUT(q_totnt->cod_nat)
                        mtot_icm := mtot_icm + q_totnt->vl_icm
                        mtot_icmsub := mtot_icmsub + q_totnt->vlr_icmsub
                        mtot_nota := mtot_nota + q_totnt->vl_nota         //+q_totnt->ipi
                        mtot_ipi := mtot_ipi + q_totnt->ipi
                        mdia_icm := mdia_icm + q_totnt->vl_icm
                        mdia_icmsub := mdia_icmsub + q_totnt->vlr_icmsub
                        mdia_nota := mdia_nota + q_totnt->vl_nota         //+q_totnt->ipi
                        mdia_ipi := mdia_ipi + q_totnt->ipi
                        mtot_qtd ++
                        IF ! EMPTY(m_merc) .OR. mimp_prod = 'S'
                                i:=0
                                FOR i = 1 TO LEN(m_merc)
                                        DEVPOS(PROW()+1,11);DEVOUT(m_merc[i,10]+' - '+m_merc[i,11]+'  Qtd.:'+TRANSFORM(m_merc[i,19],'99,999.999')+' Vlr.Unit.:'+TRANSFORM(m_merc[i,22],'99,999.999')+' Total:'+TRANSFORM(m_merc[i,19]*m_merc[i,22],'99,999.999'))
                                        mtot_qtdprod := mtot_qtdprod + m_merc[i,19]
                                NEXT
                                DEVPOS(PROW()+1,0);DEVOUT(REPLI('-',132))
                        ENDIF
                        SKIP
                ENDDO
                imprt(mtipo_imp,'C')
                DEVPOS(PROW()+1,00);DEVOUT('        ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(8))
                DEVPOS(PROW(),PCOL()+3);DEVOUT('------------')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('            ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('----------')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('------------')
                DEVPOS(PROW(),PCOL()+1);DEVOUT('----------')
                DEVPOS(PROW()+1,00);DEVOUT('        ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(SPACE(8))
                DEVPOS(PROW(),PCOL()+3);DEVOUT(TRANSFORM(mdia_nota,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT('            ')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_icm,'999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_icmsub,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mdia_ipi,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('')
                DEVPOS(PROW()+1,00);DEVOUT(REPLI('-',130))
                DEVPOS(PROW()+1,00);DEVOUT('Total das Notas:')
                DEVPOS(PROW(),20);DEVOUT(TRANSFORM(mtot_nota,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+12);DEVOUT(TRANSFORM(mtot_icm,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_icmsub,'9,999,999.99'))
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_ipi,'999,999.99'))
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade das Notas...:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtd,'999,999'))
                DEVPOS(PROW()+1,00);DEVOUT('Quantidade dos Produtos:')
                DEVPOS(PROW(),PCOL()+1);DEVOUT(TRANSFORM(mtot_qtdprod,'999,999,999.999'))
                DEVPOS(PROW()+2,00);DEVOUT(TIME())
                imprt(mtipo_imp,'N')
                EJECT
                SETPRC(00,00)
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                conf_impressao('NOTA_ENT.REL')
                (mali)->(DBCLOSEAREA())
                EXIT
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
*************************** F I M **********************************************

