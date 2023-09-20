MEMVAR getlist
*******************
* ALTERACAO PRODUTO
*******************
FUNCTION sac111(mcodigo,op)
***************************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa
LOCAL macbr:=''
PRIVATE MPRG:='SAC111',cons_merc := {},misento,mfabrica,mcod_aux,maltera := ' ',mcod_merc,mcod_forn,;
        nBota,nBota1,nBota2,nBota3

IF ! ver_nivel(mprg,'ALTERACAO DE PRODUTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*----------------------------------------------
* IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
* IF ! AbriArq('sacclf','clf');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
*--------------------------------------------------
CLEAR GETS
op_tela(00,00,52,120,' ALTERACAO DE PRODUTO ',,'*')

WvW_PBSetFont( NIL, 'times', 25, 10,)
nBota  := wvw_pbCreate(NIL,47,30,49,50,'Outras Informações',NIL,{||sac111oi()})
nBota1 := wvw_pbCreate(NIL,40,90,42,110,'Dados Fiscais',NIL,{||sac111df()})
nBota2 := wvw_pbCreate(NIL,5,70,8,90,'Salvar Alteração',NIL,{||sac111sv()})

WVW_PBEnable( NIL, nBota, .F. )
WVW_PBEnable( NIL, nBota1, .F. )
WVW_PBEnable( NIL, nBota2, .F. )
mcod_merc := mcodigo
IF ! EMPTY(m_indiv[1,43])
        IF inicia_acbr()
                macbr := 'S'
        ENDIF
ENDIF
        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao foi encontrado o PRODUTO..')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mfabrica := cons_merc[1,31]
        misento := vercst(cons_merc[1,68])
        minclusao = ' '
        cons_merc[1,15] := VAL(cons_merc[1,15])
        mgrupo := VAL(SUBSTR(cons_merc[1,7],1,3))
        msub_grupo := VAL(SUBSTR(cons_merc[1,7],4))
        mcod_aux := cons_merc[1,2]
        mcod_forn := VAL(cons_merc[1,30])

WHILE .T.
        //DEVPOS( 0,90);DEVOUT('altera: '+maltera)
/*
        IF maltera = ' '
        cons_merc := {}
        sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5)),,.t.,@cons_merc)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_merc) = 0
                atencao('Nao foi encontrado o PRODUTO..')
                wvw_lclosewindow()
                RETURN NIL
        ENDIF
        mfabrica := cons_merc[1,31]
        misento := vercst(cons_merc[1,68])
        minclusao = ' '
        cons_merc[1,15] := VAL(cons_merc[1,15])
        mgrupo := VAL(SUBSTR(cons_merc[1,7],1,3))
        msub_grupo := VAL(SUBSTR(cons_merc[1,7],4))
        mcod_aux := cons_merc[1,2]
        mcod_forn := VAL(cons_merc[1,30])
        //IF minclusao = '*'
        //        wvw_lclosewindow()
        //        RETURN .T.
        //ENDIF
        ENDIF
*/
        limpa(1,0,50,120)
        exibi_prg(mprg)
        mensagem('Preencha os Campos - <ESC> p/Sair')
        setcor(1)
        DEVPOS( 1,1);DEVOUT('Codigo de Barra.........:')
        //DEVPOS( 1,1);DEVOUT('Data do Cadastro........:')
        DEVPOS( 2,1);DEVOUT('Grupo...................:')
        DEVPOS( 3,1);DEVOUT('Sub-Grupo...............:')
        DEVPOS( 4,1);DEVOUT('Codigo..................:')
        DEVPOS( 5,1);DEVOUT('Descricao do Produto....:')
        //DEVPOS( 6,1);DEVOUT('Codigo de Barra.........:')
        DEVPOS( 7,1);DEVOUT('Unidade.................:')
        DEVPOS( 8,1);DEVOUT('Preco de Venda R$.......:')
        DEVPOS( 9,1);DEVOUT('Data Ultima Entrada.....:')
        DEVPOS(10,1);DEVOUT('Data Ultima Saida.......:')
        DEVPOS(11,1);DEVOUT('Data Ultima Atualizacao.:')

        BOTAO(14,1,50,58,,'OUTRAS INFORMACOES',,1)
        DEVPOS(15,1);DEVOUT('Codigo Empresa............:')
        DEVPOS(16,1);DEVOUT('Codigo do Fornecedor......:')
        DEVPOS(17,1);DEVOUT('Codigo Especie do Produto.:')
        DEVPOS(18,1);DEVOUT('Referencia Auxiliar.......:')
        DEVPOS(19,1);DEVOUT('Tipo do Produto...........:')
        DEVPOS(20,1);DEVOUT('Peso Liquido..............:')
        DEVPOS(21,1);DEVOUT('Peso Bruto................:')
        DEVPOS(22,1);DEVOUT('Estoque Minimo............:')
        DEVPOS(23,1);DEVOUT('Estoque Maximo............:')
        DEVPOS(24,1);DEVOUT('Bloq. Saldo Negativo [S/N]:')
        DEVPOS(25,1);DEVOUT('Disponivel [S/N]..........:')
        DEVPOS(26,1);DEVOUT('Descontinuado [S/N].......:')
        DEVPOS(27,1);DEVOUT('Descricao Livre [S/N].....:')
        DEVPOS(28,1);DEVOUT('Ajuste p/Dolar [S/N]......:')
        DEVPOS(29,1);DEVOUT('Envia p/APP... [S/N]......:')
        DEVPOS(30,1);DEVOUT('Gramatura 1x..............:')
        DEVPOS(31,1);DEVOUT('Volume....................:')
        DEVPOS(32,1);DEVOUT('Local.....................:')
        DEVPOS(33,1);DEVOUT('Usa Balanca...............:')
        DEVPOS(34,1);DEVOUT('Comissao do Vendedor......:')
        DEVPOS(35,1);DEVOUT('Comissao do Montador......:')
        DEVPOS(36,1);DEVOUT('Prazo Maximo..............:')
        DEVPOS(37,1);DEVOUT('Lucro (%).................:')
        DEVPOS(38,1);DEVOUT('Venda Diferenciada(%).....:')
        DEVPOS(39,1);DEVOUT('Desconto Maximo (%).. ....:')
        DEVPOS(40,1);DEVOUT('Preco de Venda Aprazo R$..:')
        DEVPOS(41,1);DEVOUT('Promocao..................:')
        DEVPOS(42,1);DEVOUT('Aplicacao do Produto......:')
        DEVPOS(45,2);DEVOUT('Caminho Imagem do APP.....:')

        BOTAO(14,62,43,119,,'DADOS FISCAIS',,1)
        DEVPOS( 15,63);DEVOUT('Descricao para Nota .....:')
        IF m_set[1,126] = 'S'
                DEVPOS(16,63);DEVOUT('Codigo CSOSN.............:')
        ELSE
                DEVPOS(16,63);DEVOUT('Cod.Sit. Tributaria (CST):')
        ENDIF
        DEVPOS(17,63);DEVOUT('Codigo do NCM............:')
        DEVPOS(18,63);DEVOUT('(IAT)-[A]rrend. [T]runcar:')
        DEVPOS(19,63);DEVOUT('(IPPT)[P]roprio [T]ercer.:')
        DEVPOS(20,63);DEVOUT('Codigo do PRODEPE........:')
        DEVPOS(21,63);DEVOUT('Codigo Mensagem NF.......:')
        DEVPOS(22,63);DEVOUT('ICM [%] / ISS [%]........:')
        DEVPOS(23,63);DEVOUT('ICM Substituto [%].......:')
        DEVPOS(24,63);DEVOUT('Fator Desc.BASE ICMS SUB.:')
        DEVPOS(25,63);DEVOUT('IPI [%]..................:')
        DEVPOS(26,63);DEVOUT('Codigo Fiscal............:')
        DEVPOS(27,63);DEVOUT('Desc.ICMS NOTA [S/N].....:')
        DEVPOS(28,63);DEVOUT('Fator....................:')
        DEVPOS(29,63);DEVOUT('ICM Sub.Pessoa Fisica....:')
        DEVPOS(30,63);DEVOUT('CST do PIS...............:')
        DEVPOS(31,63);DEVOUT('[%} PIS..................:')
        DEVPOS(32,63);DEVOUT('CST do COFINS............:')
        DEVPOS(33,63);DEVOUT('[%} COFINS...............:')
        DEVPOS(34,63);DEVOUT('CFOP p/Dentro do Estado..:')
        DEVPOS(35,63);DEVOUT('CFOP p/Fora do Estado....:')
        DEVPOS(36,63);DEVOUT('Codigo do CEST...........:')
        DEVPOS(37,63);DEVOUT('Codigo do ANP............:')
        DEVPOS(38,63);DEVOUT('Unidade Tributavel.......:')
        setcor(3)
        DEVPOS( 1,27);DEVOUT(cons_merc[1,2])
        DEVPOS( 2,27);DEVOUTPICT(mgrupo,'999')
        DEVPOS( 3,27);DEVOUTPICT(msub_grupo,'99')
        DEVPOS( 5,27);DEVOUT(cons_merc[1,9])
        DEVPOS( 7,27);DEVOUT(cons_merc[1,14])
        DEVPOS( 8,27);DEVOUTPICT(cons_merc[1,46],ALLTRIM(m_set[1,98]))
        DEVPOS( 9,27);DEVOUT(cons_merc[1,33])
        DEVPOS(10,27);DEVOUT(cons_merc[1,32])
        DEVPOS(11,27);DEVOUT(cons_merc[1,12])

        DEVPOS(15,30);DEVOUT( cons_merc[1,1])
        DEVPOS(16,30);DEVOUT( cons_merc[1,30])
        DEVPOS(17,30);DEVOUT( cons_merc[1,15])
        DEVPOS(18,30);DEVOUT( cons_merc[1,6])
        DEVPOS(19,30);DEVOUT( cons_merc[1,10])
        DEVPOS(20,30);DEVOUTPICT( cons_merc[1,16],'9999.999')
        DEVPOS(21,30);DEVOUTPICT( cons_merc[1,17],'9999.999')
        DEVPOS(22,30);DEVOUTPICT( cons_merc[1,28],'99,999.99')
        DEVPOS(23,30);DEVOUTPICT( cons_merc[1,29],'99,999.99')
        DEVPOS(24,30);DEVOUT( cons_merc[1,103])
        DEVPOS(25,30);DEVOUT( cons_merc[1,24])
        DEVPOS(26,30);DEVOUT( cons_merc[1,104])
        DEVPOS(27,30);DEVOUT( cons_merc[1,25])
        DEVPOS(28,30);DEVOUT( cons_merc[1,84])
        DEVPOS(29,30);DEVOUT( cons_merc[1,98])
        DEVPOS(30,30);DEVOUTPICT( cons_merc[1,76],'999999')
        DEVPOS(31,30);DEVOUTPICT( cons_merc[1,74],'999.999')
        DEVPOS(32,30);DEVOUT( cons_merc[1,73])
        DEVPOS(33,30);DEVOUT( cons_merc[1,11])
        DEVPOS(34,30);DEVOUTPICT( cons_merc[1,26],'999.99')
        DEVPOS(35,30);DEVOUTPICT( cons_merc[1,27],'999.99')
        DEVPOS(36,30);DEVOUTPICT( cons_merc[1,75],'999')
        DEVPOS(37,30);DEVOUTPICT( cons_merc[1,22],'999.99')
        DEVPOS(38,30);DEVOUTPICT( cons_merc[1,50],'999.99')
        DEVPOS(39,30);DEVOUTPICT( cons_merc[1,80],'999.99')
        DEVPOS(40,30);DEVOUTPICT( cons_merc[1,47],'999.999')
        DEVPOS(41,30);DEVOUTPICT( cons_merc[1,23],'999.999')
        DEVPOS(42,30);DEVOUT(SUBSTR(cons_merc[1,85],1,27))
        DEVPOS(43,30);DEVOUT(SUBSTR(cons_merc[1,86],1,27))
        DEVPOS(44,30);DEVOUT(SUBSTR(cons_merc[1,87],1,27))
        DEVPOS(45,30);DEVOUT(SUBSTR(cons_merc[1,5],1,27))
        //DEVPOS(45,30);DEVOUT( cons_merc[1,88])
        //DEVPOS(46,30);DEVOUT( cons_merc[1,89])

        DEVPOS(15,90);DEVOUT(SUBSTR(cons_merc[1,99],1,27))
        DEVPOS(16,90);DEVOUT(cons_merc[1,68])
        DEVPOS(17,90);DEVOUT(cons_merc[1,70])
        DEVPOS(18,90);DEVOUT(cons_merc[1,81])
        DEVPOS(19,90);DEVOUT(cons_merc[1,91])
        DEVPOS(20,90);DEVOUT(cons_merc[1,69])
        DEVPOS(21,90);DEVOUT(cons_merc[1,66])
        DEVPOS(22,90);DEVOUTPICT(cons_merc[1,62],'99.99')
        DEVPOS(23,90);DEVOUTPICT(cons_merc[1,63],'999.99')
        DEVPOS(24,90);DEVOUTPICT(cons_merc[1,116],'99.9999')
        DEVPOS(25,90);DEVOUTPICT(cons_merc[1,65],'999.99')
        DEVPOS(26,90);DEVOUT(cons_merc[1,67])
        DEVPOS(27,94);DEVOUT(cons_merc[1,71])
        DEVPOS(28,90);DEVOUTPICT(cons_merc[1,72],'99.9999')
        DEVPOS(29,90);DEVOUTPICT(cons_merc[1,64],'999.99')
        DEVPOS(30,90);DEVOUTPICT(cons_merc[1,105],'99')
        DEVPOS(31,90);DEVOUTPICT(cons_merc[1,110],'9999.99')
        DEVPOS(32,90);DEVOUTPICT(cons_merc[1,106],'99')
        DEVPOS(33,90);DEVOUTPICT(cons_merc[1,111],'9999.99')
        DEVPOS(34,90);DEVOUTPICT(cons_merc[1,109])
        DEVPOS(35,90);DEVOUTPICT(cons_merc[1,108])
        DEVPOS(36,90);DEVOUTPICT(cons_merc[1,114],'9999999')
        DEVPOS(37,90);DEVOUTPICT(cons_merc[1,117],'9999999999')
        DEVPOS(38,90);DEVOUT(cons_merc[1,118])
        setcor(1)
        @ 1,27 GET cons_merc[1,2] PICT '99999999999999' VALID IF(mcod_aux = cons_merc[1,2],.T.,vercodbarra(cons_merc[1,2],,,'*'))       //WHEN  minclusao = ' '
        READ
        IF LASTKEY() = 27
                IF op <> NIL
                        WHILE .T.
                                mensagem('Tecle <ENTER> p/continuar')
                                INKEY(0)
                                IF LASTKEY() = 13
                                        EXIT
                                ENDIF
                        ENDDO
                ENDIF
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        IF macbr = 'S' .AND. ! EMPTY(cons_merc[1,2]) .AND. ! mcod_aux = cons_merc[1,2]
                mretorno := IBR_COMANDO('GTIN.Consultar('+ALLTRIM(cons_merc[1,2])+')',,3)
                lin := MEMOLINE(mretorno,110,8,,)
                IF SUBSTR(lin,1,17) = 'xMotivo=Rejeicao:'
                        atencao(SUBSTR(lin,9))
                ELSE
                        linhas := linha := 0
                        linhas := MLCOUNT(mretorno,110)
                        FOR linha = 1 TO  linhas
                                lin := MEMOLINE(mretorno,110,linha,,)
                                //atencao(lin)
                                IF 'CEST=' $ ALLTRIM(lin)
                                        IF EMPTY(cons_merc[1,114])
                                                cons_merc[1,114] := SUBSTR(lin,6,8)
                                        ENDIF
                                ELSEIF 'NCM=' $ ALLTRIM(lin)
                                        IF EMPTY(cons_merc[1,70])
                                                cons_merc[1,70] := SUBSTR(lin,5,8)
                                        ENDIF
                                //ELSEIF 'xProd=' $ ALLTRIM(lin)
                        //        mproduto := SUBSTR(lin,7,40)
                                ENDIF

                        NEXT
                ENDIF
        ENDIF
        @ 2,27 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.F.,ver_gru(mgrupo,2,34,.F.)) WHEN men_get(0,0,'<F1> para pesquisar o grupo.')
        READ
        IF LASTKEY() = 27
                IF op <> NIL
                        WHILE .T.
                                mensagem('Tecle <ENTER> p/continuar')
                                INKEY(0)
                                IF LASTKEY() = 13
                                        EXIT
                                ENDIF
                        ENDDO
                ENDIF
                wvw_lclosewindow()
                RETURN .T.
        ENDIF
        ver_gru(mgrupo,3,34)
        @ 3,27 GET msub_grupo PICT '99' VALID IF(EMPTY(msub_grupo),.F.,ver_sgru(mgrupo,@msub_grupo,3,34,.F.)) WHEN men_get(0,0,'<F1> para pesquisar o sub-grupo.')
        READ
        IF LASTKEY() = 27 .OR. EMPTY(mgrupo) .OR. EMPTY(msub_grupo)
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(2,27);DEVOUT(STRZERO(mgrupo,3))
        DEVPOS(3,27);DEVOUT(STRZERO(msub_grupo,2))
        DEVPOS(4,27);DEVOUT(cons_merc[1,8])
        setcor(1)
        ver_sgru(mgrupo,@msub_grupo,3,34)
        @ 5,27 GET cons_merc[1,9] PICT '@!' VALID IF(EMPTY(cons_merc[1,9]),.F.,.T.) WHEN men_get(0,0,'Digite a descrição do produto - <ESC> p/Sair') .AND.  minclusao = ' '
        @ 7,27 GET cons_merc[1,14] PICT '@!' WHEN men_get(0,0,'Digite [UN] Unidade - [KG] Quilo - [MT] Metro - Ou o que desejar.') .AND. minclusao = ' '
        READ
        IF UPDATED();maltera := '*';ENDIF
        mdescri := cons_merc[1,9]+SPACE(10)+SPACE(50)
        @ 8,27 GET cons_merc[1,46] PICT ALLTRIM(m_set[1,98]) VALID IF(cons_merc[1,46] <= 0 .AND. minclusao = ' ',.F.,.T.) WHEN men_get(0,0,'Digite o preço do produto - <ESC> p/Sair') .AND.  minclusao = ' '
        READ
        WVW_PBEnable( NIL, nBota, .T. )
        WVW_PBEnable( NIL, nBota1, .T. )
        WVW_PBEnable( NIL, nBota2, .T. )

        IF LASTKEY() = 27
                /*
                opcao := op_simnao('N','Deseja Sair alteracao do PRODUTO:')
                IF opcao = 'N' .OR. LEN(cons_merc) > 0
                        LOOP
                ELSE
                */
                        EXIT
                *ENDIF
        ENDIF

