MEMVAR getlist
*******************
* CONSULTA DE PRODUTOS
*******************
FUNCTION cons_prod()
***************
LOCAL MPRG:='CONS_PROD',m_produto:={},mcod_bc
CLEAR GETS
op_tela(00,00,33,100,'C O N S U L T A   D E   P R O D U T O S')
WVW_SetMouseMove(,.F.)
WHILE .T.
        mcod_bc := SPACE(14)
        limpa(00,00,33,100)
        SUB_BANNER(01,20,'CONSULTA')
        SUB_BANNER(05,40,'DE')
        SUB_BANNER(09,22,'PRODUTO')
        IF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                botao(20,21,30,73)
        	WVW_DrawImage( ,20,21,30,73,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
        ENDIF
        DEVPOS(33,01);DEVOUT('PRODUTO:')
        @ 33,11 GET mcod_bc PICT '@!' VALID IF(EMPTY(mcod_bc),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        m_produto := {}
        IF LEN(RTRIM(mcod_bc)) > 5 .OR. VAL(mcod_bc) = 0
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_barr = "+sr_cdbvalue(mcod_bc),,.t.,@m_produto)
        ELSE
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(VAL(mcod_bc),5)),,.t.,@m_produto)
        ENDIF
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(m_produto) = 0
                atencao('Nao foi possivel encontrar este PRODUTO, informar ao Gerente...')
                LOOP
        ENDIF
        limpa(00,00,17,100)
        DEVPOS(01,01);DEVOUT('Codigo..:')
        DEVPOS(05,01);DEVOUT('Produto.:')
        WVW_DrawLabel(,00,12,m_produto[1,8],,,,, 'arial black',60,20,,,,,)
        WVW_DrawLabel(,04,12,SUBSTR(m_produto[1,9],1,35),,,,, 'arial black',60,20,,,,,)
        WVW_DrawLabel(,08,12,SUBSTR(m_produto[1,9],36),,,,, 'arial black',60,20,,,,,)
        DEVPOS(13,01);DEVOUT('Preco R$:')
        WVW_DrawLabel(,12,12,TRANSFORM(m_produto[1,46],'@E 999,999.99'),,,240,, 'arial black',60,30,,,,,)
        limpa(16,00,33,100)
        setcor(1)
        IF FILE(ALLTRIM(m_indiv[1,29])+'P'+m_produto[1,8]+'.jpg')
                botao(16,20,32,80)
                WVW_DrawImage( ,16,20,32,80,ALLTRIM(m_indiv[1,29])+'P'+m_produto[1,8]+'.jpg',.T.,.F.)
        ELSEIF FILE(ALLTRIM(m_indiv[1,3])+'HTIfirma.jpg')
                botao(16,20,32,80)
        	WVW_DrawImage( ,16,20,32,80,ALLTRIM(m_indiv[1,3])+'HTIFIRMA.JPG',.T.,.F.)
        ENDIF
        INKEY(8)
ENDDO
WVW_SetMouseMove(,.T.)
wvw_lclosewindow()
RETURN NIL
***************************  F I M  **********************************
