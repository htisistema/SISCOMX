***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS PEQUENAS
***********************************************
MEMVAR getlist,memp_resa

FUNCTION sac5et12(tipo)
***************************
LOCAL MPRG:='SAC5ET12',;
      lci,cci,lba,cba,opcao,mgrupo,msubgrupo,mproduto,mempresa,mdescricao,mpreco,;
      mquantd,m_produto:={},memp_n,mprod_n,mpreco_n,mespaco,mcomprimir,mimp,mlinhas,;
      i,mtipo_preco:='A'
PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := cci := 0
lba := 11
cba := 79

op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas PEQUENAS ')
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
        memp_n := mprod_n := mpreco_n := 'N'
        mquantd := 1
        mespaco := 63
        mcomprimir := '17'
        mlinhas := 1
        mtipo_preco := 'A'
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Codigo do GRUPO......:')
        DEVPOS(lci+2,cci+1);DEVOUT('Codigo do SUB-GRUPO..:')
        DEVPOS(lci+3,cci+1);DEVOUT('Codigo do PRODUTO....:')
*       DEVPOS(lci+5,cci+1);DEVOUT('nome da FIRMA .......[S/N]:   em NEGRITO [S/N]:')
        //DEVPOS(lci+5,cci+1);DEVOUT('Produto em NEGRITO...[S/N]:')
        //DEVPOS(lci+6,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:   em NEGRITO [S/N]:')
        DEVPOS(lci+6,cci+1);DEVOUT('PRECO DO PRODUTO.....[S/N]:')
        DEVPOS(lci+7,cci+1);DEVOUT('PRECO de [A]vista A[P]razo:')
        DEVPOS(lci+8,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+9,cci+1);DEVOUT('Quantidade linhas entre ETIQUETAS..:')
        @ lci+1,cci+24 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.T.,ver_gru(mgrupo,lci+1,cci+30)) WHEN tipo = NIL
        @ lci+2,cci+24 GET msubgrupo PICT '99999' VALID IF(EMPTY(msubgrupo),.T.,ver_sgru(msubgrupo,lci+2,cci+30)) WHEN EMPTY(mgrupo) .AND. tipo = NIL
        @ lci+3,cci+24 GET mproduto PICT '99999' VALID ver_cod(mproduto,lci+3,cci+30) WHEN EMPTY(mgrupo) .AND. EMPTY(msubgrupo)
*       @ lci+5,cci+29 GET mempresa PICT '@!' VALID mempresa $ 'S,N'
*       @ lci+5,cci+49 GET memp_n PICT '@!' VALID memp_n $ 'S,N'
        //@ lci+5,cci+29 GET mprod_n PICT '@!' VALID mprod_n $ 'S,N'
        @ lci+6,cci+29 GET mpreco PICT '@!' VALID mpreco $ 'S,N'
        //@ lci+6,cci+49 GET mpreco_n PICT '@!' VALID mpreco_n $ 'S,N'
        @ lci+7,cci+29 GET mtipo_preco PICT '@!' VALID mtipo_preco $ 'A,P'
        @ lci+8,cci+38 GET mquantd PICT '999999'
        @ lci+9,cci+38 GET mlinhas PICT '9'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mensagem('Coletando dados para a ETIQUETAS')
        IF ! imp_arq('ETQ_PROD.REL','R')
                LOOP
        ELSE
                IF ! EMPTY(mgrupo)
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
                                        AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,IF(mtipo_preco = 'A',merc->pr_venda,merc->pr_venda1)})
                                NEXT
                                SKIP
                        ENDDO
                        ****************
                ELSEIF ! EMPTY(msubgrupo)
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
                                        AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,IF(mtipo_preco = 'A',merc->pr_venda,merc->pr_venda1)})
                                NEXT
                                SKIP
                        ENDDO
                        ****************
                ELSEIF ! EMPTY(mproduto)
                        ****************
                        SELE('merc');ORDSETFOCUS(1)
                        GO TOP
                        merc->(DBSEEK(STRZERO(mproduto,5)))
                        i := 0
                        FOR i = 1 TO mquantd
                                AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,IF(mtipo_preco = 'A',merc->pr_venda,merc->pr_venda1)})
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
                                        AADD(m_produto,{memp_resa,merc->cod_merc,merc->merc,IF(mtipo_preco = 'A',merc->pr_venda,merc->pr_venda1)})
                                NEXT
                                SKIP
                        ENDDO
                        ****************
                ENDIF
*               SET DEVI TO PRINT
*               SET PRINT TO (m_indiv[1,17])
                i := 0
	        imprt(mtipo_imp,'C')
                //DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
                //DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp20)))
                FOR i = 1 TO LEN(m_produto)
/*
                        IF mempresa = 'S'
                                IF memp_n = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                ENDIF
                                DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,1],17)+SPACE(17-LEN(LEFT(m_produto[i,1],17))))
                                IF i < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i,1],17)+SPACE(17-LEN(LEFT(m_produto[i,1],17))))
                                ENDIF
                                IF i+1 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i,1],17)+SPACE(17-LEN(LEFT(m_produto[i,1],17))))
                                ENDIF
                                IF i+2 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i,1],17)+SPACE(17-LEN(LEFT(m_produto[i,1],17))))
                                ENDIF
                                IF i+3 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i,1],17)+SPACE(17-LEN(LEFT(m_produto[i,1],17))))
                                ENDIF
                                IF memp_n = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                                ENDIF
                        ELSE
                                DEVPOS(PROW(),00);DEVOUT(SPACE(17))
                        ENDIF
*/
                        IF mprod_n = 'S'
                                //DEVPOS(PROW()+1,00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],17))
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],17))
                        ENDIF
                        IF i < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i+1,2]+'-'+m_produto[i+1,3],17))
                        ENDIF
                        IF i+1 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i+2,2]+'-'+m_produto[i+2,3],17))
                        ENDIF
                        IF i+2 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i+3,2]+'-'+m_produto[i+3,3],17))
                        ENDIF
                        IF i+3 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(m_produto[i+4,2]+'-'+m_produto[i+4,3],17))
                        ENDIF

                        DEVPOS(PROW()+1,00);DEVOUT(LEFT(SUBSTR(m_produto[i,2]+'-'+m_produto[i,3],18,34),17))
                        IF i < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(SUBSTR(m_produto[i+1,2]+'-'+m_produto[i+1,3],18,34),17))
                        ENDIF
                        IF i+1 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(SUBSTR(m_produto[i+2,2]+'-'+m_produto[i+2,3],18,34),17))
                        ENDIF
                        IF i+2 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(SUBSTR(m_produto[i+3,2]+'-'+m_produto[i+3,3],18,34),17))
                        ENDIF
                        IF i+3 < LEN(m_produto)
                                DEVPOS(PROW(),PCOL()+7);DEVOUT(LEFT(SUBSTR(m_produto[i+4,2]+'-'+m_produto[i+4,3],18,34),17))
                        ENDIF
/*
                        IF mprod_n = 'S'
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                        ENDIF
*/
                        IF mpreco = 'S'
/*
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_negrito)))
                                        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                                ENDIF
*/
                                DEVPOS(PROW()+1,00);DEVOUT('Preco: '+TRANSFORM(m_produto[i,4],'999,999.99'))
                                IF i < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT('Preco: '+TRANSFORM(m_produto[i+1,4],'999,999.99'))
                                ENDIF
                                IF i+1 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT('Preco: '+TRANSFORM(m_produto[i+2,4],'999,999.99'))
                                ENDIF
                                IF i+2 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT('Preco: '+TRANSFORM(m_produto[i+3,4],'999,999.99'))
                                ENDIF
                                IF i+3 < LEN(m_produto)
                                        DEVPOS(PROW(),PCOL()+7);DEVOUT('Preco: '+TRANSFORM(m_produto[i+4,4],'999,999.99'))
                                ENDIF
/*
                                IF mpreco_n = 'S'
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->d_negrito)))
                                        DEVPOS(PROW(),PCOL());DEVOUT(&(ALLTRIM(prn->a_8linpol)))
                                ENDIF
*/
                        ELSE
                                DEVPOS(PROW()+1,00);DEVOUT(' ')
                        ENDIF
                        i=i+4
                        DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
                NEXT
	        imprt(mtipo_imp,'N')
                //DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
                //DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
        ENDIF
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETQ_PROD.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL





