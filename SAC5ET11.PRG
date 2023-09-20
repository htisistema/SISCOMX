***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS CODIGO BARRA
***********************************************
MEMVAR getlist,memp_resa

FUNCTION sac5et11(tipo)
***************************
LOCAL MPRG:='SAC5ET11',;
      lci:=0,cci:=0,lba:=13,cba:=79,opcao,mgrupo,msubgrupo,mproduto,mempresa,mdescricao,mpreco,;
      mquantd,m_produto:={},mespaco,mcomprimir,mimp,mlinhas,;
      mfila,tela,i,mport_imp,msaldo,msopreco
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas PADRAO')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        ****************
        SELE('merc');ORDSETFOCUS(1)
        GO TOP
        ****************
        mgrupo := msubgrupo := mproduto := 0
        opcao := SPACE(1)
        mempresa := mdescricao := mpreco := msaldo := msopreco := 'S'
        mquantd := 1
        mespaco := 63
        mlinhas := mfila := 2
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do GRUPO......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do SUB-GRUPO..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do PRODUTO....:')
        DEVPOS(lci+4,cci+1);DEVOUT('nome da FIRMA .......[S/N]:')
        DEVPOS(lci+5,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:')
        DEVPOS(lci+6,cci+1);DEVOUT('Espaco entre ETIQUETAS....:')
        DEVPOS(lci+7,cci+1);DEVOUT('Quantidade Linhas entre ETIQUETAS..:')
        DEVPOS(lci+8,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+9,cci+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,2].:')
        DEVPOS(lci+10,cci+1);DEVOUT('So Produtos com SALDO [S/n]........:')
        DEVPOS(lci+11,cci+1);DEVOUT('So Produtos com PRECO [S/n]........:')
        @ lci+1,cci+24 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(mgrupo,lci+1,cci+30)) WHEN tipo = NIL
        @ lci+2,cci+24 GET msubgrupo PICT '99999' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(msubgrupo,lci+2,cci+30)) WHEN EMPTY(mgrupo) .AND. tipo = NIL
        @ lci+3,cci+24 GET mproduto PICT '99999' VALID ver_cod(mproduto,lci+3,cci+30,,0) WHEN EMPTY(mgrupo) .AND. EMPTY(msubgrupo)
        @ lci+4,cci+29 GET mempresa PICT '@!' VALID mempresa $ 'S,N'
        @ lci+5,cci+29 GET mpreco PICT '@!' VALID mpreco $ 'S,N'
        @ lci+6,cci+29 GET mespaco PICT '999' VALID IF(mespaco<46,.F.,.T.)
        @ lci+7,cci+38 GET mlinhas PICT '9'
        @ lci+8,cci+38 GET mquantd PICT '999999'
        @ lci+9,cci+38 GET mfila PICT '99' VALID IF(mfila<1 .AND. mfila > 2,.F.,.T.)
        @ lci+10,cci+38 GET msaldo  PICT '@!' VALID msaldo $ 'S,N'
        @ lci+11,cci+38 GET msopreco PICT '@!' VALID msopreco $ 'S,N'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! EMPTY(mgrupo)
                mensagem('Coletando dados para a ETIQUETAS')
                ****************
                SELE('merc');ORDSETFOCUS(3)
                GO TOP
                WHILE ! EOF()
                        prog_imp(RECNO())
                        i := 0
                        IF SUBSTR(merc->gru_sub,1,3) <> STRZERO(mgrupo,3);
                           .OR. merc->cod_merc = '     ';
                           .OR. (msaldo = 'S' .AND. merc->saldo_mer <= 0);
                           .OR. (msopreco = 'S' .AND. merc->pr_venda <= 0)
                                SKIP
                                LOOP
                        ENDIF
                        FOR i = 1 TO mquantd
                                AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,merc->pr_venda})
                        NEXT
                        SKIP
                ENDDO
                ****************
        ELSEIF ! EMPTY(msubgrupo)
                mensagem('Coletando dados para a ETIQUETAS')
                ****************
                SELE('merc');ORDSETFOCUS(3)
                GO TOP
                WHILE ! EOF()
                        prog_imp(RECNO())
                        i := 0
                        IF merc->gru_sub <> STRZERO(msubgrupo,5) .OR. ;
                           merc->cod_merc = '     ';
                           .OR. (msaldo = 'S' .AND. merc->saldo_mer <= 0);
                           .OR. (msopreco = 'S' .AND. merc->pr_venda <= 0)
                                SKIP
                                LOOP
                        ENDIF
                        FOR i = 1 TO mquantd
                                AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,merc->pr_venda})
                        NEXT
                        SKIP
                ENDDO
                ****************
        ELSEIF ! EMPTY(mproduto)
                mensagem('Coletando dados para a ETIQUETAS')
                ****************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                merc->(DBSEEK(STRZERO(mproduto,5)))
                i := 0
                FOR i = 1 TO mquantd
                        AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,merc->pr_venda})
                NEXT
                ****************
        ELSE
                mensagem('Coletando dados para a ETIQUETAS')
                ****************
                SELE('merc');ORDSETFOCUS(3)
                GO TOP
                WHILE ! EOF()
                        prog_imp(RECNO())
                        i := 0
                        IF merc->cod_merc = '     ';
                           .OR. (msaldo = 'S' .AND. merc->saldo_mer <= 0);
                           .OR. (msopreco = 'S' .AND. merc->pr_venda <= 0)
                                SKIP
                                LOOP
                        ENDIF
                        FOR i = 1 TO mquantd
                                AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,merc->pr_venda})
                        NEXT
                        SKIP
                ENDDO
                ****************
        ENDIF
        IF ! imp_arq('ETIQUETA.REL','R');LOOP;ENDIF
        i := 0
        FOR i = 1 TO LEN(m_produto)
                imprt(mtipo_imp,'C')
                IF mempresa = 'S'
                        DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,1],46))
                        IF i < LEN(m_produto) .AND. mfila == 2
                                DEVPOS(PROW(),mespaco);DEVOUT(LEFT(m_produto[i+1,1],46))
                        ENDIF
                ELSE
                        DEVPOS(PROW(),00);DEVOUT(SPACE(46))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2]+'-'+m_produto[i,3])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,2]+'-'+m_produto[i+1,3])
                ENDIF
                IF mpreco = 'S'
                        DEVPOS(PROW()+1,00);DEVOUT('Preco: '+TRANSFORM(m_produto[i,4],'999,999.99'))
                        IF i < LEN(m_produto) .AND. mfila == 2
                                DEVPOS(PROW(),mespaco);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                        ENDIF
                ELSE
                        DEVPOS(PROW()+1,00);DEVOUT(' ')
                ENDIF
                IF mfila = 2
                        i ++
                ENDIF
                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
        NEXT
        imprt(mtipo_imp,'N')
        SETPRC(00,00)
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETIQUETA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL






