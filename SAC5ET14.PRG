***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS MEDIA
***********************************************
MEMVAR getlist,memp_resa

FUNCTION sac5et14(tipo)
***************************
LOCAL MPRG:='SAC5ET14'

LOCAL lci,cci,lba,cba,opcao,mgrupo,msubgrupo,mproduto,mempresa,mdescricao,mpreco,;
      mquantd,m_produto:={},memp_n,mprod_n,mpreco_n,mespaco,mcomprimir,mimp,mlinhas,i

lci := cci := 0
lba := 11
cba := 79
op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas MEDIA ')

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
        mespaco := 63
        mcomprimir := '17'
        mlinhas := 1
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do GRUPO......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do SUB-GRUPO..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do PRODUTO....:')
*       DEVPOS(lci+5,cci+1);DEVOUT('nome da FIRMA .......[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+6,cci+1);DEVOUT('Produto em NEGRITO...[S/N]:')
        DEVPOS(lci+7,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+8,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+9,cci+1);DEVOUT('Quantidade linhas entre ETIQUETAS..:')
        @ lci+1,cci+24 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(mgrupo,lci+1,cci+30)) WHEN tipo = NIL
        @ lci+2,cci+24 GET msubgrupo PICT '99999' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(msubgrupo,lci+2,cci+30)) WHEN EMPTY(mgrupo) .AND. tipo = NIL
        @ lci+3,cci+24 GET mproduto PICT '99999' VALID ver_cod(mproduto,lci+3,cci+30) WHEN EMPTY(mgrupo) .AND. EMPTY(msubgrupo)
*       @ lci+5,cci+29 GET mempresa PICT '@!' VALID mempresa $ 'S,N'
*       @ lci+5,cci+49 GET memp_n PICT '@!' VALID memp_n $ 'S,N'
        @ lci+6,cci+29 GET mprod_n PICT '@!' VALID mprod_n $ 'S,N'
        @ lci+7,cci+29 GET mpreco PICT '@!' VALID mpreco $ 'S,N'
        @ lci+7,cci+49 GET mpreco_n PICT '@!' VALID mpreco_n $ 'S,N'
        @ lci+8,cci+38 GET mquantd PICT '999999'
        @ lci+9,cci+38 GET mlinhas PICT '9'
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
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp20)))
                FOR i = 1 TO LEN(m_produto)
                        IF mprod_n = 'S'
                                DEVPOS(PROW()+1,00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],30))
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],30))
                        ENDIF
                        IF i < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+12);DEVOUT(LEFT(m_produto[i+1,2]+'-'+m_produto[i+1,3],30))
                        ENDIF
                        IF i+1 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+12);DEVOUT(LEFT(m_produto[i+2,2]+'-'+m_produto[i+2,3],30))
                        ENDIF
                        IF i+2 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+12);DEVOUT(LEFT(m_produto[i+3,2]+'-'+m_produto[i+3,3],30))
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT(LEFT(SUBSTR(m_produto[i,2]+'-'+m_produto[i,3],31,60),30))
                        IF i < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+26);DEVOUT(LEFT(SUBSTR(m_produto[i+1,2]+'-'+m_produto[i+1,3],31,60),30))
                        ENDIF
                        IF i+1 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+26);DEVOUT(LEFT(SUBSTR(m_produto[i+2,2]+'-'+m_produto[i+2,3],31,60),30))
                        ENDIF
                        IF i+2 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+26);DEVOUT(LEFT(SUBSTR(m_produto[i+3,2]+'-'+m_produto[i+3,3],31,60),30))
                        ENDIF
                        IF mprod_n = 'S'
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                        ENDIF
                        IF mpreco = 'S'
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                                ENDIF
                                DEVPOS(PROW()+1,00);DEVOUT('Preco R$: '+TRANSFORM(m_produto[i,4],'999,999.99'))
                                IF i < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+23);DEVOUT('Preco R$: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                ENDIF
                                IF i+1 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+23);DEVOUT('Preco R$: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                                ENDIF
                                IF i+2 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+23);DEVOUT('Preco R$: '+TRANSFORM(m_produto[i+3,4],'999,999.99'))
                                ENDIF
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                                ENDIF
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        i=i+3
                        DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                NEXT
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
        ENDIF
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
ENDDO
wvw_lclosewindow()
RETURN NIL