ENDDO
wvw_lclosewindow()
RETURN NIL
********************** F I M ********************************
MEMVAR getlist
*******************
* INCLUSAO DE PRODUTO - Outras Informacoes
*******************
FUNCTION sac111oi()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa,cons_merc

IF ! ver_nivel(mprg,'ALTERCAO DE PRODUTO - Outras Informacoes','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

CLEAR GETS
CLEAR TYPEAHEAD
op_tela(00,05,38,100,' ALTERACAO DE PRODUTO - Outras Informacoes ',,'*')
nBota3 := wvw_pbCreate(NIL,35,2,37,28,'https://imgur.com/upload',NIL,{||sac110site()})
WHILE .T.
        limpa(0,0,50,120)
        exibi_prg(mprg)
        mensagem('Preencha os Campos - <ESC> p/Retornar')
        DEVPOS( 0,1);DEVOUT('Codigo Empresa............:')
        DEVPOS( 1,1);DEVOUT('Codigo do Fornecedor......:')
        DEVPOS( 2,1);DEVOUT('Codigo Especie do Produto.:')
        DEVPOS( 3,1);DEVOUT('Referencia Auxiliar.......:')
        DEVPOS( 4,1);DEVOUT('Tipo do Produto...........:')
        DEVPOS( 5,1);DEVOUT('Peso Liquido..............:')
        DEVPOS( 6,1);DEVOUT('Peso Bruto................:')
        DEVPOS( 7,1);DEVOUT('Estoque Minimo............:')
        DEVPOS( 8,1);DEVOUT('Estoque Maximo............:')
        DEVPOS( 9,1);DEVOUT('Bloq. Saldo Negativo [S/N]:')
        DEVPOS(10,1);DEVOUT('Disponivel [S/N]..........:')
        DEVPOS(11,1);DEVOUT('Descontinuado [S/N].......:')
        DEVPOS(12,1);DEVOUT('Descricao Livre [S/N].....:')
        DEVPOS(13,1);DEVOUT('Ajuste p/Dolar [S/N]......:')
        DEVPOS(14,1);DEVOUT('Envia p/APP... [S/N]......:')
        DEVPOS(15,1);DEVOUT('Gramatura 1x..............:')
        DEVPOS(16,1);DEVOUT('Volume....................:')
        DEVPOS(17,1);DEVOUT('Local.....................:')
        DEVPOS(18,1);DEVOUT('Usa Balanca...............:')
        DEVPOS(19,1);DEVOUT('Comissao do Vendedor......:')
        DEVPOS(20,1);DEVOUT('Comissao do Montador......:')
        DEVPOS(21,1);DEVOUT('Prazo Maximo..............:')
        DEVPOS(22,1);DEVOUT('Lucro (%).................:')
        DEVPOS(23,1);DEVOUT('Venda Diferenciada(%).....:')
        DEVPOS(24,1);DEVOUT('Desconto Maximo (%).. ....:')
        DEVPOS(25,1);DEVOUT('Preco de Venda Aprazo R$..:')
        DEVPOS(26,1);DEVOUT('Promocao..................:')
        DEVPOS(27,1);DEVOUT('Aplicacao do Produto......:')
        DEVPOS(32,1);DEVOUT('Caminho Imagem do APP.....:')
        DrawLabel(33,1,'Site: https://imgur.com/upload - Escolher a IMAGEM e copia endereco da IMAGEM e <F6> Para copia para o campo "Caminho Imagem do APP"',210,, 'Arial',15,7)
        mensagem('Preencha os Campos - <ESC> p/Retornar')

        @ 0,29 GET cons_merc[1,1] PICT "999" WHEN mmult_emp ='S'  //VALID ver_emp(cons_merc[1,1],5,57,,'*')
        @ 1,29 GET mcod_forn PICT '9999' VALID ver_fab(@mcod_forn,1,35) WHEN men_get(0,0,'<F1> para pesquisar o fornecedor.')
        READ
        IF UPDATED();maltera := '*';ENDIF
        IF LASTKEY() = 27
                EXIT
        ENDIF

        ver_fab(mcod_forn,1,35)
        @ 2,29 GET cons_merc[1,15] PICT '9999' VALID ver_espe(cons_merc[1,15],2,31,,0) WHEN men_get(0,0,'<F1> para pesquisar a ESPECIE')
        @ 3,29 GET cons_merc[1,6] PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 4,29 GET cons_merc[1,10] PICT "9" VALID cons_merc[1,10] $ '1,2,3,4,5' WHEN men_get(0,0,'Digite [1] Produto - [2] Materia Prima - [3] Isumos - [4] Consumo - [5] Outros')
        @ 5,29 GET cons_merc[1,16] PICT '9999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 6,29 GET cons_merc[1,17] PICT '9999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 7,29 GET cons_merc[1,28] PICT '99,999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 8,29 GET cons_merc[1,29] PICT '99,999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 9,29 GET cons_merc[1,103] PICT '@!' VALID cons_merc[1,103] $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 10,29 GET cons_merc[1,24] PICT '@!' VALID cons_merc[1,24] $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 11,29 GET cons_merc[1,104] PICT '@!' WHEN ver_nivel(mprg+'DESC_PROD','INCLUSAO DE PRODUTO *** DESCONTINUAR PRODUTO ***','1',nivel_acess,'*') .AND. men_get(0,0,'Digite [S] Sim - [N] Não') VALID (cons_merc[1,104] $ 'S,N')
        @ 12,29 GET cons_merc[1,25] PICT '@!' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 13,29 GET cons_merc[1,84] PICT '@!' VALID cons_merc[1,84] $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 14,29 GET cons_merc[1,98] PICT '@!' VALID cons_merc[1,98] $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 15,29 GET cons_merc[1,76] PICT '999999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 16,29 GET cons_merc[1,74] PICT '999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 17,29 GET cons_merc[1,73] PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 18,29 GET cons_merc[1,11] PICT '@!' VALID cons_merc[1,11] $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 19,29 GET cons_merc[1,26] PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 20,29 GET cons_merc[1,27] PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 21,29 GET cons_merc[1,75] PICT '999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 22,29 GET cons_merc[1,22] PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 23,29 GET cons_merc[1,50] PICT '999.99'       //WHEN m_set[1,5] = 'S' .AND. men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')      //VALID IF(cons_merc[1,50]<0,.F.,.T.)
        @ 24,29 GET cons_merc[1,80] PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 25,29 GET cons_merc[1,47] PICT '999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 26,29 GET cons_merc[1,23] PICT '999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 27,29 GET cons_merc[1,85] PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 28,29 GET cons_merc[1,86] WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 29,29 GET cons_merc[1,87] WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 30,29 GET cons_merc[1,88] WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 31,29 GET cons_merc[1,89] WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 32,29 GET cons_merc[1,5] PICT '@S60'
        READ
        opcao := op_simnao('S','Confirma as outras informacoes:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
                LOOP
        ENDIF
        EXIT

ENDDO
KEYBOARD CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
* INCLUSAO DE PRODUTO - Dados Fiscais
*******************
FUNCTION sac111df()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa,cons_merc,maltera

IF ! ver_nivel(mprg,'ALTERACAO DE PRODUTO - Dados Fiscais','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

CLEAR GETS
CLEAR TYPEAHEAD
op_tela(00,00,24,92,' ALTERACAO DE PRODUTO - Dados Fiscais ',,'*')
WHILE .T.
        limpa(0,0,50,120)
        exibi_prg(mprg)
        DEVPOS(  0,1);DEVOUT('Descricao para Nota .........:')
        IF m_set[1,126] = 'S'
                DEVPOS(1,1);DEVOUT('Codigo CSOSN.................:')
        ELSE
                DEVPOS(1,1);DEVOUT('Cod.Situacao Tributaria (CST):')
        ENDIF
        DEVPOS( 2,1);DEVOUT('Codigo do NCM................:')
        DEVPOS( 3,1);DEVOUT('(IAT)-[A]rrendondar [T]runcar:')
        DEVPOS( 4,1);DEVOUT('(IPPT)[P]roprio [T]ercerizado:')
        DEVPOS( 5,1);DEVOUT('Codigo do PRODEPE............:')
        DEVPOS( 6,1);DEVOUT('Codigo Mensagem NF...........:')
        DEVPOS( 7,1);DEVOUT('ICM [%] / ISS [%]............:')
        DEVPOS( 8,1);DEVOUT('ICM Substituto [%]...........:')
        DEVPOS( 9,1);DEVOUT('Fator Desc.BASE ICMS SUB.....:')
        DEVPOS(10,1);DEVOUT('IPI [%]......................:')
        DEVPOS(11,1);DEVOUT('Codigo Fiscal................:')
        DEVPOS(12,1);DEVOUT('Desc.ICMS NOTA [S/N].........:')
        DEVPOS(13,1);DEVOUT('Fator........................:')
        DEVPOS(14,1);DEVOUT('ICM Sub.Pessoa Fisica........:')
        DEVPOS(15,1);DEVOUT('CST do PIS...................:')
        DEVPOS(16,1);DEVOUT('[%} PIS......................:')
        DEVPOS(17,1);DEVOUT('CST do COFINS................:')
        DEVPOS(18,1);DEVOUT('[%} COFINS...................:')
        DEVPOS(19,1);DEVOUT('CFOP p/Dentro do Estado......:')
        DEVPOS(20,1);DEVOUT('CFOP p/Fora do Estado........:')
        DEVPOS(21,1);DEVOUT('Codigo do CEST...............:')
        DEVPOS(22,1);DEVOUT('Codigo do ANP................:')
        DEVPOS(23,1);DEVOUT('Unidade Tributavel...........:')
        //cons_merc[1,99] := cons_merc[1,99] + cons_merc[1,4]
        @ 0,32 GET cons_merc[1,99] PICT '@!'    //'@S50!'         //VALID IF(EMPTY(cons_merc[1,99]),.F.,.T.)
        READ
        IF UPDATED();maltera := '*';ENDIF
        IF LASTKEY() = 27
                LOOP
        ENDIF
        cons_merc[1,68] := saccst(,cons_merc[1,68])
        IF LASTKEY() = 27
                LOOP
        ENDIF
        setcor(3)
        DEVPOS(1,32);DEVOUT(cons_merc[1,68])
        setcor(1)
        minsento := vercst(cons_merc[1,68])

        @ 2,32 GET cons_merc[1,70]
        @ 3,32 GET cons_merc[1,81] PICT '@!' VALID cons_merc[1,81] $ 'A,T'
        @ 4,32 GET cons_merc[1,91] PICT '@!' VALID cons_merc[1,91] $ 'P,T'
        @ 5,32 GET cons_merc[1,69] WHEN m_set[1,148] = 'S'
        @ 6,32 GET cons_merc[1,66] PICT '@!' VALID verobs(cons_merc[1,66],6,36,,0)
        @ 7,32 GET cons_merc[1,62] PICT '99.99'
        @ 8,32 GET cons_merc[1,63] PICT '999.99'
        @ 9,32 GET cons_merc[1,116] PICT '99.9999' WHEN ! EMPTY(cons_merc[1,63])
        @ 10,32 GET cons_merc[1,65] PICT '999.99'
        @ 11,32 GET cons_merc[1,67] PICT '@!'
        @ 12,32 GET cons_merc[1,71] PICT '@!' VALID cons_merc[1,71] $ 'S,N'         //.AND. lim_get() WHEN men_get(15,35,'Responda [S]im se esta MERCADORIA tem um desconto especial de ICMS na NOTA DE SAIDA')         // IF(misento = 'N' .AND. cons_merc[1,71] = 'S',.F.,.T.)
        @ 13,32 GET cons_merc[1,72] PICT '99.9999'
        @ 14,32 GET cons_merc[1,64] PICT '999.99'
        @ 15,32 GET cons_merc[1,105] PICT '99'
        @ 16,32 GET cons_merc[1,110] PICT '9999.99'
        @ 17,32 GET cons_merc[1,106] PICT '99'
        @ 18,32 GET cons_merc[1,111] PICT '9999.99'
        @ 19,32 GET cons_merc[1,109] PICT '9.999'
        @ 20,32 GET cons_merc[1,108] PICT '9.999'
        @ 21,32 GET cons_merc[1,114] PICT '9999999'
        @ 22,32 GET cons_merc[1,117] PICT '9999999999' WHEN men_get(0,0,'Digite o código do ANP: 210203001 se o produto Tipo: GLP')
        @ 23,32 GET cons_merc[1,118] PICT '@!' WHEN men_get(0,0,'Digite o UNIDADE DE MEDIDA TRIBUTARIA')
        READ
        IF LASTKEY() = 27
                LOOP
        ENDIF
        opcao := op_simnao('S','Confirma os Dados Fiscais:')
        IF opcao = 'N'
                EXIT
        ENDIF
        EXIT

ENDDO
KEYBOARD CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)+CHR(13)
wvw_lclosewindow()
RETURN NIL
*********************** f i m ************************************
* INCLUSAO DE PRODUTO - Salvar
*******************
FUNCTION sac111sv()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa,mcod_forn,cons_merc,maltera
cons_merc[1,9] := tira_acento(cons_merc[1,9])
cons_merc[1,99] := tira_acento(cons_merc[1,99])
//atencao(STRZERO(mcod_forn,4))
opcao := op_simnao('S','Confirma a Alteracao do PRODUTO:')
IF LASTKEY() = 27 .OR. opcao = 'N'
        RETURN NIL
ENDIF

maltera = ' '
                ccomm := "UPDATE sacmerc SET empresa = "+sr_cdbvalue(cons_merc[1,1])
                ccomm := ccomm + ",cod_barr  = "+sr_cdbvalue(cons_merc[1,2]                           )
                ccomm := ccomm + ",ref       = "+sr_cdbvalue(cons_merc[1,6]                                 )
                ccomm := ccomm + ",gru_sub   = "+sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))
                ccomm := ccomm + ",merc      = "+sr_cdbvalue(cons_merc[1,9]                             )
                ccomm := ccomm + ",tipo_merc = "+sr_cdbvalue(cons_merc[1,10]                           )
                ccomm := ccomm + ",balanca   = "+sr_cdbvalue(cons_merc[1,11]                             )
                ccomm := ccomm + ",unidade   = "+sr_cdbvalue(cons_merc[1,14]                             )
                ccomm := ccomm + ",especie   = "+sr_cdbvalue(STRZERO(cons_merc[1,15],4)                 )
                ccomm := ccomm + ",metragem  = "+sr_cdbvalue(0)
                ccomm := ccomm + ",pacote    = "+sr_cdbvalue(0)
                ccomm := ccomm + ",peso_liq  = "+sr_cdbvalue(cons_merc[1,16]                            )
                ccomm := ccomm + ",peso      = "+sr_cdbvalue(cons_merc[1,17]                                )
                ccomm := ccomm + ",disp      = "+sr_cdbvalue(cons_merc[1,24]                                )
                ccomm := ccomm + ",livre_desc= "+sr_cdbvalue(cons_merc[1,25]                          )
                ccomm := ccomm + ",p_lucro   = "+sr_cdbvalue(cons_merc[1,22]                             )
                ccomm := ccomm + ",varejo    = "+sr_cdbvalue(cons_merc[1,50]                              )
                ccomm := ccomm + ",est_min   = "+sr_cdbvalue(cons_merc[1,28]                             )
                ccomm := ccomm + ",est_max   = "+sr_cdbvalue(cons_merc[1,29]                             )
                ccomm := ccomm + ",cod_fab   = "+sr_cdbvalue(STRZERO(mcod_forn,4))
                ccomm := ccomm + ",fabrica   = "+sr_cdbvalue(mfabrica                             )
                ccomm := ccomm + ",pr_venda  = "+sr_cdbvalue(cons_merc[1,46]   )
                ccomm := ccomm + ",pr_venda1 = "+sr_cdbvalue(cons_merc[1,47]  )
                ccomm := ccomm + ",pr_venda2 = "+sr_cdbvalue(cons_merc[1,100])
                ccomm := ccomm + ",pr_venda3 = "+sr_cdbvalue(cons_merc[1,101])
                ccomm := ccomm + ",pr_venda4 = "+sr_cdbvalue(cons_merc[1,102])
                ccomm := ccomm + ",isento    = "+sr_cdbvalue(misento                              )
                ccomm := ccomm + ",comissao  = "+sr_cdbvalue(cons_merc[1,26]                            )
                ccomm := ccomm + ",com_mont  = "+sr_cdbvalue(cons_merc[1,27]                            )
                ccomm := ccomm + ",promocao  = "+sr_cdbvalue(cons_merc[1,23]                            )
                ccomm := ccomm + ",bebida    = "+sr_cdbvalue(cons_merc[1,62]                              )
                ccomm := ccomm + ",icm_sub   = "+sr_cdbvalue(cons_merc[1,63]                             )
                ccomm := ccomm + ",icm_sub2  = "+sr_cdbvalue(cons_merc[1,64]                            )
                ccomm := ccomm + ",ipi       = "+sr_cdbvalue(cons_merc[1,65]                                 )
                ccomm := ccomm + ",cod_clf   = "+sr_cdbvalue(cons_merc[1,66]                             )
                ccomm := ccomm + ",cod_fis   = "+sr_cdbvalue(cons_merc[1,67]                             )
                ccomm := ccomm + ",sittrib   = "+sr_cdbvalue(cons_merc[1,68]                             )
                ccomm := ccomm + ",nbm       = "+sr_cdbvalue(cons_merc[1,70]                                 )
                ccomm := ccomm + ",prodepe   = "+sr_cdbvalue(cons_merc[1,69]                             )
                ccomm := ccomm + ",local     = "+sr_cdbvalue(cons_merc[1,73]                               )
                ccomm := ccomm + ",gramatura = "+sr_cdbvalue(cons_merc[1,74]                           )
                ccomm := ccomm + ",prazo     = "+sr_cdbvalue(cons_merc[1,75]                               )
                ccomm := ccomm + ",fatconv   = "+sr_cdbvalue(cons_merc[1,76]                             )
                ccomm := ccomm + ",desc_merc = "+sr_cdbvalue(cons_merc[1,80]                           )
                ccomm := ccomm + ",desc_icm  = "+sr_cdbvalue(cons_merc[1,71]                            )
                ccomm := ccomm + ",desc_icm1 = "+sr_cdbvalue(cons_merc[1,72]                           )                //ccomm := ccomm + ",ind_icms  = "+sr_cdbvalue( mind_icms                         )                //ccomm := ccomm + ",sit_trib  = "+sr_cdbvalue( msit_trib                         )
                ccomm := ccomm + ",dolar     = "+sr_cdbvalue(cons_merc[1,84]                              )
                ccomm := ccomm + ",aplic0    = "+sr_cdbvalue(cons_merc[1,85]                              )
                ccomm := ccomm + ",aplic1    = "+sr_cdbvalue(cons_merc[1,86]                              )
                ccomm := ccomm + ",aplic2    = "+sr_cdbvalue(cons_merc[1,87]                              )
                ccomm := ccomm + ",aplic3    = "+sr_cdbvalue(cons_merc[1,88]                              )
                ccomm := ccomm + ",aplic4    = "+sr_cdbvalue(cons_merc[1,89]                              )
                ccomm := ccomm + ",pocket    = "+sr_cdbvalue(cons_merc[1,98]                              )
                ccomm := ccomm + ",descri    = "+sr_cdbvalue(SUBSTR(cons_merc[1,99],1,50)                 )
                ccomm := ccomm + ",descri1   = "+sr_cdbvalue(SUBSTR(cons_merc[1,99],51)                   )
                ccomm := ccomm + ",sld_neg   = "+sr_cdbvalue(cons_merc[1,103]                             )
                ccomm := ccomm + ",descont   = "+sr_cdbvalue(cons_merc[1,104]                             )
                ccomm := ccomm + ",iat       = "+sr_cdbvalue(cons_merc[1,81]                                 )
                ccomm := ccomm + ",ippt      = "+sr_cdbvalue(cons_merc[1,91]                                )
                IF cons_merc[1,46] <> cons_merc[1,46]
                        ccomm := ccomm + ",ul_alt_pr    = "+sr_cdbvalue(mdata_sis)
                        ccomm := ccomm + ",opera_pr     = "+sr_cdbvalue(cod_operado)
                ENDIF
                IF maltera = '*'
                        ccomm := ccomm + ",data_atu     = "+sr_cdbvalue(mdata_sis)
                ENDIF
                ccomm := ccomm + ",pis            = "+sr_cdbvalue(cons_merc[1,110])
                ccomm := ccomm + ",confis         = "+sr_cdbvalue(cons_merc[1,111])
                ccomm := ccomm + ",cst_pis        = "+sr_cdbvalue(cons_merc[1,105])
                ccomm := ccomm + ",cst_conf       = "+sr_cdbvalue(cons_merc[1,106])
                ccomm := ccomm + ",cfop_dent      = "+sr_cdbvalue(cons_merc[1,109])
                ccomm := ccomm + ",cfop_fora      = "+sr_cdbvalue(cons_merc[1,108])
                ccomm := ccomm + ",cest           = "+sr_cdbvalue(cons_merc[1,114])
                ccomm := ccomm + ",app_imagem     = "+sr_cdbvalue(cons_merc[1,5])
                ccomm := ccomm + ",desc_icm_sub   = "+sr_cdbvalue(cons_merc[1,116])
                ccomm := ccomm + ",codigo_anp     = "+sr_cdbvalue(cons_merc[1,117])
                ccomm := ccomm + ",unidade_trib   = "+sr_cdbvalue(cons_merc[1,118])
                ccomm := ccomm + " WHERE cod_merc = "+sr_cdbvalue(STRZERO(mcod_merc,5))
                sr_getconnection():exec(ccomm,,.f.)
                aret:={}
                sr_getconnection():exec('COMMIT',,.f.)
                //IF  ver_serie() <> '141490'
                        mcons_cam := {}
                        sr_getconnection():exec("SELECT atu_prod FROM cam_dba",,.t.,@mcons_cam)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        IF SR_SetActiveConnection(nCnn2) > 0 .AND. mcons_cam[1,1] = 'S'
                                sr_getconnection():exec(ccomm,,.f.)
                                sr_getconnection():exec('COMMIT',,.f.)
                        ENDIF
                        SR_SetActiveConnection(nCnn)
                //ENDIF
atencao('Atualizado com sucesso..')
//cons_merc := {}
KEYBOARD CHR(27)
minclusao = ' '
WVW_PBEnable( NIL, nBota, .F. )
WVW_PBEnable( NIL, nBota1, .F. )
WVW_PBEnable( NIL, nBota2, .F. )
RETURN NIL
*********************** f i m ************************************
