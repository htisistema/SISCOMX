***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS P/ROUPAS
***********************************************
MEMVAR getlist,memp_resa

FUNCTION sac5et13(tipo)
***************************
LOCAL MPRG:='SAC5ET13',;
      lci,cci,lba,cba,opcao,mgrupo,msubgrupo,mproduto,mempresa,mdescricao,mpreco,;
      mquantd,m_produto:={},memp_n,mprod_n,mpreco_n,mespaco,mcomprimir,mimp,mlinhas,;
      mfila,drvpadrao,i

lci := cci := 0
lba := 12
cba := 79

op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas p/ROUPA')
WHILE .T.
        ****************
        SELE('merc');ORDSETFOCUS(1)
        GO TOP
        ****************
        mgrupo := msubgrupo := mproduto := 0
        opcao := SPACE(1)
        mempresa := mdescricao := mpreco := 'S'
        memp_n := mprod_n := mpreco_n := 'N'
        mquantd := 1
        mespaco := 55
        mcomprimir := '20'
        mlinhas := 5
        ASIZE(m_produto,0)
        drvpadrao := '1'
        mfila := 2
        mensagem('Escolha as opcoes que deseja imprimir')
        exibi_prg(mprg)
        @ lci+4,cci TO lci+4,cba
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do GRUPO......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do SUB-GRUPO..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do PRODUTO....:')
        DEVPOS(lci+5,cci+1);DEVOUT('nome da FIRMA .......[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+6,cci+1);DEVOUT('Produto em NEGRITO...[S/N]:')
        DEVPOS(lci+7,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+8,cci+1);DEVOUT('Espaco entre ETIQUETAS....:      Tamanho da Letra Comprimida [17/20]:')
        DEVPOS(lci+9,cci+1);DEVOUT('Quantidade Linhas entre ETIQUETAS..:')
        DEVPOS(lci+10,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+11,cci+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,2].:')
        @ lci+1,cci+24 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(mgrupo,lci+1,cci+30)) WHEN tipo = NIL
        @ lci+2,cci+24 GET msubgrupo PICT '99999' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(msubgrupo,lci+2,cci+30)) WHEN EMPTY(mgrupo) .AND. tipo = NIL
        @ lci+3,cci+24 GET mproduto PICT '99999' VALID ver_cod(mproduto,lci+3,cci+30) WHEN EMPTY(mgrupo) .AND. EMPTY(msubgrupo)
        @ lci+5,cci+29 GET mempresa PICT '@!' VALID mempresa $ 'S,N'
        @ lci+5,cci+49 GET memp_n PICT '@!' VALID memp_n $ 'S,N'
        @ lci+6,cci+29 GET mprod_n PICT '@!' VALID mprod_n $ 'S,N'
        @ lci+7,cci+29 GET mpreco PICT '@!' VALID mpreco $ 'S,N'
        @ lci+7,cci+49 GET mpreco_n PICT '@!' VALID mpreco_n $ 'S,N'
        @ lci+8,cci+29 GET mespaco PICT '999' VALID IF(mespaco<10,.F.,.T.)
        @ lci+8,cci+71 GET mcomprimir PICT '99' VALID mcomprimir $ '17,20'
        @ lci+9,cci+38 GET mlinhas PICT '9'
        @ lci+10,cci+38 GET mquantd PICT '999999'
        @ lci+11,cci+38 GET mfila PICT '99' VALID IF(mfila<1 .AND. mfila > 3,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os dados para impressao das etiquetas:')
        IF opcao = 'N'
                LOOP
        ELSE
                IF ! EMPTY(mgrupo)
                        mensagem('Coletando dados para a ETIQUETAS')
                        ****************
                        SELE('merc');ORDSETFOCUS(3)
                        GO TOP
                        WHILE ! EOF()
                                i := 0
                                IF SUBSTR(merc->gru_sub,1,3) <> STRZERO(mgrupo,3) .OR. ;
                                   merc->cod_merc = '     '
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
                                i := 0
                                IF merc->gru_sub <> STRZERO(msubgrupo,5) .OR. ;
                                   merc->cod_merc = '     '
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
                                i := 0
                                IF merc->cod_merc = '     '
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
                SET DEVI TO PRINT
                SET PRINT TO (m_indiv[1,17])
                i := 0
                FOR i = 1 TO LEN(m_produto)
                        IF mcomprimir = '17'
                                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp17)))
                        ELSE
                                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp20)))
                        ENDIF
                        IF mempresa = 'S'
                                IF memp_n = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                ENDIF
                                DEVPOS(PROW()+5,00);DEVOUT(LEFT(m_produto[i,1],46))
                                IF i < LEN(m_produto) .AND. mfila == 2
                                        DEVPOS(PROW(),mespaco);DEVOUT(LEFT(m_produto[i+1,1],46))
                                ENDIF
                                IF i+1 < LEN(m_produto) .AND. mfila == 3
                                        DEVPOS(PROW(),mespaco);DEVOUT(LEFT(m_produto[i+1,1],46))
                                        DEVPOS(PROW(),mespaco+mespaco);DEVOUT(LEFT(m_produto[i+2,1],46))
                                ENDIF
                                IF memp_n = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                ENDIF
                        ELSE
                                DEVPOS(PROW(),00);DEVOUT(SPACE(46))
                        ENDIF
                        IF mprod_n = 'S'
                                DEVPOS(PROW()+1,00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                DEVPOS(PROW(),00);DEVOUT(m_produto[i,2]+'-'+m_produto[i,3])
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2]+'-'+m_produto[i,3])
                        ENDIF
                        IF i < LEN(m_produto) .AND. mfila == 2
                                DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,2]+'-'+m_produto[i+1,3])
                        ENDIF
                        IF i+1 < LEN(m_produto) .AND. mfila == 3
                                DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,2]+'-'+m_produto[i+1,3])
                                DEVPOS(PROW(),mespaco+mespaco);DEVOUT(m_produto[i+2,2]+'-'+m_produto[i+2,3])
                        ENDIF
                        IF mprod_n = 'S'
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                        ENDIF
                        IF mpreco = 'S'
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT('Preco: '+TRANSFORM(m_produto[i,4],'999,999.99'))
                                IF i < LEN(m_produto) .AND. mfila == 2
                                        DEVPOS(PROW(),mespaco);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                ENDIF
                                IF i+1 < LEN(m_produto) .AND. mfila == 3
                                        DEVPOS(PROW(),mespaco);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                        DEVPOS(PROW(),mespaco+mespaco);DEVOUT('Preco: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                                ENDIF
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                ENDIF
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        IF mfila == 2
                                i ++
                        ENDIF
                        IF mfila == 3
                                i ++
                                i ++
                        ENDIF
                        DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                NEXT
                IF mcomprimir = '17'
                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp17)))
                ELSE
                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
                ENDIF
                SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        ENDIF
ENDDO
wvw_lclosewindow()
RETURN NIL
