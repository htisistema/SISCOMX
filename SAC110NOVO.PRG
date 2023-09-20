MEMVAR getlist
*******************
* INCLUSAO  PRODUTO
*******************
FUNCTION sac110(op,comp,mcodbar,mdesc_p,mcodfrn,m_xml)
******************************************************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa
LOCAL mflag := 0,mretorno:='',macbr:=''
PRIVATE MPRG:='SAC110',;
      mcod_merc:=SPACE(5),mcod_forn:=0,mcod_espe:=0,mproduto:=SPACE(40),munidade,mpr_unit,msal_prod,mest_min,;
      mdata_cad,lba,cba,tela_prod,mp_lucro,mcod_bc,mpeso,mpeso_liq,;
      mcod_aux,misento,mcomissao,mcom_mont,mgrama,mbebida,micm_sub,mlocal,;
      maplic0,maplic1,maplic2,maplic3,maplic4,mcod_clf,mvarejo,mipi,mgramatura,;
      mdisp,mlivre_desc,mfatConv,mdesc_merc,mind_icms,msit_trib,mdolar,;
      mdesc_icm := SPACE(1),mpreco :=0,mprazo:=0,micm_sub2,msittrib,mref,opcao:=' ',;
      mest_max,mtela_bc,mnbm,mprodepe:='  ',mtipo_merc:=' ',mbalanca:='N',;
      mdescri,m_merc:={},i:=0,mpocket:=' ',mpr_venda2,mpr_venda3,mpr_venda4,mdata_bloq,;
      mobs_bloq,cons_merc:={},msld_neg := 'N',mdescont:='N',nCnn,miat:='A',mippt:='T',mlinha:='',;
      calc_cod:={},mcfop_fora,mcfop_dent,mpis,mconfis,ccomm := '',mcest:=SPACE(7),mcons_cam := {},;
      mfabrica:=SPACE(30),mdesc_icm1:=0,mgrupo:=0,msub_grupo:=0,mcodemp:='001',mcod_fis, mcompra,;
      minclusao := ' ',mdesc_prod,mxml,mcodforn,mcodbarr,mcst_pis:='  ',mcst_confis:='  ',mapp_imagem,;
      nBota,nBota1,nBota2,nBota3,mdesc_icm_sub

