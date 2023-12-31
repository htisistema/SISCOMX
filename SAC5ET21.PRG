*******************************************************
* ETIQUETA DE CODIGO DE BARRA IMPRESSORA "JATO DE TINTA"
******************************************************
MEMVAR getlist

FUNCTION sac5et21
*****************
LOCAL mprg:='SAC5ET21',;
      lci,cci,lba,cba,opcao,qtde,;
      mpreco,mtip_term,mobs,mop_preco:=' ',mcont_pg:=0,;
      m_etq:={},m_ver:={},mespaco:=80,mlinhas:=5,mtamanho:='        ',mnegrito:='S',;
      mdescri := 'M'

PRIVATE mcod_merc,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

enter=chr(13)
lci := 02
cci := 01
lba := 07
cba := 90

li := 10
ci := 01
lb := 22
cb := 90
*---------------------------------------------
mtip_term := m_cfg[2]
exibi_prg(mprg)
op_tela(00,00,24,90,'ETIQUETAS CODIGO DE BARRAS P/JATO DE TINTAS')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mobs := SPACE(50)
        mdescri := 'M'
        ASIZE(m_etq,0)
        ASIZE(m_ver,0)
        botao(li,ci,lb,cb,,' Produtos Solicitados ')
        @ 0,1 SAY "ESPACO entre Etiquetas...:" GET mespaco PICT '99999'
        @ 1,1 SAY "LINHAS entre Etiquetas...:" GET mlinhas PICT '99999'
        @ 2,1 SAY "Impressoa em NEGRITO S/N.:" GET mnegrito PICT '@!' VALID mnegrito $ 'S,N'
        @ 3,1 SAY "Descricao [N]ota Nor[M]al:" GET mdescri PICT '@!' VALID mdescri $ 'N,M'
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        WHILE .T.
                mtamanho:='        '
                mcod_merc:=0
                qtde=0
                mop_preco := 'S'
                @ 4,1 SAY "Codigo do Produto.......:" GET mcod_merc PICT '99999'        // VALID ver_cod(mcod_merc,lci+2,COL()+1)
                READ
                IF LASTKEY()=27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF EMPTY(mcod_merc)
                        @ 4,1 SAY "Codigo do Produto.......:" GET mcod_merc PICT '99999'
                        READ
                        IF EMPTY(mcod_merc)
                                IF LEN(m_etq) = 0
                                        LOOP
                                ENDIF
                                EXIT
                        ENDIF
                ENDIF
                mcons_merc := {}
                cComm  := "SELECT cod_merc,merc,cod_barr,pr_venda,varejo,descri FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
                sr_getconnection():exec(ccomm,,.t.,@mcons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_merc) = 0
                        atencao('Codigo nao cadastro...')
                        LOOP
                ENDIF
                IF EMPTY(mcons_merc[1,3])
                        atencao('Este Produto estar sem codigo de barra, Nao pode ser impresso !!!')
                        LOOP
                ENDIF
                ver_cod(mcod_merc,lci+1,cci+33)
                @ 5,1 SAY "Quantidade de Etiquetas :" GET qtde PICT "99999" VALID IF(EMPTY(qtde),.F.,.T.)
                @ 6,1 SAY "Imprimir Preco [S/N]....:" GET mop_preco PICT "@!" VALID mop_preco $ 'S,N'
                @ 7,1 SAY "Digita o Tamanho da peca:" GET mtamanho
                @ 8,1 SAY "Obs:" GET mobs WHEN mop_preco = 'N'
                READ
                IF LASTKEY()=27
                        RETURN NIL
                ENDIF
                opcao := op_simnao('S','Confirma a Inclusao do Produto:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                AADD(m_ver,mcons_merc[1,1]+'-'+mcons_merc[1,2]+'  Quantidade: '+TRANSFORM(qtde,'99,999')+' Tamanho: '+mtamanho)
                i := 0
                IF m_cfg[2] = 'L'
                        mcons_merc[1,4] := iat(mcons_merc[1,4]  * ((mcons_merc[1,5]/100) + 1),,2)
                ENDIF
                FOR i = 1 TO qtde
                        //                1             2                 3              4           5       6          7               8
                        AADD(m_etq,{mcons_merc[1,1],mcons_merc[1,2],mcons_merc[1,3],mcons_merc[1,4],mobs,mtamanho,mcons_merc[1,5],mcons_merc[1,6]})
                NEXT
                i := 0
                FOR i = 1 TO LEN(m_ver)
                        IF i = 15
                                SCROLL(li+i,ci+1,lb-2,cb-1,1)
                        ENDIF
                        setcor(3)
                        DEVPOS(li+i,ci+01);DEVOUT(m_ver[i])
                        setcor(1)
                NEXT
        ENDDO
        IF ! imp_arq('ETQ_BARR.REL','R')
                LOOP
        ENDIF
        mcont_pg := 0
        //DEVPOS(PROW()+4,00);DEVOUT('')
        IF mnegrito = 'S'
                imprt(mtipo_imp,'N+')
        ELSE
                imprt(mtipo_imp,'N')
        ENDIF
        i := 0
        FOR i=1 TO LEN(m_etq)
                //DEVPOS(PROW()+1,mlinhas);DEVOUT(CHR(15)+m_etq[i,1]+'-'+m_etq[i,2])
                IF mdescri = 'M'
                        DEVPOS(PROW()+1,05);DEVOUT(CHR(15)+m_etq[i,1]+'-'+m_etq[i,2])
                        IF i+1 <= LEN(m_etq)
                                DEVPOS(PROW(),mespaco);DEVOUT(CHR(15)+m_etq[i+1,1]+'-'+m_etq[i+1,2])
                        ENDIF
                ELSE
                        DEVPOS(PROW()+1,05);DEVOUT(CHR(15)+m_etq[i,1]+'-'+m_etq[i,8])
                        IF i+1 <= LEN(m_etq)
                                DEVPOS(PROW(),mespaco);DEVOUT(CHR(15)+m_etq[i+1,1]+'-'+m_etq[i+1,8])
                        ENDIF
                ENDIF
                DEVPOS(PROW()+1,14);DEVOUT(CHR(27)+'(B'+CHR(19)+CHR(1)+CHR(0)+CHR(3)+'�'+CHR(50)+CHR(0)+CHR(1))
                //DEVPOS(PROW()+1,13);DEVOUT(CHR(27)+'(B'+CHR(19)+CHR(1)+CHR(0)+CHR(3)+'�'+CHR(135)+CHR(0)+CHR(1))
                DEVPOS(PROW(),PCOL());DEVOUT(ALLTRIM(m_etq[i,3]))
                IF i+1 <= LEN(m_etq)
                        DEVPOS(PROW(),mespaco+32);DEVOUT(CHR(27)+'(B'+CHR(19)+CHR(1)+CHR(0)+CHR(3)+'�'+CHR(50)+CHR(0)+CHR(1))
                        DEVPOS(PROW(),PCOL());DEVOUT(ALLTRIM(m_etq[i+1,3]))
                ENDIF

                IF mop_preco = 'S'
                        //DEVPOS(PROW()+3,02);DEVOUT(CHR(18)+CHR(14))
                        DEVPOS(PROW()+3,02);DEVOUT(CHR(18))
                        //            12
                        //DEVPOS(PROW(),5);DEVOUT(PADC('Avista '+ALLTRIM('R$ '+ALLTRIM(TRANSFORM(m_etq[i,4],'999,999.99'))+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],'')),30))
                        DEVPOS(PROW(),5);DEVOUT(PADC(ALLTRIM('R$ '+ALLTRIM(TRANSFORM(m_etq[i,4],'999,999.99'))+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],'')),30))
                        IF i+1 <= LEN(m_etq)
                                //DEVPOS(PROW(),mespaco-32);DEVOUT(PADC('Avista '+ALLTRIM('R$ '+ALLTRIM(TRANSFORM(m_etq[i+1,4],'999,999.99')+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],''))),30))
                                DEVPOS(PROW(),mespaco-32);DEVOUT(PADC(ALLTRIM('R$ '+ALLTRIM(TRANSFORM(m_etq[i+1,4],'999,999.99')+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],''))),30))
                                i++
                        ENDIF
                        //IF ! EMPTY(m_etq[i,7])
                        //        DEVPOS(PROW()+1,3);DEVOUT(PADC('Aprazo '+ALLTRIM('R$ '+ALLTRIM(TRANSFORM(iat(m_etq[i,4]*((m_etq[i,7]/100)+1)),'999,999.99'))+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],'')),30))
                        //        DEVPOS(PROW(),mespaco-34);DEVOUT(PADC('Aprazo '+ALLTRIM('R$ '+ALLTRIM(TRANSFORM(iat(m_etq[i,4]*((m_etq[i,7]/100)+1)),'999,999.99')+IIF(! EMPTY(m_etq[i,6]),' - Tam.: '+m_etq[i,6],''))),30))
                        //ENDIF                
                ELSE
                        DEVPOS(PROW()+3,05);DEVOUT(m_etq[i,5])
                        IF i+1 <= LEN(m_etq)
                                DEVPOS(PROW(),mespaco);DEVOUT(m_etq[i,5])
                                i ++
                        ENDIF
                ENDIF
                DEVPOS(PROW()+mlinhas,00);DEVOUT('')
                mcont_pg ++
                IF mcont_pg = 7
                        EJECT
                        //DEVPOS(PROW()+4,00);DEVOUT('')
                        mcont_pg := 0
                ENDIF
        NEXT
        imprt(mtipo_imp,'N-')
        SETPRC(00,00)
        SET PRINT TO;SET DEVI TO SCREEN;SET PRINT OFF
        conf_impressao('ETQ_BARR.REL')
ENDDO
wvw_lclosewindow()
RETURN NIL
************************************  F I M *********************************************************************
* ETIQUETA DE CODIGO DE BARRA IMPRESSORA "JATO DE TINTA"
******************************************************
MEMVAR getlist

FUNCTION sac5et22
*****************
LOCAL mprg:='SAC5ET22',;
      lci,cci,lba,cba,opcao,qtde,;
      m_etq:={},m_ver:={},mcons_merc:={},mobs,mobs1

PRIVATE mcod_merc,mtipo_imp,mimp_tipo:=0,marq:=SPACE(35)

lci := cci := 0
lba := 07
cba := 79

li := 08
ci := 01
lb := 22
cb := 79

*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*---------------------------------------------
***********************************************
SELE('merc');ORDSETFOCUS(1);GO TOP
***********************************************
exibi_prg(mprg)
op_tela(00,00,24,79,'ARQUIVO PARA IMPORTACAO IMPRESSORA ZEBRA S4M')
WHILE .T.
********* VARIAVEIS DE IMPRESSAO *******************
        mtipo_imp := m_indiv[1,18]
****************************************************
        mobs := SPACE(50)
        mobs1 := SPACE(50)
        m_etq := {}
        m_ver := {}
        botao(li,ci,lb,cb,,' Produtos Solicitados ')
        WHILE .T.
                mcod_merc:=0
                qtde=0
                botao(lci,cci,lba,cba,,' Emissao Etiquetas de Codigo de Barra "JATO DE TINTA" ')
                @ lci+1,cci+1 SAY "Codigo do Produto.......:" GET mcod_merc PICT '99999'        // VALID ver_cod(mcod_merc,lci+2,COL()+1)
                READ
                IF LASTKEY()=27
                        wvw_lclosewindow()
                        RETURN NIL
                ENDIF
                IF EMPTY(mcod_merc)
	                @ lci+1,cci+1 SAY "Codigo do Produto.......:" GET mcod_merc PICT '99999'        // VALID ver_cod(mcod_merc,lci+2,COL()+1)
        	        READ
                        IF EMPTY(mcod_merc)
                                IF LEN(m_etq) = 0
                                        LOOP
                                ENDIF
                                EXIT
                        ENDIF
                ENDIF
                mcons_merc := {}
                cComm  := "SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc)
                sr_getconnection():exec(ccomm,,.t.,@mcons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(mcons_merc) = 0
                        atencao('Codigo nao cadastro...')
                        LOOP
                ENDIF
                IF EMPTY(mcons_merc[1,2])
                        atencao('Este Produto estar sem codigo de barra, Nao pode ser impresso !!!')
                        LOOP
                ENDIF
                DEVPOS(lci+1,cci+33);DEVOUT(mcons_merc[1,9])
                @ lci+2,cci+1 SAY "Quantidade de Etiquetas :" GET qtde PICT "99999" VALID IF(EMPTY(qtde),.F.,.T.)
                @ lci+3,cci+1 SAY "Obs:" GET mobs 
                @ lci+4,cci+1 SAY "    " GET mobs1
                READ
                IF LASTKEY()=27
			LOOP
                ENDIF
                opcao := op_simnao('S','Confirma Inclusao do Produto:')
                IF opcao = 'N'
                        LOOP
                ENDIF
                AADD(m_ver,mcons_merc[1,8]+'-'+mcons_merc[1,9]+'  Quantidade: '+TRANSFORM(qtde,'99,999'))
                i := 0
                FOR i = 1 TO qtde
                        //                  1             2                3               4                5               6          7
                        AADD(m_etq,{mcons_merc[1,8],mcons_merc[1,9],mcons_merc[1,2],mcons_merc[1,46],mcons_merc[1,6],mcons_merc[1,73],mobs,mobs1})
                NEXT
                i := 0
                FOR i = 1 TO LEN(m_ver)
                        IF i = 17
                                SCROLL(li+i,ci+1,lb-2,cb-1,1)
                        ENDIF
                        setcor(3)
                        DEVPOS(li+i,ci+01);DEVOUT(m_ver[i])
                        setcor(1)
                NEXT
        ENDDO
        IF ! imp_arq('ZEBRA.TXT','R')
                LOOP
        ENDIF
        i := 0
        SETPRC(00,00)
        FOR i=1 TO LEN(m_etq)
                DEVPOS(PROW(),00);DEVOUT(m_etq[i,1]+';'+ALLTRIM(m_etq[i,2])+';'+ALLTRIM(m_etq[i,3])+';'+ALLTRIM(TRANSFORM(m_etq[i,4],'999,999.99'))+';'+ALLTRIM(m_etq[i,5])+';'+ALLTRIM(m_etq[i,6])+';'+ALLTRIM(m_etq[i,7])+';'+ALLTRIM(m_etq[i,8]))
                DEVPOS(PROW()+1,00);DEVOUT('')
        NEXT
        SETPRC(00,00)
        SET PRINT TO;SET DEVI TO SCREEN;SET PRINT OFF
        conf_impressao('ZEBRA.TXT')
ENDDO
wvw_lclosewindow()
RETURN NIL

