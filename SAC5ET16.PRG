***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS P/ROUPAS
***********************************************
MEMVAR getlist,memp_resa

FUNCTION sac5et16(tipo)
***************************
LOCAL MPRG:='SAC5ET16',;
      lci,cci,lba,cba,opcao,mgrupo,msubgrupo,mproduto,mempresa,mdescricao,mpreco,;
      mquantd,m_produto:={},memp_n,mpreco_n,mespaco,mimp,mlinhas,;
      mfila,tela,drvpadrao,i

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := cci := 0
lba := 08
cba := 79
op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas p/ROUPA')
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
        mempresa := mdescricao := mpreco := 'S'
        memp_n := 'N'
        mquantd := 5
        mespaco := 2
        mlinhas := 3
        ASIZE(m_produto,0)
        drvpadrao := '1'
        mfila := 5
        mensagem('Escolha as opcoes que deseja imprimir')
        exibi_prg(mprg)
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do GRUPO......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do SUB-GRUPO..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do PRODUTO....:')
        DEVPOS(lci+4,cci+1);DEVOUT('nome da FIRMA .......[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+5,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:')
        DEVPOS(lci+6,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+7,cci+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,5].:')
        @ lci+1,cci+24 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(mgrupo,lci+1,cci+30))
        @ lci+2,cci+24 GET msubgrupo PICT '99' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(mgrupo,msubgrupo,lci+2,cci+30))
        @ lci+3,cci+24 GET mproduto PICT '99999' VALID ver_cod(mproduto,lci+3,cci+30) WHEN EMPTY(mgrupo) .AND. EMPTY(msubgrupo)
        @ lci+4,cci+29 GET mempresa PICT '@!' VALID mempresa $ 'S,N'
        @ lci+4,cci+49 GET memp_n PICT '@!' VALID memp_n $ 'S,N'
        @ lci+5,cci+29 GET mpreco PICT '@!' VALID mpreco $ 'S,N'
        @ lci+6,cci+38 GET mquantd PICT '999999'
        @ lci+7,cci+38 GET mfila PICT '99' VALID IF(mfila<1 .AND. mfila > 5,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os dados para impressao das etiquetas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        mensagem('Coletando dados para a ETIQUETAS')
        IF ! EMPTY(mproduto)
                mensagem('Coletando dados para a ETIQUETAS')
                ****************
                SELE('merc');ORDSETFOCUS(1)
                GO TOP
                merc->(DBSEEK(STRZERO(mproduto,5)))
                i := 0
                FOR i = 1 TO mquantd
                        AADD(m_produto,{m_set[1,130],merc->cod_merc,merc->merc,merc->pr_venda})
                NEXT
                ****************
        ELSE
                ****************
                SELE('merc');ORDSETFOCUS(3)
                GO TOP
                WHILE ! EOF()
                        i := 0
                        IF (! EMPTY(mgrupo) .AND. SUBSTR(merc->gru_sub,1,3) <> STRZERO(mgrupo,3));
                           .OR. EMPTY(merc->cod_merc);
                           .OR. (! EMPTY(msubgrupo) .AND. merc->gru_sub <> (STRZERO(mgrupo,3)+STRZERO(msubgrupo,2)))
                                SKIP
                                LOOP
                        ENDIF
                        FOR i = 1 TO mquantd
                                AADD(m_produto,{m_set[1,130],merc->cod_merc,merc->merc,merc->pr_venda})
                        NEXT
                        SKIP
                ENDDO
                ****************
        ENDIF
        IF ! imp_arq('ETQ_ROUPA.REL','R')
                LOOP
        ENDIF
        i := 0
        FOR i = 1 TO LEN(m_produto)
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp20)))
                DEVPOS(PROW()+5,00);DEVOUT(m_produto[i,2]+'-'+LEFT(m_produto[i,3],24))
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2]+'-'+LEFT(m_produto[i,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                ENDIF
                IF i+1 < LEN(m_produto) .AND. mfila == 3
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                ENDIF
                IF i+2 < LEN(m_produto) .AND. mfila == 4
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+3,2]+'-'+LEFT(m_produto[i+3,3],24))
                ENDIF
                IF i+3 < LEN(m_produto) .AND. mfila == 5
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+3,2]+'-'+LEFT(m_produto[i+3,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+4,2]+'-'+LEFT(m_produto[i+4,3],24))
                ENDIF
                IF mempresa = 'S'
                        IF memp_n = 'S'
                                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                        ENDIF
                        DEVPOS(PROW()+2,00);DEVOUT(LEFT(m_produto[i,1],30))
                        IF i < LEN(m_produto) .AND. mfila == 2
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+1,1],30))
                        ENDIF
                        IF i+1 < LEN(m_produto) .AND. mfila == 3
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+1,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+2,1],30))
                        ENDIF
                        IF i+2 < LEN(m_produto) .AND. mfila == 4
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+1,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+2,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+3,1],30))
                        ENDIF
                        IF i+3 < LEN(m_produto) .AND. mfila == 5
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+1,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+2,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+3,1],30))
                                DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(LEFT(m_produto[i+4,1],30))
                        ENDIF
                        IF memp_n = 'S'
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                        ENDIF
                ELSE
                        DEVPOS(PROW()+2,00);DEVOUT(SPACE(46))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2]+'-'+LEFT(m_produto[i,3],24))
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2]+'-'+LEFT(m_produto[i,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                ENDIF
                IF i+1 < LEN(m_produto) .AND. mfila == 3
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                ENDIF
                IF i+2 < LEN(m_produto) .AND. mfila == 4
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+3,2]+'-'+LEFT(m_produto[i+3,3],24))
                ENDIF
                IF i+3 < LEN(m_produto) .AND. mfila == 5
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+1,2]+'-'+LEFT(m_produto[i+1,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+2,2]+'-'+LEFT(m_produto[i+2,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+3,2]+'-'+LEFT(m_produto[i+3,3],24))
                        DEVPOS(PROW(),PCOL()+mespaco);DEVOUT(m_produto[i+4,2]+'-'+LEFT(m_produto[i+4,3],24))
                ENDIF
                IF mpreco = 'S'
                        DEVPOS(PROW()+1,00);DEVOUT('Preco: '+TRANSFORM(m_produto[i,4],'999,999.99'))
                        IF i < LEN(m_produto) .AND. mfila == 2
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                        ENDIF
                        IF i+1 < LEN(m_produto) .AND. mfila == 3
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                        ENDIF
                        IF i+2 < LEN(m_produto) .AND. mfila == 4
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+3,4],'999,999.99'))
                        ENDIF
                        IF i+3 < LEN(m_produto) .AND. mfila == 5
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+3,4],'999,999.99'))
                                DEVPOS(PROW(),PCOL()+mespaco+13);DEVOUT('Preco: '+TRANSFORM(m_produto[i+4,4],'999,999.99'))
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
                        i ++;i ++
                ENDIF
                IF mfila == 4
                        i ++;i ++;i ++
                ENDIF
                IF mfila == 5
                        i ++;i ++;i ++;i ++
                ENDIF
                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
        NEXT
        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETQ_ROUPA.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