IF ! ver_nivel(mprg,'INCLUSAO DE PRODUTO','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF
*----------------------------------------------
IF ! AbriArq('sacmerc','merc');RETURN NIL;ENDIF
//IF ! AbriArq('sacclf','clf');RETURN NIL;ENDIF
IF ! AbriArq('sacgrupo','grup');RETURN NIL;ENDIF
IF ! AbriArq('sacespe','espe');RETURN NIL;ENDIF
IF ! AbriArq('sacforn','forn');RETURN NIL;ENDIF
*--------------------------------------------------
lba:=45
cba:=99
CLEAR GETS
op_tela(00,00,52,120,' INCLUSAO DE PRODUTO ',,'*')

WvW_PBSetFont( NIL, 'times', 25, 10,)
/*
nBota  := wvw_pbCreate(NIL,9,05,11,25,'Outras Informações',NIL,{||sac110oi()})
nBota1 := wvw_pbCreate(NIL,9,30,11,50,'Dados Fiscais',NIL,{||sac110df()})
nBota2 := wvw_pbCreate(NIL,9,55,11,75,'Salvar',NIL,{||sac110sv()})
nBota  := wvw_pbCreate(NIL,1,70,3,90,'Outras Informações',NIL,{||sac110oi()})
nBota1 := wvw_pbCreate(NIL,5,70,7,90,'Dados Fiscais',NIL,{||sac110df()})
nBota2 := wvw_pbCreate(NIL,9,70,11,90,'Salvar Inclusão',NIL,{||sac110sv()})
*/
nBota  := wvw_pbCreate(NIL,47,30,49,50,'Outras Informações',NIL,{||sac110oi()})
nBota1 := wvw_pbCreate(NIL,39,90,41,110,'Dados Fiscais',NIL,{||sac110df()})
nBota2 := wvw_pbCreate(NIL,5,70,8,90,'Salvar Inclusão',NIL,{||sac110sv()})

WVW_PBEnable( NIL, nBota, .F. )
WVW_PBEnable( NIL, nBota1, .F. )
WVW_PBEnable( NIL, nBota2, .F. )
WVW_PBEnable( NIL, nBota3, .F. )

mcompra := comp
mdesc_prod := mdesc_p
mxml := m_xml
mcodforn := mcodfrn
mcodbarr := mcodbar
mcodemp := '001'
mgrupo := msub_grupo := mcod_espe := mpeso_liq := mpeso := mest_min := ;
mest_max := mvarejo := mcomissao := mcom_mont := ;
mbebida := micm_sub := micm_sub2:= mipi := mgramatura := mFatConv := ;
mdesc_icm1 := mp_lucro := mdesc_merc := mprazo  := mpreco := 0
mpr_venda1 := mpr_venda2 := mpr_venda3 := mpr_venda4 := mpis := mconfis := mdesc_icm_sub := 0
mcod_merc := mcfop_fora := mcfop_dent := SPACE(5)
mcst_pis := mcst_confis:='  '
mapp_imagem := SPACE(100)
IF mcodforn <> NIL
        mcod_forn := VAL(mcodforn)
ELSE
        mcod_forn := 0
ENDIF
IF mcodbarr <> NIL
        mcod_bc := mcodbarr
ELSE
        mcod_bc := SPACE(14)
ENDIF
IF ver_serie() <> '141410'
        IF mdesc_prod <> NIL
                mproduto := mdesc_prod
        ELSE
                mproduto := SPACE(40)
        ENDIF
ENDIF
mdescri := SPACE(50)
mtipo_merc := '1'
mdata_cad := mdata_bloq := CTOD('  /  /  ')
munidade := 'UN'
mgrama := mcod_clf := SPACE(2)
mfabrica := SPACE(30)
misento := mbalanca := msld_neg := mdescont := 'N'
mcod_fis := ' '
miat := 'A'
mippt := 'T'
mref := SPACE(13)
mlocal := SPACE(8)
mdisp := mpocket := 'S'
mlivre_desc := mdolar := mdesc_icm := 'N'
mind_icms := '01'
msit_trib := 'T'
maplic0 := maplic1 := maplic2 := maplic3 := maplic4 := mobs_bloq := SPACE(60)
msittrib := SPACE(4)
mnbm := SPACE(8)
mprodepe := SPACE(2)
mcest:=SPACE(7)
mcodigo_anp:=SPACE(10)
munidade_trib:=SPACE(3)
//minclusao := ' '
IF ! EMPTY(m_indiv[1,43])
        IF inicia_acbr()
                macbr := 'S'
        ENDIF
ENDIF
WHILE .T.
        minclusao = ' '
        limpa(0,0,50,120)
        exibi_prg(mprg)
        mensagem('Preencha os Campos - <ESC> p/Sair')
        //DEVPOS( 1,1);DEVOUT('Data do Cadastro........:')
        DEVPOS( 1,1);DEVOUT('Codigo de Barra.........:')
        DEVPOS( 3,1);DEVOUT('Grupo...................:')
        DEVPOS( 4,1);DEVOUT('Sub-Grupo...............:')
        DEVPOS( 6,1);DEVOUT('Codigo..................:')
        DEVPOS( 7,1);DEVOUT('Descricao do Produto....:')
        DEVPOS(10,1);DEVOUT('Unidade.................:')
        DEVPOS(11,1);DEVOUT('Preco de Venda R$.......:')

        BOTAO(14,1,50,58,,'OUTRAS INFORMACOES',,1)
        DEVPOS(15,2);DEVOUT('Codigo Empresa............:')
        DEVPOS(16,2);DEVOUT('Codigo do Fornecedor......:')
        DEVPOS(17,2);DEVOUT('Codigo Especie do Produto.:')
        DEVPOS(18,2);DEVOUT('Referencia Auxiliar.......:')
        DEVPOS(19,2);DEVOUT('Tipo do Produto...........:')
        DEVPOS(20,2);DEVOUT('Peso Liquido..............:')
        DEVPOS(21,2);DEVOUT('Peso Bruto................:')
        DEVPOS(22,2);DEVOUT('Estoque Minimo............:')
        DEVPOS(23,2);DEVOUT('Estoque Maximo............:')
        DEVPOS(24,2);DEVOUT('Bloq. Saldo Negativo [S/N]:')
        DEVPOS(25,2);DEVOUT('Disponivel [S/N]..........:')
        DEVPOS(26,2);DEVOUT('Descontinuado [S/N].......:')
        DEVPOS(27,2);DEVOUT('Descricao Livre [S/N].....:')
        DEVPOS(28,2);DEVOUT('Ajuste p/Dolar [S/N]......:')
        DEVPOS(29,2);DEVOUT('Envia p/APP... [S/N]......:')
        DEVPOS(30,2);DEVOUT('Gramatura 1x..............:')
        DEVPOS(31,2);DEVOUT('Volume....................:')
        DEVPOS(32,2);DEVOUT('Local.....................:')
        DEVPOS(33,2);DEVOUT('Usa Balanca...............:')
        DEVPOS(34,2);DEVOUT('Comissao do Vendedor......:')
        DEVPOS(35,2);DEVOUT('Comissao do Montador......:')
        DEVPOS(36,2);DEVOUT('Prazo Maximo..............:')
        DEVPOS(37,2);DEVOUT('Lucro (%).................:')
        DEVPOS(38,2);DEVOUT('Venda Diferenciada(%).....:')
        DEVPOS(39,2);DEVOUT('Desconto Maximo (%).. ....:')
        DEVPOS(40,2);DEVOUT('Preco de Venda Aprazo R$..:')
        DEVPOS(41,2);DEVOUT('Aplicacao do Produto......:')
        DEVPOS(45,2);DEVOUT('Caminho Imagem do APP.....:')
        //DrawLabel(46,2,'[1] Prestador Serv.Transp. [2] Transportaor Carga Propria [3] Prestador serviço transporte que emitirá CT-e Globalizado.',210,, 'Arial',15,7)

        BOTAO(14,62,44,119,,'DADOS FISCAIS',,1)
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
        DEVPOS(37,63);DEVOUT('Codigo da ANP............:')
        DEVPOS(38,63);DEVOUT('Unidade Tributavel.......:')
        setcor(3)
        //ver_fab(mcod_forn,16,30)
        DEVPOS(15,30);DEVOUT(mcodemp)
        DEVPOS(16,30);DEVOUT(STRZERO(mcod_forn,5))
        DEVPOS(17,30);DEVOUT(STRZERO(mcod_espe,4))
        DEVPOS(18,30);DEVOUT(mref)
        DEVPOS(19,30);DEVOUT(mtipo_merc)
        DEVPOS(20,30);DEVOUTPICT(mpeso_liq,'9,999.999')
        DEVPOS(21,30);DEVOUTPICT(mpeso,'9,999.999')
        DEVPOS(22,30);DEVOUTPICT(mest_min,'99,999.99')
        DEVPOS(23,30);DEVOUTPICT(mest_max,'99,999.99')
        DEVPOS(24,30);DEVOUT(msld_neg)
        DEVPOS(25,30);DEVOUT(mdisp)
        DEVPOS(26,30);DEVOUT(mdescont)
        DEVPOS(27,30);DEVOUT(mlivre_desc)
        DEVPOS(28,30);DEVOUTPICT(mdolar,'999.99')
        DEVPOS(29,30);DEVOUT(mpocket)
        DEVPOS(30,30);DEVOUTPICT(mFatConv,'999999')
        DEVPOS(31,30);DEVOUTPICT(mgramatura,'999.999')
        DEVPOS(32,30);DEVOUT(mlocal)
        DEVPOS(33,30);DEVOUT(mbalanca)
        DEVPOS(34,30);DEVOUTPICT(mcomissao,'999.99')
        DEVPOS(35,30);DEVOUTPICT(mcom_mont,'999.99')
        DEVPOS(36,30);DEVOUTPICT(mprazo,'999')
        DEVPOS(37,30);DEVOUTPICT(mp_lucro,'999.99')
        DEVPOS(38,30);DEVOUTPICT(mvarejo,'999.99')
        DEVPOS(39,30);DEVOUTPICT(mdesc_merc,'999.99')
        DEVPOS(40,30);DEVOUTPICT(mpr_venda1,'999.999')
        DEVPOS(41,30);DEVOUT(SUBSTR(maplic0,1,27))
        DEVPOS(42,30);DEVOUT(SUBSTR(maplic1,1,27))
        DEVPOS(43,30);DEVOUT(SUBSTR(maplic2,1,27))
        DEVPOS(44,30);DEVOUT(SUBSTR(maplic3,1,27))
        DEVPOS(45,30);DEVOUT(SUBSTR(mapp_imagem,1,27))

        DEVPOS(15,90);DEVOUT(SUBSTR(mdescri,1,27))
        DEVPOS(16,90);DEVOUT(msittrib)
        DEVPOS(17,90);DEVOUT(mnbm)
        DEVPOS(18,90);DEVOUT(miat)
        DEVPOS(19,90);DEVOUT(mippt)
        DEVPOS(20,90);DEVOUT(mprodepe)
        DEVPOS(21,90);DEVOUT(mcod_clf)
        DEVPOS(22,90);DEVOUTPICT(mbebida,'99.99')
        DEVPOS(23,90);DEVOUTPICT(micm_sub,'999.99')
        DEVPOS(24,90);DEVOUTPICT(mdesc_icm_sub,'99.9999')
        DEVPOS(25,90);DEVOUTPICT(mipi,'999.99')
        DEVPOS(26,90);DEVOUT(mcod_fis)
        DEVPOS(27,94);DEVOUT(mdesc_icm)
        DEVPOS(28,90);DEVOUTPICT(mdesc_icm1,'99.9999')
        DEVPOS(29,90);DEVOUTPICT(micm_sub2,'999.99')
        DEVPOS(30,90);DEVOUTPICT(mcst_pis,'9999.99')
        DEVPOS(31,90);DEVOUTPICT(mpis,'9999.99')
        DEVPOS(32,90);DEVOUTPICT(mcst_confis,'9999.99')
        DEVPOS(33,90);DEVOUTPICT(mconfis,'9999.99')
        DEVPOS(34,90);DEVOUTPICT(mcfop_dent)
        DEVPOS(35,90);DEVOUTPICT(mcfop_fora)
        DEVPOS(36,90);DEVOUTPICT(mcest,'9999999')
        DEVPOS(37,90);DEVOUT(mcodigo_anp)
        DEVPOS(38,90);DEVOUT(munidade_trib)

        //DEVPOS( 1,27);DEVOUT(mdata_cad)
        DEVPOS( 1,27);DEVOUT(mcod_bc)
        DEVPOS( 3,27);DEVOUTPICT(mgrupo,'999')
        DEVPOS( 4,27);DEVOUTPICT(msub_grupo,'99')
        //DEVPOS( 3,27);DEVOUT('Codigo..................:')
        DEVPOS( 7,27);DEVOUT(mproduto)
        DEVPOS( 10,27);DEVOUT(munidade)
        DEVPOS( 11,27);DEVOUTPICT(mpreco,ALLTRIM(m_set[1,98]))
        setcor(1)
        IF m_set[1,112] = 'S' .AND. mflag = 0
                cons_merc:={}
                sr_getconnection():exec("SELECT MAX(cod_merc) FROM sacmerc",,.t.,@cons_merc)
                sr_getconnection():exec('COMMIT',,.f.)
                mcod_merc := STRZERO(VAL(cons_merc[1,1]) + 1,5)
                mcod_aux  := STRZERO(VAL(cons_merc[1,1]) + 1,5)
        ENDIF
        mdata_cad := mdata_sis
        //mcod_bc := "7897534827622"
        @ 1,27 GET mcod_bc PICT '99999999999999' VALID vercodbarra(mcod_bc,,,'*') WHEN men_get(0,0,'Digite o código de barra do produto - <ESC> p/Sair')
        READ
        IF LASTKEY() = 27
                ********************
                SELE('merc');ORDSETFOCUS(2)
                ********************
                RELEASE mfabrica,mcod_forn
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
                IF mdesc_prod <> NIL
                        RETURN ''
                ELSE
                        RETURN .T.
                ENDIF
        ENDIF
        IF macbr = 'S' .AND. ! EMPTY(mcod_bc)
                mretorno := IBR_COMANDO('GTIN.Consultar('+ALLTRIM(mcod_bc)+')',,3)
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
                                        mcest := SUBSTR(lin,6,8)
                                ELSEIF 'NCM=' $ ALLTRIM(lin)
                                        mnbm := SUBSTR(lin,5,8)
                                ELSEIF 'xProd=' $ ALLTRIM(lin)
                                        mproduto := SUBSTR(lin,7,40)
                        ENDIF

                        NEXT
                ENDIF
        ENDIF
        //ATENCAO(mretorno)
        DEVPOS(7,27);DEVOUT(mproduto)
        DEVPOS(17,90);DEVOUT(mnbm)
        DEVPOS(36,90);DEVOUTPICT(mcest,'9999999')

        //@ 1,27 GET mdata_cad
        @ 3,27 GET mgrupo PICT '999' VALID IF(EMPTY(mgrupo),.F.,ver_gru(mgrupo,3,34,.F.)) WHEN men_get(0,0,'<F1> para pesquisar o grupo.')
        READ
        IF LASTKEY() = 27
                ********************
                SELE('merc');ORDSETFOCUS(2)
                ********************
                RELEASE mfabrica,mcod_forn
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
                IF mdesc_prod <> NIL
                        RETURN ''
                ELSE
                        RETURN .T.
                ENDIF
        ENDIF
        ver_gru(mgrupo,3,34)
        @ 4,27 GET msub_grupo PICT '99' VALID IF(EMPTY(msub_grupo),.F.,ver_sgru(mgrupo,@msub_grupo,4,34,.F.)) WHEN men_get(0,0,'<F1> para pesquisar o sub-grupo.')
        READ
        IF LASTKEY() = 27 .OR. EMPTY(mgrupo) .OR. EMPTY(msub_grupo)
                LOOP
        ENDIF
        @ 6,27 GET mcod_merc PICT '99999' WHEN m_set[1,112] = 'S'
        READ
        IF LASTKEY() = 27       //.OR. EMPTY(mcod_merc)
                LOOP
        ENDIF
        IF VAL(mcod_merc) > 99999
                atencao('O codigo do produto estar maior que o campo do banco de dados...')
                LOOP
        ENDIF
        /*
        IF VAL(mcod_merc) = 0
                atencao('Este codigo NAO pode Incluso...')
                LOOP
        ENDIF
        */
        mcod_merc := STRZERO(VAL(mcod_merc),5)
        setcor(3)
        DEVPOS(3,27);DEVOUT(STRZERO(mgrupo,3))
        DEVPOS(4,27);DEVOUT(STRZERO(msub_grupo,2))
        DEVPOS(6,27);DEVOUT(mcod_merc)
        setcor(1)
        ver_sgru(mgrupo,@msub_grupo,4,34)
        aret:={}
        sr_getconnection():exec("SELECT cod_merc FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@aret)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(aret) > 0
                atencao('Codigo ja Existe no Arquivo !!!')
                LOOP
        ENDIF
        IF minclusao = '*'
                EXIT
        ENDIF
        @ 7,27 GET mproduto PICT '@!' VALID IF(EMPTY(mproduto),.F.,.T.) WHEN men_get(0,0,'Digite a descrição do produto - <ESC> p/Sair')
        //@ 9,27 GET mcod_bc PICT '99999999999999' VALID vercodbarra(mcod_bc,,,'*') WHEN men_get(0,0,'Digite o código de barra do produto - <ESC> p/Sair')
        mdescri := mproduto+SPACE(10)+SPACE(50)
        @ 10,27 GET munidade PICT '@!' WHEN men_get(0,0,'Digite [UN] Unidade - [KG] Quilo - [MT] Metro - Ou o que desejar.')
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        mflag := 1
        WVW_PBEnable( NIL, nBota , .T. )
        WVW_PBEnable( NIL, nBota1, .T. )
        WVW_PBEnable( NIL, nBota2, .T. )
        @ 11,27 GET mpreco PICT ALLTRIM(m_set[1,98]) VALID IF(mpreco >= 0 .AND. minclusao = ' ',.F.,.T.) WHEN men_get(0,0,'Digite o preço do produto - <ESC> p/Sair')
        READ
        IF LASTKEY() = 27
                opcao := op_simnao('N','Deseja Sair da inclusao do PRODUTO:')
                IF opcao = 'N'
                        LOOP
                ELSE
                        EXIT
                ENDIF
        ENDIF
        IF minclusao = '*'
                mpreco := 0
                EXIT
        ENDIF
ENDDO
WVW_PBDestroy( NIL, nBota )
WVW_PBDestroy( NIL, nBota1)
WVW_PBDestroy( NIL, nBota2)
wvw_lclosewindow()
RETURN NIL
********************** F I M ********************************
MEMVAR getlist
*******************
* INCLUSAO DE PRODUTO - Outras Informacoes
*******************
FUNCTION sac110oi()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa

IF ! ver_nivel(mprg,'INCLUSAO DE PRODUTO - Outras Informacoes','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba:=45
cba:=99
CLEAR GETS
CLEAR TYPEAHEAD
op_tela(00,00,35,95,' INCLUSAO DE PRODUTO - Outras Informacoes ',,'*')
nBota3 := wvw_pbCreate(NIL,33,2,35,28,'https://imgur.com/upload',NIL,{||sac110site()})
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
        DEVPOS(26,1);DEVOUT('Aplicacao do Produto......:')
        DEVPOS(30,1);DEVOUT('Caminho Imagem do APP.....:')
        DrawLabel(31,1,'Site: https://imgur.com/upload - Escolher a IMAGEM e copia endereco da IMAGEM e <F6> Para copia para o campo "Caminho Imagem do APP"',210,, 'Arial',15,7)
        mensagem('Preencha os Campos - <ESC> p/Retornar')

        @ 0,29 GET mcodemp PICT "999" WHEN mmult_emp ='S'  //VALID ver_emp(mcodemp,5,57,,'*')
        @ 1,29 GET mcod_forn PICT '9999' VALID ver_fab(@mcod_forn,1,35) WHEN men_get(0,0,'<F1> para pesquisar o fornecedor.')
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        ver_fab(mcod_forn,1,35)
        @ 2,29 GET mcod_espe PICT '9999' VALID ver_espe(mcod_espe,2,31,,0) WHEN men_get(0,0,'<F1> para pesquisar a ESPECIE')
        @ 3,29 GET mref PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 4,29 GET mtipo_merc PICT "9" VALID mtipo_merc $ '1,2,3,4,5' WHEN men_get(0,0,'Digite [1] Produto - [2] Materia Prima - [3] Isumos - [4] Consumo - [5] Outros')
        @ 5,29 GET mpeso_liq PICT '9999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 6,29 GET mpeso PICT '9999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 7,29 GET mest_min PICT '99,999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 8,29 GET mest_max PICT '99,999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 9,29 GET msld_neg PICT '@!' VALID msld_neg $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 10,29 GET mdisp PICT '@!' VALID mdisp $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 11,29 GET mdescont PICT '@!' WHEN ver_nivel(mprg+'DESC_PROD','INCLUSAO DE PRODUTO *** DESCONTINUAR PRODUTO ***','1',nivel_acess,'*') .AND. men_get(0,0,'Digite [S] Sim - [N] Não') VALID (mdescont $ 'S,N')
        @ 12,29 GET mlivre_desc PICT '@!' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 13,29 GET mdolar PICT '@!' VALID mdolar $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 14,29 GET mpocket PICT '@!' VALID mpocket $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 15,29 GET mFatConv PICT '999999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 16,29 GET mgramatura PICT '999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 17,29 GET mlocal PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 18,29 GET mbalanca PICT '@!' VALID mbalanca $ 'S,N' WHEN men_get(0,0,'Digite [S] Sim - [N] Não')
        @ 19,29 GET mcomissao PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 20,29 GET mcom_mont PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 21,29 GET mprazo PICT '999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 22,29 GET mp_lucro PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 23,29 GET mvarejo PICT '999.99' WHEN m_set[1,5] = 'S' .AND. men_get(0,0,'Preencha os Campos - <ESC> p/Retornar') VALID IF(mvarejo<0,.F.,.T.)
        @ 24,29 GET mdesc_merc PICT '999.99' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 25,29 GET mpr_venda1 PICT '999.999' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 26,29 GET maplic0 PICT '@!' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 27,29 GET maplic1 WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 28,29 GET maplic2 WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 29,29 GET maplic3 WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        @ 30,29 GET mapp_imagem PICT '@S60' WHEN men_get(0,0,'Preencha os Campos - <ESC> p/Retornar')
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
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
FUNCTION sac110df()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa

IF ! ver_nivel(mprg,'INCLUSAO DE PRODUTO - Dados Fiscais','15',nivel_acess,,'AMBIE')
        RETURN NIL
ENDIF

lba:=45
cba:=99
CLEAR GETS
CLEAR TYPEAHEAD
op_tela(00,00,22,92,' INCLUSAO DE PRODUTO - Dados Fiscais ',,'*')
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
        mdescri := mproduto+SPACE(10)   //+SPACE(50)
        @ 0,32 GET mdescri PICT '@S50!'         //VALID IF(EMPTY(mdescri),.F.,.T.)
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF
        msittrib := saccst()
        setcor(3)
        DEVPOS(1,32);DEVOUT(msittrib)
        setcor(1)
        misento := vercst(msittrib)
        @ 2,32 GET mnbm
        @ 3,32 GET miat PICT '@!' VALID miat $ 'A,T'
        @ 4,32 GET mippt PICT '@!' VALID mippt $ 'P,T'
        @ 5,32 GET mprodepe WHEN m_set[1,148] = 'S'
        @ 6,32 GET mcod_clf PICT '@!' VALID verobs(mcod_clf,6,36,,0)
        @ 7,32 GET mbebida PICT '99.99'
        @ 8,32 GET micm_sub PICT '999.99'
        @ 9,32 GET mdesc_icm_sub PICT '99.9999' WHEN ! EMPTY(micm_sub)
        @ 10,32 GET mipi PICT '999.99'
        @ 11,32 GET mcod_fis PICT '@!'
        @ 12,32 GET mdesc_icm PICT '@!' VALID mdesc_icm $ 'S,N'         //.AND. lim_get() WHEN men_get(15,35,'Responda [S]im se esta MERCADORIA tem um desconto especial de ICMS na NOTA DE SAIDA')         // IF(misento = 'N' .AND. mdesc_icm = 'S',.F.,.T.)
        @ 13,32 GET mdesc_icm1 PICT '99.9999'
        @ 14,32 GET micm_sub2 PICT '999.99' WHEN ver_serie() = '141206'
        @ 15,32 GET mcst_pis PICT '99'
        @ 16,32 GET mpis PICT '9999.99'
        @ 17,32 GET mcst_confis PICT '99'
        @ 18,32 GET mconfis PICT '9999.99'
        @ 19,32 GET mcfop_dent PICT '9.999'
        @ 20,32 GET mcfop_fora PICT '9.999'
        @ 21,32 GET mcest PICT '9999999'
        @ 22,32 GET mcodigo_anp PICT '9999999999' WHEN men_get(0,0,'Digite o código do ANP: 210203001 se o produto Tipo: GLP - <ESC> p/Sair')
        @ 23,32 GET munidade_trib PICT '@!'
        READ
        IF LASTKEY() = 27
                EXIT
        ENDIF

        opcao := op_simnao('S','Confirma os Dados Fiscais:')
        IF LASTKEY() = 27 .OR. opcao = 'N'
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
FUNCTION sac110sv()
***************
MEMVAR mmen_icms,mdata_sis,nivel_acess,memp_resa
mproduto := tira_acento(mproduto)
mdescri := tira_acento(mdescri)
opcao := op_simnao('S','Confirma a Inclusao do PRODUTO:')
IF LASTKEY() = 27 .OR. opcao = 'N'
        RETURN NIL
ENDIF
IF m_set[1,112] <> 'S' .AND. VAL(mcod_merc) = 0
        WHILE .T.
                mcod_merc := SPACE(5)
                mensagem('Calculando o Codigo do Produto:')
                aret:={}
                sr_getconnection():exec("SELECT cod_merc FROM sacmerc ORDER BY cod_merc",,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                i := 0
                FOR i = 1 TO LEN(aret)
                        mensagem('Calculando o Codigo do Produto:'+STRZERO(i,5)+' - '+aret[i,1]+' - Quantidade Produtos:'+STRZERO(LEN(aret),5))
                        calc_cod:={}
                        sr_getconnection():exec("SELECT cod_merc FROM sacmerc  WHERE cod_merc = "+sr_cdbvalue(aret[i,1]),,.t.,@calc_cod)
                        sr_getconnection():exec('COMMIT',,.f.)
                        IF LEN(calc_cod) = 0
                                mcod_merc := STRZERO(i,5)
                                mcod_aux := STRZERO(i,5)
                                atencao('Codigo encontrado:'+mcod_merc)
                                EXIT
                        ENDIF
                NEXT
                IF VAL(mcod_merc) = 0
                        aret:={}
                        sr_getconnection():exec("SELECT MAX(cod_merc) FROM sacmerc",,.t.,@aret)
                        sr_getconnection():exec('COMMIT',,.f.)
                        mcod_merc := STRZERO(VAL(aret[1,1])+1,5)
                        mcod_aux  := STRZERO(VAL(aret[1,1])+1,5)
                        //atencao('Gerado o Ultimo Codigo:'+mcod_merc)
                ENDIF
                aret:={}
                sr_getconnection():exec("SELECT * FROM sacmerc WHERE cod_merc = "+sr_cdbvalue(mcod_merc),,.t.,@aret)
                sr_getconnection():exec('COMMIT',,.f.)
                IF LEN(aret) = 0
                        EXIT
                ELSE
                        atencao('Codigo ja existente:'+mcod_merc)
                ENDIF
        ENDDO
ENDIF
WHILE .T.
        mensagem('Verificando o Codigo Barra do Produto...')
        IF EMPTY(mcod_bc) .AND. m_set[1,8] = 'S'
                mcod_bc := '78'+STRZERO(mgrupo,3)+STRZERO(msub_grupo,2)+mcod_merc
                mcod_bc := SUBSTR(mcod_bc,1,12) + verif_ean13(SUBSTR(mcod_bc,1,12))+SPACE(1)
                IF vercodbarra(mcod_bc,,,'*')
                        EXIT
                ENDIF
        ENDIF
        IF ! vercodbarra(mcod_bc,,,'*')
                mcod_bc := SUBSTR(mcod_bc,1,12)
                @ 5,27 GET mcod_bc PICT '@!' VALID vercodbarra(mcod_bc,,,'*')
                READ
                mcod_bc := SUBSTR(mcod_bc,1,12) + verif_ean13(SUBSTR(mcod_bc,1,12))+SPACE(1)
                IF vercodbarra(mcod_bc,,,'*')
                        EXIT
                ENDIF
        ELSE
                EXIT
        ENDIF
ENDDO
i:=1
mensagem('Inserino Registro no SACMERC...')
AADD(m_merc,{' ',VAL(mcod_merc)})
nulo := 'NULL'
        //                                          saldo          pr.venda                  cst
mlinha := ''//mcod_bc+STRZERO(mcod_merc,5)+mproduto+munidade+STRZERO(0,13)+STRZERO(iat(mpreco)*100,14)+msittrib
ccomm := ''
ccomm := 'INSERT INTO sacmerc ('+;
'empresa   ,'+; //1
'cod_barr  ,'+; //2
'ref       ,'+; //3
'gru_sub   ,'+; //4
'cod_merc  ,'+; //5
'merc      ,'+; //6
'descri    ,'+; //7
'tipo_merc ,'+; //8
'balanca   ,'+; //9
'data_cad  ,'+; //10
'data_atu  ,'+; //11
'unidade   ,'+; //12
'especie   ,'+; //13
'disp      ,'+; //14
'livre_desc,'+; //15
'peso_liq  ,'+; //16
'peso      ,'+; //17
'p_lucro   ,'+; //18
'est_min   ,'+; //19
'est_max   ,'+; //20
'cod_fab   ,'+; //21
'fabrica   ,'+; //22
'isento    ,'+; //23
'comissao  ,'+; //24
'com_mont  ,'+; //25
'promocao  ,'+; //26
'cust_real ,'+; //27
'pr_unit   ,'+; //28
'saldo_fis ,'+; //29
'saldo_mer ,'+; //30
'saldo_av  ,'+; //31
'varejo    ,'+; //32
'bebida    ,'+; //33
'icm_sub   ,'+; //34
'icm_sub2  ,'+; //35
'ipi       ,'+; //36
'cod_clf   ,'+; //37
'cod_fis   ,'+; //38
'sittrib   ,'+; //39
'nbm       ,'+; //40
'prodepe   ,'+; //41
'local     ,'+; //42
'gramatura ,'+; //43
'prazo     ,'+; //44
'FatConv   ,'+; //45
'desc_merc ,'+; //46
'desc_icm  ,'+; //47
'desc_icm1 ,'+; //48        'ind_icms  ,'+; //48         'sit_trib  ,'+; //49
'dolar     ,'+; //49
'pr_venda  ,'+; //50
'aplic0    ,'+; //51
'aplic1    ,'+; //52
'aplic2    ,'+; //53
'aplic3    ,'+; //54
'aplic4    ,'+; //55
'pr_fat    ,'+; //56
'pocket    ,'+; //57
'pr_venda1 ,'+; //58
'pr_venda2 ,'+; //59
'pr_venda3 ,'+; //60
'pr_venda4 ,'+; //61
'descri1   ,'+; //62
'sld_neg   ,'+; //63
'descont   ,'+; //64
'ul_alt_pr ,'+; //65
'iat       ,'+; //66
'ippt      ,'+; //67
'chv_cript ,'+; //68
'pis  ,'+; //69
'confis ,'+; //70
'cfop_dent,'+; //71
'cfop_fora,'+; //72
'cest,'+; //72
'cst_pis,'+; //72
'cst_conf,'+; //72
'app_imagem,'+; //72
'desc_icm_sub,'+; //72
'codigo_anp,'+; //72
'unidade_trib,'+; //72
'SR_DELETED )'+;
' VALUES ('+;
sr_cdbvalue(mcodemp                              )+','+; //1
sr_cdbvalue(mcod_bc                              )+','+; //2
sr_cdbvalue(mref                                 )+','+; //3
sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))+','+; //4
sr_cdbvalue(mcod_merc                            )+','+; //5
sr_cdbvalue(mproduto                             )+','+; //6
sr_cdbvalue(SUBSTR(mdescri,1,49)                 )+','+; //7
sr_cdbvalue(mtipo_merc                           )+','+; //8
sr_cdbvalue(mbalanca                             )+','+; //9
sr_cdbvalue(mdata_cad                            )+','+; //10
sr_cdbvalue(mdata_cad                            )+','+; //11
sr_cdbvalue(munidade                             )+','+; //12
sr_cdbvalue(STRZERO(mcod_espe,4)                 )+','+; //13
sr_cdbvalue(mdisp                                )+','+; //14
sr_cdbvalue(mlivre_desc                          )+','+; //15
sr_cdbvalue(mpeso_liq                            )+','+; //16
sr_cdbvalue(mpeso                                )+','+; //17
sr_cdbvalue(mp_lucro                             )+','+; //18
sr_cdbvalue(mest_min                             )+','+; //19
sr_cdbvalue(mest_max                             )+','+; //20
sr_cdbvalue(STRZERO(mcod_forn,4)                 )+','+; //21
sr_cdbvalue(mfabrica                             )+','+; //22
sr_cdbvalue(misento                              )+','+; //23
sr_cdbvalue(mcomissao                            )+','+; //24
sr_cdbvalue(mcom_mont                            )+','+; //25
sr_cdbvalue(0                                    )+','+; //26
sr_cdbvalue(0                                    )+','+; //27
sr_cdbvalue(0                                    )+','+; //28
sr_cdbvalue(0                                    )+','+; //29
sr_cdbvalue(0                                    )+','+; //30
sr_cdbvalue(0                                    )+','+; //31
sr_cdbvalue(mvarejo                              )+','+; //32
sr_cdbvalue(mbebida                              )+','+; //33
sr_cdbvalue(micm_sub                             )+','+; //34
sr_cdbvalue(micm_sub2                            )+','+; //35
sr_cdbvalue(mipi                                 )+','+; //36
sr_cdbvalue(mcod_clf                             )+','+; //37
sr_cdbvalue(mcod_fis                             )+','+; //38
sr_cdbvalue(msittrib                             )+','+; //39
sr_cdbvalue(mnbm                                 )+','+; //40
sr_cdbvalue(mprodepe                             )+','+; //41
sr_cdbvalue(mlocal                               )+','+; //42
sr_cdbvalue(mgramatura                           )+','+; //43
sr_cdbvalue(mprazo                               )+','+; //44
sr_cdbvalue(mFatConv                             )+','+; //45
sr_cdbvalue(mdesc_merc                           )+','+; //46
sr_cdbvalue(mdesc_icm                            )+','+; //47
sr_cdbvalue(mdesc_icm1                           )+','+; //48         sr_cdbvalue( mind_icms)+','+; //55        sr_cdbvalue( msit_trib)+','+; //56
sr_cdbvalue(mdolar                               )+','+; //49
sr_cdbvalue(mpreco                               )+','+; //50
sr_cdbvalue(maplic0                              )+','+; //51
sr_cdbvalue(maplic1                              )+','+; //52
sr_cdbvalue(maplic2                              )+','+; //53
sr_cdbvalue(maplic3                              )+','+; //54
sr_cdbvalue(maplic4                              )+','+; //55
sr_cdbvalue(mpreco*.7                            )+','+; //56
sr_cdbvalue(mpocket                              )+','+; //57
sr_cdbvalue(mpr_venda1                           )+','+; //58
sr_cdbvalue(mpr_venda2                           )+','+; //59
sr_cdbvalue(mpr_venda3                           )+','+; //60
sr_cdbvalue(mpr_venda4                           )+','+; //61
sr_cdbvalue(SUBSTR(mdescri,50)                   )+','+; //62
sr_cdbvalue(msld_neg                             )+','+; //63
sr_cdbvalue(mdescont                             )+','+; //64
IF(mpreco > 0 ,sr_cdbvalue(mdata_sis),'NULL'     )+','+; //65
sr_cdbvalue(miat                                 )+','+; //66
sr_cdbvalue(mippt                                )+','+; //67
sr_cdbvalue(criptografia(mlinha,'C')             )+','+; //68
sr_cdbvalue(mpis                             )+','+; //67
sr_cdbvalue(mconfis                            )+','+; //67
sr_cdbvalue(mcfop_dent                         )+','+; //67
sr_cdbvalue(mcfop_fora                         )+','+; //67
sr_cdbvalue(mcest                              )+','+; //67
sr_cdbvalue(mcst_pis                           )+','+; //67
sr_cdbvalue(mcst_confis                        )+','+; //67
sr_cdbvalue(mapp_imagem                        )+','+; //67
sr_cdbvalue(mdesc_icm_sub                      )+','+; //67
sr_cdbvalue(mcodigo_anp                        )+','+; //67
sr_cdbvalue(munidade_trib                      )+','+; //67
sr_cdbvalue(' ')+')'
sr_getconnection():exec(ccomm,,.f.)
sr_getconnection():exec("COMMIT",,.f.)
mcons_cam := {}
sr_getconnection():exec("SELECT atu_prod FROM cam_dba",,.t.,@mcons_cam)
sr_getconnection():exec('COMMIT',,.f.)

IF SR_SetActiveConnection(nCnn1) > 0 .AND. mcons_cam[1,1] = 'S'
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
IF SR_SetActiveConnection(nCnn2) > 0 .AND. mcons_cam[1,1] = 'S'
        sr_getconnection():exec(ccomm,,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
SR_SetActiveConnection(nCnn)
IF m_set[1,112] <> 'S'
        setcor(3)
        //DEVPOS(2,27);DEVOUT(mcod_merc)
        //DEVPOS(7,24);DEVOUT(mcod_bc)
        setcor(1)
        atencao('Foi Gerado com sucesso o Produto com o Codigo:'+mcod_merc)
ENDIF
IF mcompra <> NIL
        mensagem('Inserino Registro no COMPRAS...')
        sr_getconnection():exec('INSERT INTO compras ('+;
        'cod_merc ,'+; //1
        'merc     ,'+; //2
        'cod_barr ,'+; //3
        'est_min  ,'+; //4
        'dat_ent  ,'+; //5
        'pr_unit  ,'+; //6
        'cust_merc,'+; //7
        'saldo    ,'+; //8
        'quantd1  ,'+; //9
        'quantd2  ,'+; //10
        'quantd3  ,'+; //11
        'quantd4  ,'+; //12
        'vlr1     ,'+; //13
        'vlr2     ,'+; //14
        'vlr3     ,'+; //15
        'vlr4     ,'+; //16
        'tot_qtd  ,'+; //17
        'media    ,'+; //18
        'disp     ,'+; //19
        'med_cust ,'+; //20
        'unidade  ,'+; //21
        'ref      ,'+; //22
        'grupo_sub,'+; //23
        'codfab   ,'+; //24
        'fab      ,'+; //25
        'mes1     ,'+; //26
        'mes2     ,'+; //27
        'mes3     ,'+; //28
        'mes4     ,'+; //29
        'qtd_mes  ,'+; //30
        'dias_sug ,'+; //31
        'peso     ,'+; //32
        'isento   ,'+; //33
        'SR_DELETED )'+;
        ' VALUES ('+;
        sr_cdbvalue(mcod_merc                            )+','+; //1
        sr_cdbvalue(mproduto                             )+','+; //2
        sr_cdbvalue(RTRIM(mcod_bc)                       )+','+; //3
        sr_cdbvalue(mest_min                             )+','+; //4
        sr_cdbvalue(mdata_cad                            )+','+; //5
        sr_cdbvalue(mpreco                               )+','+; //6
        sr_cdbvalue(0                                    )+','+; //7
        sr_cdbvalue(0                                    )+','+; //8
        sr_cdbvalue(0                                    )+','+; //9
        sr_cdbvalue(0                                    )+','+; //10
        sr_cdbvalue(0                                    )+','+; //11
        sr_cdbvalue(0                                    )+','+; //12
        sr_cdbvalue(0                                    )+','+; //13
        sr_cdbvalue(0                                    )+','+; //14
        sr_cdbvalue(0                                    )+','+; //15
        sr_cdbvalue(0                                    )+','+; //16
        sr_cdbvalue(0                                    )+','+; //17
        sr_cdbvalue(0                                    )+','+; //18
        sr_cdbvalue(mdisp                                )+','+; //19
        sr_cdbvalue(0                                    )+','+; //20
        sr_cdbvalue(munidade                             )+','+; //21
        sr_cdbvalue(RTRIM(mref)                          )+','+; //22
        sr_cdbvalue(STRZERO(mgrupo,3)+STRZERO(msub_grupo,2))+','+; //23
        sr_cdbvalue(STRZERO(mcod_forn,4)                 )+','+; //24
        sr_cdbvalue(mfabrica                             )+','+; //25
        sr_cdbvalue('  /  '                              )+','+; //26
        sr_cdbvalue('  /  '                              )+','+; //27
        sr_cdbvalue('  /  '                              )+','+; //28
        sr_cdbvalue('  /  '                              )+','+; //29
        sr_cdbvalue(0                                    )+','+; //30
        sr_cdbvalue(0                                    )+','+; //31
        sr_cdbvalue(mpeso                                )+','+; //32
        sr_cdbvalue(misento                              )+','+; //33
        sr_cdbvalue(' ')+')',,.f.)
        sr_getconnection():exec("COMMIT",,.f.)
ENDIF
opcao := op_simnao('S','Deseja Atualizar o saldo do Produto:')
IF opcao = 'S'
        sacbal1(mcod_merc)
ENDIF
mcodemp := '001'
mgrupo := msub_grupo := mcod_espe := mpeso_liq := mpeso := mest_min := ;
mest_max := mvarejo := mcomissao := mcom_mont := ;
mbebida := micm_sub := micm_sub2:= mipi := mgramatura := mFatConv := ;
mdesc_icm1 := mp_lucro := mdesc_merc := mprazo  := mpreco := 0
mpr_venda1 := mpr_venda2 := mpr_venda3 := mpr_venda4 := mpis := mconfis := 0
mcod_merc := mcfop_fora := mcfop_dent := SPACE(5)
mcod_bc := SPACE(14)
IF mcodforn <> NIL
        mcod_forn := VAL(mcodforn)
ELSE
        mcod_forn := 0
ENDIF
IF mcodbarr <> NIL
        mcod_bc := mcodbarr
ELSE
        mcod_bc := SPACE(14)
ENDIF
IF ver_serie() <> '141410'
        IF mdesc_prod <> NIL
                mproduto := mdesc_prod
        ELSE
                mproduto := SPACE(40)
        ENDIF
ENDIF
mproduto := SPACE(40)
mdescri := SPACE(50)
mtipo_merc := '1'
mdata_bloq := CTOD('  /  /  ')
munidade := 'UN'
mgrama := mcod_clf := SPACE(2)
mfabrica := SPACE(30)
misento := mbalanca := msld_neg := mdescont := 'N'
mcod_fis := ' '
miat := 'A'
mippt := 'T'
mref := SPACE(13)
mlocal := SPACE(8)
mdisp := mpocket := 'S'
mlivre_desc := mdolar := mdesc_icm := 'N'
mind_icms := '01'
msit_trib := 'T'
maplic0 := maplic1 := maplic2 := maplic3 := maplic4 := mobs_bloq := SPACE(60)
msittrib := SPACE(4)
mnbm := SPACE(8)
mprodepe := SPACE(2)
mcest:=SPACE(7)
minclusao = '*'
WVW_PBEnable( NIL, nBota, .F. )
WVW_PBEnable( NIL, nBota1, .F. )
WVW_PBEnable( NIL, nBota2, .F. )
IF mdesc_prod <> NIL .OR. mxml <> NIL
        wvw_lclosewindow()
        RETURN mcod_merc
ENDIF
KEYBOARD CHR(27)
RETURN NIL
*********************** f i m ************************************
* VERIFICA CLASSIFICACAO FISCAL
*******************************
FUNCTION verobs(vcodi,li,ci,t,mzero)
************************************
LOCAL msele,morde
MEMVAR mcod_fis
mcod_fis := SPACE(10)
IF (mzero <> NIL .OR. mzero = 0) .AND. mzero <> 1 .AND. EMPTY(vcodi) .AND. li <> NIL
        setcor(3)
        DEVPOS(li,ci);DEVOUT(SPACE(10))
        setcor(1)
        RETURN .T.
ENDIF
WHILE .T.
        cons_clf := {}
        sr_getconnection():exec("SELECT * FROM sacobs WHERE cod_obs = "+sr_cdbvalue(vcodi),,.t.,@cons_clf)
        sr_getconnection():exec('COMMIT',,.f.)
        IF LEN(cons_clf) > 0 .AND. t = .T.
                vcodi := SPACE(2)
                mcod_fis := SPACE(10)
                atencao('Codigo ja Cadastrado !!!')
                RETURN .F.
        ENDIF
        IF LEN(cons_clf) = 0
                vcodi := SPACE(2)
                mcod_fis := SPACE(10)
                atencao('Codigo nao Cadastrado !!!')
                RETURN .F.
        ENDIF
        mcod_fis := cons_clf[1,2]
        IF li = NIL
                RETURN .T.
        ENDIF
        setcor(3)
        DEVPOS(li,ci);DEVOUT(cons_clf[1,1])
        setcor(1)
        RETURN .T.
ENDDO
RETURN NIL
********************** F I M ********************************
* VERIFICA CLASSIFICACAO FISCAL
*******************************
FUNCTION vercst(m_cst,mtp)
**********************
LOCAL mver_cst := {}
m_cst := ALLTRIM(m_cst)
sr_getconnection():exec("SELECT * FROM saccst WHERE cst = "+sr_cdbvalue(m_cst),,.t.,@mver_cst)
sr_getconnection():exec('COMMIT',,.f.)
IF LEN(mver_cst) = 0
        atencao('Este CST: '+m_cst+' nao estar Cadastrado favor verificar...')
        IF mtp = 1
                RETURN .F.
        ELSE
                RETURN ''
        ENDIF

ENDIF
IF mtp = 1
        RETURN .T.
ELSE
        RETURN mver_cst[1,3]
ENDIF
RETURN
********************** F I M ********************************
FUNCTION sac110site
*******************
MYRUN("cmd /c start https://imgur.com/upload")
RETURN NIL


