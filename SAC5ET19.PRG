*************************************************
* ETIQUETA DE CODIGO DE BARRA IMPRESSORA "BEETLE'
*************************************************
MEMVAR getlist

FUNCTION sac5et19
*****************
LOCAL mprg:='SAC5ET19',;
      lci,cci,lba,cba,opcao,bar,texto,qtde,wcod,wemp,mtipo:=SPACE(1),enter,;
      mpreco,edescri,edescri1,ecodi,mtip_term,descri,cont,fim,;
      mlin_cod,mlin_cod1,mlin_cod2,mlin_desc,mlin_desc1,mlin_desc2,mlin_emp,;
      mlin_obs,mobs,mlinhas

enter=chr(13)
lci := cci := 0
lba := 06
cba := 79
*---------------------------------------------
mtip_term := m_cfg[2]
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
*---------------------------------------------
***********************************************
SELE('merc');ORDSETFOCUS(1);GO TOP
***********************************************
exibi_prg(mprg)
mtipo:= 'G'
mobs := SPACE(50)
*mlin_emp := '121200000800015'
*mlin_cod := '1F6303000300015'
*mlin_desc:= '121100000150015'
*mlin_obs := '121100000000015'
mlin_emp := '121200000900015'
mlin_cod := '1F6303000400015'
mlin_desc:= '121100000250015'
mlin_obs := '121100000100015'
mlinhas := '0020'
wemp    := memp_resa+SPACE(50 - LEN(memp_resa))
op_tela(lci,cci,lba+2,cba,' Emissao Etiquetas de Codigo de Barra ARGOX e BEETLE ')
WHILE LASTKEY() <> 27
        DESCRI=SPACE(48)
        qtde=0
*        WDATA=DTOC(date())
        CONT =0
        Wcod=0
        FIM=.F.
        @ lci+1,cci+1 SAY "Nome da Empresa.........:" GET wemp
        @ lci+2,cci+1 SAY "Codigo do Produto.......:" GET wcod PICT '99999' VALID ver_cod(wcod,lci+2,COL()+1)
        @ lci+3,cci+1 SAY "Etiq. [G]rande [P]equena:" GET mtipo PICT "@!" VALID mtipo $ 'G,P'
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        IF mtipo = 'P'
                mlin_cod  := '1F4202000000004'
                mlin_cod1 := '1F4202000000112'
                mlin_cod2 := '1F4202000000219'
                mlin_desc := '110000000300004'
                mlin_desc1:= '110000000300112'
                mlin_desc2:= '110000000300219'
        ENDIF
        @ lci+4,cci+1 SAY "Obs:" GET mobs WHEN mtipo= 'G'
        @ lci+5,cci+1 SAY "Quantidade de Etiquetas :" GET qtde PICT "99999" VALID IF(EMPTY(qtde),.F.,.T.)
*       @ lci+6,cci+1 SAY "Linha de Comando Codigo.:" GET mlin_cod
*       @ lci+7,cci+1 SAY "Linha de Comando Codigo1:" GET mlin_cod1 WHEN mtipo= 'P'
*       @ lci+8,cci+1 SAY "Linha de Comando Codigo2:" GET mlin_cod2 WHEN mtipo= 'P'
*       @ lci+9,cci+1 SAY "Linha de Comando Descr..:" GET mlin_desc
*       @ lci+10,cci+1 SAY "Linha de Comando Descr.1:" GET mlin_desc1 WHEN mtipo= 'P'
*       @ lci+11,cci+1 SAY "Linha de Comando Descr.2:" GET mlin_desc2 WHEN mtipo= 'P'
*       @ lci+12,cci+1 SAY "Linha de Comando Empresa:" GET mlin_emp WHEN mtipo= 'G'
*       @ lci+13,cci+1 SAY "Linha de Comando OBS....:" GET mlin_obs WHEN mtipo= 'G'
*       @ lci+14,cci+1 SAY "Qtd.Linhas..............:" GET mlinhas PICT '9999'
        READ
        IF LASTKEY()=27
                EXIT
        ENDIF
        opcao := op_simnao('S','Confirma a Impressao:')
        IF opcao = 'N'
                LOOP
        ENDIF
        IF EMPTY(merc->cod_barr)
                atencao('Este Produto estar sem codigo de barra, Nao pode ser impresso !!!')
                LOOP
        ENDIF
        SET PRINT TO 'LPT1'
        SET DEVICE TO PRINT
        IF mtipo = 'P'
                Edescri := SUBSTR(merc->cod_merc+'-'+merc->merc,1,22)
                Edescri1:= SUBSTR(merc->cod_merc+'-'+merc->merc,23,18)
                Ecodi   := ALLTRIM(merc->cod_barr)
                @ 00,00 say chr(2)+'qA' + enter
