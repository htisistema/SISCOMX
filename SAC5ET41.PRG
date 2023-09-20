***********************************************
* FUNCAO PARA EMISSAO DE ETIQUETAS NORMAL PERSONALIZADA
***********************************************
MEMVAR getlist

FUNCTION sac5et41(tipo)
***************************
LOCAL MPRG:='SAC5ET41',;
      lci,cci,lba,cba,opcao,mempresa,mdescr1,mdescr2,mdescr3,mdescr4,mdescr5,;
      mquantd,m_produto:={},mespaco,mcomprimir,mimp,mfila,i

PRIVATE mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := cci := 0
lba := 09
cba := 79
op_tela(lci,cci,lba+2,cba,' Opcoes para Etiquetas PADRAO PERSONALIZADAS ')

WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mdescr1 := mdescr2 := mdescr3 := mdescr4 := mdescr5 := SPACE(40)
        opcao := SPACE(1)
        mquantd := 1
        mespaco := 70
        mcomprimir := '17'
        mfila := 2
        ASIZE(m_produto,0)
        mensagem('Escolha as opcoes que deseja imprimir')
        DEVPOS(lci+1,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+2,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+3,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+4,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+5,cci+1);DEVOUT('Descricao.....:')
        DEVPOS(lci+6,cci+1);DEVOUT('Espaco entre ETIQUETAS....:')       //    Tamanho da Letra Comprimida [17/20]:')
        DEVPOS(lci+7,cci+1);DEVOUT('Quantidade de Etiquetas............:')
        DEVPOS(lci+8,cci+1);DEVOUT('Quantidade Fileira ETIQUETAS [1,2].:')
        @ lci+1,cci+17 GET mdescr1
        @ lci+2,cci+17 GET mdescr2
        @ lci+3,cci+17 GET mdescr3
        @ lci+4,cci+17 GET mdescr4
        @ lci+5,cci+17 GET mdescr5
        @ lci+6,cci+29 GET mespaco PICT '999' VALID IF(mespaco<46,.F.,.T.)
*        @ lci+6,cci+71 GET mcomprimir PICT '99' VALID mcomprimir $ '17,20'
        @ lci+7,cci+38 GET mquantd PICT '999999'
        @ lci+8,cci+38 GET mfila PICT '99' VALID IF(mfila<1 .AND. mfila > 2,.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        IF ! imp_arq('ETQ_PERSO.REL','R')
                LOOP
        ENDIF
        FOR i = 1 TO mquantd
                AADD(m_produto,{mdescr1,mdescr2,mdescr3,mdescr4,mdescr5})
        NEXT
        i := 0
        FOR i = 1 TO LEN(m_produto)
                imprt(mtipo_imp,'C')
                DEVPOS(PROW(),00);DEVOUT(m_produto[i,1])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(LEFT(m_produto[i+1,1],46))
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,2])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,2])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,3])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,3])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,4])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,4])
                ENDIF
                DEVPOS(PROW()+1,00);DEVOUT(m_produto[i,5])
                IF i < LEN(m_produto) .AND. mfila == 2
                        DEVPOS(PROW(),mespaco);DEVOUT(m_produto[i+1,5])
                ENDIF
                IF mfila == 2
                        i ++
                ENDIF
                DEVPOS(PROW()+2,00);DEVOUT(' ')
        NEXT
        imprt(mtipo_imp,'N')
/*
        IF mcomprimir = '17'
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp17)))
        ELSE
                DEVPOS(PROW(),00);DEVOUT(&(ALLTRIM(prn->d_comp20)))
        ENDIF
*/
        SET DEVI TO SCREEN;SET PRINT TO;SET PRINT OFF
        conf_impressao('ETQ_PERSO.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL






