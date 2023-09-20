***************************************
* REAJUSTE DE PRODUTO PARCIAL
***************************************
*****************
FUNCTION sacrepr3
*****************
LOCAL mprg:='SACREPR3',mtitulo:='REAJUSTE PARCIAL DE PRODUTO',;
      lci:=00,cci:=00,lba:=18,cba:=79,opcao:=SPACE(1),tela,m_descri:={},m_pos:={},;
      mpoint:=0

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35),mtit,mtipo,mpag:=0,mtraco:=REPLI('-',80)


IF ! ver_nivel(mprg,mtitulo,'1',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*----------------------------------------------------------------------------
//
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
IF ! AbriArq('sacrepro','repro');RETURN NIL;ENDIF
IF ! AbriArq('saccli','cli');RETURN NIL;ENDIF
*----------------------------------------------------------------------------
op_tela(lci,cci,lba+2,cba,mtitulo)

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        exibi_prg(mprg)
        ASIZE(m_descri,0)
        ASIZE(m_pos,0)
        setcor(3)
        DEVPOS(lci+1,cci+1);DEVOUT('Produto                                         Preco Venda  Saldo Reaj. Data Incl.')
        setcor(1)
        @ lci+2,cci TO lci+2,cba
        *****************************
        SELE('repro');ORDSETFOCUS(2)
        GO TOP
        *****************************
        IF ! repro->(DBSEEK('   '))
                atencao('Nao existe nenhum Produto para ser Reajustado')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mensagem('Aguarde um momento coletando os DADOS')

        WHILE ! EOF() .AND. EMPTY(repro->ope_ok)
                AADD(m_descri,' '+repro->cod_pro+' '+repro->produto+' '+TRANSFORM(repro->valor,'99,999.99')+' '+TRANSFORM(repro->qtd,'99,999.999')+' '+DTOC(repro->data))
                AADD(m_pos,{RECNO(),repro->cod_pro,repro->valor,repro->produto,0,repro->qtd,0})
                SKIP
        ENDDO
        setcor(10);mpoint := ACHOICE(lci+3,cci+1,lba-1,cba-1,m_descri,,,mponto+1);setcor(1)
        DO CASE
                CASE LASTKEY() = 13
                        opcao := mensagem1('Confirma o Reajuste:','S','S,N',lci+5)
                        IF opcao = 'N' .OR. LASTKEY() = 27
                                LOOP
                        ENDIF
                        mensagem('Aguarde um momento esta REAJUSTANDO OS PRODUTOS')
                        i := 0
                        FOR i = 1 TO LEN(m_pos)
                                *****************************
                                SELE('repro');ORDSETFOCUS(2)
                                GO m_pos[i,1]
                                *****************************
                                BLOQREG()
                                repro->data_ok := mdata_sis
                                repro->ope_ok  := cod_operado
                                DBUNLOCK()

                                *****************************
                                SELE('merc');ORDSETFOCUS(1)
                                GO TOP
                                *****************************
                                merc->(DBSEEK(m_pos[i,2]))
                                m_pos[i,5] := merc->pr_venda
                                BLOQREG()
                                merc->pr_venda := m_pos[i,3]
                                IF ! EMPTY(m_pos[i,6])
                                        m_pos[i,7] := merc->saldo_mer
                                        merc->saldo_mer := m_pos[i,6]
                                ENDIF
                                DBUNLOCK()
                        NEXT
                        DBCOMMITALL()
                        mtit := 'Relatorio de Produtos com REAJUSTE'
                        mtipo := 'Reajuste Realizado em: '+DTOC(mdata_sis)
                        IF ! imp_arq('PROD_REAJ.REL','R')
                                LOOP
                        ENDIF
                        i := mpag := 0
                        FOR i = 1 TO LEN(m_pos)
                                IF mpag = 0 .OR. PROW() >= 57
                                        mpag ++
                                        IF mpag > 1
                                                EJECT
                                        ENDIF
                                        cabecalho(mpag,mtit,mtipo,mprg,'001')
                                        imprt(mtipo_imp,'C')
                                        DEVPOS(PROW()+1,00);DEVOUT('Produto                                           Prc.Anterior    Preco Atual   Saldo ant.  Saldo Atual')
                                        DEVPOS(PROW()+1,00);DEVOUT(mtraco)
                                ENDIF
                                prog_imp(m_pos[i,1])
                                imprt(mtipo_imp,'C')
                                IF ! EMPTY(m_pos[i,6])
                                        DEVPOS(PROW()+1,00);DEVOUT(m_pos[i,2]+' '+m_pos[i,4]+'      '+TRANSFORM(m_pos[i,5],'999,999.99')+'     '+TRANSFORM(m_pos[i,3],'999,999.99')+'     '+TRANSFORM(m_pos[i,7],'999,999.99')+'     '+TRANSFORM(m_pos[i,6],'999,999.99'))
                                ELSE
                                        DEVPOS(PROW()+1,00);DEVOUT(m_pos[i,2]+' '+m_pos[i,4]+'      '+TRANSFORM(m_pos[i,5],'999,999.99')+'     '+TRANSFORM(m_pos[i,3],'999,999.99'))
                                ENDIF
                        NEXT
                        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
                        conf_impressao('PROD_REAJ.REL')
                        sac5etq1()
                CASE LASTKEY() = 27
                        wvw_lclosewindow()
                        RETURN NIL
        ENDCASE
ENDDO
wvw_lclosewindow()
RETURN NIL