*               @ 00,00 say chr(2)+'c'+mlinhas + enter
*               @ 00,00 say chr(2)+'e'     + enter
*               @ 00,00 say chr(2)+'KI508' + enter
*               @ 00,00 say chr(2)+'O0220' + enter
*               @ 00,00 say chr(2)+'f220'  + enter
*               @ 00,00 say chr(2)+'KW0394' + enter
*               @ 00,00 say chr(2)+'KI00'   + enter
                @ 00,00 say chr(2)+'V0'     + enter
                @ 00,00 say chr(2)+'L'      + enter
                @ 00,00 say 'H11'    + enter
                @ 00,00 say 'PA'     + enter
                @ 00,00 say 'A2'     + enter
                @ 00,00 say 'D11'    + enter
*                            1 223 000 0100 0200
*                                  tam altu. margem
                @ 00,00 say mlin_desc+Edescri+ enter
                @ 00,00 say mlin_desc1+Edescri+ enter
                @ 00,00 say mlin_desc2+Edescri+ enter
                @ 00,00 say mlin_cod+Ecodi+ enter
                @ 00,00 say mlin_cod1+Ecodi+ enter
                @ 00,00 say mlin_cod2+Ecodi+ enter
                @ 00,00 say 'Q'+STRZERO(qtde,4)+ enter
                @ 00,00 say 'E'+ enter
        ELSE
                Edescri := merc->cod_merc+'-'+merc->merc
                mpreco  := 'R$ '+ALLTRIM(TRANSFORM(merc->pr_venda,'999,999.99'))
                Ecodi   := ALLTRIM(merc->cod_barr)
                @ 00,00 say chr(2)+'qA'    + enter
*               @ 00,00 say chr(2)+'c'+mlinhas + enter
                @ 00,00 say chr(2)+'e'     + enter
                @ 00,00 say chr(2)+'KI508' + enter
                @ 00,00 say chr(2)+'O0220' + enter
                @ 00,00 say chr(2)+'f220'  + enter
                @ 00,00 say chr(2)+'KW0394' + enter
                @ 00,00 say chr(2)+'KI00'   + enter
                @ 00,00 say chr(2)+'V0'     + enter
                @ 00,00 say chr(2)+'L'      + enter
                @ 00,00 say 'H11'    + enter
                @ 00,00 say 'PA'     + enter
                @ 00,00 say 'A2'     + enter
                @ 00,00 say 'D11'    + enter
*                            1 223 000 0100 0200
                @ 00,00 say mlin_emp+wemp+ enter
                @ 00,00 say mlin_desc+Edescri+ enter
                @ 00,00 say mlin_cod+Ecodi+ enter
                @ 00,00 say mlin_obs+mobs+ enter
                @ 00,00 say 'Q'+STRZERO(qtde,4)+ enter
                @ 00,00 say 'E'     + enter
        ENDIF
        SET PRINT TO
        SET DEVICE TO screen
ENDDO
wvw_lclosewindow()
RETURN NIL

