***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS PEQUENAS PERSONALIZADA
***********************************************
MEMVAR getlist

FUNCTION sac5et42(tipo)
***************************
LOCAL MPRG:='SAC5ET42',;
      lci,cci,lba,cba,opcao,mdescr1,mdescr2,mdescr3,mdescr4,mlinhas,;
      mquantd,m_produto:={},i

lci := cci := 0
lba := 06
cba := 79
op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas PEQUENAS PERSONALIZADA')

WHILE .T.
        mdescr1 := mdescr2 := mdescr3 := SPACE(17)
        mlinhas := 1
        opcao := SPACE(1)
        mquantd := 1
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Quantidade de Etiquetas por PRODUTO:')
        DEVPOS(lci+5,cci+1);DEVOUT('Quantidade linhas entre Etiquetas  :')
        @ lci+1,cci+17 GET mdescr1
        @ lci+2,cci+17 GET mdescr2
        @ lci+3,cci+17 GET mdescr3
        @ lci+4,cci+38 GET mquantd PICT '999999'
        @ lci+5,cci+38 GET mlinhas PICT '9'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma os dados para impressao das etiquetas:')
        IF opcao = 'N'
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                AADD(m_produto,{mdescr1,mdescr2,mdescr3,mdescr4})
        NEXT
        SET DEVI TO PRINT
        SET PRINT TO (m_indiv[1,17])
        i := 0
        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_comp20)))
        FOR i = 1 TO LEN(m_produto)
/*
                DEVPOS(PROW(),00);DEVOUT(LEFT(m_produto[i,1],17))
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,1])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,1])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,1])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,1])
                ENDIF
*/
                DEVPOS(PROW()+1,00);DEVOUT(LEFT(m_produto[i,2]+'-'+m_produto[i,3],17))
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,2])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,2])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,2])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,2])
                ENDIF

                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2])
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,2])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,2])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,2])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,2])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,4])
                IF i < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+1,4])
                ENDIF
                IF i+1 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+2,4])
                ENDIF
                IF i+2 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+3,4])
                ENDIF
                IF i+3 < LEN(m_produto)
                        DEVPOS(PROW(),PCOL()+7);DEVOUT(m_produto[i+4,4])
                ENDIF
                i=i+4
                DEVPOS(PROW()+mlinhas,00);DEVOUT(' ')
        NEXT
        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
        DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->a_6linpol)))
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
ENDDO
wvw_lclosewindow()
RETURN NIL





